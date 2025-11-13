// 函数: sub_142c63620
// 地址: 0x142c63620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 0x300003 u<= 0x1e)
    switch (arg2)
        case 0x300003
            *arg3 = float.d(*(arg1 + 0x8f8)) f/ 1000000.0
            return 0
        case 0x300004
            *arg3 = float.d(*(arg1 + 0x910)) f/ 1000000.0
            return 0
        case 0x300005
            *arg3 = float.d(*(arg1 + 0x918)) f/ 1000000.0
            return 0
        case 0x300006
            *arg3 = float.d(*(arg1 + 0x928)) f/ 1000000.0
            return 0
        case 0x300007
            *arg3 = float.d(*(arg1 + 0x8d8))
            return 0
        case 0x300008
            *arg3 = float.d(*(arg1 + 0x8d0))
            return 0
        case 0x300009
            *arg3 = float.d(*(arg1 + 0x900))
            return 0
        case 0x30000a
            *arg3 = float.d(*(arg1 + 0x908))
            return 0
        case 0x30000f
            if ((*(arg1 + 0x8f0) & 0x40) != 0)
                *arg3 = float.d(*(arg1 + 0x8c0))
                return 0
            
            *arg3 = -0x4010000000000000
            return 0
        case 0x300010
            if ((*(arg1 + 0x8f0) & 0x20) != 0)
                *arg3 = float.d(*(arg1 + 0x8c8))
                return 0
            
            *arg3 = -0x4010000000000000
            return 0
        case 0x300011
            *arg3 = float.d(*(arg1 + 0x930)) f/ 1000000.0
            return 0
        case 0x300013
            *arg3 = float.d(*(arg1 + 0x938)) f/ 1000000.0
            return 0
        case 0x300021
            *arg3 = float.d(*(arg1 + 0x920)) f/ 1000000.0
            return 0

return 0x30
