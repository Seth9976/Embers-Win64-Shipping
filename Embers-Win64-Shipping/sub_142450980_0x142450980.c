// 函数: sub_142450980
// 地址: 0x142450980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg3 == 0)
    uint64_t rbx
    uint64_t arg_8 = rbx
    int64_t var_28 = 0
    int32_t rdx = 0
    int32_t var_20_1 = 0
    int32_t r8 = 0
    int32_t var_1c_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx = zx.q(rbx_1.d + 1)
        
        if (rbx.d s> 0)
            sub_1405947f0(&var_28, rbx.d)
            r8 = var_1c_1
            rdx = var_20_1
        
        int32_t rax = rbx.d + rdx
        var_20_1 = rax
        
        if (rax s> r8)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, arg2, rbx.d * 2)
    
    r8.b = 1
    int64_t var_18
    int64_t* rax_1 = sub_140b19c30(&var_18, &var_28, r8.b)
    int16_t* const rcx_4 = &data_142d40450
    int16_t* rdx_4 = &data_142d40450
    
    if (data_143e1a428 != 0)
        rdx_4 = data_143e1a420
    
    if (rax_1[1].d != 0)
        rcx_4 = *rax_1
    
    result = sub_140a54510(rcx_4, rdx_4)
    int64_t rcx_5 = var_18
    rbx.b = result == 0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rbx.b != 0)
        int64_t rdi_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_2 = (rdi_1 + 1).d
        *(arg1 + 0x10) = rax_2
        
        if (rax_2 s> *(arg1 + 0x14))
            sub_1405a4f90(arg1 + 8)
        
        int64_t* rcx_9 = (rdi_1 << 4) + *(arg1 + 8)
        *rcx_9 = 0
        *rcx_9 = var_28
        var_28 = 0
        rcx_9[1].d = var_20_1
        *(rcx_9 + 0xc) = var_1c_1
        var_20_1.q = 0
    
    int64_t rcx_10 = var_28
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

result.b = 1
return result
