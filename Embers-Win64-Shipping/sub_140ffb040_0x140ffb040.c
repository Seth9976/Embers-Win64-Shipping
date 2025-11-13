// 函数: sub_140ffb040
// 地址: 0x140ffb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rcx = *arg4
int32_t r10 = arg4[2]
int64_t rdx = sx.q(*(arg2 + 0x3c)) * 5
int32_t r9 = arg4[1]
int32_t r8 = *((rdx << 3) + 0x1439c85e8)
int32_t r11 = *((rdx << 3) + &data_1439c85ec)
int32_t rax_4 = arg4[6] - 1
int32_t var_48 = rcx
int32_t var_44 = r9
int32_t var_40 = r10
int32_t var_3c = divs.dp.d(sx.q(rax_4 + r8), r8) * r8 + rcx
int32_t var_34 = arg4[8] + r10
int64_t* rcx_3 = *(arg1 + 0x150)
int32_t var_38 = divs.dp.d(sx.q(arg4[7] - 1 + r11), r11) * r11 + r9
int64_t result = (*(*rcx_3 + 0x180))(rcx_3, *(arg2 + 0xa8), zx.q(arg3), &var_48, arg7, arg5, arg6)
__security_check_cookie(rax_1 ^ &var_88)
return result
