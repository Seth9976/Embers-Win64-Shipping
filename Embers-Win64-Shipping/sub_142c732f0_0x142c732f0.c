// 函数: sub_142c732f0
// 地址: 0x142c732f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return &data_1434cce10

switch (sub_1406938b0(arg1))
    case 2
        return "SSLv2"
    case 0x300
        return "SSLv3"
    case 0x301
        return "TLSv1.0"
    case 0x302
        return "TLSv1.1"
    case 0x303
        return "TLSv1.2"
    case 0x304
        return "TLSv1.3"

return "unknown"
