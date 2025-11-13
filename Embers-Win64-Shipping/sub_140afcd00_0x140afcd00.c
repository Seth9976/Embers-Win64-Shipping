// 函数: sub_140afcd00
// 地址: 0x140afcd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143ddb400
char result

if (rcx != 0)
    result = (*(*rcx + 0x18))(rcx)

if (rcx == 0 || result == 0)
    sub_140aeea20(arg1, 0)
    int32_t rdi_1 = arg2[1].d
    uint64_t rbx_1 = 0
    int64_t rbp_1 = *arg2
    uint64_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    
    if (rdi_1 != 0)
        uint64_t var_18
        sub_1405a4c70(&var_18, rdi_1, 0)
        rbx_1 = var_18
        memcpy(rbx_1, rbp_1, rdi_1 * 2)
    
    uint64_t rcx_4 = &data_142d40450
    
    if (rdi_1 != 0)
        rcx_4 = rbx_1
    
    result = sub_140af8930(rcx_4, &var_28)
    
    if (result != 0)
        result = sub_140afbb70(arg1, &var_28)
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)
    
    uint64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)

return result
