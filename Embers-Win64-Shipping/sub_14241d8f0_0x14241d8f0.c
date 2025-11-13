// 函数: sub_14241d8f0
// 地址: 0x14241d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3cb50(arg1)

if (result != 0 && *(arg1 + 0x70) == 0)
    int32_t rbx_1 = 0
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_140d3ccc0(arg1, &var_18, 1, 0, 0)
    
    if (var_10_1 s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            sub_140cc45a0(result + 0x200, *(rdi_1 + var_18))
            rbx_1 += 1
            rdi_1 = &rdi_1[1]
        while (rbx_1 s< var_10_1)
    
    result = sub_140cc45a0(result + 0x200, arg1)
    
    if (*(arg1 + 0x70) == 0)
        result = sub_140ca8970(arg1, 1)
    
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        return sub_140a74f90(rcx_4)

return result
