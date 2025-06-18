# ToolboxLibrary
RiscOS DDE C++ Toolbox Library<br/>
<p>Three libraries are included in this Repository, CommonC++Lib, RiscOSC++Lib and ToolboxC++Lib. CommonC++Lib contains a few general utilities, some of which are used by the other two libraries.
 RiscOSC++Lib contains some classes which relate to the RiscOS operating system, currently this library is very limited and could be extended to include more features of RiscOS.
 ToolboxC++Lib relies on the other two libraries and contains all the classes required to create Toolbox driven applications.
Applications need the o.wimplib from the tboxlibs, otherwise just link applications with the three libraries in this Repository together with o.c++lib and o.stubs.
The libraries o.events and o.toolboxlib are not needed to create a Toolbox application.
<p>There are probably lots of things which can be changed so if you have any ideas of improvements/changes, please pass on your thoughts.
I know the DDE C++ compiler is based on CFront and therefore has lots of limitations but I wanted to use the tools I had at hand.</p>
