// 函数: sub_141f7def0
// 地址: 0x141f7def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(*arg1 + 8) s> *arg1[1] && *(arg1[2] + 8) s> *arg1[3])
    int64_t* rcx_1 = arg1[4] + 0x490
    int64_t rdi_1 = sx.q(rcx_1[1].d)
    int32_t rax_2 = (rdi_1 + 1).d
    rcx_1[1].d = rax_2
    
    if (rax_2 s> *(rcx_1 + 0xc))
        sub_1405a4df0(rcx_1)
    
    int32_t* r8_2 = *(arg1[4] + 0x490) + rdi_1 * 0x18
    *r8_2 = *arg1[3]
    r8_2[1] = *(arg1[2] + 8) - *arg1[3]
    r8_2[2] = *arg1[1]
    r8_2[3] = *(*arg1 + 8) - *arg1[1]
    *(r8_2 + 0x10) = 0
    int64_t* rdx_4 = *(arg1[4] + 0x4c0)
    
    if (rdx_4 == 0)
        *(r8_2 + 0x10) = *(arg1[4] + 0x4b0)
    else
        int64_t rcx_11 = sx.q(*arg1[5])
        
        if (rcx_11.d s< 0 || rcx_11.d s>= rdx_4[1].d)
            *(r8_2 + 0x10) = *(arg1[4] + 0x4b0)
        else
            int64_t rdx_5 = *(*rdx_4 + (rcx_11 << 3))
            *(r8_2 + 0x10) = rdx_5
            
            if (rdx_5 == 0)
                *(r8_2 + 0x10) = *(arg1[4] + 0x4b0)

*arg1[1] = *(*arg1 + 8)
int32_t result = *(arg1[2] + 8)
*arg1[3] = result
return result
