#include <stdio.h>
#include <stdbool.h> // Include the header for boolean data type

// Simulated motion sensor (1 = motion detected, 0 = no motion)
bool isMotionDetected(void) {
    // You can replace this logic with actual sensor readings
    // For now, let's simulate random motion detection
    return rand() % 2 == 1;
}

int main() {
    // Initialize the system
    bool alarmTriggered = false;

    printf("Motion Detection System\n");

    while (1) {
        // Check for motion
        bool motion = isMotionDetected();

        if (motion) {
            printf("Motion detected!\n");
            alarmTriggered = true;
        } else {
            printf("No motion.\n");
        }

        // Check if alarm needs to be triggered
        if (alarmTriggered) {
            printf("Emergency alert: Intruder detected!\n");
            // You can add code here to sound a buzzer or send a message
            // For now, we'll just print the alert.
            break; // Exit the loop after triggering the alarm
        }

        // Wait for a short interval (simulating real-time monitoring)
        // You can adjust this delay based on your requirements
        for (int i = 0; i < 10000000; ++i) {
            // Delay loop
        }
    }

    return 0;
}
