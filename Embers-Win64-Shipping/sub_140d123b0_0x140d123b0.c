// 函数: sub_140d123b0
// 地址: 0x140d123b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d

if (result != 0)
    int32_t r14_1 = result - 1
    int64_t rsi_1 = sx.q(r14_1)
    
    if (r14_1 s>= 0)
        int64_t r12_2 = rsi_1 * 0x18
        int64_t temp0_1
        
        do
            void* rdi_1 = arg1[2]
            void* rbx_1 = **(*arg1 + (rsi_1 << 3))
            
            if (r14_1 != arg1[1].d - 1)
                sub_140a20ba0(arg2, &data_142d6acb4, 2)
                int64_t r8_1 = -1
                int64_t rax_6 = sx.q(arg1[1].d - r14_1 - 1)
                
                do
                    r8_1 += 1
                while (*(&data_142e738de - rax_6 * 2 + (r8_1 << 1)) != 0)
                
                sub_140a20ba0(arg2, &data_142e738de - rax_6 * 2, r8_1.d)
            
            int64_t var_68
            int64_t* rax_8 = sub_140d02bc0(&var_68, rbx_1)
            int16_t* const rdx_2
            
            if (rax_8[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rax_8
            
            int64_t r8_2 = -1
            
            do
                r8_2 += 1
            while (rdx_2[r8_2] != 0)
            
            sub_140a20ba0(arg2, rdx_2, r8_2.d)
            int64_t rcx_5 = var_68
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t var_58
            int64_t* rax_9 = sub_140d21830(rbx_1, &var_58, 0, 0)
            int16_t* const rdx_4
            
            if (rax_9[1].d == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *rax_9
            
            int64_t r8_3 = -1
            
            do
                r8_3 += 1
            while (rdx_4[r8_3] != 0)
            
            sub_140a20ba0(arg2, rdx_4, r8_3.d)
            int64_t rcx_8 = var_58
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int32_t rax_10 = *(rdi_1 + r12_2 + 8)
            int16_t* var_78
            int16_t* const rdx_8
            int32_t var_70
            
            if (rax_10 != 1)
                if (rax_10 == 2)
                    void* rcx_14 = rdi_1 + 0xc + r12_2
                    
                    if (*rcx_14 == 0)
                        var_78 = nullptr
                        var_70 = 0
                        sub_1405947f0(&var_78, 0x19)
                        int32_t rax_13 = var_70 + 0x19
                        var_70 = rax_13
                        
                        if (rax_13 s> 0)
                            sub_140594770(&var_78)
                        
                        UnDecorator::getReferenceType(var_78, u"::AddReferencedObjects()", 0x32)
                    else
                        int64_t var_38
                        int64_t* rax_12 = sub_140b63b70(rcx_14, &var_38)
                        int16_t* const r8_5
                        
                        if (rax_12[1].d == 0)
                            r8_5 = &data_142d40450
                        else
                            r8_5 = *rax_12
                        
                        sub_140a2e390(&var_78, u"::AddReferencedObjects(): %s", r8_5)
                        int64_t rcx_16 = var_38
                        
                        if (rcx_16 != 0)
                            sub_140a74f90(rcx_16)
                    
                    goto label_140d125e8
                
                var_78 = nullptr
                var_70 = 0
                rdx_8 = &data_142d40450
            else
                int64_t var_48
                int64_t* rax_11 = sub_140b63b70(rdi_1 + 0xc + r12_2, &var_48)
                int16_t* const r8_4
                
                if (rax_11[1].d == 0)
                    r8_4 = &data_142d40450
                else
                    r8_4 = *rax_11
                
                sub_140a2e390(&var_78, u"->%s", r8_4)
                int64_t rcx_12 = var_48
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
            label_140d125e8:
                
                rdx_8 = var_70 == 0 ? &data_142d40450 : var_78
            int64_t r8_6 = -1
            
            do
                r8_6 += 1
            while (rdx_8[r8_6] != 0)
            
            result = sub_140a20ba0(arg2, rdx_8, r8_6.d)
            int16_t* rcx_21 = var_78
            
            if (rcx_21 != 0)
                result = sub_140a74f90(rcx_21)
            
            r14_1 -= 1
            r12_2 -= 0x18
            temp0_1 = rsi_1
            rsi_1 -= 1
        while (temp0_1 - 1 s>= 0)

return result
