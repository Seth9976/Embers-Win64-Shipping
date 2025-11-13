// 函数: sub_14040c360
// 地址: 0x14040c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t result = __security_cookie ^ &var_88
int64_t result_1 = result
int32_t rbp = arg1[3]

if (rbp != 0)
    int32_t rbx_1 = arg1[2]
    int32_t r8_1 = (0x40000 - (rbx_1 << 0xa)) s>> 0x10
    void var_48
    void var_40
    sub_14040c180(&var_40, &var_48, r8_1, 0x40000 - (rbx_1 << 0xa) - (r8_1 << 0x10))
    int32_t rcx_1 = rbx_1 + rbp
    int32_t rax_5 = 0x100
    
    if (rcx_1 s<= 0x100)
        rax_5 = rcx_1
        
        if (rcx_1 s< 0)
            rax_5 = 0
    
    int32_t var_58_1 = 1
    arg1[2] = rax_5
    result = sub_140410880(arg2, &var_40, &var_48, arg1, arg2, arg3, var_58_1)

__security_check_cookie(result_1 ^ &var_88)
return result
