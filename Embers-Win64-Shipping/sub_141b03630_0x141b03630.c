// 函数: sub_141b03630
// 地址: 0x141b03630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_f4 = 0
int32_t var_f8 = 0xffffffff
int64_t* result_1 = sub_141b21a50(arg1, var_f8.q, arg3)
int64_t* result

if (result_1 != 0)
    result = result_1
else
    void var_c8
    int64_t* result_2 =
        sub_141e78140(sub_141af3a50(sub_140cde0b0()), &var_c8, sub_141e714a0(&var_c8, arg4, 0))
    uint64_t var_b8
    int32_t var_ac
    void var_a8
    int64_t var_98
    int64_t var_78
    
    if (result_2 != 0)
        void** const var_e8 = &data_143052ba8
        void var_d8
        int64_t* rax_4 = sub_141a6b800(&var_d8)
        int32_t var_f0_1 = *(arg5 + 0x2d8)
        var_f8.q = *(arg5 + 0x2d0)
        sub_1405c5900(arg5 + 0xf8, *rax_4, &var_e8, result_2, *(arg5 + 0x2dc), &var_f8)
        result_2[1].d |= 0x40
        sub_140d3a3a0(&var_d8, result_2)
        var_e8.d = 0xffffffff
        var_e8:4.d = 0
        sub_141b1fda0(arg1 + 8, &var_f8, &var_e8)
        int64_t rax_5 = sx.q(var_f8)
        void* const rcx_14
        
        if (rax_5.d == 0xffffffff)
            rcx_14 = nullptr
        else
            rcx_14 = rax_5 * 0x60 + *(arg1 + 8)
        
        var_e8 = &arg_18
        void* var_e0_1 = &var_d8
        sub_141aee170(rcx_14 + 8, &var_f8, &var_e8, nullptr)
        int32_t var_70_2 = 0
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int32_t var_b0_2 = 0
        
        if (var_ac != 0)
            sub_1405a5410(&var_b8, 0)
        
        int32_t var_88_2 = 0xffffffff
        int32_t var_84_2 = 0
        sub_14059a8e0(&var_a8, 0)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        uint64_t rcx_20 = var_b8
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        result = result_2
    else
        int32_t var_70_1 = 0
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int32_t var_b0_1 = 0
        
        if (var_ac != 0)
            sub_1405a5410(&var_b8, 0)
        
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        sub_14059a8e0(&var_a8, 0)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        uint64_t rcx_7 = var_b8
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_128)
return result
