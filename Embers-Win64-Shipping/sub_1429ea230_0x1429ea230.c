// 函数: sub_1429ea230
// 地址: 0x1429ea230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* result

if (arg3 == 0)
    int64_t* r8_3 = arg5
    
    if (arg4 == 0)
        result = sub_1403addff(arg1, arg2, r8_3, arg6)
    else
        result = sub_14038c54b(arg1 - sx.q(arg2 * 2), arg2, r8_3, arg6, 4, arg4)
else if (arg4 == 0)
    result = sub_14038bf10(arg1, arg2, arg5, arg6, 4, arg3)
else
    void var_128
    sub_14038bf10(arg1 - sx.q(arg2 * 2), arg2, &var_128, 8, 9, arg3)
    result = sub_14038c54b(&var_128, 8, arg5, arg6, 4, arg4)

__security_check_cookie(rax_1 ^ &var_158)
return result
