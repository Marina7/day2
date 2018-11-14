

class point
{
	int x, y;

public:
	point(int x = 0, int y = 0);
	~point() = default;

	bool operator==(const point& other);
	bool operator!=(const point& other);
	bool operator<(const point& other);
};