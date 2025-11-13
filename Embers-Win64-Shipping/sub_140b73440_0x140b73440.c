// 函数: sub_140b73440
// 地址: 0x140b73440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"CrashForUAT")

if (result == 0)
    int32_t arg_18 = 0
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"AutomatedPerfTesting=", &arg_18)
    result = sub_140a4aa30()
    
    if (result == 1 && arg_18 != 0)
        sub_140af2b60()
        result = sub_140b21a10(&data_143dbb3f0, u"KillAllPopUpBlockingWindows")
        
        if (result == 1)
            return sub_140b6edb0(u"KillAllPopUpBlockingWindows.bat", nullptr, nullptr)

return result
