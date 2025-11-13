// 函数: sub_141aec4c0
// 地址: 0x141aec4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
void* rax = sub_141a788e0()
int32_t i = rsi[4].d
int32_t rbp = 0
int64_t* rcx = rsi[3]
int64_t rax_1 = *(rax + 0x18)
int64_t arg_8 = rax_1

if (i s> 0)
    int64_t* r14_1 = rsi
    
    if (rcx != 0)
        r14_1 = rcx
    
    do
        int32_t rcx_2 = i & 0x80000001
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_5 = i_1 + rbp
        int64_t arg_10 = r14_1[sx.q(rax_5) * 3]
        
        if (sub_140b5d160(&arg_10, &arg_8) s< 0)
            rbp = rax_5 + rcx_2
    while (i s> 0)
    
    i = rsi[4].d
    rcx = rsi[3]
    rax_1 = arg_8

int64_t rcx_7
int64_t* r8_1

if (rbp s< i)
    r8_1 = rsi
    
    if (rcx != 0)
        r8_1 = rcx
    
    rcx_7 = sx.q(rbp)

if (rbp s>= i || r8_1[rcx_7 * 3] != rax_1)
    int64_t var_48 = rax_1
    int64_t var_40_1 = 0
    int64_t var_38_1 = 0
    sub_141b25e90(rsi, &var_48, rbp)
    
    if (var_40_1 != 0)
        sub_140a74f90(var_40_1)

int64_t* rax_9 = rsi[3]

if (rax_9 != 0)
    rsi = rax_9

int64_t rcx_10 = sx.q(rbp) * 3
int64_t rdi = sx.q(rsi[rcx_10 + 2].d)
void* rbx_2 = &rsi[rcx_10]
int32_t rax_11 = (rdi + 1).d
*(rbx_2 + 0x10) = rax_11

if (rax_11 s> *(rbx_2 + 0x14))
    sub_1405a4d70(rbx_2 + 8)

int64_t result = *(rbx_2 + 8)
*(result + (rdi << 3)) = arg2
return result
