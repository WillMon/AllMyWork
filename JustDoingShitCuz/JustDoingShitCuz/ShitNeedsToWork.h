#ifndef  _SHITNEEDSTOWORK_H_
#define _SHITNEEDSTOWORK_H_

using namespace std;

class WorkDamnit
{
public:
	WorkDamnit();

private:
	WTFMan* secand;
};

class WTFMan
{
public:
	WTFMan();

private:
	WorkDamnit* first;
};
#endif // ! _SHITNEEDSTOWORK_H_

