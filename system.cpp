#include <iostream>
using namespace std;
int main()
{
system s1,s2,s3
{
system::system() {
cout << "Default Constructor system() called" << endl;
}
s1.getsubmitproblem("tv problem");
s2.getsubmitproblem("water problem");
s3.getsubmitproblem("electricity problem");
s1.getsubmitconnection("tv connection");
s2.getsubmitconnection("water connection");
s3.getsubmitconnection("electricityconnection");
s1.getsubmitjob("accountant");
s2.getsubmitjob("clerk");
s3.getsubmitjob("human resourse");
s1.getsubmitpayment("water bill");
s2.getsubmitjob("phone bill");
s3.getsubmitjob("electricity bill");
s1.setsendconfirmationletter("yes");
s2.setsendconfirmationletters("no");
s3.setsendconfirmationletter("yes");
system::system()
{
cout << "Destructed" << endl;
}
}
}