// 函数: sub_14105aca0
// 地址: 0x14105aca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)

if (result.d u<= 0xa)
    switch (result)
        case 0
            *(0x14 + arg1) = arg3
            *(arg1 + 0x7b) = 1
            return 0x14
        case 1
            *(0x1c + arg1) = arg3
            *(arg1 + 0x7b) = 1
            return 0x1c
        case 2
            *(0x20 + arg1) = arg3
            *(arg1 + 0x7b) = 1
            return 0x20
        case 3
            *(0x10 + arg1) = arg3
            *(arg1 + 0x7b) = 1
            return 0x10
        case 4
            *(0x18 + arg1) = arg3
            *(arg1 + 0x7b) = 1
            return 0x18
        case 5, 0xa
            result = 0x24
            *(0x24 + arg1) = arg3
            *(arg1 + 0x7b) = 1

return result
