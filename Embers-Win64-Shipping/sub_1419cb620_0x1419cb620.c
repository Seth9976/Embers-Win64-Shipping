// 函数: sub_1419cb620
// 地址: 0x1419cb620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x70) s<= 0)
    *arg1 = 0
    arg1[1] = 0
    sub_1405947f0(arg1, 2)
    int32_t rax_9 = arg1[1].d + 2
    arg1[1].d = rax_9
    
    if (rax_9 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, &data_142d576a0, 4)
else
    int64_t var_b8 = 0
    int64_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 2)
    int32_t r13_1 = var_b0_1.d + 2
    var_b0_1.d = r13_1
    
    if (r13_1 s> 0)
        sub_140594770(&var_b8)
        r13_1 = var_b0_1.d
    
    UnDecorator::getReferenceType(var_b8, &data_142d99650, 4)
    int64_t var_a8 = 0
    int32_t rdx_1 = 0
    int32_t var_a0_1 = 0
    int32_t rax = 0
    int32_t var_9c_1 = 0
    int64_t r12_1 = 0
    int32_t r15_1
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_a8, rbx_1.d + 1)
            rdx_1 = var_a0_1
            rax = var_9c_1
            r12_1 = var_a8
        
        r15_1 = rbx_1.d + 1 + rdx_1
        
        if (r15_1 s> rax)
            sub_140594770(&var_a8)
            r12_1 = var_a8
        
        UnDecorator::getReferenceType(r12_1, arg2, (rbx_1.d + 1) * 2)
    
    int64_t var_88
    
    if (arg2 == 0 || *arg2 == 0 || r15_1 s<= 1)
        var_88 = var_b8
        int32_t var_7c_2 = var_b0_1:4.d
        int32_t var_80_2 = r13_1
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
    else
        int32_t r13_2
        
        if (r13_1 == 0)
            r13_2 = 0
        else
            r13_2 = r13_1 - 1
        
        int32_t rcx_6
        
        if (r15_1 == 0)
            rcx_6 = r15_1 + 1
        
        if (r15_1 != 0 || r13_2 == 0)
            rcx_6 = 0
        
        int32_t rdx_5 = rcx_6 + r15_1 + r13_2
        int64_t var_98 = r12_1
        
        if (rdx_5 s> var_9c_1)
            sub_1405947f0(&var_98, rdx_5)
        
        int64_t rbx_3 = var_b8
        sub_140a20ba0(&var_98, rbx_3, r13_2)
        var_88 = var_98
        int32_t var_80_1 = r15_1
        int32_t var_7c_1 = var_9c_1
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
    
    int16_t* var_78 = nullptr
    int32_t var_70_1 = 0
    int16_t* var_68_1 = nullptr
    int32_t var_60_1 = 0
    int16_t* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int16_t* var_48_1 = nullptr
    int32_t var_40_1 = 0
    int32_t arg_20 = 0
    sub_1419cb920(arg3, &var_88, 0, &var_78, &arg_20)
    int16_t* const r8_3 = &data_142d40450
    int16_t* const rdx_8 = &data_142d40450
    int16_t* const rcx_11 = &data_142d40450
    
    if (var_40_1 != 0)
        rdx_8 = var_48_1
    
    int16_t* const rax_7 = &data_142d40450
    int16_t* const var_c0_1 = rdx_8
    
    if (var_50_1 != 0)
        rcx_11 = var_58_1
    
    int16_t* var_c8_1 = arg2
    
    if (var_60_1 != 0)
        rax_7 = var_68_1
    
    int16_t* const var_d0_1 = rcx_11
    
    if (var_70_1 != 0)
        r8_3 = var_78
    
    int16_t* const var_d8_1 = rax_7
    int16_t* const var_e0_1 = r8_3
    int16_t* var_e8_2 = arg2
    sub_140a2e390(arg1, 
        #ifndef __UniformBuffer_%s_Definition__\r\n#define __UniformBuffer_%s_Definition__\r\ncbuffer %s"
    "\n{\r\n%s}\r\n%sstatic const struct\r\n{\r\n%s} %s = {%s};\r\n#endif\r\n", arg2)
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    int16_t* rcx_16 = var_78
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_88
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

return arg1
