// 函数: sub_142a946e0
// 地址: 0x142a946e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t rdi = sx.q(arg3)
void* result
void* result_1

if (rdi.d s> 0xc8)
    result = sub_142a7dd00(sx.q((rdi * 2).d))
    result_1 = result
    
    if (result != 0)
        goto label_142a94750
    
    *arg6 = 7
else
    void var_1e8
    result_1 = &var_1e8
label_142a94750:
    sub_142a947b0(arg1, 0, arg2, rdi.d, arg4, arg5, result_1, result_1 + rdi)
    result = &var_1e8
    
    if (result_1 != &var_1e8)
        result = sub_142a7dcd0(result_1)
__security_check_cookie(rax_1 ^ &var_228)
return result
