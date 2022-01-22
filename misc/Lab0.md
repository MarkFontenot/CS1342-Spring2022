# Lab 0 - Environment Setup

This assignment will walk you through the appropriate steps for installing CLion (the IDE used for all programs in this course) and getting the appropriate toolchains setup to complile via WSL (for Windows) or built-in clang for MacOS.

Lab 0 is due **11:59pm on January 28th**. You may submit up to 48 hours late for a 30 point penalty. Any submissions after that date will receive a 0. So make sure you start this soon so you have time to work out any problems you run into!

## **Prerequisites**
You will need to have a student license for JetBrains Products allowing you to download CLion for free. If you do not have a license please visit [https://www.jetbrains.com/shop/eform/students](https://www.jetbrains.com/shop/eform/students) and provide your smu email for a free license.

### CLion Installation

1. Once you have a Student License you may download CLion by visiting the downloads page [https://www.jetbrains.com/clion/download/](https://www.jetbrains.com/clion/download/). Then click `Download`.

2. Double click the downloaded Clion setup file and walk through the instructions for whichever OS you have below.

#### **MacOS CLion Installation**
1. Drag the CLion Icon to your Applications folder

2. Open CLion

3. Agree to Terms and Conditions

4. Next you will have to activate your CLion account. To do so make sure `Get license from` has `JB Account` selected, then enter your username and password that you created for your student license.

<div style="text-align: center;">
  <image src="./images/clion-1.png" width="400px" />
</div>

5. Click `Continue` after your license has been verified.


#### **Windows Clion Installation**
1. Welcome to CLion Setup -> Click **Next**
2. Install Location -> Click **Next**
3. Installation Optionsz
  - Check the "Create Desktop Shortcut"
  - Check "Add Open Folder as Project"
4. Click **Next**
5. Choose **Install**
6. _Wait for the installation to complete_
7. Open CLion

8. Next you will have to activate your CLion account. To do so make sure `Get license from` has `JB Account` selected, then enter your username and password that you created for your student license.

<div style="text-align: center;">
  <image src="./images/clion-1.png" width="400px" />
</div>

9. Click `Continue` after your license has been verified.

### __CLion Toolchains Setup__
Once you have gone through the initial setup / installation of CLion, we will now setup your toolchains to be able to compile and execute C++ programs. Follow the specific steps below depending on your Operating system:

### **Windows (WSL2 Setup for CLion)**
In order to run C++ programs on your windows machine there are several things we need to do. The instructions for this tutorial were referenced from the following 2 links. Use these as a reference if you run into issues and you may be able to find answers there first. Should you run into issues, reach out to your Professor (Do so before last minute so we have time to help).

[https://docs.microsoft.com/en-us/windows/wsl/install-win10](https://docs.microsoft.com/en-us/windows/wsl/install-win10)

[https://www.jetbrains.com/help/clion/how-to-use-wsl-development-environment-in-product.html#wsl-general](https://www.jetbrains.com/help/clion/how-to-use-wsl-development-environment-in-product.html#wsl-general)


1. Open up Windows __PowerShell as administrator__
<div style="text-align: center;">
  <image src="./images/picture1.png" width="500px" />
</div>
2. There are 2 commands that you need to run. Copy and paste the commands below and press "enter" one at a time and wait for them to complete: 

```
dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
```

```
dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart
```
After both of these have been enabled, restart your PC and continue so that these settings are configured on your computer on start-up.

3. After your machine has restarted, open powershell by running as an admin again (same as step 1). Once open, enter the command below and press "enter"
```
wsl --set-default-version 2
```

4. Now we are going to get Ubuntu on your machine. Go to the Microsoft Store and search for Ubuntu. Go ahead and install the one named Ubuntu 20.04 LTS

<div style="text-align: center;">
  <image src="./images/picture2.png" width="600px" />
</div>

5. Launch the Ubuntu 20.04 LTS app as an administrator
<div style="text-align: center;">
  <image src="./images/picture3.png" width="500px" />
</div>

6. The terminal that shows up will now guide you through a set up. After a few minutes it will ask you to make a username and password. __NOTE: The username must be all lowercase.__

If the terminal gives you an error stating that the kernel needs to be updated click this link and run the thing it downloads. Then restart the ubuntu terminal.
https://wslstorestorage.blob.core.windows.net/wslblob/wsl_update_x64.msi

If you get an error involving a missing feature. Message me. We have to enable a feature in your bios and it will be better for me to guide you.

7. Awesome! You’re almost good to go. We need to get the toolchains installed. So put the following commands into that terminal. IN THIS ORDER and let each one complete before putting in the next. It will ask for the password you just created after each command. IF you are prompted to answer [Y/n] for a command simply type ‘Y’ and hit enter

```
sudo apt-get update

sudo apt-get install cmake gcc clang gdb build-essential

wget https://raw.githubusercontent.com/JetBrains/clion-wsl/master/ubuntu_setup_env.sh && bash ubuntu_setup_env.sh

sudo apt-get install valgrind
```

8. We are almost done! Let's open CLion. Go to Settings>Build, Execution, Deployment>Toolchains. Here click the + sign circled in red and then then click WSL.

<div style="text-align: center;">
  <image src="./images/picture4.png" width="400px" />
</div>

9. The environment should auto-detect. On the credentials section, click the cogwheel. And then fill out the info. It should look exactly like mine, but with the username and password you made in the Ubuntu terminal in step 6.

<div style="text-align: center;">
  <image src="./images/picture5.png" width="500px" />
</div>
<div style="text-align: center;">
  <image src="./images/picture6.png" width="700px" />
</div>

10. Now hit Apply and then Okay. Next, click the up arrow so WSL is on top of the Toolchain list.

Your window should look like this.

<div style="text-align: center;">
  <image src="./images/picture7.png" width="500px" />
</div>

NOTE: IF WSL IS NOT AT THE TOP OF THE LIST AND DOES NOT SAY (default) YOU NEED TO HIT THE UP ARROW UNTIL IT IS AT THE TOP AND SAYS (default)

11. (OPTIONAL STEP) Valgrind is an analysis tool that is used to profile any C++ application. We do not use it for this class but it can be used to verify memory usage of a program. If you are interested you can configure it by going to Settings>Build, Execution, Deployment>Dynamic Analysis Tools>Valgrind and make it look like this.

<div style="text-align: center;">
  <image src="./images/picture8.png" width="500px" />
</div>

The two lines are here for you to copy paste: 

Valgrind Executable:
```
/usr/bin/valgrind
```
Analysis Options:
```
--leak-check=full --leak-resolution=med --track-origins=yes --vgdb=no
```

Hit Apply and Okay and you’re Done!!!! Now proceed to the next section (skip MacOS setup).

### **MacOS Setup**
CLion needs to be provided with C and C++ compilers and the make utility. These tools may be pre-installed on your system: check it in `Preferences | Build, Execution, Deployment | Toolchains` - the compiler and make detection should perform successfully.

If your system does not have working installations of compilers and make, the simplest solution is to install Xcode command line developer tools.

1. Open up the `Terminal` application on your Mac (all computers have this app already installed)
2. Copy and paste the following command in the terminal, then press "enter"
```
xcode-select --install
```
3. A pop up will appear prompting you to install command line developer tools. Click the __Install__ button

4. To confirm that you have a clang compiler installed for C++. Run the following command in a terminal. You should see the version number displayed in the terminal window
```
clang --version
```

5. Done! Now return to check the Toolchains of CLion to make sure that the compiler and make are auto-detected. If you run into problems, this is the time to reach out to your professor. 

## **Hello World**
Once you have your environment setup, its time to verify that you can compile and run your first program! As always, we start with a "Hello World" program. 

1. Open up CLion
2. Create a **New Project**
3. In the **New Project** window pane, make sure that the `C++ Executable` option is selected from the list on the left. 
4. In the `Location` field, edit the name of the project from "Untitled" to "Lab0". Make sure that the path is set to wherever you would like it to be saved. 

NOTE: It is important to remember where you saved your project so that you can properly zip and turn it in later. 

5. Click **Create**

6. Every CLion Project will start with a Hello World program. Once your project has been created and has finished loading, you can run the program by clicking the green arrow in the top right of the application window. A window should pop up in the bottom of the application and you should see something like this: 

```
Hello, World!

Process finished with exit code 0
```

If you do - GREAT! You have just run your first C++ Program :). 

7. If you receive an error that looks like the below...

<div style="text-align: center;">
  <image src="./images/picture9.png" width="600px" />
</div>

You need to update your CMakeLists.txt file so that you are using the correct cmake version. Then apply the cmake changes and refresh the build. 

<div style="text-align: center;">
  <image src="./images/picture10.png" width="500px" />
</div>

8. To receive credit for this assignment follow the instructions in the Submission step below.

## **Submission**
When you are completed with your program, create a zip of your project files by finding your program folder named "Lab0" either in Finder (for Mac) or in the File Explorer (Windows). Compress the folder and name it `LastName-Program0.zip`, replacing "LastName" with your own. Then turn in your zip file to Canvas. 