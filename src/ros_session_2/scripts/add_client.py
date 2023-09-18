#!/usr/bin/env python3

# Import sys module to access command line arguments
import sys

# Import rospy for ROS Python
import rospy

# Import necessary service and message types from my_first_package.srv
from ros_session_2.srv import AddTwoInts
from ros_session_2.srv import AddTwoIntsRequest
from ros_session_2.srv import AddTwoIntsResponse

# Define a client function to call the AddTwoInts service
def add_two_ints_client(x, y):
    # Wait for the 'add_two_ints' service to become available
    rospy.wait_for_service('add_two_ints')
    
    try:
        # Create a service proxy to call the 'add_two_ints' service
        add_two_ints = rospy.ServiceProxy('add_two_ints', AddTwoInts)
        
        # Call the service with the provided integers x and y
        resp1 = add_two_ints(x, y)
        
        # Return the sum from the service response
        return resp1.sum
    except rospy.ServiceException as e:
        # Handle service call exceptions and print an error message
        print("Service call failed: %s" % e)

# Check if the script is run as the main program
if __name__ == '__main__':
    if len(sys.argv) == 3:
        # Extract two integer arguments from the command line
        x = int(sys.argv[1])
        y = int(sys.argv[2])
    else:
        # If the number of command line arguments is not 3, exit with an error
        sys.exit(1)
    
    # Print the request being made
    print("Requesting %s + %s" % (x, y))
    
    # Call the add_two_ints_client function and print the result
    print("%s + %s = %s" % (x, y, add_two_ints_client(x, y)))
