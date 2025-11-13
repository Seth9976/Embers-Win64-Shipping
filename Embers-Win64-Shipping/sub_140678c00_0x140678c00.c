// 函数: sub_140678c00
// 地址: 0x140678c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140671a60(arg1)
*arg2 = 0

if (sub_14066fdb0(arg1, arg2, arg3) != 0)
    if (((*arg2 - 2) & 0xfffffffd) == 0)
        int32_t result
        result.b = 1
        return result
    
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x3a)
    int32_t rbx_1 = var_50_1.d + 0x3a
    var_50_1.d = rbx_1
    
    if (rbx_1 s> 0)
        sub_140594770(&var_58)
        rbx_1 = var_50_1.d
    
    int64_t rsi_1 = var_58
    UnDecorator::getReferenceType(rsi_1, 
        Open Curly or Square Brace token expected, but not found.", 0x74)
    *(arg1 + 0x64)
    int64_t var_48
    sub_140a2e390(&var_48, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
    int64_t rdi_1
    int32_t r12_1
    int32_t r15_1
    int32_t var_40
    
    if (rbx_1 s> 1)
        int32_t rdi_3
        
        if (var_40 == 0)
            rdi_3 = 0
        else
            rdi_3 = var_40 - 1
        
        int32_t rax_2
        
        if (rbx_1 == 0)
            rax_2 = rbx_1 + 1
        
        if (rbx_1 != 0 || rdi_3 == 0)
            rax_2 = 0
        
        var_58 = 0
        int32_t rcx_5 = rax_2 + rdi_3
        var_50_1.d = rbx_1
        
        if (rbx_1 != 0 || rcx_5 != 0)
            sub_1405a4c70(&var_58, rbx_1 + rcx_5, 0)
            memcpy(var_58, rsi_1, rbx_1 * 2)
        else
            var_50_1:4.d = 0
        
        sub_140a20ba0(&var_58, var_48, rdi_3)
        rdi_1 = var_58
        r15_1 = var_50_1.d
        r12_1 = var_50_1:4.d
        var_58 = 0
        int64_t var_50_2 = 0
    else
        rdi_1 = var_48
        r15_1 = var_40
        int32_t var_3c
        r12_1 = var_3c
        var_48 = 0
        var_40.q = 0
    void var_38
    
    if (arg1 + 0x38 != &var_38)
        int64_t rcx_9 = *(arg1 + 0x38)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *(arg1 + 0x38) = rdi_1
        *(arg1 + 0x40) = r15_1
        *(arg1 + 0x44) = r12_1
    else if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

return 0
