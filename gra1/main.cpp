/*
 * main.cpp
 *
 *  Created on: 13. 4. 2014
 *      Author: jonny
 */

#ifndef __PROGTEST__
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <list>
#include <stdint.h>

using namespace std;
#endif /* __PROGTEST__ */

struct TLine{
	int start;
	int end;
	bool status;
};

struct TPoint{
	int id;
	bool used;
	vector<int> lines;
};

void printPath(const char * outFile,vector<int>& path){
	FILE * out = fopen(outFile,"w+");
	vector<int>::iterator it = path.begin();
	while(it != path.end()){
		fprintf(out,"%d\n",*it);
		it++;
	}
	fclose(out);
}


bool trasa( const char * inFile, const char * outFile )
 {
	struct TPoint * points;
	struct TLine * lines;
	vector<int> path;
	vector<int> stack;
	int lines_size=0,points_size=0,start=0,end=0;
	FILE * in = fopen(inFile,"r");

	if(fscanf(in,"%d %d",&points_size,&lines_size) != 2){
		printf("Troubles \n");
	}
	points = (struct TPoint *) malloc(sizeof(*points) * points_size);
	lines = (struct TLine *) malloc(sizeof(*lines) * lines_size);
	for(int i=0;fscanf(in,"%d %d",&start,&end) != 2;i++){
		lines[i].start = start;
		lines[i].end = end;
		lines[i].status = false;
		points[start].lines.push_back(i);
		points[end].lines.push_back(i);
		points[start].used = false;
		points[end].used = false;
	}
	vector<int>::iterator it = points[0].lines.begin();
	while()
	for(; it != points[0].lines.end() ; it++){

	}


	free(points);
	free(lines);
 }


#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
 {
   trasa("in.txt","out.txt");
   return 0;
 }
#endif /* __PROGTEST__ */

