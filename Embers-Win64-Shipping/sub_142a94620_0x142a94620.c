// 函数: sub_142a94620
// 地址: 0x142a94620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rdi = sx.q(arg3)
void* result
void* result_1

if (rdi.d s> 0xc8)
    result = sub_142a7dd00(rdi)
    result_1 = result
    
    if (result != 0)
        goto label_142a94681
    
    *arg6 = 7
else
    void var_118
    result_1 = &var_118
label_142a94681:
    sub_142a94470(arg1, arg2, rdi.d, arg4, arg5, result_1)
    result = &var_118
    
    if (result_1 != &var_118)
        result = sub_142a7dcd0(result_1)
__security_check_cookie(rax_1 ^ &var_148)
return result
