[Player]
Measure=Plugin
Plugin=NowPlaying
PlayerName=Spotify

[Progress]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Progress

[PlayerState]
Measure   =Plugin
Plugin    =NowPlaying
PlayerName=[Player]
PlayerType=State

[PlayerStateCalc]
Measure=Plugin
Plugin =SpotifyPlugin
Type   =Playing
DynamicVariables=1
IfCondition  =(PlayerState=0)
IfTrueAction =[!HideMeter Pause]
IfFalseAction=[!ShowMeter Pause]


