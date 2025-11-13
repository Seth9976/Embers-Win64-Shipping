// 函数: sub_142661cd0
// 地址: 0x142661cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) != 0 && (data_143de542a != 0 || (*(arg1 + 0xa8) & 2) != 0))
    result = sub_140a84c80(0, 0x20, 0)
    uint64_t result_1 = result
    
    if (result != 0)
        *result_1 = &data_142d42b98
        *(result_1 + 8) = sub_14264de10
        *(result_1 + 0x18) = sub_140a387b0()
        int64_t r8_1 = *result_1
        result = (*(r8_1 + 0x40))(result_1, &data_143f38d70, r8_1)
    else if (data_143f38d78 != 0)
        int64_t* rcx_1 = data_143f38d70
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = data_143f38d70
            
            if (rcx_2 != 0)
                result = sub_140a84c80(rcx_2, 0, 0)
                data_143f38d70 = result
            
            data_143f38d78 = 0
    
    if (result_1 != 0)
        (*(*result_1 + 0x38))(result_1, 0)
        result = sub_140a84c80(result_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result) __tailcall

return result
