// 函数: sub_142354c30
// 地址: 0x142354c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_74 = 4
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int512_t zmm1
zmm1.o = zx.o(0)
int64_t rdx = *arg1
void* rcx_1 = arg1[1] + 0x88
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x40)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
sub_142290930(rcx_1, rdx, &var_e8)
sub_1422b9c80(arg1[1], *arg1, &var_e8)
sub_1422b9b10(arg1[1], *arg1, &var_e8)
sub_1422b9a60(arg1[1], *arg1, &var_e8, 1)
sub_1422908d0(*arg1, &var_e8, 1)
sub_1421026a0(*arg1, &var_e8)
int64_t* rcx_7 = *arg1
int64_t result

if (rcx_7[1].d != 0xffffffff)
    result = sub_1419ba620(rcx_7, zmm1)
else
    result = (*(*rcx_7 + 0x28))(rcx_7, zmm1)

__security_check_cookie(rax_1 ^ &var_108)
return result
