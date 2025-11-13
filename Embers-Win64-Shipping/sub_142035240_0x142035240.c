// 函数: sub_142035240
// 地址: 0x142035240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result = sub_1423de540(data_143f5b298, arg1, 1)
int64_t result_1 = result

if (result != 0)
    int32_t rax_2 = (zx.d(arg3) ^ 1) * 2
    void* rax_3 = sub_1423de4f0(data_143f5b298, result_1)
    int16_t* var_d0
    sub_140b63b70(&arg_10, &var_d0)
    int32_t rcx_3 = arg4[1].d
    int32_t rbx_1 = 0
    int32_t rdx_3 = rcx_3 - 1
    
    if (rcx_3 == 0)
        rdx_3 = 0
    
    if (rdx_3 s> 0)
        uint64_t var_e8 = 0
        int64_t var_e0_1 = 0
        sub_1405947f0(&var_e8, 2)
        int32_t r13_1 = var_e0_1:4.d
        int32_t rsi = var_e0_1.d + 2
        var_e0_1.d = rsi
        
        if (rsi s> r13_1)
            sub_140594770(&var_e8)
            r13_1 = var_e0_1:4.d
            rsi = var_e0_1.d
        
        uint64_t r12_1 = var_e8
        UnDecorator::getReferenceType(r12_1, &data_142e5f8f8, 4)
        int32_t rdi_1 = arg4[1].d
        uint64_t rsi_1
        uint64_t r15_2
        
        if (rsi s> 1)
            int32_t r15_3 = rdi_1 - 1
            
            if (rdi_1 == 0)
                r15_3 = 0
            
            int32_t rax_4
            
            if (rsi == 0)
                rax_4 = rsi + 1
            
            if (rsi != 0 || r15_3 == 0)
                rax_4 = 0
            
            var_e8 = r12_1
            int32_t rdx_8 = r15_3 + rax_4 + rsi
            var_e0_1.d = rsi
            var_e0_1:4.d = r13_1
            r12_1 = 0
            
            if (rdx_8 s> r13_1)
                sub_1405947f0(&var_e8, rdx_8)
            
            sub_140a20ba0(&var_e8, *arg4, r15_3)
            rsi_1 = var_e8
            rdi_1 = var_e0_1.d
            var_e8 = 0
            int64_t var_e0_2 = 0
            r15_2 = rsi_1
        else
            int64_t r15_1 = *arg4
            rsi_1 = 0
            uint64_t var_b8 = 0
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_b8, rdi_1, 0)
                rsi_1 = var_b8
                memcpy(rsi_1, r15_1, rdi_1 * 2)
                r15_2 = rsi_1
            else
                r15_2 = 0
        
        if (rdi_1 != 0)
            rbx_1 = rdi_1 - 1
        
        sub_140a20ba0(&var_d0, rsi_1, rbx_1)
        
        if (r15_2 != 0)
            sub_140a74f90(r15_2)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        result_1 = result
    
    int16_t* rbx_2 = &data_142d40450
    int16_t* r8_4 = &data_142d40450
    int32_t var_c8
    
    if (var_c8 != 0)
        r8_4 = var_d0
    
    void var_98
    sub_1423fb9e0(&var_98, rax_3 + 0xd0, r8_4, rax_2)
    void var_70
    
    if (sub_142415f00(&var_98) != 0)
        sub_1423e9570(data_143f5b298, &var_70)
    
    if (var_c8 != 0)
        rbx_2 = var_d0
    
    sub_1423ef930(data_143f5b298, result_1, rbx_2, rax_2.b)
    result = sub_14094c030(&var_98)
    int16_t* rcx_19 = var_d0
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)

int64_t rcx_20 = *arg4

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
