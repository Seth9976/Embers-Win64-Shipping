// 函数: sub_142748b30
// 地址: 0x142748b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* var_30 = arg1
int32_t var_84 = 0
int64_t var_40 = 0
int64_t var_38 = 0
int16_t var_88 = 0
int32_t rsi = 3
int64_t var_40_1 = (*(*arg1 + 0x78))()
int64_t* result = sub_1417cc6c0(arg1, arg2, &var_88, arg4)
var_88:1.b = 0
int64_t* result_1 = result

if (result != 0)
    rsi = (*(*result + 0x198))(result, &var_88, zx.q(arg3)).d

result.b = rsi == 0
__security_check_cookie(rax_1 ^ &var_a8)
return result
