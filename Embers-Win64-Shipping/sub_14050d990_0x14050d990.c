// 函数: sub_14050d990
// 地址: 0x14050d990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14323d338
    result_1[2] = sub_140a387b0()
    void** r8_1 = *result_1
    result = r8_1[8](result_1, &data_143f38d70, r8_1)
else if (data_143f38d78 != 0)
    int64_t* rcx_2 = data_143f38d70
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = data_143f38d70
        
        if (rcx_3 != 0)
            result = sub_140a84c80(rcx_3, 0, 0)
            data_143f38d70 = result
        
        data_143f38d78 = 0

if (result_1 != 0)
    (*result_1)[7](result_1, 0)
    result = sub_140a84c80(result_1, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result) __tailcall

return result
