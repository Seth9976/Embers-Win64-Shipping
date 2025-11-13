// 函数: sub_14232df00
// 地址: 0x14232df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_74 = 4
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int64_t* rcx = arg1[1]
int512_t zmm1
zmm1.o = zx.o(0)
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
(*(*rcx + 0x28))(rcx, zmm1)
int64_t* rcx_1 = arg1[2]
(*(*rcx_1 + 0x28))(rcx_1)
int64_t* rcx_2 = arg1[3]
(*(*rcx_2 + 0x28))(rcx_2)
sub_142290930(arg1[1], *arg1, &var_e8)
sub_1422b9c80(arg1[2], *arg1, &var_e8)
sub_1422b9d20(arg1[2], *arg1, &var_e8, 0xffffffff)
sub_142290850(arg1[3], *arg1, &var_e8)
sub_1421026a0(*arg1, &var_e8)
int64_t* rcx_8 = *arg1
int64_t result = (*(*rcx_8 + 0x28))(rcx_8)
__security_check_cookie(rax_1 ^ &var_108)
return result
