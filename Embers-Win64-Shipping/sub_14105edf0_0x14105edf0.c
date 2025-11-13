// 函数: sub_14105edf0
// 地址: 0x14105edf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void var_b8
int128_t* rax_2
int512_t zmm0
rax_2, zmm0 = sub_1410601b0(&var_b8, arg4, arg5)
zmm0.o = *rax_2
int32_t var_d8 = 0
int128_t var_80 = zmm0.o
uint128_t var_70 = rax_2[1]
zmm0.o = rax_2[2]
int128_t var_60 = zmm0.o
uint64_t var_50 = rax_2[3].q
uint64_t rax_4
int512_t zmm0_1
rax_4, zmm0_1 = sub_1410004f0(**(arg1 + 0x20), nullptr, &var_80, 4, zmm0, var_d8, arg4, arg5, arg6)

if (*(rax_4 + 0xc8) != 0)
    *(rax_4 + 0x11) = 0

int32_t var_d0_1 = 1
*arg7 = sub_1410024d0(arg1, arg3, rax_4, 0, zmm0_1, arg4)
*arg2 = rax_4
*(rax_4 + 8) += 1
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
