#!/usr/bin/env python3

# Import necessary service and message types from my_first_package.srv
from ros_session_2.srv import AddTwoInts
from ros_session_2.srv import AddTwoIntsRequest
from ros_session_2.srv import AddTwoIntsResponse

# Import time for adding a delay
import time

# Import rospy for ROS Python
import rospy

# Define the function to handle the AddTwoInts service request
def handle_add_two_ints(req):
    # Print the request and result
    print("Returning [%s + %s = %s]" % (req.a, req.b, (req.a + req.b)))
    
    # Add a 5-second delay
    time.sleep(5)
    
    # Create a response message with the sum
    sum_response = AddTwoIntsResponse(req.a + req.b)
    
    # Return the response
    return sum_response

# Define the main server function
def add_two_ints_server():
    # Initialize the ROS node
    rospy.init_node('add_two_ints_server')
    
    # Create a service with the name 'add_two_ints' that uses the AddTwoInts service type
    s = rospy.Service('add_two_ints', AddTwoInts, handle_add_two_ints)
    
    # Print a message to indicate readiness
    print("Ready to add two ints.")
    
    # Spin to keep the node running
    rospy.spin()

# Check if the script is run as the main program
if __name__ == '__main__':
    # Call the add_two_ints_server function to start the service
    add_two_ints_server()
