// 函数: sub_1421af5e0
// 地址: 0x1421af5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x230) = 0

if (*(arg1 + 0x234) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x228, 0)

if (arg1 + 0x228 != arg1 + 0x1e8)
    int64_t rbx_1 = sx.q(*(arg1 + 0x1f0))
    int32_t r8_1 = *(arg1 + 0x234)
    int64_t rbp_1 = *(arg1 + 0x1e8)
    *(arg1 + 0x230) = rbx_1.d
    
    if (rbx_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(arg1 + 0x228, rbx_1.d, r8_1)
        memcpy(*(arg1 + 0x228), rbp_1, (rbx_1 << 2).d)
    else
        *(arg1 + 0x234) = 0

int32_t rax_1 = *(arg1 + 0x210)
void* result_1 = arg1 + 0x1f8
*(arg1 + 0x284) = 0
void* r14 = result_1 + 0x18
*(arg1 + 0x280) = 0xffffffff
int32_t rcx_4 = *(result_1 + 0x1c) + 0x1f
*r14 = rax_1
uint64_t rcx_5 = zx.q(rcx_4 u>> 5)
uint32_t rsi_2 = (rax_1 + 0x1f) u>> 5
uint64_t result

if (rsi_2 u<= rcx_5.d)
    result = *(result_1 + 0x10)
    
    if (result != 0)
        result_1 = result
    
    if (rcx_5.d u> 8)
        return memset(result_1, 0, zx.q(rcx_5.d) << 2)
    
    if (rcx_5.d != 0)
        result = 0
        __builtin_memset(result_1, 0, rcx_5 << 2)
else
    sub_1405a4a00(result_1, 0, rsi_2, 4)
    *(result_1 + 0x1c) = rsi_2 << 5
    void* result_2 = *(result_1 + 0x10)
    
    if (result_2 != 0)
        result_1 = result_2
    
    if (rsi_2 u> 8)
        memset(result_1, 0, zx.q(rsi_2) << 2)
    else if (rsi_2 != 0)
        __builtin_memset(result_1, 0, zx.q(rsi_2) << 2)
    
    void* rdx_3 = result_1 + (zx.q(rsi_2 - 1) << 2)
    result = zx.q(0xffffffff u>> ((neg.d(*r14)).b & 0x1f))
    *rdx_3 &= result.d

return result
