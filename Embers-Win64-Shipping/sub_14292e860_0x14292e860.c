// 函数: sub_14292e860
// 地址: 0x14292e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x98)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_98 = 0
*arg3 = 0
uint64_t result
void var_88

if (sub_1428915c0(arg1, 0x200) == 0)
    int64_t* rax_4 = sub_142891ee0()
    
    if (rax_4 != 0)
        int32_t rax_5 = sub_142891c70(rax_4, arg1)
        int32_t rdi = rax_5
        
        if (rax_5 != 0)
            rdi = sub_1428918e0(rax_4, &var_88, &var_98)
        
        sub_142891ea0(rax_4)
        
        if (rdi != 0)
            goto label_14292e93d
        
        result = 0
    else
        sub_1428a5670((rax_4 + 6).d, (rax_4 + 0x6b).d, (rax_4 + 0x41).d, "crypto\evp\p_sign.c", 
            0x22)
        result = 0
else if (sub_1428918e0(arg1, &var_88, &var_98) == 0)
    sub_1428bcda0(nullptr)
    result = 0
else
label_14292e93d:
    int64_t var_90 = sx.q(sub_142896de0(arg4))
    int32_t result_1 = 0
    int64_t* rax_8 = sub_1428bcf30(arg4, nullptr)
    
    if (rax_8 != 0 && sub_1428bdb60(rax_8) s> 0
            && sub_1428bcb30(rax_8, 0xffffffff, 0xf8, 1, 0, sub_142891580(arg1)) s> 0)
        int32_t var_a8_2
        var_a8_2.q = zx.q(var_98)
        
        if (sub_1428bda10(rax_8, arg2, &var_90, &var_88, var_a8_2) s> 0)
            result_1 = 1
            *arg3 = var_90.d
    
    sub_1428bcda0(rax_8)
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_c8)
return result
