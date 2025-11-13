// 函数: sub_142890810
// 地址: 0x142890810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 s>= 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t rdx_1 = temp0_1 & 0x3f
    int32_t rax_3 = temp1_1 + rdx_1
    int32_t rsi_2 = rax_3 s>> 6
    
    if (arg1[1].d s> rsi_2)
    label_142890898:
        int64_t* rdx_4 = *arg1 + (sx.q(rsi_2) << 3)
        *rdx_4 |= 1 << (sx.q((rax_3 & 0x3f) - rdx_1) u% 0x40)
        return 1
    
    int64_t* rax_6
    
    if (rsi_2 + 1 s> *(arg1 + 0xc))
        rax_6 = sub_142890d10(arg1, rsi_2 + 1)
    else
        rax_6 = arg1
    
    if (rax_6 != 0)
        for (int64_t i = sx.q(arg1[1].d); i s< sx.q(rsi_2 + 1); i += 1)
            *(*arg1 + (i << 3)) = 0
        
        arg1[1].d = rsi_2 + 1
        goto label_142890898

return 0
