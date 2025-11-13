// 函数: sub_1419bfb10
// 地址: 0x1419bfb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[3].d

if (result == 0)
    sub_140834200(arg2, result + 0x10, arg3 u>> 4, 0, arg4, result.b, result.b)
    result.b = 0
else if (arg3 == result)
    result.b = 0
else
    int128_t var_a8
    __builtin_memset(&var_a8, 0, 0x1c)
    sub_140834200(&var_a8, 0x10, arg3 u>> 4, 0, arg4, 0, 0)
    int32_t rbx_1 = arg2[3].d
    int64_t var_30_1 = arg2[2]
    int64_t rax_1 = sx.q(data_1439c7a08)
    
    if (arg3 u<= rbx_1)
        rbx_1 = arg3
    
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x18)
    void* rdi_2 = var_a8:8.q
    uint32_t rbx_2 = rbx_1 u>> 4
    int64_t var_28_1 = 0
    uint32_t var_64_1 = rbx_2
    int64_t var_60_1 = 0
    void* var_50_1 = rdi_2
    uint128_t var_88
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rax_1]), &var_88, &data_143f20520, 1)
    uint128_t zmm0_1 = var_88
    int32_t var_b4_1 = 1
    uint32_t var_b8 = (rbx_2 + 0x3f) u>> 6
    uint128_t var_78 = zmm0_1
    var_b8.q = var_b8.q
    int32_t var_b0_1 = 1
    void var_68
    sub_1419be330(arg1, &var_78, &var_68, &var_b8)
    void* rbx_3 = var_a8.q
    sub_1405d16e0(arg2, rbx_3)
    sub_1405d16e0(&arg2[1], rdi_2)
    void* var_98
    sub_1405d16e0(&arg2[2], var_98)
    int32_t var_90
    arg2[3].d = var_90
    
    if (rbx_3 != 0)
        int32_t rax_6 = 0
        
        if (0 == *(rbx_3 + 8))
            *(rbx_3 + 8) = 0
        else
            rax_6 = *(rbx_3 + 8)
        
        if (rax_6 == 1)
            void* rbx_4 = var_a8.q
            
            if (*(rbx_4 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_8 = data_143f0f180
                    (*(*rcx_8 + 0x628))(rcx_8, rbx_4)
                
                *(rbx_4 + 0x11) = 0
    
    int32_t var_90_1 = 0
    sub_1405d16e0(&var_a8, nullptr)
    sub_1405d16e0(&var_a8:8, nullptr)
    sub_1405d16e0(&var_98, nullptr)
    sub_1405ec8a0(&var_98)
    sub_1405d1550(&var_a8:8)
    sub_14081c9d0(&var_a8)
    result.b = 1

return result
