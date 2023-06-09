/*******************************************************************
*
*  Auto Generated File
*
*  DESCRIPTION: Simulator::registerNewAtomics()
*
*  This registration file is used to describe the atomic models that can be used to compose coupled models.
*
*
*******************************************************************/

#include "modeladm.h" 
#include "mainsimu.h"
#include "queue.h"      // class Queue
#include "generat.h"    // class Generator
#include "cpu.h"        // class CPU
#include "transduc.h"   // class Transducer
#include "trafico.h"    // class Trafico
//#include "ggad.h"       // DEVS-Graphs interpreter
#include "AType.h"        // class AType
#include "BType.h"	// class BType
#include "CType.h"	// class CType
#include "DType.h"	// class DType
#include "EType.h"	// class EType
#include "TimeType.h"	// class TimeType


void MainSimulator::registerNewAtomics()
{
	// Register Built-in models
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Queue>() , "Queue" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Generator>() , "Generator" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<CPU>() , "CPU" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Transducer>() , "Transducer" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Trafico>() , "Trafico" ) ;
	//SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<Ggad>() , "Ggad" ) ; // DEVS-GRAPHS interpreter

	// Register custom models
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<AType>(), "AType" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<BType>() , "BType" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<CType>() , "CType" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<DType>() , "DType" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<EType>() , "EType" ) ;
	SingleModelAdm::Instance().registerAtomic( NewAtomicFunction<TimeType>() , "TimeType" ) ;

}
