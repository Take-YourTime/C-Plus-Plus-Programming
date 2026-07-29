/*TwoD.h*/
typedef int* intPtr;

class TwoD{
public:
	TwoD();
	
	TwoD(int r, int c);
	
	
	TwoD(const TwoD& a);
	
	~TwoD();
	
	void set_point(int r, int c, int value);
	
	const TwoD operator + (const TwoD& a);
	const TwoD operator * (const TwoD& a);
	void operator = (const TwoD& a);
	
	void output(void);
private:
	int row;
	int col;
	intPtr* matrix;
};
