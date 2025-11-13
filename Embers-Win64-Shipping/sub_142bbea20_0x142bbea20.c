// 函数: sub_142bbea20
// 地址: 0x142bbea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142b97060(arg3, arg4, arg6)
int32_t var_18 = rax

if (rax != 0)
    return rax

char rax_1 = sub_142b96a20(arg3, &var_18, arg5)
int32_t rcx_2 = var_18

if (rcx_2 == 0)
    *arg1 = rax_1
    *(arg1 + 0x18) = rcx_2
    
    if (rax_1 == 0)
        *(arg1 + 0x10) = arg2
        return sub_142b96670(arg3, arg2, &arg1[8])
    
    if (rax_1 != 3)
        return 3
    
    int16_t rax_2 = sub_142b96f00(arg3, &var_18)
    rcx_2 = var_18
    uint64_t rax_3 = zx.q(rax_2)
    
    if (rcx_2 == 0)
        if (rax_3.d == 0)
            return 3
        
        *(arg1 + 0x10) = (rax_3 * 3).d + 2
        return sub_142b96670(arg3, (rax_3 * 3).d + 2, &arg1[8])

return rcx_2
