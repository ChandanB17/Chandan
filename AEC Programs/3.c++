#include <iostream>
using namespace std;
int main() {
 int N;
 cin >> N;
 int integers[N];
 for (int i = 0; i < N; i++) {
 cin >> integers[i];
 }
 for (int i = N - 1; i >= 0; i--) {
 cout << integers[i] << " ";
 }
 return 0;
}
