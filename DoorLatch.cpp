/*
Author: JIE CHEN 
Data: April 10th, 2014
*/

/*
read me
1. I put all three classes in the same file(instead of using #include) so that 
you can read and examine my code easily.
2. For the CSensor class you provided, I found the method "void ReadData(int Data[])"
is not well declared. While it reads the data, it doesn't update any state or return 
any result. I modified it to return the average of the data received.
*/



class CSensor

{

public:

  bool Calibrate(); 

  int ReadData(int data[]);//This method has been modified to return the average of the data received

};

class CMotor

{

public:

  void ResetMotor();

  void MoveMotor(int distance); 

};


class DoorLatch
{
	int position;//0 when closed and 300 when open
public:
	DoorLatch();
	void setPosition(int position);
	int getPosition();
};

DoorLatch::DoorLatch()
{
	position=0;
}

void DoorLatch::setPosition(int position)
{
	this.position=position;
}

int DoorLatch::getPosition()
{
	return position;	
}



//sample main function
int main(int argc, char const *argv[])
{
	CSensor sensor;
	CMotor motor;
	DoorLatch latch;

	int avg;
	if(sensor.Calibrate())
	{
		avg=sendor.ReadData(data);//note that I modified the method in its declaration to return the average value of the data received
	}

	if(latch.getPosition()!=300)
	{
		motor.MoveMotor(avg);
		latch.setPosition(avg);
	}
	motor.ResetMotor();
	latch.setPosition(0);
	return 0;
}