// 函数: sub_141f05a20
// 地址: 0x141f05a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rcx_1 = *arg1 + 0x1d8
(*(*rcx_1 + 0x28))(rcx_1)
int64_t* rcx_3 = *arg1 + 0x150
(*(*rcx_3 + 0x28))(rcx_3)
int64_t* rcx_5 = *arg1 + 0x218
(*(*rcx_5 + 0x28))(rcx_5)
void* rcx_6 = *arg1
int32_t var_74 = 4
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int512_t zmm1
zmm1.o = zx.o(0)
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
sub_142290930(rcx_6 + 0x1d8, rcx_6 + 0x278, &var_e8)
void* rcx_8 = *arg1
sub_1422b9c80(rcx_8 + 0x150, rcx_8 + 0x278, &var_e8)
void* rcx_10 = *arg1
sub_1422b9b10(rcx_10 + 0x150, rcx_10 + 0x278, &var_e8)
void* rcx_12 = *arg1
sub_1422b9a60(rcx_12 + 0x150, rcx_12 + 0x278, &var_e8, 0)
void* rcx_14 = *arg1
sub_142290850(rcx_14 + 0x218, rcx_14 + 0x278, &var_e8)
sub_1421026a0(*arg1 + 0x278, &var_e8)
int64_t* rcx_19 = *arg1 + 0x278
int64_t result = (*(*rcx_19 + 0x28))(rcx_19, zmm1)
__security_check_cookie(rax_1 ^ &var_108)
return result
