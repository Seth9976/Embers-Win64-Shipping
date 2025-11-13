// 函数: sub_1428934a0
// 地址: 0x1428934a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_88 = 0
int64_t rsi = *(*arg1[4] + 0x88)
uint64_t result
void var_78
int32_t result_1

if ((arg1[2].d & 0x200) == 0)
    int64_t* rax_5 = sub_142891ee0()
    
    if (rax_5 == 0)
        result = 0xffffffff
    else
        if (sub_142891c70(rax_5, arg1) != 0)
            int32_t result_2
            
            if (rsi == 0)
                result_2 = sub_1428918e0(rax_5, &var_78, &var_88)
            else
                int64_t* rcx_4 = rax_5[4]
                result_2 = (*(*rcx_4 + 0x88))(rcx_4, arg2, zx.q(arg3.d), rax_5)
            
            result_1 = result_2
            sub_142891ea0(rax_5)
            goto label_14289357b
        
        sub_142891ea0(rax_5)
        result = 0xffffffff
else if (rsi == 0)
    result_1 = sub_1428918e0(arg1, &var_78, &var_88)
    
    if (result_1 == 0)
        result = zx.q(result_1)
    else
        result = sub_1428bdbe0(arg1[4], arg2, arg3, &var_78, zx.q(var_88))
else
    result_1 = rsi(arg4, arg5, arg6, arg1)
label_14289357b:
    
    if (rsi != 0 || result_1 == 0)
        result = zx.q(result_1)
    else
        result = sub_1428bdbe0(arg1[4], arg2, arg3, &var_78, zx.q(var_88))
__security_check_cookie(rax_1 ^ &var_b8)
return result
