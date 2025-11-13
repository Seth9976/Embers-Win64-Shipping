// 函数: sub_1408e17f0
// 地址: 0x1408e17f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
void*** rax = sub_1408e4100()
int64_t rax_1 = (*rax)[0x1b](rax, *(*arg2 + 0x18), zx.q(arg2[2].d), &arg_10)

if (rax_1 == 0)
    return rax_1

uint64_t rbx = zx.q(arg_10)
void** var_c8
sub_140b4c2a0(&var_c8)
var_c8 = &data_142d84578
int64_t var_30 = 0
uint64_t var_28 = rbx
char var_20 = 0
sub_140b55290(&var_c8, 1)
var_c8[0x1b](&var_c8, 1)
int64_t* rcx_4 = *(arg1 + 0x38)
int64_t r8_2 = arg2[3]
var_c8 = &data_142d847a8
(*(*rcx_4 + 8))(rcx_4, &var_c8, r8_2)
void*** rax_4 = sub_1408e4100()
void** r9_1 = *rax_4
r9_1[0x1c](rax_4, *(*arg2 + 0x18), zx.q(arg2[2].d), r9_1, var_c8)
var_c8 = &data_142d84578

if (var_20 != 0)
    sub_140a74f90(rax_1)
    int64_t var_38_1 = 0

sub_140b4cb40(&var_c8)
void** rax_5
rax_5.b = 1
return rax_5
