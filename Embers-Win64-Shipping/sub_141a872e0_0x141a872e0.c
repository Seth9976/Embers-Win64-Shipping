// 函数: sub_141a872e0
// 地址: 0x141a872e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg2[1]
int64_t rbx = 0
int64_t rbp = arg2[2]
__builtin_memset(arg1, 0, 0x18)

if (r14 != 0 && rbp != 0 && r14 s> divs.dp.q(sx.o(0x7fffffffffffffff), rbp))
    j_sub_140a82f30(-1)

sub_141ad7590(arg1, r14 * rbp, r14, rbp)
int64_t rbp_1 = arg2[1]
arg1[3] = 0
arg1[4] = 0

if (rbp_1 != 0)
    free(nullptr)
    arg1[3] = sub_14090c7b0(rbp_1)

arg1[4] = rbp_1
int64_t rbp_2 = arg2[1]
arg1[5] = 0
arg1[6] = 0

if (rbp_2 != 0)
    free(nullptr)
    arg1[5] = sub_14090c7b0(rbp_2)

arg1[6] = rbp_2
arg1[7].d = 0
*(arg1 + 0x3c) = 0
int64_t rbp_3 = arg2[1]
int64_t rsi_1 = arg2[2]
int64_t var_58 = *arg2
int64_t var_50 = rbp_3

if (arg1[1] != rbp_3 || arg1[2] != rsi_1)
    if (rbp_3 != 0 && rsi_1 != 0 && rbp_3 s> divs.dp.q(sx.o(0x7fffffffffffffff), rsi_1))
        j_sub_140a82f30(-1)
    
    sub_141ad7590(arg1, rsi_1 * rbp_3, rbp_3, rsi_1)

int64_t rax_8 = arg1[1]
int64_t rcx_4 = *arg1
int64_t var_48
int64_t* var_38 = &var_48
int64_t* var_30 = &var_58
void arg_8
void* var_28 = &arg_8
int64_t var_40 = rax_8
var_48 = rcx_4
int64_t r8_3 = arg1[2] * rax_8
int64_t* var_20 = arg1
int64_t rax_10
int32_t rdx_8
rdx_8:rax_10 = sx.o(r8_3)
int64_t rdx_11 = ((zx.q(rdx_8) & 3) + rax_10) & 0xfffffffffffffffc

if (rdx_11 s> 0)
    while (true)
        *(rcx_4 + (rbx << 2)) = *(var_58 + (rbx << 2))
        rbx += 4
        
        if (rbx s>= rdx_11)
            break
        
        rcx_4 = var_48

sub_141a8b6f0(&var_38, rdx_11, r8_3)
sub_141ad7360(arg1)
return arg1
