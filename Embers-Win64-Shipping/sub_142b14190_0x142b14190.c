// 函数: sub_142b14190
// 地址: 0x142b14190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg1 + 0x358)

if (arg2 s>= *(r10 + (sx.q(arg3) << 2)))
    if (arg3 s< arg4 && arg2 s< *(r10 + (sx.q(arg4 - 1) << 2)))
        for (int32_t i = (arg3 + arg4) s>> 1; i != arg3; i = (arg3 + arg4) s>> 1)
            if (arg2 s>= *(r10 + (sx.q(i) << 2)))
                arg3 = i
            else
                arg4 = i
    
    arg3 = arg4

return zx.q(arg3.b) & 1
