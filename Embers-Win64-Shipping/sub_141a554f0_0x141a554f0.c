// 函数: sub_141a554f0
// 地址: 0x141a554f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x18)
int32_t rdi = 0
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        
        if (arg2 s>= *(*(arg1 + 0x10) + (sx.q(rax_4) << 2)))
            rdi = rax_4 + rcx_1
    while (i s> 0)

*(arg1 + 0x18) = i_2 + 1

if (i_2 + 1 s> *(arg1 + 0x1c))
    sub_1405a4cf0(arg1 + 0x10)

int64_t r15 = sx.q(rdi)
int64_t rdx_3 = *(arg1 + 0x10) + (r15 << 2)
memmove(rdx_3 + 4, rdx_3, (i_2 - rdi) << 2)
char var_34 = 0
*(*(arg1 + 0x10) + (r15 << 2)) = arg2
int32_t rbp_1 = *(arg1 + 0x28)
char var_2e = 0
*(arg1 + 0x28) = rbp_1 + 1

if (rbp_1 + 1 s> *(arg1 + 0x2c))
    sub_1405c50f0(arg1 + 0x20)

int64_t rbx_1 = r15 * 0x1c
int64_t rdx_6 = *(arg1 + 0x20) + rbx_1
memmove(rdx_6 + 0x1c, rdx_6, (rbp_1 - rdi) * 0x1c)
int128_t* rdx_7 = *(arg1 + 0x20)
*(rdx_7 + rbx_1) = zx.o(0)
*(rdx_7 + rbx_1 + 0x10) = 0.q
*(rdx_7 + rbx_1 + 0x18) = 2.d
void arg_10
sub_141f80ba0(arg1 + 0x38, &arg_10, rdi)
return zx.q(rdi)
