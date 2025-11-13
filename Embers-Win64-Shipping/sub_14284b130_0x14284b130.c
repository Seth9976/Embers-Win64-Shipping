// 函数: sub_14284b130
// 地址: 0x14284b130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 - 0x46 u<= 0x3e)
    switch (arg1)
        case 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 
                0x54, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63
            uint64_t rcx_3 = (arg2 + 3) u>> 2
            
            if (rcx_3 u> 1)
                return rcx_3
            
            return 1
        case 0x67, 0x68, 0x69, 0x6a, 0x76, 0x77, 0x78
            return ((arg2 + 1) u>> 1) + arg2
        case 0x6e, 0x82
            return arg2 * 2
        case 0x83
            return ((arg2 + 1) & 0xfffffffffffffffe) + arg2
        case 0x84
            return arg2 + (arg2 u>> 1 << 2)

return arg2
