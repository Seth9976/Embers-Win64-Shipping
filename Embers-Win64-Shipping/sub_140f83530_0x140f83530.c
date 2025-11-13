// 函数: sub_140f83530
// 地址: 0x140f83530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x8d4) == 0
*(arg1 + 0x8d5) = 1
uint128_t var_a8
char rax_1

if (not(cond:0) && data_143e24360 == 0)
    var_a8 = *(arg1 + 0x18)
    rax_1 = sub_140db3510(&var_a8)

int64_t rbx

if (cond:0 || data_143e24360 != 0 || rax_1 != 0)
    rbx.b = 0
else
    rbx.b = 1

if (rbx.b != *(arg1 + 0x8d6))
    sub_140db2ea0(&arg1[0x72])
    *(arg1 + 0x8d6) = rbx.b

if (rbx.b == 0)
    return sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)

int64_t* rax_2 = *arg2
uint64_t arg_8 = rax_2[0x15]
int64_t var_b8 = rax_2[0x16]
uint64_t var_b0 = rax_2[0x14]
char rax_3 = sub_140dbd970(&arg1[0xef], &var_b0, &var_b8, &arg_8)
int32_t var_d0
var_d0.q = arg2[4]
void var_60
sub_140dd88d0(&var_60, arg2[3], *arg2, &arg1[0xef], arg2[2], var_d0, arg2[5].d.d)
var_d0.q = arg7
int64_t var_d8
var_d8.d = arg6
void* var_58
*(var_58 + 0xb8) = (*arg2)[0x17].d

if (rax_3 != 0 || sub_140f8f920(arg1, arg5, arg3, arg4, var_d8.d, var_d0) != 0)
    sub_140db2ea0(&arg1[0x72])

int128_t zmm0_2 = 0x3f800000
int128_t* var_80_1 = arg7
char var_68_1 = arg8
void* var_78_1 = arg5
char var_67_1 = 1
arg_8.d = 0x3f800000

if (*(arg1 + 0x17c) != 0)
    zmm0_2 = arg1[0x2f].d

int32_t var_70_1 = zmm0_2.d
void* var_88_1 = &var_60
int32_t var_6c_1 = arg6
int128_t var_98 = *arg4
sub_140db57d0(&arg1[0x72], &var_a8, &var_98)
sub_140d9a120(*arg2, &arg1[0xef])
return zx.q(var_a8.d)
