// 函数: sub_1426e34e0
// 地址: 0x1426e34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbx = *(arg1 + 0x38)
int64_t result = sub_1426bf170(arg1 + 0x38, arg2)

if (rbx == 0)
    int64_t var_18
    int64_t* rax = sub_1426b26b0(arg1 + 0x38, &var_18)
    int16_t* const r8_1
    
    if (rax[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax
    
    int64_t var_28
    sub_140a2e390(&var_28, u"Locking Resource with source %s", r8_1)
    result = (*(*(arg1 - 0xb0) + 0x410))(arg1 - 0xb0, &var_28)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)

return result
