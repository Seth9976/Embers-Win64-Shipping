// 函数: sub_141ac9750
// 地址: 0x141ac9750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)
int32_t i = 0
void* rdi = nullptr

if (rax != 0 && (*(rax + 0x88) & 1) != 0)
    rdi = *(rax + 0x430)

if (rdi == 0)
    int32_t arg_10 = *sub_140b5e500(&arg_10, 0x3a)
    int32_t arg_14 = 0
    int64_t rax_9 = arg_10.q
    *(arg1 + 0x88) = rax_9
    return rax_9

if (*(arg1 + 0x88) != *(rdi + 0x18))
    int32_t rax_2 = *(arg1 + 0x74)
    *(arg1 + 0x70) = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_140638c50(arg1 + 0x68, 0)
    
    int64_t r15_1 = sx.q(*(rdi + 0x1b0))
    int64_t r14_1 = sx.q(*(arg1 + 0x70))
    int32_t rax_3 = (r14_1 + r15_1).d
    *(arg1 + 0x70) = rax_3
    
    if (rax_3 s> *(arg1 + 0x74))
        sub_1405a4d70(arg1 + 0x68)
    
    memset(*(arg1 + 0x68) + (r14_1 << 3), 0, r15_1 << 3)
    
    if (*(rdi + 0x1b0) s> 0)
        int64_t rdx_1 = 0
        int64_t r8_3 = 0
        
        do
            r8_3 += 0xc
            rdx_1 += 8
            i += 1
            *(rdx_1 + *(arg1 + 0x68) - 8) = *(r8_3 + *(rdi + 0x1a8) - 0xc)
        while (i s< *(rdi + 0x1b0))

int64_t rax_7 = *(rdi + 0x18)
*(arg1 + 0x88) = rax_7
return rax_7
