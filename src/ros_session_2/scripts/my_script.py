#!/usr/bin/env python3

import rospy

if __name__ == '__main__':
    rospy.init_node('my_script_node')
    
    # Get the parameter value
    my_parameter = rospy.get_param('my_parameter')
    
    # Print the parameter value
    rospy.loginfo(f"My parameter value is: {my_parameter}")
    
    # Keep the script running
    rospy.spin()
