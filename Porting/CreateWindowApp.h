#pragma once
class CreateWindowApp
{
private:
	const char * szWindowClass;
	const char * szTitle;
	int m_width;
	int m_height;
public:
	CreateWindowApp(const char *className, const char *title, int width, int height);
	~CreateWindowApp();
	int Show();
};

