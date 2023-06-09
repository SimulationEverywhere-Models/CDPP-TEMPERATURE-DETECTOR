[Top]
components : H_average D_average 
out : out1 out2 out3 out4 
in : in1 in2 
Link : in2 in2@H_average
Link : in1 in1@H_average
Link : out1@H_average out1
Link : out2@H_average out2
Link : out1@H_average in@D_average
Link : out1@D_average out3
Link : out2@D_average out4

[H_average]
components : A@AType B@BType C@CType Time@TimeType 
out : out1 out2 
in : in1 in2 
Link : out@A in@B
Link : out@B out1
Link : out@A in1@C
Link : out@B in2@C
Link : out@C out2
Link : in2 in@Time
Link : out@Time in2@A
Link : in1 in1@A

[A]

[B]

[C]

[Time]


[D_average]
components : D@DType E@EType 
out : out1 out2 
in : in 
Link : in in@D
Link : out@D in1@E
Link : in in2@E
Link : out@E out2
Link : out@D out1

[D]

[E]



