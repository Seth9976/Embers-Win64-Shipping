// 函数: sub_140b12ac0
// 地址: 0x140b12ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int32_t result_1 = 0
int64_t rbx
rbx.b = 0

if (sub_140af5d90(arg1, u"DataDrivenPlatformInfo", arg2, &var_18) != 0)
    char rax_1 = sub_140a32ae0(&var_18, u"ini:", 1)
    char rax_2
    
    if (rax_1 == 0)
        rax_2 = sub_140a32ae0(&var_18, u"!ini:", 1)
    
    if (rax_1 != 0 || rax_2 != 0)
        rbx.b = *var_18 == 0x21
        sub_140b12b80(&var_18)

int32_t result = result_1

if (result != 0)
    result -= 1
    
    if (result s> 0)
        result = sub_140a35630(&var_18)
        
        if (rbx.b != 0)
            result.b = result.b == 0
        
        *arg3 = result.b

int16_t* rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
