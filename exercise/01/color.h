

class color
{
	double red;
	double green;
	double blue;

	static const unsigned int high_rgb_value = 255;
	static const unsigned int low_value = 0;
	static const unsigned int high_scaled_value = 1;

	// sRGB luminance(Y) values
	const double rY = 0.2126;	// 0.212655;
	const double gY = 0.7152;	// 0.715158;
	const double bY = 0.0722;	// 0.072187;

	double get_valid_number(double value) const;

public:
	color();
	color(double red, double green, double blue);
	color(const color& other);

	double get_red() const;
	double get_green() const;
	double get_blue() const;

	void set_red(double red);
	void set_green(double green);
	void set_blue(double blue);


	unsigned long get_color_ref() const; // COLORREF
	double get_luminance() const;
};