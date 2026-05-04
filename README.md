# Form_Filler_Tool
    *C++ Form Automation Bot (Auto-Fill Tool)
Project Description:
A robust automation tool developed in Modern C++, specifically designed for batch processing and submitting data to Google Forms. Instead of time-consuming manual data entry, this tool optimizes efficiency by extracting data from local files and automatically sending HTTP POST requests in real-time.

    *Key Features:

Batch Data Processing: Seamlessly reads and extracts data from .csv files, capable of handling thousands of records with high stability.

Data Sanitization: Built-in algorithms automatically trim trailing/leading spaces and filter "dirty" data, ensuring the outgoing payload is always perfectly formatted before transmission.

High-Speed Networking: Leverages the low-level power of the libcurl library for network communication, delivering superior execution speed and response times.

Flexible Architecture: Professional build process and library linking managed by CMake, making the project highly scalable and easy to deploy across different environments.

    *Tech Stack:

Language: C++ (Modern standards)

Networking Core: libcurl (x64)

Build System: CMake & MinGW

    *How to use:
Before you begin, make sure that you have the following installed on your Windows machine:
    **C++ Compiler:** [MinGW-w64](https://www.mingw-w64.org/) (make sure `g++` is added to your System PATH).
    **Build System:** [CMake](https://cmake.org/download/) (version 3.x or higher).

1.  Clone the repo
2.  Generate build files (cmake -B build -G "MinGW Makefiles")
3.  Compile the executable (cmake --build build)
4.  Prepare your target dataset in a CSV file (e.g., input.csv) formatted without headers, where each line represents a form entry.
5.  Run the compiled tool from your terminal using .\build\Form_filler_tool.exe

!!!WARNING: The executable can crash if it doesn't find the libcurl-x64.dll. In that case, navigate to the external/curl/bin/ and cut the libcurl-x64.dll and paste it directly to your build/ folder.