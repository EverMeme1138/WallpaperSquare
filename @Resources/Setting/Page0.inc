[String_PageG]
Meter=String
Text=G
FontColor=120,120,120,120
SolidColor=255,255,255
X=160
AntiAlias=1
MeterStyle=StyleButton

[Style_String]
FontSize=16
FontColor=255,255,255
FontFace=Consolas
SolidColor=0,0,0,1
AntiAlias=1
X=25

[String_General_Setting]
X=25
Y=60
Meter=String
Text=General Setting#CRLF#Color Code format: Red,Green,Blue,Alpha#CRLF#Click to edit. Click "Enable" on the boxes to apply color change.#CRLF#------------------------------
MeterStyle=Style_String
InlineSetting=Size | 12
InlinePattern=Color Code format: Red,Green,Blue,Alpha#CRLF#Click to edit. Click "Enable" on the boxes to apply color change

[Button_MainColor]
Meter=String
Text=MainColor.....#MainColor#
Y=150
MeterStyle=Style_String
LeftMouseUpAction=[!CommandMeasure "MeasureInput" "ExecuteBatch 1"]

[Button_ShadowColor]
Meter=String
Text=ShadowColor...#ShadowColor#
Y=180
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 2"

[Button_OffsetX]
Meter=String
Text=Offset X......#Offset_X#
Y=210
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 3"

[Button_OffsetY]
Meter=String
Text=Offset Y......#Offset_Y#
Y=240
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 4"

[Button_Frame]
Meter=String
Text=Frame.........TOGGLE
Y=270
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 5"

[Button_Default]
Meter=String
Text=Restore Default
SolidColor=255,255,255
FontColor=30,30,30
Y=300
MeterStyle=Style_String
LeftMouseUpAction=[!WriteKeyValue Variables Offset_X 0 "#@#Variables.inc"][!WriteKeyValue Variables Offset_Y 5 "#@#Variables.inc"][!WriteKeyValue Variables MainColor "255,255,255" "#@#Variables.inc"][!WriteKeyValue Variables ShadowColor "120,120,120,120" "#@#Variables.inc"][!WriteKeyValue Variables Frame "7" "#@#Variables.inc"][!WriteKeyValue Variables NOT_Frame "0" "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]

[MeasureInput]
Measure=Plugin
Plugin=InputText
X=25
Y=330
SolidColor=120,120,120
FontColor=255,255,255
FontFace=Consolas
FontSize=16
DefaultValue=Enter Here
Command1=[!WriteKeyValue Variables MainColor "$UserInput$" "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command2=[!WriteKeyValue Variables ShadowColor "$UserInput$" "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command3=[!WriteKeyValue Variables Offset_X "$UserInput$" "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command4=[!WriteKeyValue Variables Offset_Y "$UserInput$" "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command5=[!WriteKeyValue Variables Frame #NOT_Frame# "#@#Variables.inc"][!WriteKeyValue Variables NOT_Frame #Frame# "#@#Variables.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
