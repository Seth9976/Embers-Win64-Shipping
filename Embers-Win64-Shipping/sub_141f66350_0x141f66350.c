// 函数: sub_141f66350
// 地址: 0x141f66350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rdi = *(arg1 + 0x510)
int32_t r10 = arg2.d
int32_t i = *(arg1 + 0x518)
int32_t r11 = 0
int32_t rbx = arg_10:4.d

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    int32_t i_1 = (temp3_1 - temp2_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r11
    int64_t rcx_5 = sx.q(rax_4) * 2
    int32_t rax_5 = *(rdi + (rcx_5 << 3))
    int32_t rax_6 = rax_5 - r10
    
    if (rax_5 == r10)
        rax_6 = *(rdi + (rcx_5 << 3) + 4) - rbx
    
    if (rax_6 s< 0)
        r11 = rax_4 + rcx_1

int64_t rax_9
int32_t r10_1

if (r11 s< *(arg1 + 0x518))
    rax_9 = sx.q(r11) << 4
    r10_1 = r10 - *(rax_9 + rdi)
    
    if (r10 == *(rax_9 + rdi))
        r10_1 = rbx - *(rax_9 + rdi + 4)

int64_t* rax_11

if (r11 s>= *(arg1 + 0x518) || r10_1 s< 0 || r11 == 0xffffffff)
    rax_11 = nullptr
else
    rax_11 = rax_9 + 8 + rdi

void* rcx_6 = *(arg1 + 0x430)
int64_t* rdx_1 = &arg_10

if (rax_11 != 0)
    rdx_1 = rax_11

int64_t rdx_2 = *rdx_1
int64_t var_28 = rdx_2

if (rcx_6 == 0)
    return 0

void arg_8
return sub_142310e40(rcx_6, rdx_2, arg3, arg4, &arg_8)
