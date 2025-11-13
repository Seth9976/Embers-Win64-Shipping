// 函数: sub_142b9e110
// 地址: 0x142b9e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(arg1[7])
int32_t r10 = *arg1
int32_t rax = (r8 + 1).d

if (r10 u<= rax)
    *arg1 = r8.d
    arg1[7] = 0xffffffff
    arg1[6].b = 0
    return rax

uint64_t r10_1 = zx.q(r10 - 1)
*arg1 = r10_1.d
int64_t rcx = *(arg1 + 8)
*(rcx + (r8 << 3)) = *(rcx + (r10_1 << 3))
int64_t rcx_1 = *(arg1 + 0x10)
*(rcx_1 + r8) = *(rcx_1 + r10_1)

if (arg2 != 0)
    int64_t rax_3 = *(arg1 + 8)
    void* rdx_1 = (r8 << 3) + 8 + rax_3
    
    for (int64_t* i = rax_3 - 8 + (r10_1 << 3); rdx_1 u< i; i -= 8)
        int64_t rax_4 = *rdx_1
        *rdx_1 = *i
        rdx_1 += 8
        *i = rax_4
    
    int64_t rax_5 = *(arg1 + 0x10)
    char* i_1 = rax_5 - 1 + zx.q(r10_1.d)
    
    for (char* r8_3 = rax_5 + 1 + r8; r8_3 u< i_1; i_1 -= 1)
        char rdx_2 = *r8_3
        *r8_3 = *i_1
        r8_3 = &r8_3[1]
        *i_1 = rdx_2

int64_t rax_7 = *(arg1 + 0x10)
uint64_t rcx_4 = zx.q((r10_1 - 1).d)
*(r8 + rax_7) |= 4
int64_t rax_8 = *(arg1 + 0x10)
*(rcx_4 + rax_8) |= 8
arg1[7] = 0xffffffff
arg1[6].b = 0
return rax_8
