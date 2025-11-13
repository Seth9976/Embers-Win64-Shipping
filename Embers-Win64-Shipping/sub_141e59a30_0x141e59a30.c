// 函数: sub_141e59a30
// 地址: 0x141e59a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg3 + 0x10) s> 1)
    int64_t var_28
    (*(*arg1 + 0x2b0))(arg1, &var_28, arg2)
    int64_t var_38
    sub_140d30800(&var_28, &var_38)
    int16_t* rdx_2
    
    if (*(arg3 + 0x10) == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *(arg3 + 8)
    
    result = sub_140a23cf0(&var_38, rdx_2, 1, 0, 0xffffffff)
    int64_t rcx_2 = var_38
    int64_t var_20
    
    if (result == 0xffffffff)
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        if (var_20 != 0)
            sub_140a74f90(var_20)
        
        result.b = 0
        return result
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    if (var_20 != 0)
        sub_140a74f90(var_20)

result.b = 1
return result
