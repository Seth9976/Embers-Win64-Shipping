// 函数: sub_142354ed0
// 地址: 0x142354ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_74 = 4
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int64_t rdx = *arg1
void* rcx_1 = arg1[1] + 0xf8
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
sub_142290930(rcx_1, rdx, &var_e8)
sub_1422b9c80(arg1[1] + 0x70, *arg1, &var_e8)
sub_1422b9b10(arg1[1] + 0x70, *arg1, &var_e8)
sub_1422b9a60(arg1[1] + 0x70, *arg1, &var_e8, *(arg1 + 0x14))
int64_t rax_2 = *arg1

if (arg1[2].b == 0)
    sub_142290850(arg1[1] + 0x138, rax_2, &var_e8)
else
    sub_1422908d0(rax_2, &var_e8, 0)

int32_t var_24_1 = arg1[3].d
sub_1421026a0(*arg1, &var_e8)
int64_t* rcx_12 = *arg1
int64_t result = (*(*rcx_12 + 0x28))(rcx_12)
__security_check_cookie(rax_1 ^ &var_108)
return result
