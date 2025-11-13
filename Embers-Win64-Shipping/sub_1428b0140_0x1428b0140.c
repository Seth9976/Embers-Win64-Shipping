// 函数: sub_1428b0140
// 地址: 0x1428b0140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t result

if (arg2 == 0x1d)
    int32_t* rax_2
    
    if (arg1 != 0)
        rax_2 = sub_142891590(arg1)
    
    if (arg1 == 0 || arg3 != 0x30)
        result = 0
    else
        sub_1428b0080(arg1, arg4, zx.q(arg3))
        int64_t var_88
        __builtin_strncpy(&var_88, "666666666666666666666666666666666666666666666666", 0x30)
        sub_1428cb9a0(rax_2, &var_88, zx.q(arg3))
        char var_58[0x10]
        sub_1428cb7c0(&var_58, rax_2)
        sub_1428c7980(&rax_2[0x17], &var_88, zx.q(arg3 - 8))
        void var_48
        sub_1428c7770(&var_48, &rax_2[0x17])
        int32_t* rax_3 = sub_142891590(arg1)
        sub_1428cb930(rax_3)
        sub_1428c7900(&rax_3[0x17])
        sub_1428b0080(arg1, arg4, zx.q(arg3))
        __builtin_strncpy(&var_88, 
            "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
        "\\\\", 
            0x30)
        sub_1428cb9a0(rax_2, &var_88, zx.q(arg3))
        sub_1428cb9a0(rax_2, &var_58, zx.q(arg3 - 0x20))
        sub_1428c7980(&rax_2[0x17], &var_88, zx.q(arg3 - 8))
        sub_1428c7980(&rax_2[0x17], &var_48, zx.q(arg3 - 0x1c))
        sub_1428b8960(&var_58, zx.q(arg3 - 0x20))
        sub_1428b8960(&var_48, zx.q(arg3 - 0x1c))
        result = zx.q(arg3 - 0x2f)
else
    result = 0xfffffffe

__security_check_cookie(rax_1 ^ &var_a8)
return result
