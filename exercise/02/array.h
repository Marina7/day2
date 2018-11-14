// do not use standard container as member or base class
class array
{
	double* p;
	int n;
public:
	array(int size = 0, double value = 0);
	array(const array& other);
	~array();

	array& operator=(const array& other);

	array(array&& other) noexcept;

	int size();
	double at(int index) const;
};
