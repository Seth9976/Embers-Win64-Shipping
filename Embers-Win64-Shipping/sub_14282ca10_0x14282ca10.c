// 函数: sub_14282ca10
// 地址: 0x14282ca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_142827af4(arg1)
sub_14282b3cc(arg1)
*(arg1 + 0x82) = 0
uint128_t zmm6 = zx.o(arg1[1])
int32_t rbx = arg1[2].d
sub_14282af24(arg1, 3)
int32_t var_88 = 0
int32_t var_84 = 2
uint64_t var_80 = zmm6.q
int32_t var_78 = rbx
int64_t var_60 = 0
int64_t var_58 = 0xf
char var_70 = 0
int64_t* var_50
__builtin_memset(&var_50, 0, 0x1c)
int32_t* result = sub_142826d60(&arg1[0xb], &var_88)
int64_t* rcx_3 = var_50

if (rcx_3 != 0)
    int128_t var_48
    sub_140688f70(rcx_3, var_48.q)
    int64_t* rcx_4 = var_50
    result = sub_14058ba50(rcx_4, (var_48:8.q - rcx_4) & 0xffffffffffffffe0)
    int64_t var_50_1
    __builtin_memset(&var_50_1, 0, 0x18)

if (var_58 u>= 0x10)
    result = sub_14058ba50(var_70.q, var_58 + 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
