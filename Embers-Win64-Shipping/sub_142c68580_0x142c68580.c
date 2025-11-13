// 函数: sub_142c68580
// 地址: 0x142c68580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 != 0)
    rax = *(arg1 + 0x430)
    
    if (rax != 0)
        if (*(arg1 + 0x428) == 2)
            if (arg2 s>= rax)
                sub_142c64850(arg1, "The requested document is not old enough\n", arg3, arg4)
                int64_t rax_2
                rax_2.b = 0
                *(arg1 + 0x4f00) = 1
                return rax_2
        else if (arg2 s<= rax)
            sub_142c64850(arg1, "The requested document is not new enough\n", arg3, arg4)
            int64_t rax_1
            rax_1.b = 0
            *(arg1 + 0x4f00) = 1
            return rax_1

rax.b = 1
return rax
