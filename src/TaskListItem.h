#ifndef TASKLISTITEM_H
#define TASKLISTITEM_H

#include <ListItem.h>
#include <SupportKit.h>
#include <View.h>

class	TaskListItem : public BListItem
{
public:
	TaskListItem(BString Taskname);

	void	ToggleTaskStatus();
	void	SetStatus();
	BString	GetTaskName();
	void	SetTime(bigtime_t time);
	bigtime_t	GetTime();
	bool	GetStatus();
	void	SetStatus(bool state);
	
	void	TimeTick();
	void	ResetTime();
	void	DrawItem(BView *owner,BRect itemRect,bool drawEverything =false);
	void	Update(BView *owner, const BFont *font);
protected:
	BString		GetStringTime();
private:
	BString				m_TaskName;
	bigtime_t			m_SpentTime;
	bool				m_ActiveTask;

	BView*				m_View;
	const BFont*		m_Font;
};

#endif
