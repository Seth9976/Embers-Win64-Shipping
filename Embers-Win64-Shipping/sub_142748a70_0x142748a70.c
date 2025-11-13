// 函数: sub_142748a70
// 地址: 0x142748a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* var_40 = arg1
int32_t var_94 = 0
int64_t var_50 = 0
int64_t var_48 = 0
int16_t var_98 = 0
int32_t rsi = 3
int64_t var_50_1 = (*(*arg1 + 0x78))()
int64_t* result = sub_1417cc6c0(arg1, arg2, &var_98, arg4)
var_98:1.b = 0
int64_t* result_1 = result

if (result != 0)
    rsi = (*(*result + 0x258))(result, &var_98, arg3).d

result.b = rsi == 0
__security_check_cookie(rax_1 ^ &var_b8)
return result
