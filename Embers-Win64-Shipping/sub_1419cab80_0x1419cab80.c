// 函数: sub_1419cab80
// 地址: 0x1419cab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x128)

if (result == 0)
    return 0

sub_1419925c0(result, arg1)
*(result + 0x11a) = 0
*(result + 0x11c) = 0
*(result + 0x118) = 0
*(result + 0x11e) = 0
*(result + 0x122) = 0

if (sub_1419cded0(arg1[3], u"PositionMinMax", result + 0x118, result + 0x11a, result + 0x11c) == 0)
    sub_140af98a0("Unknown", 0x1a, 
        Failure to bind non-optional shader parameter %s!  The parameter is either not present in the "
    "shader, or the shader compiler optimized it out.", PositionMinMax")
    sub_140afbb40()

if (sub_1419cded0(arg1[3], u"UVMinMax", result + 0x11e, result + 0x120, result + 0x122) == 0)
    sub_140af98a0("Unknown", 0x1a, 
        Failure to bind non-optional shader parameter %s!  The parameter is either not present in the "
    "shader, or the shader compiler optimized it out.", UVMinMax")
    sub_140afbb40()

return result
