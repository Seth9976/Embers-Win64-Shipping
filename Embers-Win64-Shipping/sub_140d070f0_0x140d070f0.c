// 函数: sub_140d070f0
// 地址: 0x140d070f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = *arg3
void* arg_18 = arg2

if (sub_140ce2960(arg1, arg5, sub_140d41340(), arg4, &arg_18, &arg_10, 0, 1) != 0)
    void* rcx_1 = arg_10
    
    if (rcx_1 == 0)
        *arg3 = 0
        arg3[1] = 0
        return arg_18
    
    void* rax_4 = sub_140d21950(rcx_1, arg1[0xf])
    
    if (rax_4 != 0)
        *arg3 = arg_10
        arg3[1] = rax_4
        return arg_18
    
    int64_t var_48 = *(arg1[0xf] + 0x18)
    int16_t* var_40
    sub_140b63b70(&var_48, &var_40)
    int16_t* const rbx_1 = &data_142d40450
    int64_t var_30
    int64_t* rax_6 = sub_140cbc340(arg1, &var_30)
    
    if (rax_6[1].d != 0)
        rbx_1 = *rax_6
    
    void* var_68_1 = arg2
    sub_140b1f700(arg6, 
        %s: specified object doesn't implement the required interface class '%s': %s", rbx_1)
    int64_t rcx_7 = var_30
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* rcx_8 = var_40
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
else
    void* rax_3 = arg_10
    *arg3 = rax_3
    
    if (rax_3 == 0)
        arg3[1] = 0
        return rax_3

return nullptr
