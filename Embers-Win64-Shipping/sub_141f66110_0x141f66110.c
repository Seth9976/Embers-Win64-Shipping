// 函数: sub_141f66110
// 地址: 0x141f66110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3

if (*(arg1 + 0x430) == 0)
    *arg2 = 0
    return arg2

int32_t i = *(arg1 + 0x518)
int32_t r9 = 0
int32_t r10 = arg_18:4.d
int64_t rbx = *(arg1 + 0x510)

while (i s> 0)
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    int32_t i_1 = (temp3_1 - temp2_1) s>> 1
    i = i_1
    int32_t rax_5 = i_1 + r9
    int64_t rcx_5 = sx.q(rax_5) * 2
    int32_t rax_6 = *(rbx + (rcx_5 << 3))
    int32_t rax_7 = rax_6 - arg3.d
    
    if (rax_6 == arg3.d)
        rax_7 = *(rbx + (rcx_5 << 3) + 4) - r10
    
    if (rax_7 s< 0)
        r9 = rax_5 + rcx_1

int64_t rax_10
int32_t r8

if (r9 s< *(arg1 + 0x518))
    rax_10 = sx.q(r9) << 4
    r8 = arg3.d - *(rax_10 + rbx)
    
    if (arg3.d == *(rax_10 + rbx))
        r8 = r10 - *(rax_10 + rbx + 4)

int64_t* rax_12

if (r9 s>= *(arg1 + 0x518) || r8 s< 0 || r9 == 0xffffffff)
    rax_12 = nullptr
else
    rax_12 = rax_10 + 8 + rbx

int64_t* rbx_1 = &arg_18

if (rax_12 != 0)
    rbx_1 = rax_12

int64_t rbx_2 = *rbx_1
void* rax_13 = sub_142310d00(*(arg1 + 0x430), rbx_2)

if (rax_13 != 0)
    *arg2 = *(rax_13 + 0x30)
    return arg2

if (sub_141f5e0e0(arg1, rbx_2) == 0xffffffff)
    *arg2 = 0
    return arg2

*arg2 = rbx_2
return arg2
