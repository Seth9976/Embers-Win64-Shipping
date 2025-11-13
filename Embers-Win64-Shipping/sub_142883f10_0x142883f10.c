// 函数: sub_142883f10
// 地址: 0x142883f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x120)
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t result

if ((*(*(arg1 + 0x508) + 0x1d0) & 1) == 0)
    int64_t r9_2 = *(arg1 + 0xa8)
    int32_t var_d0_2 = 1
    
    if (sub_142883000(arg1, "master secret", 0xd, r9_2 + 0xb8, 0x20, 0, 0, r9_2 + 0x98, 0x20, 0, 0, 
            arg3, arg4, arg2, 0x30) != 0)
        *arg5 = 0x30
        result = 1
    else
        result = 0
else
    int64_t var_c8[0x2]
    void var_b8
    
    if (sub_1428821e0(arg1, 1) == 0)
        result = 0
    else if (sub_142851d80(arg1, &var_b8, 0x80, &var_c8) == 0)
        result = 0
    else
        int32_t var_d0_1 = 1
        
        if (sub_142883000(arg1, "extended master secret", 0x16, &var_b8, (var_c8[0]).d, 0, 0, 0, 0, 
                0, 0, arg3, arg4, arg2, 0x30) == 0)
            result = 0
        else
            sub_1428b8960(&var_b8, var_c8[0])
            *arg5 = 0x30
            result = 1

__security_check_cookie(rax_1 ^ &var_148)
return result
