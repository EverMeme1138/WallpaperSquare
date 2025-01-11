# WallpaperSquare
A Rainmeter Skin for you to put your wallpaper onto your wallpaper (Wallpaper²)

![image](https://github.com/EverMeme1138/WallpaperSquare/blob/main/image.png)
![image](https://github.com/EverMeme1138/WallpaperSquare/blob/main/image3.png)

## Features
- Wallpaper on your wallpaper
- Easy to use setting
- up to 8 customizable display boxes

## Instructions
### Drag & drop the wanted picture onto anywhere of the skin.
- The picture is defaulted to be 1920x1080 (The image will be scaled and cropped to be 1920x1080 if it is not)
- If other size is desired, edit `WallpaperSquare\Box\Box.ini`:

```
[BackGround_Picture]
Meter=Image
ImageName=#BGN_Path#
W=1920                  <<This value
H=1080                  <<and this
PreserveAspectRatio=2
Container=Meter_Container
```

### If you cannot drag and drop the image, check is your skin folder under `OneDrive\Documents`. If so, get [This skin](https://discord.com/channels/148103787259756544/384751038374084638/1084818452360986634) to fix the skin path. Or paste the following commond  to command prompt.
`@echo off & "C:\Program Files\Rainmeter\Rainmeter.exe" !WriteKeyValue Rainmeter SkinPath "C:\Users\%USERNAME%\Documents\Rainmeter\Skins\" "%APPDATA%\Rainmeter\Rainmeter.ini" & taskkill /f /im "Rainmeter.exe" & xcopy /s /e /y /f /i "C:\Users\%USERNAME%\OneDrive\Documents\Rainmeter\Skins" "C:\Users\%USERNAME%\Documents\Rainmeter\Skins" & timeout 1 & start "" "C:\Program Files\Rainmeter\Rainmeter.exe" & exit`

### Color code format: Red, Green, Blue, (Transparency)
- If transparency is unspecified, it is defaulted as 255 (i.e. solidcolor)
- e.g. 255,0,0 for solid red / 255,0,0,120 for a semi-transparent red
### Disabled boxes count as the size of the skin, i.e.:
![image](https://github.com/EverMeme1138/WallpaperSquare/blob/main/image2.png)

## Credits
[theAzack9](https://github.com/TheAzack9) for the [Drag&Drop plugin](https://forum.rainmeter.net/viewtopic.php?t=23107).\
[CUHKACS](https://www.instagram.com/p/C_vNQNzBcHa/?img_index=3) for inspiration.\
[壱珂](https://www.pixiv.net/artworks/122142987) for the default picture.
Special thanks to people on [Rainmeter discord server](https://discord.gg/rainmeter) who helped me with this project.

# WARNING
### This skin is only published on Github and Rainmeter Discord server by EverMeme, DO NOT download if you see this from other sites, as they might modify the files in malicious ways.
This Github Repo link: https://github.com/EverMeme1138/WallpaperSquare

Version 1.0
