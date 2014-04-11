class DoorLatch
{
	int value;//0 indicates the door is closed and 300 indicates the door is totally open
public:
	DoorLatch(int value=0);
	int getValue();
	void setValue(int value);
	void resetDoorLatch();
};