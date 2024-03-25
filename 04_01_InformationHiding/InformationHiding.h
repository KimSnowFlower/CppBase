#pragma once
#ifndef __INFORMATION_HIDING_
#define __INFORMATION_HIDING_

class Point {
private:
	int x;
	int y;
public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif