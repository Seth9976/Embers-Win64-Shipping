// 函数: sub_141912d70
// 地址: 0x141912d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int32_t arg_20 = 1
arg4.b = 1
int64_t var_e8 = *arg6
void* var_f0 = &arg6[2]
int32_t arg_28
int32_t arg_30
int32_t arg_38
void*** rax_1 =
    sub_141935d90(arg1, rdi, rdi, arg4.b, 0, nullptr, &arg_28, &arg_30, &arg_20, 1, &arg_38)
char var_c1 = arg_28.b
int32_t var_c0 = arg_30
int32_t var_bc = arg_20
int128_t var_b0 = *arg6
int32_t var_b4 = arg_38
int128_t zmm0 = *(arg6 + 0x20)
int128_t var_a0 = *(arg6 + 0x10)
void*** var_d0 = rax_1
int128_t zmm1 = *(arg6 + 0x30)
int16_t var_c4 = 1
char var_c2 = 0
int128_t var_80 = zmm1
void*** rax_2 = sub_140a82f30(0x70, 8)
*(rax_2 + 8) = arg1.o
*rax_2 = &data_142ff5d48
*(rax_2 + 0x18) = rdi.o
*(rax_2 + 0x28) = 1.o
*(rax_2 + 0x38) = var_b0
*(rax_2 + 0x48) = var_a0
*(rax_2 + 0x58) = zmm0
rax_2[0xd] = zmm1:8.q
void*** var_48 = rax_2
uint64_t (* var_58)(int64_t* arg1)
uint64_t (* rax_3)(int64_t* arg1) = var_58

if (rax_2 != -8)
    rax_3 = j_sub_141908770

var_58 = rax_3
sub_14195af10(&var_58, 0, arg3, arg5)
*arg2 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

return arg2
