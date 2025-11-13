// 函数: sub_142c80260
// 地址: 0x142c80260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rax_2

if (arg3.d == 0x1b)
    if (arg2 != 0x15e)
        sub_142c64760(*arg1, "Couldn't use REST", arg3, arg4)
        __security_check_cookie(rax_1 ^ &var_48)
        return 0x1f
    
    rax_2 = gzprintf(&arg1[0xd3], "RETR %s", arg1[0xe4], arg4)
    
    if (rax_2 == 0)
        arg1[0xea].d = 0x20
else
    if (arg2 == 0x15e)
        int128_t var_28
        __builtin_strncpy(&var_28, "Accept-ranges: bytes\r\n", 0x18)
        rax_2 = sub_142c645e0(arg1, 3, &var_28, 0, arg4)
    
    if (arg2 != 0x15e || rax_2 == 0)
        int64_t rax_3 = sub_142c7fec0(arg1)
        __security_check_cookie(rax_1 ^ &var_48)
        return rax_3

__security_check_cookie(rax_1 ^ &var_48)
return rax_2
