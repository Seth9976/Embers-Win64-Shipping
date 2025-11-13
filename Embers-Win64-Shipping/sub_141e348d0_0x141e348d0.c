// 函数: sub_141e348d0
// 地址: 0x141e348d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
int64_t result

if (arg3 == 0)
    int64_t rax_3 = sx.q(*arg7)
    
    if (rax_3.d == 0xffffffff || arg2[1] == *(*(arg1 + 0x178) + rax_3 * 0xc))
        result = zx.q(*arg6)
    else
        sub_141e14e60(arg7, arg2[1], arg4, arg1 + 0x178)
        int32_t rax_5 = *arg7
        
        if (rax_5 == 0xffffffff || (rax_5 == 0 && arg4 != 0))
            result = zx.q(*(arg1 + 0x180) - 1)
            *arg6 = result.d
        else
            result = zx.q(rax_5 - 1)
            *arg6 = result.d
    
    if (result.d != 0xffffffff)
        int64_t rax_7 = sx.q(result.d)
        result = *(arg1 + 0x178)
        
        if (*rsi != *(result + rax_7 * 0xc))
            result = sub_141e14e60(arg6, *rsi, arg4, arg1 + 0x178)
else
    result = sx.q(*arg6)
    int32_t rdx_2
    
    if (result.d == 0xffffffff)
        rdx_2 = *arg7
    else
        int64_t rcx = result * 3
        result = *(arg1 + 0x178)
        
        if (*arg2 == *(result + (rcx << 2)))
            rdx_2 = *arg7
        else
            result = sub_141e14f20(arg6, *arg2, arg4, arg1 + 0x178)
            rdx_2 = *arg6 + 1
            *arg7 = rdx_2
            int32_t rcx_3 = *(arg1 + 0x180)
            
            if (rdx_2 s>= rcx_3)
                if (arg4 == 0)
                    rdx_2 = -1
                    *arg7 = 0xffffffff
                else
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rdx_2)
                    result = zx.q(divs.dp.d(temp2_1:temp3_1, rcx_3))
                    rdx_2 = mods.dp.d(temp2_1:temp3_1, rcx_3)
                    *arg7 = rdx_2
    
    if (rdx_2 != 0xffffffff)
        result = *(arg1 + 0x178)
        
        if (rsi[1] != *(result + sx.q(rdx_2) * 0xc))
            result = sub_141e14f20(arg7, rsi[1], arg4, arg1 + 0x178)

if (*arg6 != 0xffffffff && *arg7 != 0xffffffff)
    result = arg5
    *result = sub_141e22c80(arg1, arg6, arg7, rsi[2].d)

return result
