// 函数: sub_141264230
// 地址: 0x141264230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x72) u> 0x50)
    j_sub_140a74f90(*(arg1 + 0x20))

void* rsi = arg1 + 0x20
*(arg1 + 0x72) = 0
*rsi = 0

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0x1c)
    int64_t rbp_1 = sx.q(*(arg2 + 0x18))
    void* r14_1 = *(arg2 + 0x10)
    *(arg1 + 0x18) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_141295470(arg1, rbp_1.d, r8_1)
        void* rax_1 = *(arg1 + 0x10)
        void* rdx_1 = arg2
        void* rcx_2 = arg1
        
        if (r14_1 != 0)
            rdx_1 = r14_1
        
        if (rax_1 != 0)
            rcx_2 = rax_1
        
        memcpy(rcx_2, rdx_1, (rbp_1 << 3).d)
    else
        *(arg1 + 0x1c) = 2

*(arg1 + 0x70) = *(arg2 + 0x70)
uint64_t result = zx.q(*(arg2 + 0x72))
*(arg1 + 0x72) = result.w

if (result.w u> 0x50)
    result = j_sub_140a82f30(zx.q(result.w))
    *rsi = result

if (*(arg2 + 0x72) u> 0x50)
    int16_t rax_3 = *(arg1 + 0x72)
    
    if (rax_3 u> 0x50)
        rsi = *rsi
    
    return memcpy(rsi, *(arg2 + 0x20), zx.d(rax_3)) __tailcall

*rsi = *(arg2 + 0x20)
*(rsi + 0x10) = *(arg2 + 0x30)
*(rsi + 0x20) = *(arg2 + 0x40)
*(rsi + 0x30) = *(arg2 + 0x50)
*(rsi + 0x40) = *(arg2 + 0x60)
return result
