// 函数: sub_141f84460
// 地址: 0x141f84460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x4b8)

if (result == 0 || *(result + 0x30) != 1)
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    result = sub_141f81d30(arg1, &var_18, arg1 + 0x270)
    
    if (result.b != 0)
        sub_1423691c0(arg1 + 0x150, arg1 + 0x280, &var_18, 1, 0)
        result = sub_141997e80(arg1 + 0x258)
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        return sub_140a74f90(rcx_2)

return result
