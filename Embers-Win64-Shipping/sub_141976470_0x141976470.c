// 函数: sub_141976470
// 地址: 0x141976470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int64_t rsi
rsi.b = 0

if (rax == 0x10de || rax == 0x1002 || rax == 0x8086)
    int64_t* var_78 = nullptr
    int32_t i_2 = 0
    wchar16 const* const rdx_1
    
    if (rax == 0x10de)
        rdx_1 = u"GPU_NVIDIA"
    else if (rax != 0x1002)
        rdx_1 = u"GPU_0x8086"
        
        if (rax != 0x8086)
            rdx_1 = nullptr
    else
        rdx_1 = u"GPU_AMD"
    
    sub_140af2c50(data_143ddb400, rdx_1, u"Blacklist", &var_78, &data_143de5810)
    int32_t rdi_1 = 0
    int64_t* r14_1 = nullptr
    int32_t i_1
    
    while (true)
        i_1 = i_2
        
        if (rdi_1 s>= i_1)
            break
        
        int64_t* rax_1 = var_78
        int16_t* var_68 = nullptr
        int32_t var_60_1 = 0
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        int64_t var_48 = 0
        int64_t var_40
        __builtin_memset(&var_40, 0, 0x18)
        int16_t* const rbx_1
        
        if (*(r14_1 + rax_1 + 8) == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *(r14_1 + rax_1)
        
        int32_t r9_2
        r9_2.b = 1
        sub_140b2acc0(&rbx_1[1], u"DriverVersion=", &var_68, r9_2.b)
        sub_140b2acc0(&rbx_1[1], u"DriverDate=", &var_58, 1)
        sub_140b2acc0(&rbx_1[1], u"RHI=", &var_48, 1)
        int64_t var_38
        sub_140b2acc0(&rbx_1[1], u"Reason=", &var_38, 1)
        char r8_5 = 0
        int16_t* rcx_5 = var_58
        
        if (var_60_1 != 0 && var_60_1 - 1 s> 1)
        label_1419765f3:
            int16_t* rax_4
            
            if (var_60_1 s> 1)
                if (var_60_1 == 0)
                    goto label_1419766e5
                
                rax_4 = var_68
                goto label_141976612
            
            if (var_50_1 == 0)
            label_1419766e5:
                int16_t rax_8 = 0
                
                if (rax_8 == 0x21 || rax_8 != 0x3e)
                    r8_5 = 0
                else
                    r8_5 = 1
            else
                rax_4 = rcx_5
            label_141976612:
                
                if (*rax_4 == 0x3e)
                    r8_5 = 1
                else
                    r8_5 = 0
        else if (var_50_1 != 0 && var_50_1 - 1 s> 1)
            goto label_1419765f3
        
        int64_t rax_5 = var_38
        rsi.b |= r8_5
        
        if (rax_5 != 0)
            sub_140a74f90(rax_5)
            rcx_5 = var_58
        
        int64_t rax_6 = var_48
        
        if (rax_6 != 0)
            sub_140a74f90(rax_6)
            rcx_5 = var_58
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int16_t* rcx_8 = var_68
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rdi_1 += 1
        r14_1 = &r14_1[2]
        
        if (rsi.b != 0)
            i_1 = i_2
            break
    
    int64_t* rdi_2 = var_78
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_9 = *rdi_2
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdi_2 = var_78
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)

return zx.q(rsi.b)
