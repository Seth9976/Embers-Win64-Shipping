// 函数: sub_14293ebb0
// 地址: 0x14293ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x170)
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint32_t rax_2 = zx.d(*(arg2 + 0x38))
uint128_t zmm1 = arg2[1]
uint32_t rdi = rax_2
int128_t var_88 = *arg2
rax_2.b &= 0x7f
uint128_t var_78 = zmm1
char var_50 = rax_2.b
int128_t var_68 = arg2[2]
uint64_t var_58 = arg2[3].q
int32_t rax_3 = sub_14296ca60(&arg1[0x10], &var_88, 1, 0)
sub_14296e1c0(arg1, &arg1[0x10])
sub_14296dba0(&arg1[0x20], &data_14353de90, arg1)
sub_14296dfb0(&arg1[0x30], arg1, 0x98a9)
sub_14296dba0(&arg1[0x30], &data_14353de50, &arg1[0x30])
sub_14296dba0(&arg1[0x30], &data_14353de90, &arg1[0x30])
sub_14296dcf0(arg1, &arg1[0x20], &arg1[0x30])
int32_t r12_1 = rax_3 & sub_14296cfc0(&arg1[0x30], arg1) & neg.d((zx.d(var_50) - 1) u>> 0x1f)
sub_14296dcf0(arg1, &arg1[0x30], &arg1[0x20])
sub_14293f6b0(arg1, ((((rdi & 0x80) - 1) u>> 0x1f) - 1) ^ sub_14296d4b0(arg1))
*(arg1 + 0x80) = data_14353de90
__builtin_memset(&arg1[0x24], 0, 0x30)
void var_c8
sub_14296e1c0(&var_c8, arg1)
void var_188
sub_14296e1c0(&var_188, &arg1[0x10])
void var_108
sub_14296c9a0(&var_108, &var_c8, &var_188)
sub_14296c9a0(&arg1[0x30], &arg1[0x10], arg1)
void var_148
sub_14296e1c0(&var_148, &arg1[0x30])
sub_14296dba0(&var_148, &var_148, &var_108)
sub_14296dba0(&arg1[0x30], &var_188, &var_c8)
sub_14296e1c0(arg1, &arg1[0x20])
sub_14296c9a0(&arg1[0x20], arg1, arg1)
sub_14296dba0(&var_188, &arg1[0x20], &var_108)
sub_14296dcf0(arg1, &var_188, &var_148)
sub_14296dcf0(&arg1[0x20], &arg1[0x30], &var_188)
sub_14296dcf0(&arg1[0x10], &arg1[0x30], &var_108)
sub_14296dcf0(&arg1[0x30], &var_148, &var_108)
sub_1428b8960(&var_188, 0x40)
sub_1428b8960(&var_148, 0x40)
sub_1428b8960(&var_c8, 0x40)
sub_1428b8960(&var_108, 0x40)
sub_1428b8960(&var_88, 0x39)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(r12_1)
