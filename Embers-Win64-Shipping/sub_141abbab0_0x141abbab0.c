// 函数: sub_141abbab0
// 地址: 0x141abbab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x60))
    int32_t rdx_1 = (r8_1 - 1).d
    int32_t rbx = *(*(arg1 + 0x58) + (r8_1 << 2) - 4)
    *(arg1 + 0x60) = rdx_1
    
    if (rdx_1 == 0)
        sub_141a96d90(arg1, rbx)
    
    return zx.q(rbx)

int32_t r9 = 0
int32_t rax_3 = *(arg1 + 0x6c) * 0xbb38435 + 0x3619636b
*(arg1 + 0x6c) = rax_3
int32_t i = *(arg1 + 0x38)

while (i s> 0)
    int32_t r8_3 = i & 0x80000001
    
    if (r8_3 s< 0)
        r8_3 = ((r8_3 - 1) | 0xfffffffe) + 1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i)
    i = (temp1_1 - temp0_1) s>> 1
    int32_t rcx = i + r9
    
    if ((rax_3 u>> 9 | 0x3f800000) - 1f f>= *(*(arg1 + 0x30) + (sx.q(rcx) << 2)))
        r9 = r8_3 + rcx

return zx.q(r9)
