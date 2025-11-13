// 函数: sub_142875170
// 地址: 0x142875170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0)
    if (*(arg1 + 0x38) != 0)
        int64_t rax_3
        int32_t rax_4
        
        if (*(arg1 + 0x16e0) != 0 && *(arg1 + 0xc8) != 0 && *(*(arg1 + 0x508) + 0x198) == 0
                && *(arg1 + 0x84) == 9 && *(arg1 + 0x6ec) != 0 && *(arg1 + 0x4d8) == 0)
            void* rdx = *(arg1 + 0x598)
            rax_3 = *(rdx + 0x3c8)
            
            if (rax_3 != 0)
                rax_4 = rax_3(arg1, *(rdx + 0x3d0))
        
        if (*(arg1 + 0x16e0) == 0 || *(arg1 + 0xc8) == 0 || *(*(arg1 + 0x508) + 0x198) != 0
                || *(arg1 + 0x84) != 9 || *(arg1 + 0x6ec) == 0 || *(arg1 + 0x4d8) != 0
                || (rax_3 != 0 && rax_4 == 0))
            *(arg1 + 0x6e8) = 1
        else
            *(arg1 + 0x6e8) = 2
            int32_t result = sub_1428618c0(arg1, 0x61)
            
            if (result == 0)
                return result
    else if (arg2 == 0x400 && *(arg1 + 0x6ec) == 0)
        sub_142856580(arg1, 0x2f, 0x22c, 0xe9, "ssl\statem\extensions.c", 0x65f)
        return 0

return 1
