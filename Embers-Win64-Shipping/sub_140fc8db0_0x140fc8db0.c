// 函数: sub_140fc8db0
// 地址: 0x140fc8db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
*arg1 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 8)
int32_t rax = var_50 + 8

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Sockets", 0x10)
void arg_8

if (sub_140a32a50(arg2, &var_58, 0) != 0)
    int16_t* rdx_9
    
    if (*(arg2 + 8) == 0)
        rdx_9 = &data_142d40450
    else
        rdx_9 = *arg2
    
    *arg1 = *sub_140b58260(&arg_8, rdx_9, 1)
else
    int32_t rdi_1 = *(arg2 + 8)
    
    if (rax s> 1)
        int32_t r12_1 = rdi_1 - 1
        
        if (rdi_1 == 0)
            r12_1 = 0
        
        int32_t rax_2
        
        if (rax == 0)
            rax_2 = rax + 1
        
        if (rax != 0 || r12_1 == 0)
            rax_2 = 0
        
        int64_t rdi_2 = var_58
        int32_t rcx_6 = r12_1 + rax_2
        uint64_t var_48 = 0
        
        if (rax != 0 || rcx_6 != 0)
            sub_1405a4c70(&var_48, rax + rcx_6, 0)
            memcpy(var_48, rdi_2, rax * 2)
        else
            int32_t var_3c_1 = 0
        
        sub_140a20ba0(&var_48, *arg2, r12_1)
        uint64_t rax_3 = var_48
        rdi_1 = rax
        var_48 = 0
        int32_t var_40_1
        var_40_1.q = 0
        rbx = rax_3
    else
        int64_t rsi_1 = *arg2
        uint64_t var_38 = 0
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_38, rdi_1, 0)
            rbx = var_38
            memcpy(rbx, rsi_1, rdi_1 * 2)
    
    uint64_t rdx_7 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_7 = rbx
    
    *arg1 = *sub_140b58260(&arg_8, rdx_7, 1)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
int64_t rcx_14 = var_58

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
