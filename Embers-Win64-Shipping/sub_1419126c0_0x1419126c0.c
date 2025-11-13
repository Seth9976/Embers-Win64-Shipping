// 函数: sub_1419126c0
// 地址: 0x1419126c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = *arg7
void* var_120 = &arg7[2]
int32_t arg_30
int32_t arg_38
int32_t arg_40
int32_t arg_48
void*** rax_1 =
    sub_141935d90(arg1, arg4, arg6, 0, 0, nullptr, &arg_30, &arg_38, &arg_40, 1, &arg_48)
char var_ed = arg_30.b
int128_t var_98 = *arg7
int32_t var_ec = arg_38
int32_t rcx_2 = arg_40
void*** var_100 = rax_1
int128_t var_88 = *(arg7 + 0x10)
int128_t var_78 = *(arg7 + 0x20)
int32_t var_f4 = arg6
int128_t zmm0 = *(arg7 + 0x30)
int16_t var_f0 = 0
char var_ee = 0
int32_t var_e4 = 1
int32_t var_e0 = arg_48
void*** rax_3 = sub_140a82f30(0x78, 8)
*(rax_3 + 8) = arg1.o
*rax_3 = &data_142ff5c08
*(rax_3 + 0x18) = arg4.o
*(rax_3 + 0x28) = rcx_2.o
*(rax_3 + 0x38) = var_98
*(rax_3 + 0x48) = var_88
*(rax_3 + 0x58) = var_78
*(rax_3 + 0x68) = zmm0
void*** var_48 = rax_3
uint64_t (* var_58)(int64_t* arg1)
uint64_t (* rax_4)(int64_t* arg1) = var_58

if (rax_3 != -8)
    rax_4 = j_sub_1419085c0

var_58 = rax_4
sub_14195af10(&var_58, 0, arg3, arg5)
*arg2 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

return arg2
