// 函数: sub_142af42a0
// 地址: 0x142af42a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if ((r8.d & 0xfffffc00) == 0xd800)
    return 1

int32_t rax_5

if (r8.d u<= 0xffff)
    rax_5 = zx.d(*(**(arg1 + 0x20) + (r8 s>> 6 << 1))) + (r8.d & 0x3f)
else if (r8.d u> 0x10ffff)
    rax_5 = *(*(arg1 + 0x20) + 0x14) - 1
else
    int64_t* rcx_1 = *(arg1 + 0x20)
    
    if (r8.d s< rcx_1[3].d)
        rax_5 = sub_142b6a760(rcx_1, r8.d)
    else
        rax_5 = *(rcx_1 + 0x14) - 2

return zx.q(*(*(*(arg1 + 0x20) + 8) + (sx.q(rax_5) << 1)))
