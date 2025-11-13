// 函数: sub_14105a830
// 地址: 0x14105a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)

if (result.d u<= 0xa)
    switch (result)
        case 0
            *(0x15 + arg1) = arg3
            *(arg1 + 0x7c) = 0x101
            return 0x15
        case 1
            *(0x1d + arg1) = arg3
            *(arg1 + 0x7c) = 0x101
            return 0x1d
        case 2
            *(0x21 + arg1) = arg3
            *(arg1 + 0x7c) = 0x101
            return 0x21
        case 3
            *(0x11 + arg1) = arg3
            *(arg1 + 0x7c) = 0x101
            return 0x11
        case 4
            *(0x19 + arg1) = arg3
            *(arg1 + 0x7c) = 0x101
            return 0x19
        case 5, 0xa
            result = 0x25
            *(0x25 + arg1) = arg3
            *(arg1 + 0x7c) = 0x101

return result
