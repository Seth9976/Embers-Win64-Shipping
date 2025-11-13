// 函数: sub_141d5bf10
// 地址: 0x141d5bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa8) = 0

if (*(arg1 + 0xac) != 0)
    sub_1405947f0(arg1 + 0xa0, 0)

if (arg2[1].d s> 1)
    int32_t r14_1 = 1
    
    if (sub_140a32ae0(arg2, &data_142e1ac80, 1) == 0)
        int64_t var_68
        sub_140b11c80(&var_68, arg2)
        int64_t var_48
        int16_t* var_38
        sub_140b11a30(&var_38, sub_140b25050(&var_48))
        int64_t rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int32_t rbx_2
        int32_t var_60
        
        if (sub_140a32a50(&var_68, &var_38, 1) == 0)
            rbx_2 = var_60
        else
            int16_t* const rdx_3 = &data_142d40450
            int32_t var_30
            
            if (var_30 != 0)
                rdx_3 = var_38
            
            sub_140b20770(&var_68, rdx_3)
            int64_t var_58 = 0
            int64_t var_50_1 = 0
            sub_1405947f0(&var_58, 3)
            int32_t r15_1 = var_50_1:4.d
            int32_t rbx_1 = var_50_1.d + 3
            var_50_1.d = rbx_1
            
            if (rbx_1 s> r15_1)
                sub_140594770(&var_58)
                r15_1 = var_50_1:4.d
                rbx_1 = var_50_1.d
            
            int64_t rdi_1 = var_58
            UnDecorator::getReferenceType(rdi_1, &data_142e1ac80, 6)
            int64_t rsi_1
            int64_t r14_2
            int32_t r15_2
            
            if (rbx_1 s> 1)
                int32_t rsi_3
                
                if (var_60 == 0)
                    rsi_3 = 0
                else
                    rsi_3 = var_60 - 1
                
                if (rbx_1 != 0 || rsi_3 == 0)
                    r14_1 = 0
                
                var_58 = rdi_1
                int32_t rdx_8 = r14_1 + rbx_1 + rsi_3
                var_50_1.d = rbx_1
                var_50_1:4.d = r15_1
                rdi_1 = 0
                
                if (rdx_8 s> r15_1)
                    sub_1405947f0(&var_58, rdx_8)
                
                sub_140a20ba0(&var_58, var_68, rsi_3)
                r14_2 = var_58
                rbx_2 = var_50_1.d
                r15_2 = var_50_1:4.d
                var_58 = 0
                int64_t var_50_2 = 0
                rsi_1 = var_68
            else
                rbx_2 = var_60
                rsi_1 = var_68
                var_48 = 0
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_48, rbx_2, 0)
                    r14_2 = var_48
                    memcpy(r14_2, rsi_1, rbx_2 * 2)
                    int32_t var_3c
                    r15_2 = var_3c
                    rsi_1 = var_68
                else
                    r15_2 = 0
                    r14_2 = 0
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            int32_t var_5c_1 = r15_2
            var_68 = r14_2
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
                rbx_2 = rbx_2
        int64_t* result = &var_68
        
        if (arg1 + 0x88 != &var_68)
            int64_t rsi_4 = var_68
            int32_t r8_4 = *(arg1 + 0x94)
            *(arg1 + 0x90) = rbx_2
            
            if (rbx_2 != 0 || r8_4 != 0)
                sub_1405a4c70(arg1 + 0x88, rbx_2, r8_4)
                result = memcpy(*(arg1 + 0x88), rsi_4, rbx_2 * 2)
            else
                *(arg1 + 0x94) = 0
        
        int16_t* rcx_19 = var_38
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = var_68
        
        if (rcx_20 == 0)
            return result
        
        return sub_140a74f90(rcx_20)

return sub_140597df0(arg1 + 0x88, arg2)
