using namespace std;

double triangleArea(double base, double height) {
  if(base<0||height<0){
    return 0;
    }
  return 0.5 * base * height;
}