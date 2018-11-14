

class color
{
	double red;
	double green;
	double blue;

	double get_valid_number(double value) const;

public:
	color(double red = 0, double green = 0, double blue = 0);
	color(const color& other) = default;
	~color() = default;

	double get_red() const;
	double get_green() const;
	double get_blue() const;

	void set_red(double red);
	void set_green(double green);
	void set_blue(double blue);

	unsigned long get_color_ref() const; // COLORREF
	double get_luminance() const;
};


bool operator==(const color& c1, const color& c2);