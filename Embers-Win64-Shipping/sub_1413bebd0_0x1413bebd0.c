// 函数: sub_1413bebd0
// 地址: 0x1413bebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422d6d20(arg1, arg2)
void* rsi = &arg1[0x540]
*(rsi + 0xc0) = 0
void* rbp = &arg2[0x540]
int64_t r14 = sx.q(*(rbp + 0xc8))
void* r15 = *(rbp + 0xc0)
*(rsi + 0xc8) = r14.d

if (r14.d != 0)
    sub_1413f68d0(rsi, r14.d, 0)
    void* r9_1 = *(rsi + 0xc0)
    
    if (r15 != 0)
        rbp = r15
    
    if (r9_1 != 0)
        rsi = r9_1
    
    memcpy(rsi, rbp, (r14 * 0x18).d)
else
    *(rsi + 0xcc) = 8

*(arg1 + 0x690) = 0
void* rsi_1 = &arg1[0x610]
int64_t r14_1 = sx.q(*(arg2 + 0x698))
void* rbp_1 = &arg2[0x610]
void* r15_1 = *(rbp_1 + 0x80)
*(rsi_1 + 0x88) = r14_1.d

if (r14_1.d != 0)
    sub_140bb7d20(rsi_1, r14_1.d, 0)
    void* rax_1 = *(rsi_1 + 0x80)
    
    if (r15_1 != 0)
        rbp_1 = r15_1
    
    if (rax_1 != 0)
        rsi_1 = rax_1
    
    memcpy(rsi_1, rbp_1, (r14_1 << 4).d)
else
    *(rsi_1 + 0x8c) = 8

*(arg1 + 0x6a0) = 0
int64_t rbp_2 = sx.q(*(arg2 + 0x6a8))
int64_t r14_2 = *(arg2 + 0x6a0)
*(arg1 + 0x6a8) = rbp_2.d

if (rbp_2.d != 0)
    sub_1405c4a00(&arg1[0x6a0], rbp_2.d, 0)
    memcpy(*(arg1 + 0x6a0), r14_2, (rbp_2 << 3).d)
else
    *(arg1 + 0x6ac) = 0

*(arg1 + 0x6b0) = *(arg2 + 0x6b0)
*(arg1 + 0x6b8) = *(arg2 + 0x6b8)
*(arg1 + 0x6c0) = *(arg2 + 0x6c0)
arg1[0x6c8] = arg2[0x6c8]
*(arg1 + 0x6d0) = 0
int32_t rbp_3 = *(arg2 + 0x6d8)
int64_t r14_3 = *(arg2 + 0x6d0)
*(arg1 + 0x6d8) = rbp_3

if (rbp_3 != 0)
    sub_1405a4c70(&arg1[0x6d0], rbp_3, 0)
    memcpy(*(arg1 + 0x6d0), r14_3, rbp_3 * 2)
else
    __builtin_memset(&arg1[0x6dc], 0, 0x14)

void* rdx_8 = &arg1[0x6f0]
*(rdx_8 + 0x1c) = 0x80
void* rax_6 = *(rdx_8 + 0x10)

if (rax_6 != 0)
    rdx_8 = rax_6

__builtin_memset(rdx_8, 0, 0x1c)
*(arg1 + 0x710) = 0xffffffff
*(arg1 + 0x714) = 0
*(arg1 + 0x720) = 0
*(arg1 + 0x728) = 0
sub_1413c62c0(&arg1[0x6e0], &arg2[0x6e0])
*(arg1 + 0x730) = 0
uint32_t count = *(arg2 + 0x738)
int64_t rbx_1 = *(arg2 + 0x730)
*(arg1 + 0x738) = count

if (count != 0)
    sub_1405da9e0(&arg1[0x730], count, 0)
    memcpy(*(arg1 + 0x730), rbx_1, count)
else
    *(arg1 + 0x73c) = 0

return arg1
