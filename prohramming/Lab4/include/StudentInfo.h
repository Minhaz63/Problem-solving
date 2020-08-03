#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
const int MAX_ITEMS = 6;

class StudentInfo{
   	private:

			char name[];
			int id;
			double cgpa;
	public:
		void input(int,char[],double);
		void deleteiteam(int);
		void retrieve(int);
		void display();
};

#endif // STUDENTINFO_H_INCLUDED
