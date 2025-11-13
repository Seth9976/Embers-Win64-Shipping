// 函数: sub_141e1c6b0
// 地址: 0x141e1c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int32_t rbx = 0
void* var_68 = rax
int64_t var_60 = 0
int32_t var_54 = 0
int32_t r8 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x1b)
int32_t rdx = 0
char var_28 = 0
int32_t rdi = *(rax + 0x4a8)

if (rdi s> 0)
    int32_t var_58_1 = 0
    sub_141acba60(&var_60, rdi)
    r8 = var_54
    rdx = var_58_1

int32_t rax_1 = rdx + rdi

if (rax_1 s> r8)
    sub_141acb8e0(&var_60, rdx)

int256_t zmm1 = sub_141abd4c0(&var_48, rax + 0x4a0)
int64_t* rcx_3 = *(arg1 + 0x18)

if (rcx_3 == 0)
    int64_t* rcx_4 = &var_60
    
    if (var_28 == 0)
        sub_141e0ba30(rcx_4)
    else
        sub_141e47c50(rcx_4, zmm1)
else
    (*(*rcx_3 + 0x18))(rcx_3, &var_68)

arg2[3] = rax + 0x4a0
int32_t rdx_4 = 0
int32_t rsi_1 = *(rax + 0x4a8)
arg2[2].d = 0

if (rsi_1 s> *(arg2 + 0x14))
    sub_141acba60(&arg2[1], rsi_1)
    rdx_4 = arg2[2].d

int32_t rax_4 = rdx_4 + rsi_1
arg2[2].d = rax_4

if (rax_4 s> *(arg2 + 0x14))
    sub_141acb8e0(&arg2[1], rdx_4)

if (&arg2[1] != &var_60)
    arg2[1] = var_60
    arg2[2].d = rax_1
    *(arg2 + 0x14) = var_54
    __builtin_memset(&var_60, 0, 0x18)

int32_t rdx_6 = arg2[2].d
arg2[5].d = 0

if (*(arg2 + 0x2c) != rdx_6)
    sub_1405c5510(&arg2[4], rdx_6)
    rbx = arg2[5].d

int64_t count = sx.q(arg2[2].d)
int32_t rax_8 = rbx + count.d
arg2[5].d = rax_8

if (rax_8 s> *(arg2 + 0x2c))
    sub_1405daba0(&arg2[4])

memset(sx.q(rbx) + arg2[4], 0, count)
*arg2[4] = 1

if (&arg2[0xa] != &var_48)
    arg2[0xa] = var_48
    __builtin_memset(&arg2[0xb], 0, 0x13)

char result
return result
