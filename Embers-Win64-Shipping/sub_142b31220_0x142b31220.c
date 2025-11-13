// 函数: sub_142b31220
// 地址: 0x142b31220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t i_2 = arg2

if (*arg4 s> 0)
    return 0

if (rdi.d s>= 1)
    int32_t i_3 = sub_142b303c0(arg1, arg2, 1)
    i_2 = i_3
    
    if (rdi.d s>= 2)
        i_2 = sub_142b303c0(arg1, i_3, 2)

int32_t r8

if (i_2 s< 0 || i_2 s>= *(arg1 + 0x250))
    r8 = 0
else
    r8 = (*(*(arg1 + 0x260) + (sx.q(i_2) << 3))).d

int32_t i_1 = r8 s>> 8 & 0xfffff

if (i_1 != 0)
    int32_t i
    
    do
        int32_t rdx_1
        
        if (i_1 s>= *(arg1 + 0x250))
            rdx_1 = 0
        else
            rdx_1 = (*(*(arg1 + 0x260) + (zx.q(i_1) << 3))).d
        
        if ((rdx_1 & 3) s<= rdi.d)
            break
        
        i_2 = i_1
        i = rdx_1 s>> 8 & 0xfffff
        i_1 = i
    while (i != 0)

return sub_142b31100(arg1, i_2, i_1, rdi | 8, arg4)
