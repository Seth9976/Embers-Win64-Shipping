// 函数: sub_141f4db00
// 地址: 0x141f4db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x240))()

if (result != 0 && data_143a2d7c8 != data_143a2d7f4)
    int64_t rbx_1 = 0
    int64_t* var_28 = nullptr
    int32_t var_20_1 = 0
    int64_t arg_8
    sub_140d3a3a0(&arg_8, result)
    sub_141f2c9d0(&data_143a2d7c0, arg_8, &var_28, 0)
    int64_t rdi_1 = sx.q(var_20_1)
    int64_t* r15_1 = var_28
    arg_8.b = 0
    sub_141f2c6d0(r15_1, rdi_1.d, arg_8.b, &arg_8)
    void* rcx_2 = &r15_1[rdi_1]
    int64_t* rdi_2 = r15_1
    uint64_t rbp_4 = (rcx_2 - r15_1 + 7) u>> 3
    
    if (r15_1 u> rcx_2)
        rbp_4 = 0
    
    if (rbp_4 != 0)
        do
            arg_8 = *rdi_2
            
            if (sub_140d3e110(&arg_8) != 0)
                int64_t* rax_3 = sub_140d3c6e0(&arg_8)
                int64_t r8_3 = *rax_3
                (*(r8_3 + 0x528))(rax_3, arg1, r8_3)
            
            rdi_2 = &rdi_2[1]
            rbx_1 += 1
        while (rbx_1 != rbp_4)
    
    sub_140d3a3a0(&arg_8, result)
    result = sub_141f45cf0(&data_143a2d7c0, arg_8)
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)

return result
