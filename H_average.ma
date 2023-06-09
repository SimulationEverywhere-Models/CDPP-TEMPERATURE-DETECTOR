[top]
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


