// 函数: sub_142601360
// 地址: 0x142601360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t zmm1 = *(arg2 + 0x18)
int64_t* rax_2 = *(arg1 + 0x80)
int64_t* rcx = *(arg1 + 0x98)
int32_t var_28 = zmm1
int32_t var_1c = zmm1
int64_t var_24 = 0
int64_t rbx = *rax_2
int32_t rax_4 = (*(*rcx + 0x80))(rcx, *(arg1 + 0xc0), 2, 2, &var_28, 0, var_28)
int64_t result = (*(rbx + 0xa8))(*(arg1 + 0x80), u"SetOutputMatrix (Stereo reverb)", zx.q(rax_4))
__security_check_cookie(rax_1 ^ &var_58)
return result
