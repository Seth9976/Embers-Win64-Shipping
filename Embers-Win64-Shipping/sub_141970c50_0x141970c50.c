// 函数: sub_141970c50
// 地址: 0x141970c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1

if (rax == 0x10de || rax == 0x1002 || rax == 0x8086)
    int64_t* var_68 = nullptr
    int32_t i_4 = 0
    wchar16 const* const rdx
    
    if (rax == 0x10de)
        rdx = u"GPU_NVIDIA"
    else if (rax != 0x1002)
        rdx = u"GPU_0x8086"
        
        if (rax != 0x8086)
            rdx = nullptr
    else
        rdx = u"GPU_AMD"
    
    sub_140af2c50(data_143ddb400, rdx, u"Blacklist", &var_68, &data_143de5810)
    int32_t i_3 = i_4
    int32_t r14_1 = 0
    
    if (i_3 s<= 0)
    label_141970e03:
        int64_t* rsi_2 = var_68
        
        if (i_3 != 0)
            int32_t i
            
            do
                int64_t rcx_10 = *rsi_2
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                rsi_2 = &rsi_2[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
            rsi_2 = var_68
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        __builtin_memset(arg2, 0, 0x40)
    else
        int64_t rsi_1 = 0
        
        while (true)
            int64_t* rax_1 = var_68
            int64_t var_58 = 0
            int64_t var_50
            __builtin_memset(&var_50, 0, 0x38)
            int16_t* const rdi_1
            
            if (*(rax_1 + rsi_1 + 8) == 0)
                rdi_1 = &data_142d40450
            else
                rdi_1 = *(rax_1 + rsi_1)
            
            sub_140b2acc0(&rdi_1[1], u"DriverVersion=", &var_58, 1)
            int64_t var_48
            sub_140b2acc0(&rdi_1[1], u"DriverDate=", &var_48, 1)
            int64_t var_38
            sub_140b2acc0(&rdi_1[1], u"RHI=", &var_38, 1)
            int64_t var_28
            sub_140b2acc0(&rdi_1[1], u"Reason=", &var_28, 1)
            
            if (sub_141989a90(&var_58, arg1, arg1) != 0)
                int32_t i_2 = i_4
                int64_t* rdi_3 = var_68
                *arg2 = var_58
                arg2[1].d = var_50.d
                *(arg2 + 0xc) = var_50:4.d
                arg2[2] = var_48
                int64_t var_40
                arg2[3].d = var_40.d
                *(arg2 + 0x1c) = var_40:4.d
                arg2[4] = var_38
                int64_t var_30
                arg2[5].d = var_30.d
                *(arg2 + 0x2c) = var_30:4.d
                arg2[6] = var_28
                int64_t var_20
                arg2[7].d = var_20.d
                *(arg2 + 0x3c) = var_20:4.d
                var_58 = 0
                int64_t var_50_1
                __builtin_memset(&var_50_1, 0, 0x38)
                
                if (i_2 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_12 = *rdi_3
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        rdi_3 = &rdi_3[2]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    rdi_3 = var_68
                
                if (rdi_3 != 0)
                    sub_140a74f90(rdi_3)
                
                break
            
            int64_t rcx_6 = var_28
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = var_38
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = var_48
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = var_58
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            i_3 = i_4
            r14_1 += 1
            rsi_1 += 0x10
            
            if (r14_1 s>= i_3)
                goto label_141970e03
else
    __builtin_memset(arg2, 0, 0x40)

return arg2
