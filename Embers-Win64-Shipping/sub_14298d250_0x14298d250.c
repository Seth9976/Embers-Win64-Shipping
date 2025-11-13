// 函数: sub_14298d250
// 地址: 0x14298d250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t result = __security_cookie ^ &var_438
int64_t result_1 = result
int32_t i = arg2
void var_418

if (arg2 s>= 0x400)
    do
        result = (*(*arg1 + 0x10))(arg1, &var_418, 0x400)
        
        if (result.b == 0)
            goto label_14298d2c7
        
        i -= 0x400
    while (i s>= 0x400)

if (i s>= 1)
    result = (*(*arg1 + 0x10))(arg1, &var_418, zx.q(i))

label_14298d2c7:
__security_check_cookie(result_1 ^ &var_438)
return result
