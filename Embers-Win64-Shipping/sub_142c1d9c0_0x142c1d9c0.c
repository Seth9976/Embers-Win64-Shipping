// 函数: sub_142c1d9c0
// 地址: 0x142c1d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t var_140 = 0
int32_t var_128[0x40]
int32_t (* var_148)[0x40] = &var_128
int32_t var_138 = 0
char result

if (sub_142c22240(arg1, arg2, arg3, *arg6, arg6[1], &var_138, var_148, var_140) == 0)
    result = 0
else
    void* rcx = *(arg1 + 0x90)
    int32_t rbx_1 = var_138
    int32_t rdx = *(rcx + 0x5c)
    int32_t r8 = rdx + rbx_1
    
    if (r8 - rdx u>= 2)
        sub_142bf5c70(rcx, rdx, r8)
    
    int32_t* var_150
    var_150.d = rbx_1
    
    if (sub_142c1cf80(arg1, arg2, &var_128, arg4, arg5, var_150.d) == 0)
        result = 0
    else
        result = 1

__security_check_cookie(rax_1 ^ &var_178)
return result
