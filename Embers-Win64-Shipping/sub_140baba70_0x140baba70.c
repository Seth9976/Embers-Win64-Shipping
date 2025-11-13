// 函数: sub_140baba70
// 地址: 0x140baba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 2)
    return 

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rbx_1 = 0

if (rax.d s<= 0)
    return 

int64_t* rdx = *(arg1 + 0x70)
int64_t rcx = 0

while (*(*rdx + 0x14) != *arg2)
    rbx_1 += 1
    rcx += 1
    rdx = &rdx[1]
    
    if (rcx s>= rax)
        return 

if (rbx_1 == 0xffffffff)
    return 

int64_t rbp_1 = sx.q(*(arg1 + 0x88))
int64_t r14_1 = *(arg1 + 0x70)
int32_t rax_1 = (rbp_1 + 1).d
*(arg1 + 0x88) = rax_1

if (rax_1 s> *(arg1 + 0x8c))
    sub_1405a4d70(arg1 + 0x80)

int64_t r10_1 = sx.q(rbx_1) << 3
*(*(arg1 + 0x80) + (rbp_1 << 3)) = *(r10_1 + r14_1)
int32_t rax_4 = *(arg1 + 0x78)
int32_t rcx_4 = rax_4 - rbx_1

if (rcx_4 != 1)
    int64_t r9_1 = *(arg1 + 0x70)
    memmove(r10_1 + r9_1, r9_1 + (sx.q(rbx_1 + 1) << 3), (rcx_4 - 1) << 3)
    rax_4 = *(arg1 + 0x78)

*(arg1 + 0x78) = rax_4 - 1
sub_1405c53d0(arg1 + 0x70)
