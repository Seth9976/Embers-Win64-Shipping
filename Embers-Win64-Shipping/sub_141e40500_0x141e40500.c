// 函数: sub_141e40500
// 地址: 0x141e40500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cdbf60(arg1, arg2)
int32_t rdx = arg1[0x1f].d
int64_t var_58 = 0
int32_t var_50 = 0
sub_140a20c40(&var_58, rdx)
void arg_8
int64_t* rax = sub_140b58170(&arg_8, "Poses", 1)
int64_t rsi = var_58
uint64_t var_40 = 0
int64_t rbx_1 = *rax
uint64_t rbp
int32_t r15

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    rbp = var_40
    memcpy(rbp, rsi, var_50 * 2)
    int32_t var_34
    r15 = var_34
else
    r15 = 0
    rbp = 0

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rsi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* result = (rsi_1 << 5) + *arg2
*result = rbx_1
result[1] = rbp
result[2].d = var_50
*(result + 0x14) = r15
result[3] = 2
int64_t rcx_5 = var_58

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
