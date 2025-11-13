// 函数: sub_140bacea0
// 地址: 0x140bacea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
void var_838
int64_t rax_1 = __security_cookie ^ &var_838
void var_818
void* rcx_1 = &var_818
void* rdx_1 = &var_818 + (sx.q(sub_140b5e700(&arg_8, &var_818)) << 1)
void* result

if (&var_818 != rdx_1)
    do
        if (*rcx_1 == 0x2f)
            result.b = 0
            __security_check_cookie(rax_1 ^ &var_838)
            return result
        
        rcx_1 += 2
    while (rcx_1 != rdx_1)

result.b = 1
__security_check_cookie(rax_1 ^ &var_838)
return result
