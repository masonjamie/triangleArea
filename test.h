using namespace std;

bool test(double b, double h, double expected){
  if(triangleArea(b,h)==expected){
    cout <<"Pass"<<endl;
    return true;
  }
  else{
    cout << "Test Case Failed (b,h,expected,result) = (" << b <<", " <<h <<", " <<expected <<", " <<triangleArea(b,h) << ")" <<endl;
  }
return false;
}

int runTestCases(){
  //Test integars
  test(2,2,2);
  //Test doubles
  test(2.2,2.37,2.607);
  //Test large doubles
  test(3,2.356847,3.5352705);
  //Test negative base
  test(-2, 4, 0);
  //test negative height
  test(4,-376,0);
  cout << "Test Complete";
  return 0;

}