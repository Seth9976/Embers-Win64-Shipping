// 函数: sub_1408e4220
// 地址: 0x1408e4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[9].d
int64_t var_58 = 0
int32_t var_50 = 0
sub_140a20c40(&var_58, rdx)
void arg_8
int64_t* rax = sub_140b58170(&arg_8, "Total Tracks", 1)
int64_t rsi = var_58
uint64_t var_40 = 0
int64_t rbx = *rax
uint64_t r14
int32_t r15

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    r14 = var_40
    memcpy(r14, rsi, var_50 * 2)
    int32_t var_34
    r15 = var_34
else
    r15 = 0
    r14 = 0

int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rsi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_4 = (rsi_1 << 5) + *arg2
*rax_4 = rbx
rax_4[1] = r14
rax_4[2].d = var_50
*(rax_4 + 0x14) = r15
rax_4[3] = 2
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_140cdbf60(arg1, arg2) __tailcall
