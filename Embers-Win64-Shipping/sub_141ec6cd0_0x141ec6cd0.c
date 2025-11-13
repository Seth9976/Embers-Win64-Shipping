// 函数: sub_141ec6cd0
// 地址: 0x141ec6cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int32_t rsi = data_143f3a5c8
int32_t rdi = arg3[1].d
uint128_t zmm6 = zx.o(*arg2)
uint128_t zmm7 = zx.o(*arg3)
sub_140b34200("RaycastTest", rsi)
int128_t var_68 = data_1430219f0
int64_t var_54
__builtin_memset(&var_54, 0, 0x14)
int32_t var_58 = 0xffffffff
uint64_t var_e8 = zmm7.q
int32_t var_e0 = rdi
uint64_t var_d8 = zmm6.q
int32_t var_d0 = rbx
void var_c8
void arg_10
char rax_2 =
    sub_141eb2f10(arg1, &var_c8, &arg_10, &var_d8, &var_e8, arg4, arg5, arg6, &data_143f3a680)
sub_140b38680("RaycastTest", rsi)
return zx.q(rax_2)
