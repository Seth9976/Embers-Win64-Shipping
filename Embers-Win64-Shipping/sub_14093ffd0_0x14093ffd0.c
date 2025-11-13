// 函数: sub_14093ffd0
// 地址: 0x14093ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0x10)
int32_t rax = var_50 + 0x10

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"OnlineSubsystem", 0x20)
*arg1 = 0
int32_t arg_8

if (sub_140a32a50(arg2, &var_58, 0) != 0)
    int16_t* rdx_10
    
    if (*(arg2 + 8) == 0)
        rdx_10 = &data_142d40450
    else
        rdx_10 = *arg2
    
    *arg1 = *sub_140b58260(&arg_8, rdx_10, 1)
else
    sub_1408f1b50(arg3, &arg_8, arg2)
    int64_t rax_2 = sx.q(arg_8)
    void* const rcx_7
    
    if (rax_2.d == 0xffffffff)
        rcx_7 = nullptr
    else
        rcx_7 = (rax_2 << 5) + *arg3
    
    int64_t* rax_3 = rcx_7 + 0x10
    
    if (rcx_7 == 0)
        rax_3 = nullptr
    
    if (rax_3 == 0)
        int32_t rdi_1 = *(arg2 + 8)
        
        if (rax s> 1)
            int32_t r12_1 = rdi_1 - 1
            
            if (rdi_1 == 0)
                r12_1 = 0
            
            int32_t rax_5
            
            if (rax == 0)
                rax_5 = rax + 1
            
            if (rax != 0 || r12_1 == 0)
                rax_5 = 0
            
            int64_t rdi_2 = var_58
            int32_t rcx_10 = r12_1 + rax_5
            uint64_t var_48 = 0
            
            if (rax != 0 || rcx_10 != 0)
                sub_1405a4c70(&var_48, rcx_10 + rax, 0)
                memcpy(var_48, rdi_2, rax * 2)
            else
                int32_t var_3c_1 = 0
            
            sub_140a20ba0(&var_48, *arg2, r12_1)
            uint64_t rax_6 = var_48
            rdi_1 = rax
            var_48 = 0
            int32_t var_40_1
            var_40_1.q = 0
            rbx = rax_6
        else
            int64_t rsi_1 = *arg2
            uint64_t var_38 = 0
            
            if (rdi_1 != 0)
                sub_1405a4c70(&var_38, rdi_1, 0)
                rbx = var_38
                memcpy(rbx, rsi_1, rdi_1 * 2)
        
        uint64_t rdx_8 = &data_142d40450
        
        if (rdi_1 != 0)
            rdx_8 = rbx
        
        *arg1 = *sub_140b58260(&arg_8, rdx_8, 1)
        
        if (rbx != 0)
            sub_140a74f90(rbx)
    else
        *arg1 = *rax_3
int64_t rcx_18 = var_58

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return arg1
