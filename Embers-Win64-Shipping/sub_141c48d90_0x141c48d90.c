// 函数: sub_141c48d90
// 地址: 0x141c48d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x10, 0)

int64_t r14 = sx.q(*(arg1 + 0x18))
int32_t rax = (r14 + r15).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_140775270(arg1 + 0x10)

int64_t result = memset(*(arg1 + 0x10) + (r14 << 2), 0, r15 << 2)

if (*(arg1 + 0x30) == 2)
    int32_t rax_2 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_14085a880(arg1 + 0x20, 0)
    
    int64_t r14_1 = sx.q(*(arg1 + 0x28))
    int32_t r15_1 = r15.d * 2
    int32_t rax_3 = r14_1.d + r15_1
    *(arg1 + 0x28) = rax_3
    
    if (rax_3 s> *(arg1 + 0x2c))
        sub_14085a250(arg1 + 0x20)
    
    result = memset(r14_1 + *(arg1 + 0x20), 0, sx.q(r15_1))

*(arg1 + 0x34) = 0
return result
