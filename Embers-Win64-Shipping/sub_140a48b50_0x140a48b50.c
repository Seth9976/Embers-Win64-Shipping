// 函数: sub_140a48b50
// 地址: 0x140a48b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

switch (arg1 & 0xff000000)
    case 0
        return u"Constructor"
    case 0x1000000
        return u"Scalability"
    case 0x2000000
        return u"GameSetting"
    case 0x3000000
        return u"ProjectSetting"
    case 0x4000000
        return u"SystemSettingsIni"
    case 0x5000000
        return u"DeviceProfile"
    case 0x6000000
        return u"ConsoleVariablesIni"
    case 0x7000000
        return u"Commandline"
    case 0x8000000
        return u"Code"
    case 0x9000000
        return u"Console"

return u"<UNKNOWN>"
