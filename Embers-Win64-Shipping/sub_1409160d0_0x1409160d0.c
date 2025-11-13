// 函数: sub_1409160d0
// 地址: 0x1409160d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1409146f0(arg1 + 0x350, arg2)
int64_t result_1 = sx.q(result)

if (result_1.d != 0xffffffff)
    int32_t rdx = *(arg1 + 0x358)
    int32_t rcx_3 = rdx - result_1.d - 1
    
    if (rcx_3 s>= 1)
        rcx_3 = 1
    
    if (rcx_3 != 0)
        memcpy((result_1 << 4) + *(arg1 + 0x350), (sx.q(rdx - rcx_3) << 4) + *(arg1 + 0x350), 
            rcx_3 << 4)
        rdx = *(arg1 + 0x358)
    
    *(arg1 + 0x358) = rdx - 1
    int64_t rsi_2 = result_1 << 4
    sub_140745ac0(*(arg1 + 0x360) + rsi_2)
    int32_t rcx_9 = *(arg1 + 0x368)
    int32_t rdx_7 = rcx_9 - result_1.d - 1
    
    if (rdx_7 s>= 1)
        rdx_7 = 1
    
    if (rdx_7 != 0)
        int64_t rax_1 = *(arg1 + 0x360)
        memcpy(rax_1 + rsi_2, (sx.q(rcx_9 - rdx_7) << 4) + rax_1, rdx_7 << 4)
        rcx_9 = *(arg1 + 0x368)
    
    result = rcx_9 - 1
    *(arg1 + 0x368) = result

return result
