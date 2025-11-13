// 函数: sub_141ba4230
// 地址: 0x141ba4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int128_t* rax_2 = *arg1
*(arg1 + 0x2c) += 1
char r8 = *(rax_2 + 0x34) & 1
int128_t zmm1 = rax_2[1].d
int32_t zmm2 = *(rax_2 + 8)
int32_t var_48 = (*(rax_2 + 0xc)).d
int32_t var_44 = zmm1.d
int32_t var_40 = zmm2
int64_t var_3c = 0
int32_t var_34 = (*rax_2).d
int32_t var_30 = (*(rax_2 + 4)).d
int128_t var_2c = *(rax_2 + 0x1c)
int64_t var_1c = *(rax_2 + 0x2c)
char var_14
char var_14_1 = (r8 * 2) | (var_14 & 0xfc)
int64_t result = sub_140db3b20(arg1[2], *(arg1 + 0x2c), &var_48, arg2, 0, arg3, arg4, arg5.d)
__security_check_cookie(rax_1 ^ &var_88)
return result
