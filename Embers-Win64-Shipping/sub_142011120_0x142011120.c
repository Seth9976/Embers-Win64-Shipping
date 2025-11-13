// 函数: sub_142011120
// 地址: 0x142011120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* result = (*(*(arg1 - 0x30) + 0x150))(arg1 - 0x30)

if (result != 0)
    int32_t rcx_1 = *(arg1 + 0x10)
    
    if (rcx_1 != 0)
        void* rdx_1 = *(result + 0x188)
        int64_t r14_1 = 0
        void* var_40_1 = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 8
        void* r12_1
        
        if (rdx_1 == 0)
            r12_1 = result + 0x308
        else
            r12_1 = *(rdx_1 + 0xc8)
        
        int64_t r15_1 = sx.q(rcx_1 - 1)
        void var_80
        
        if (rcx_1 - 1 s>= 0)
            int64_t temp0_1
            
            do
                void* rbp_1 = *(*(arg1 + 8) + (r15_1 << 3))
                
                if (rbp_1 != 0 && (*(rbp_1 + 0x59) & 0x40) != 0)
                    void* rax_5 = *(rbp_1 + 0x10)
                    
                    if (rax_5 == 0)
                    label_142011241:
                        
                        if (sub_141ffb0b0(rbp_1) != 0)
                            int64_t rbx_1 = sx.q(var_38_1)
                            int32_t rax_10 = (rbx_1 + 1).d
                            var_38_1 = rax_10
                            
                            if (rax_10 s> var_34_1)
                                sub_140809370(&var_80, rbx_1.d)
                            
                            void* rcx_8 = &var_80
                            
                            if (var_40_1 != 0)
                                rcx_8 = var_40_1
                            
                            *(rcx_8 + (rbx_1 << 3)) = rbp_1
                            int32_t rbx_2 = 0
                            int32_t rcx_9 = *(arg1 + 0x10)
                            
                            if (rcx_9 s> 0)
                                int64_t* rdi_1 = nullptr
                                int32_t rax_12
                                
                                do
                                    int64_t r9_1 = *(arg1 + 8)
                                    rax_12 = rcx_9
                                    
                                    if (*(rdi_1 + r9_1) == rbp_1)
                                        int32_t rax_14 = rax_12 - rbx_2 - 1
                                        
                                        if (rax_14 s>= 1)
                                            rax_14 = 1
                                        
                                        if (rax_14 != 0)
                                            memcpy(r9_1 + (sx.q(rbx_2) << 3), 
                                                r9_1 + (sx.q(rcx_9 - rax_14) << 3), rax_14 << 3)
                                            rcx_9 = *(arg1 + 0x10)
                                        
                                        *(arg1 + 0x10) = rcx_9 - 1
                                        sub_1405c53d0(arg1 + 8)
                                        rax_12 = *(arg1 + 0x10)
                                        rbx_2 -= 1
                                        rdi_1 -= 8
                                    
                                    rbx_2 += 1
                                    rdi_1 = &rdi_1[1]
                                    rcx_9 = rax_12
                                while (rbx_2 s< rax_12)
                    else
                        int32_t rcx_2 = *(rax_5 + 0xcc)
                        
                        if ((1 & (rcx_2 u>> 0x12).b) == 0 && (1 & (rcx_2 u>> 7).b) != 0)
                            goto label_142011241
                        
                        int64_t var_88
                        sub_140d3a3a0(&var_88, rbp_1)
                        
                        if (sub_1420e48e0(r12_1, var_88) == 0)
                            goto label_142011241
                
                temp0_1 = r15_1
                r15_1 -= 1
            while (temp0_1 - 1 s>= 0)
        
        void* rbx_3 = &var_80
        
        if (var_40_1 != 0)
            rbx_3 = var_40_1
        
        int64_t rdi_2 = sx.q(var_38_1) << 3
        result = rbx_3 + rdi_2
        uint64_t rdi_3 = rdi_2 u>> 3
        
        if (rbx_3 u> result)
            rdi_3 = 0
        
        if (rdi_3 != 0)
            do
                int64_t* rcx_14 = *rbx_3
                
                if (rcx_14 != 0)
                    result = sub_141dbe590(rcx_14, 0, 1)
                
                rbx_3 += 8
                r14_1 += 1
            while (r14_1 != rdi_3)
        
        if (var_40_1 != 0)
            result = sub_140a74f90(var_40_1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
