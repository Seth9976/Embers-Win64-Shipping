// 函数: sub_1414fd9d0
// 地址: 0x1414fd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
uint32_t r9_1 = zx.d(arg4)
int128_t zmm7
int128_t var_28 = zmm7
int128_t var_68
int64_t var_38_1
void*** rbx_1
int64_t r9
int128_t zmm6_1

if (r9_1 == 2)
    int64_t* rax_8 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
    sub_1419a2ec0(rax_8, &var_68, &data_143eef910, 0)
    sub_1419a2ec0(rax_8, &var_68, &data_143ef1810, 0)
    zmm7 = var_68
    var_38_1 = arg3
    int64_t var_30_3 = r9
    void*** rax_9
    char rcx_13
    rax_9, rcx_13 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
    rbx_1 = rax_9
    
    if (rax_9 == 0)
        sub_1419968d0(arg1, nullptr)
    else
        var_68.q = arg3
        zmm6_1 = sub_141509e60(rcx_13)
        var_68:8.q = &data_143ef15d0
        var_68 = var_68
        sub_141992bd0(rbx_1, &arg4, &var_68, 1)
    label_1414fdc1e:
        *rbx_1 = &data_142fbbbc0
        *(rbx_1 + 0x38) = zmm6_1
        *(rbx_1 + 0x48) = zmm7
        *(rbx_1 + 0x58) = var_38_1.o
        sub_1419968d0(arg1, rbx_1)
else if (r9_1 == 3)
    int64_t* rax_5 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
    sub_1419a2ec0(rax_5, &var_68, &data_143eef910, 0)
    sub_1419a2ec0(rax_5, &var_68, &data_143ef1970, 0)
    zmm7 = var_68
    var_38_1 = arg3
    int64_t var_30_2 = r9
    void*** rax_6
    char rcx_8
    rax_6, rcx_8 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
    rbx_1 = rax_6
    
    if (rax_6 != 0)
        var_68.q = arg3
        zmm6_1 = sub_141509e60(rcx_8)
        var_68:8.q = &data_143ef15d0
        var_68 = var_68
        sub_141992bd0(rbx_1, &arg4, &var_68, 1)
        goto label_1414fdc1e
    
    sub_1419968d0(arg1, nullptr)
else if (r9_1 == 4)
    int64_t* rax_2 = std::_Get_future_error_what((*U"1111")[sx.q(arg2)])
    sub_1419a2ec0(rax_2, &var_68, &data_143eef910, 0)
    sub_1419a2ec0(rax_2, &var_68, &data_143ef1ad0, 0)
    zmm7 = var_68
    var_38_1 = arg3
    int64_t var_30_1 = r9
    void*** rax_3
    char rcx_3
    rax_3, rcx_3 = sub_14081d830(0x68, *(arg1 + 8), 1, 0)
    rbx_1 = rax_3
    
    if (rax_3 != 0)
        var_68.q = arg3
        zmm6_1 = sub_141509e60(rcx_3)
        var_68:8.q = &data_143ef15d0
        var_68 = var_68
        sub_141992bd0(rbx_1, &arg4, &var_68, 1)
        goto label_1414fdc1e
    
    sub_1419968d0(arg1, nullptr)
