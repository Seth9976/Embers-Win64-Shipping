// 函数: sub_1429cdff0
// 地址: 0x1429cdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
int64_t var_28 = -2
*arg1 = arg2
arg1[1] = arg3
arg1[2] = (arg1[2] & 0xffffffc1) | 1
arg1[3] &= 0xffffffc0
arg1[4] = (arg1[4] & 0xfffff0f0) | 0xf0
int64_t rdi = 0
__builtin_memset(&arg1[5], 0, 0x5c)

if ((*(arg1 + 0x38) - *(arg1 + 0x28)) s>> 3 u< 0xa)
    sub_1429caae0(&arg1[0xa], 0xa)

int64_t rax_9 = j_sub_140a82f30(0x1e0)
int64_t arg_20 = rax_9

if (rax_9 != 0)
    rdi = sub_1429c9bd0(rax_9)

arg_20 = rdi
int64_t rax_11 = *(arg1 + 0x30)
int64_t rcx_2

if (&arg_20 u< rax_11)
    rcx_2 = *(arg1 + 0x28)

if (&arg_20 u>= rax_11 || rcx_2 u> &arg_20)
    if (rax_11 == *(arg1 + 0x38))
        sub_1429cade0(&arg1[0xa], 1)
    
    int64_t* rax_14 = *(arg1 + 0x30)
    
    if (rax_14 != 0)
        *rax_14 = rdi
else
    if (rax_11 == *(arg1 + 0x38))
        sub_1429cade0(&arg1[0xa], 1)
    
    int64_t* rcx_4 = *(arg1 + 0x30)
    
    if (rcx_4 != 0)
        *rcx_4 = *(*(arg1 + 0x28) + ((&arg_20 - rcx_2) s>> 3 << 3))

*(arg1 + 0x30) += 8
int64_t rax_15
int64_t rdx
rdx:rax_15 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x68) - *(arg1 + 0x58))
int64_t rdx_1 = rdx s>> 2

if (rdx_1 + (rdx_1 u>> 0x3f) u< 0xa)
    sub_1429ce650(&arg1[0x16], 0xa)

sub_1429ce9f0(arg1)
return arg1
