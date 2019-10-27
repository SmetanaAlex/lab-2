using namespace std;
 
#include <iostream>

int main()
{
	long double ax, bx, cx,ay, by, cy,ab,bc,ca,p,r,R,s, x_center_around_triangle, y_center_around_triangle;
    cout << "Enter point a"<<endl;
	cin >> ax;//point a
	cin >> ay;//point a
	cout << "Enter point b"<<endl;
	cin >> bx;//point b
	cin >> by;//point b
	cout << "Enter point c"<<endl;
	cin >> cx;//point c
	cin >> cy;//point c
	ab = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay) );
	bc = sqrt((cx - bx) * (cx - bx) + (cy - by) * (cy - by));
	ca = sqrt((ax - cx) * (ax - cx) + (ay - cy) * (ay - cy));
	p = (ca + bc + ab)/2;
	s = sqrt((p - ab) * (p - bc) * (p - ca));
	r = s / p;
	cout <<"Small r ="<< r<<endl;
	R = (ca + bc + ab) / (4 * s);
	cout <<"Big R ="<< R<<endl;
	x_center_around_triangle = ((ax * ax) + (ay * ay)) * (by - cy) - ((bx * bx) - (by * by)) * (ay - cy) + ((cx * cx) * (cy * cy)) * (ay - by);
	y_center_around_triangle = ((ax * ax) + (ay * ay)) * (bx - cx) - ((bx * bx) - (by * by)) * (ax - cx) + ((cx * cx) * (cy * cy)) * (ax - bx);
	cout << "Point in center x="<< x_center_around_triangle << "  ; y= " << y_center_around_triangle<<endl;

	system("pause");
}

