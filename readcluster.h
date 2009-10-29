#ifndef READCLUSTER_H
#define READCLUSTER_H
/*
 *  readcluster.h
 *  Mothur
 *
 *  Created by westcott on 10/28/09.
 *  Copyright 2009 Schloss Lab. All rights reserved.
 *
 */


#include "mothur.h"
#include "nameassignment.hpp"
#include "listvector.hpp"


/******************************************************/

class ReadCluster {
	
public:
	ReadCluster(string, float);
	~ReadCluster();
	void read(NameAssignment*);
	string getOutputFile() { return OutPutFile; }
	void setFormat(string f) { format = f;	}
	ListVector* getListVector()		{	return list;	}
	
private:
	string distFile;
	string OutPutFile, format;
	ListVector* list;
	float cutoff;
	
	void createHClusterFile();
	void convertPhylip2Column(NameAssignment*);
};

/******************************************************/

#endif
