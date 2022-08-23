# -AUTOMATIC-FRUIT-QUALITY-CLASSIFICATION-USING-TINYML-
Fruit quality detection system using ESP32-CAM module to detect quality using MobileVNet Model trained over edge impulse platform, and integration of a conveyor mechanism to discard bad quality products.


**PROJECT DESCRIPTION**

Technological growth is enormous and using them for the betterment of the human survival is the need of the hour. Our project aims at minimizing time duration required for quality check before selling the product as this is done while transporting the goods from point A to point B and helps in ready-to-shelf pack with efficient mechanism. The major concepts involved are Open CV and conveyor belt control mechanisms. The process happens in the vehicle which transports the goods from one end to another. To summarize, during the travel time the agricultural produce is placed on the conveyor belt and the ESPCAM Module uses Open CV techniques to analyse the quality of the product in all possible angles. The best products are sent directly to the storage box and packing is completed in this step. On reaching the store the best quality product is handed over with cartons. The bad quality produce once detected are discarded immediately into the disposal bin and this can be removed at the final stage. The principle issues highlighted in our project are handing over the best quality goods to the customer, quality check with minimum time duration, wise utilization of travel time, cost-cut technique with minimum machines like conveyor belt, an affordable cost for any salesman, avoiding the manual handling of the goods on reaching the store.

DESIGN APPROACH


![image](https://user-images.githubusercontent.com/111851675/186127483-90531523-a78a-488c-9959-6f56bfcb7c05.png)

Figure: Block Diagram of system

Model Training:


• Data acquisition of images of good and bad quality images of fruits like apple, banana, orange and guava and labelling of data. 
• Impulse design creation using image processing blocks and transfer learning blocks.
• DSP feature generation for RGB parameters of the images.
• Training of dataset using MobilenetV1 model with optimal neural network settings (no. of cycles=18, learning rate=0.001, validation set size=20%) to obtain the output layer classes and confusion matrix.
• Retraining of model to improve accuracy. 
• Live testing of model using available data.
• Deployment of impulse to Arduino suitable format.

Data Collection and Classification:


• Live data collection using Esp32-cam module.
• Addition of optimized source code for fruit classification along with camera module sensing code.
• Passing data to a local URL to view live stream and capture image for classification.
• Check the classification with maximum score and store the fruit name and quality.
• Pass the corresponding string to the Arduino controlling the conveyor belt to sort the fruits accordingly.

Sorting of Products:


• Receive information from Esp32-cam regarding the quality and type of fruit. 
• Enable a pushing mechanism to reject the bad quality products.
• Introduce flaps that will redirect the good quality product according to its type. 

**RESULTS**

The results obtained in each stage is explained in detailed below. An accuracy of 89% was attained in the first round of training with a very minimal loss of 0.38 with the highest accuracy of 97% for classification of good and bad bananas. 

![image](https://user-images.githubusercontent.com/111851675/186127935-47df896d-9482-4b71-9fd6-eaddfd13fbf8.png)

After training and testing on edge impulse studio the model is converted to an ESP-CAM suitable library and installed it along with its regular operations. The live classification and inference obtained in JSON format on a web portal 

![image](https://user-images.githubusercontent.com/111851675/186128008-54146222-d5d5-425e-ac59-b1d30b38c586.png)

![image](https://user-images.githubusercontent.com/111851675/186128357-e2ffe62a-ea46-44a4-8a43-a4ca0e7fdcd2.png)


