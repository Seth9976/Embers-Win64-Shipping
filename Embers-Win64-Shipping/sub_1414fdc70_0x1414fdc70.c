// 函数: sub_1414fdc70
// 地址: 0x1414fdc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg4
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int128_t var_68
int64_t var_38_1
void*** rbx_1
int64_t r9
int128_t zmm6_1

if (result == 0)
label_1414fdd7d:
    int64_t* rax_4 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
    sub_1419a2ec0(rax_4, &var_68, &data_143eef910, 0)
    sub_1419a2ec0(rax_4, &var_68, &data_143ef16b0, 0)
    zmm7 = var_68
    var_38_1 = arg3
    int64_t var_30_2 = r9
    void*** rax_5
    char rcx_8
    rax_5, rcx_8 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
    rbx_1 = rax_5
    
    if (rax_5 == 0)
        return sub_1419968d0(arg1, nullptr)
    
    var_68.q = arg3
    zmm6_1 = sub_141509e60(rcx_8)
    var_68:8.q = &data_143ef15d0
    var_68 = var_68
    sub_141992bd0(rbx_1, &arg4, &var_68, 1)
label_1414fde15:
    *rbx_1 = &data_142fbbbc0
    *(rbx_1 + 0x38) = zmm6_1
    *(rbx_1 + 0x48) = zmm7
    *(rbx_1 + 0x58) = var_38_1.o
    return sub_1419968d0(arg1, rbx_1)

if (result u> 1)
    if (result u<= 4)
        goto label_1414fdd7d
    
    if (result == 5)
        int64_t* rax_1 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
        sub_1419a2ec0(rax_1, &var_68, &data_143eef910, 0)
        sub_1419a2ec0(rax_1, &var_68, &data_143ef1c30, 0)
        zmm7 = var_68
        var_38_1 = arg3
        int64_t var_30_1 = r9
        void*** rax_2
        char rcx_3
        rax_2, rcx_3 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
        rbx_1 = rax_2
        
        if (rax_2 == 0)
            return sub_1419968d0(arg1, nullptr)
        
        var_68.q = arg3
        zmm6_1 = sub_141509e60(rcx_3)
        var_68:8.q = &data_143ef15d0
        var_68 = var_68
        sub_141992bd0(rbx_1, &arg4, &var_68, 1)
        goto label_1414fde15

return result
