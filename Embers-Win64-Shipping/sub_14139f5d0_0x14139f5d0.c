// 函数: sub_14139f5d0
// 地址: 0x14139f5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_10 = *(arg1 + 0x3b8)
int32_t r8 = data_1439c7a74
int32_t r10

if (rax_10 s>= 1)
    r10 = r8
    
    if (rax_10 s< r8)
        r10 = rax_10
else
    r10 = 1

int32_t rcx = data_1439c7a70
int32_t rdx

if (rax_10 s>= 1)
    rdx = rcx
    
    if (rax_10 s< rcx)
        rdx = rax_10
else
    rdx = 1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdx)
int32_t rax_3 = (temp1 - temp0) s>> 1

if (rax_3 s< 1)
    rcx = 1
else if (rax_3 s< rcx)
    rcx = rax_3

*arg2 = rcx
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r10)
int32_t rax_7 = (temp3 - temp2) s>> 1

if (rax_7 s< 1)
    arg2[1] = 1
    return arg2

if (rax_7 s< r8)
    r8 = rax_7

arg2[1] = r8
return arg2
