// 函数: sub_1408e1390
// 地址: 0x1408e1390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
void*** rax
int512_t zmm1
rax, zmm1 = sub_1408e4100()
int64_t rax_1 = (*rax)[0x1b](rax, *(*arg2 + 0x18), zx.q(arg2[2].d), &arg_10)

if (rax_1 == 0)
    return rax_1

uint64_t rbx = zx.q(arg_10)
void** const var_b8
sub_140b4c2a0(&var_b8)
var_b8 = &data_142d84578
int64_t var_20 = 0
uint64_t var_18 = rbx
char var_10 = 0
sub_140b55290(&var_b8, 1)
var_b8[0x1b](&var_b8, 1)
int64_t* rdx_2 = arg2[3]
var_b8 = &data_142d847a8
sub_1408db750(&var_b8, rdx_2, zmm1)
void*** rax_3 = sub_1408e4100()
void** r9_1 = *rax_3
r9_1[0x1c](rax_3, *(*arg2 + 0x18), zx.q(arg2[2].d), r9_1, var_b8)
var_b8 = &data_142d84578

if (var_10 != 0)
    sub_140a74f90(rax_1)
    int64_t var_28_1 = 0

sub_140b4cb40(&var_b8)
void** rax_4
rax_4.b = 1
return rax_4
