// 函数: sub_1423688d0
// 地址: 0x1423688d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (sub_140d23dc0(arg1, 0x30) != 0)
    return 0

char* rax_1 = sub_141e5f7c0(nullptr)

if (rax_1 == 0)
    return sub_14222c9e0(arg1 + 0x2d0, arg_10)

if (arg_10.d != data_143f596b8 || arg_10:4.d != data_143f596bc)
    int64_t var_28
    int64_t* rax_2 = sub_140b63b70(&arg_10, &var_28)
    int16_t* const rbp_1 = &data_142d40450
    int16_t* rdi_1
    
    if (rax_2[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *rax_2
    
    int32_t rcx_3 = 0
    int16_t* var_38 = nullptr
    int32_t rdx_2 = 0
    int64_t var_30_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_1.d + 1)
            rdx_2 = var_30_1:4.d
            rcx_3 = var_30_1.d
        
        int32_t rax_3 = rcx_3 + rbx_1.d + 1
        var_30_1.d = rax_3
        
        if (rax_3 s> rdx_2)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, rdi_1, (rbx_1.d + 1) * 2)
    
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    sub_142364d30(rax_1, &var_38)
    
    if (var_30_1.d != 0)
        rbp_1 = var_38
    
    int64_t arg_20
    sub_140b58260(&arg_20, rbp_1, 1)
    int16_t* rcx_10 = var_38
    data_143f596b0 = arg_20
    data_143f596b8.q = arg_10
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

return sub_14222c9e0(arg1 + 0x2d0, data_143f596b0)
