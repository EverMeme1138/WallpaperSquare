[String_Page8]
Meter=String
Text=8
FontColor=120,120,120,120
SolidColor=255,255,255
X=480
MeterStyle=StyleButton

[Style_String]
FontSize=16
FontColor=255,255,255
FontFace=Consolas
SolidColor=0,0,0,1
AntiAlias=1
X=25

[String_PositionSetting]
X=25
Y=60
Meter=String
Text=Position Setting     Preview#CRLF#BOX 8#CRLF#Click/Scroll to edit#CRLF#----------------
MeterStyle=Style_String
InlineSetting=Size | 12
InlinePattern= Click/Scroll to edit
InlineSetting2=Color | 128, 0, 128
InlinePattern2=BOX 8

[Style_String]
FontSize=16
FontColor=255,255,255
FontFace=Consolas
SolidColor=0,0,0,1
AntiAlias=1
X=25

[Button_X8]
Meter=String
Text=X: #X_8#
Y=160
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 1"
MouseScrollUpAction=[!WriteKeyValue Variables X_8 (#X_8#+5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
MouseScrollDownAction=[!WriteKeyValue Variables X_8 (#X_8#-5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]

[Button_Y8]
Meter=String
Text=Y: #Y_8#
Y=190
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 2"
MouseScrollUpAction=[!WriteKeyValue Variables Y_8 (#Y_8#+5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
MouseScrollDownAction=[!WriteKeyValue Variables Y_8 (#Y_8#-5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]

[Button_W8]
Meter=String
Text=W: #W_8#
Y=220
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 3"
MouseScrollUpAction=[!WriteKeyValue Variables W_8 (#W_8#+5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
MouseScrollDownAction=[!WriteKeyValue Variables W_8 (#W_8#-5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]

[Button_H8]
Meter=String
Text=H: #H_8#
Y=250
MeterStyle=Style_String
LeftMouseUpAction=!CommandMeasure "MeasureInput" "ExecuteBatch 4"
MouseScrollUpAction=[!WriteKeyValue Variables H_8 (#H_8#+5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
MouseScrollDownAction=[!WriteKeyValue Variables H_8 (#H_8#-5) "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]

[Perview_picture]
X=300
Y=100
Meter=Image
ImageName=#BGN_Path#
W=300
H=169
PreserveAspectRatio=2

[Button_Disable_Box]
Meter=String
Text=[Disable Box]
FontColor=0,0,0
SolidColor=255,255,255
Y=280
MeterStyle=Style_String
LeftMouseUpAction=[!WriteKeyValue Variables ContainerColor8 0,0,0,0 "#@#Variables.inc"][!WriteKeyValue Variables MainColor8 0,0,0,0 "#@#Variables.inc"][!WriteKeyValue Variables ShadowColor8 0,0,0,0 "#@#Variables.inc"][!Refresh #ROOTCONFIG#\Box]

[Button_Enable_Box]
Meter=String
Text=[Enable_Box]
FontColor=0,0,0
SolidColor=255,255,255
X=200
Y=280
MeterStyle=Style_String
LeftMouseUpAction=[!WriteKeyValue Variables ContainerColor8 #ContainerColor# "#@#Variables.inc"][!WriteKeyValue Variables MainColor8 #MainColor# "#@#Variables.inc"][!WriteKeyValue Variables ShadowColor8 #ShadowColor# "#@#Variables.inc"][!Refresh #ROOTCONFIG#\Box]

[Box]
X=300
Y=100
Meter=Shape
MeterStyle=StyleBox
Shape=Rectangle ((#X_1#+#Offset_X#)*0.15625),((#Y_1#+#Offset_Y#)*0.15625),(#W_1#*0.15625),(#H_1#*0.15625) | StrokeColor 255, 0, 0 | Extend ModifierStrokeWidth
Shape2=Rectangle ((#X_2#+#Offset_X#)*0.15625),((#Y_2#+#Offset_Y#)*0.15625),(#W_2#*0.15625),(#H_2#*0.15625) | StrokeColor 0, 255, 0 | Extend ModifierStrokeWidth
Shape3=Rectangle ((#X_3#+#Offset_X#)*0.15625),((#Y_3#+#Offset_Y#)*0.15625),(#W_3#*0.15625),(#H_3#*0.15625) | StrokeColor 0, 0, 255 | Extend ModifierStrokeWidth
Shape4=Rectangle ((#X_4#+#Offset_X#)*0.15625),((#Y_4#+#Offset_Y#)*0.15625),(#W_4#*0.15625),(#H_4#*0.15625) | StrokeColor 0, 255, 255 | Extend ModifierStrokeWidth
Shape5=Rectangle ((#X_5#+#Offset_X#)*0.15625),((#Y_5#+#Offset_Y#)*0.15625),(#W_5#*0.15625),(#H_5#*0.15625) | StrokeColor 255, 0, 255 | Extend ModifierStrokeWidth
Shape6=Rectangle ((#X_6#+#Offset_X#)*0.15625),((#Y_6#+#Offset_Y#)*0.15625),(#W_6#*0.15625),(#H_6#*0.15625) | StrokeColor 255, 255, 0 | Extend ModifierStrokeWidth
Shape7=Rectangle ((#X_7#+#Offset_X#)*0.15625),((#Y_7#+#Offset_Y#)*0.15625),(#W_7#*0.15625),(#H_7#*0.15625) | StrokeColor 255, 165, 0 | Extend ModifierStrokeWidth
Shape8=Rectangle ((#X_8#+#Offset_X#)*0.15625),((#Y_8#+#Offset_Y#)*0.15625),(#W_8#*0.15625),(#H_8#*0.15625) | StrokeColor 128, 0, 128 | Extend ModifierStrokeWidth
ModifierStrokeWidth=StrokeWidth 2 | FillColor 0,0,0,1

[MeasureInput]
Measure=Plugin
Plugin=InputText
X=25
Y=310
SolidColor=120,120,120
FontColor=255,255,255
FontFace=Consolas
FontSize=16
DefaultValue=Enter Here
Command1=[!WriteKeyValue Variables X_8 "$UserInput$" "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command2=[!WriteKeyValue Variables Y_8 "$UserInput$" "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command3=[!WriteKeyValue Variables W_8 "$UserInput$" "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
Command4=[!WriteKeyValue Variables H_8 "$UserInput$" "#@#\Meters\Meters_CORD.inc"][!Refresh][!Refresh #ROOTCONFIG#\Box]
