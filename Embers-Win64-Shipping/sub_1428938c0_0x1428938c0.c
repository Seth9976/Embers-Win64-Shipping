// 函数: sub_1428938c0
// 地址: 0x1428938c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t result

if (arg2 == 0x1d)
    int32_t* rax_2
    
    if (arg1 != 0)
        rax_2 = sub_142891590(arg1)
    
    if (arg1 == 0 || arg3 != 0x30)
        result = 0
    else
        sub_1428c7980(rax_2, arg4, zx.q(arg3))
        int64_t var_68
        __builtin_strncpy(&var_68, "6666666666666666666666666666666666666666", 0x28)
        sub_1428c7980(rax_2, &var_68, zx.q(arg3 - 8))
        void var_40
        sub_1428c7770(&var_40, rax_2)
        sub_1428c7900(rax_2)
        sub_1428c7980(rax_2, arg4, zx.q(arg3))
        __builtin_strncpy(&var_68, 
            "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\", 
            0x28)
        sub_1428c7980(rax_2, &var_68, zx.q(arg3 - 8))
        sub_1428c7980(rax_2, &var_40, zx.q(arg3 - 0x1c))
        sub_1428b8960(&var_40, zx.q(arg3 - 0x1c))
        result = zx.q(arg3 - 0x2f)
else
    result = 0xfffffffe

__security_check_cookie(rax_1 ^ &var_88)
return result
