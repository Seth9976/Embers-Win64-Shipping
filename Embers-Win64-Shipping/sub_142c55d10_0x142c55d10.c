// 函数: sub_142c55d10
// 地址: 0x142c55d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 1 u> 8)
    return "Unknown error"

switch (arg1)
    case 0
        return "No error"
    case 1
        return "Invalid multi handle"
    case 2
        return "Invalid easy handle"
    case 3
        return "Out of memory"
    case 4
        return "Internal error"
    case 5
        return "Invalid socket argument"
    case 6
        return "Unknown option"
    case 7
        return "The easy handle is already added to a multi handle"
    case 0xffffffff
        return "Please call curl_multi_perform() soon"
