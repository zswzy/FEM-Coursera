class Triangle{
	public:
		Triangle(double b, double h);
		double area();
	
		double base, height;

};

Triangle::Triangle(double b, double h){
	base = b;
	height = h;
}

double Triangle::area(){
	return 0.5*base*height;
}
