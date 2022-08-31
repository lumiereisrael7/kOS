# OS

In this project, I was involving in creating modular Operating System for Raspberry PI from scratch. In this version, it works for Raspberry from 3. We set up features like GPIO, UART, Timer and System Timer. We can also handle exceptions from the system timer.

To use it, you just have to develop the feature you want to add and put all your codes inside a folder you'll create inside module's folder.

To build a custon app with available module, you can write the code of your app inside the folder app and use available functions provided by module code. Then call for your app in the kernel module.
