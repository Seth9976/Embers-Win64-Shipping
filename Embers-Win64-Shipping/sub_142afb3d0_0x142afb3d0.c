// 函数: sub_142afb3d0
// 地址: 0x142afb3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void var_c8
memset(&var_c8, 0xffffffff, 0x80)
uint32_t result = sub_142afac50(*(arg1 + 8), &var_c8, 0, arg5)
int32_t rbx = 0

if (*arg1 u> 0)
    void* rdi_1 = &var_c8
    
    do
        if (*rdi_1 s>= 0x40)
            sub_142afa9f0(arg1, &var_c8, rbx, 0, 0, arg2, arg3, arg4)
        
        result = zx.d(*arg1)
        rbx += 1
        rdi_1 += 1
    while (rbx s< result)

__security_check_cookie(rax_1 ^ &var_108)
return result
