// 函数: sub_1414d7430
// 地址: 0x1414d7430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm1
zmm1.o = zx.o(0)
int128_t var_f8 = zx.o(0)
int64_t* rcx = *(arg2 + 0x78)
int128_t var_e8 = zx.o(0)
int128_t var_d8 = zx.o(0)
int128_t var_c8 = zx.o(0)
int64_t rax = *rcx
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x30)
sub_1414ccdc0(arg7, (*(rax + 0x40))(rcx, zmm1), *(arg1 + 0x10), &var_e8, zmm0, &var_d8, &var_f8, 
    &var_c8)
void* rdx_1 = *(arg1 + 0x18)
int128_t* var_150
var_150.b = 0
int128_t var_108 = zx.o(0)
int128_t* var_158
var_158.d = arg4
sub_141458e70(&var_108, rdx_1, arg5, arg2, var_158.d, var_150.b)
int64_t rax_2 = sub_141260e50(var_f8.q, var_c8.q)
int128_t zmm1_1 = var_e8
int128_t var_88 = var_f8
int128_t var_78 = zmm1_1
int128_t var_68 = var_d8
int128_t var_58 = var_c8
int128_t var_48 = var_b8
int128_t var_38
__builtin_memset(&var_38, 0, 0x20)
return sub_1410e6100(arg1, arg2, arg3, arg5, arg6, arg7, arg1 + 0x28, &var_88, arg8, arg9, rax_2, 
    0, &var_108)
