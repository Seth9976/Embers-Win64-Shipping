// 函数: sub_140b8cc20
// 地址: 0x140b8cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg3 == 0)
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
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_1.d + 1)
            r8 = var_1c_1
            rdx = var_20_1
        
        int32_t rax = rbx_1.d + 1 + rdx
        var_20_1 = rax
        
        if (rax s> r8)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, arg2, (rbx_1.d + 1) * 2)
    
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0x11)
    int32_t rax_1 = var_10_1 + 0x11
    var_10_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_18)
    
    sub_1405a7220(var_18, 0x11, ".upluginmanifest", 0x11, 0x3f)
    result = sub_140a236f0(&var_28, &var_18, 1)
    int64_t rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (result.b != 0)
        int64_t* rdi_1 = *(arg1 + 8)
        int64_t rbx_4 = sx.q(rdi_1[1].d)
        result = (rbx_4 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            sub_1405a4f90(rdi_1)
        
        int64_t* rbx_6 = (rbx_4 << 4) + *rdi_1
        *rbx_6 = 0
        int64_t rsi_1 = var_28
        rbx_6[1].d = var_20_1
        
        if (var_20_1 != 0)
            sub_1405a4c70(rbx_6, var_20_1, 0)
            memcpy(*rbx_6, rsi_1, var_20_1 * 2)
        else
            *(rbx_6 + 0xc) = 0
    
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

result.b = 1
return result
