// 函数: sub_1429eafc0
// 地址: 0x1429eafc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2420)
void var_2458
int64_t rax_1 = __security_cookie ^ &var_2458
void* rcx = arg1 - arg2 * 3
void var_2408
void* r8_5 = &var_2408

if (arg11 s< 8)
    sub_1429eb100(rcx, arg2, r8_5, 0x40, arg5, arg6, arg7, arg11, 
        (((arg12 - 1) * arg10 + arg9) s>> 4) + 8)
else
    sub_1429eb3a0(rcx, arg2, r8_5, 0x40, arg5, arg6, arg7, arg11, 
        (((arg12 - 1) * arg10 + arg9) s>> 4) + 8)

void var_2348
void* rcx_1 = &var_2348
uint64_t result

if (arg11 s>= 0x10)
    result = sub_1429eb6c0(rcx_1, 0x40, arg3, arg4, arg8, arg9, arg10, arg11, arg12)
else if (arg11 != 8)
    result = sub_1429eb970(rcx_1, 0x40, arg3, arg4, arg8, arg9, arg10, arg11, arg12)
else
    result = sub_1429ebaf0(rcx_1, 0x40, arg3, arg4, arg8, arg9, arg10, arg11, arg12)

__security_check_cookie(rax_1 ^ &var_2458)
return result
