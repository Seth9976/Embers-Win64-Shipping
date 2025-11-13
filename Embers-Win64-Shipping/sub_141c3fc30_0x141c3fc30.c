// 函数: sub_141c3fc30
// 地址: 0x141c3fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2[1].d
int64_t r13 = *arg2
int32_t rdx = *(arg3 + 0xc)
arg3[1].d = 0
int32_t r8 = 0

if (i s> rdx && rdx != i)
    sub_140775b10(arg3, i)
    r8 = arg3[1].d
    rdx = *(arg3 + 0xc)

int32_t result = r8 + i
arg3[1].d = result

if (result s> rdx)
    result = sub_140775270(arg3)

uint64_t r12 = *arg3
int32_t rbp = 0
int32_t i_1

for (; i s> 0; i -= i_1)
    i_1 = *(arg1 + 0x10)
    
    if (i s<= i_1)
        i_1 = i
    
    int64_t rbx_1 = sx.q(rbp) << 2
    sub_141c33790(*(arg1 + 0x18), rbx_1 + r13, i_1)
    int64_t r14_2 = sx.q(i_1) << 2
    memcpy(rbx_1 + r12, 
        sub_141c3bdb0(*(arg1 + 0x18), *(arg1 + 0xc) + i_1, *(arg1 + 8))
            + (sx.q(*(arg1 + 0xc)) << 2), 
        r14_2.d)
    void* r8_4 = *(arg1 + 0x18)
    int32_t temp0_1 = *(r8_4 + 0x38)
    *(r8_4 + 0x38) -= i_1
    
    if (temp0_1 - i_1 s>= 0)
        int32_t rcx_6 = *(r8_4 + 0x40)
        int32_t rax_5 = *(r8_4 + 0x30) - rcx_6 - i_1
        
        if (rax_5 s<= 0)
            *(r8_4 + 0x20) = *(r8_4 + 0x10) - (sx.q(rax_5) << 2)
            result = neg.d(rax_5)
        else
            *(r8_4 + 0x20) += r14_2
            result = rcx_6 + i_1
    else
        *(r8_4 + 0x20) = *(r8_4 + 0x10)
        result = 0
        *(r8_4 + 0x38) = 0
    
    rbp += i_1
    *(r8_4 + 0x40) = result

return result
