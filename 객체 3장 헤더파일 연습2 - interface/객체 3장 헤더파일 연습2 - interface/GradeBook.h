#include <string>

class GradeBook
{
public:
	explicit GradeBook (std::string); //std::���� ���� - using���� ���� ���ؼ�
	void setCourseName(std::string);
	std::string getCouresName() const;
	void displayMessage() const;

private:
	std::string courseName;
};
