// 函数: sub_1428e95b0
// 地址: 0x1428e95b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void var_28
int32_t rax_2 = sub_1428e9750(&var_28, arg1)
int32_t* result

if (rax_2 == 0)
    result = nullptr
else
    int32_t* result_1 = sub_1428c35d0()
    
    if (result_1 == 0)
        result = nullptr
    else if (sub_1428e61a0(result_1, &var_28, rax_2) != 0)
        result = result_1
    else
        sub_1428c3460(result_1)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_48)
return result
