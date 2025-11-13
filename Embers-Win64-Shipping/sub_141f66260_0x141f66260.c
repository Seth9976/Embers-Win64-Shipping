// 函数: sub_141f66260
// 地址: 0x141f66260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rdi = *(arg1 + 0x510)
int32_t r8 = arg2.d
int32_t i = *(arg1 + 0x518)
int32_t r9 = 0
int32_t r10 = arg_10:4.d

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    int32_t i_1 = (temp3_1 - temp2_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r9
    int64_t rcx_5 = sx.q(rax_4) * 2
    int32_t rax_5 = *(rdi + (rcx_5 << 3))
    int32_t rax_6 = rax_5 - r8
    
    if (rax_5 == r8)
        rax_6 = *(rdi + (rcx_5 << 3) + 4) - r10
    
    if (rax_6 s< 0)
        r9 = rax_4 + rcx_1

int64_t rax_9
int32_t r8_1

if (r9 s< *(arg1 + 0x518))
    rax_9 = sx.q(r9) << 4
    r8_1 = r8 - *(rax_9 + rdi)
    
    if (r8 == *(rax_9 + rdi))
        r8_1 = r10 - *(rax_9 + rdi + 4)

int64_t* rax_11

if (r9 s>= *(arg1 + 0x518) || r8_1 s< 0 || r9 == 0xffffffff)
    rax_11 = nullptr
else
    rax_11 = rax_9 + 8 + rdi

void* rcx_6 = *(arg1 + 0x430)
int64_t* rdx_1 = &arg_10

if (rax_11 != 0)
    rdx_1 = rax_11

int64_t rdx_2 = *rdx_1
int64_t arg_8 = rdx_2

if (rcx_6 == 0)
    return 0

return sub_142310d00(rcx_6, rdx_2)
