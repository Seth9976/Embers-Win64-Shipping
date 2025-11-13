// 函数: sub_142968720
// 地址: 0x142968720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result
int32_t* var_78

if (*(arg1 + 8) != 0)
    int32_t var_68
    void var_58
    int32_t rax_2 = sub_142968820(arg1, arg2, arg3, &var_58, &var_68, sub_142969a90)
    
    if (rax_2 != 0)
        char* var_60
        sub_1428eea10(**(arg1 + 8), nullptr, &var_60)
        int32_t rax_3 = sub_1406938b0(var_60)
        int32_t rcx_6 = var_68
        
        if (rcx_6 != rax_3)
            result = 0
        else if (sub_1428bc500(&var_58, sub_14060aa50(var_60), zx.q(rcx_6)) != 0)
            result = 0
        else
            result = 1
    else
        var_78.d = 0xa2
        sub_1428a5670(rax_2 + 0x23, rax_2 + 0x7e, rax_2 + 0x6d, "crypto\pkcs12\p12_mutl.c", 
            var_78.d)
        result = 0
else
    var_78.d = 0x9d
    sub_1428a5670(0x23, 0x7e, 0x6c, "crypto\pkcs12\p12_mutl.c", var_78.d)
    result = 0
__security_check_cookie(rax_1 ^ &var_98)
return result
