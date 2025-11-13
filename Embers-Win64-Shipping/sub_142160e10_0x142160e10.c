// 函数: sub_142160e10
// 地址: 0x142160e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = (zx.o(0)).q
int32_t r9
r9.b = (*(*arg3 + 0x1c0))(arg3) != 0
uint64_t r10 = zx.q(r9)
*(arg1 + (r10 << 2) + 0xa0) += 1
*arg2 = (*(arg1 + (r10 << 2) + 0xa0) * 2) | r9
int64_t arg_8
sub_140d3a3a0(&arg_8, arg3)
int64_t* r8 = arg3[4]
int64_t var_38 = arg_8
int32_t var_30 = *sub_1421693f0(arg1, &arg_8, r8, nullptr)
int64_t var_2c = arg3[3]
int32_t var_24 = sub_142168a70(arg1, arg3)
int32_t rax_10 = *arg2
uint8_t rdx_3

if (rax_10 == 0 || (rax_10.b & 1) == 0)
    rdx_3 = 1
else
    rdx_3 = (*(sub_140d21d80(arg3) + 0x50) u>> 0x11).b & 1

int32_t* var_48 = arg2
char var_18
char rcx_6 = (((var_18 & 0xf0) | 0x10) & 0xfe) | rdx_3
char var_18_2 = (((rcx_6 * 2) ^ rcx_6) & 2) ^ rcx_6
int64_t* var_40 = &var_38
sub_14215a980(arg1, &arg_8, &var_48, nullptr)

if (j_sub_140d3e110(&var_38) != 0)
    sub_141fa1990(&arg1[0xa], &var_38, arg2)

return arg2
