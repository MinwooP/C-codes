#include <string>

class GradeBook
{
public:
	explicit GradeBook (std::string); //std::쓰는 이유 - using문을 쓰지 못해서
	void setCourseName(std::string);
	std::string getCouresName() const;
	void displayMessage() const;

private:
	std::string courseName;
};
