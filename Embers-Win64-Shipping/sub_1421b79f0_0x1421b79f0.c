// 函数: sub_1421b79f0
// 地址: 0x1421b79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1d0)

if (result != 0)
    result = result[6]
    
    if (result != 0)
        result = result[0xa]
        int32_t i = 0
        void* rdx = **result
        void* var_48_1 = rdx
        
        if (*(rdx + 0x30) s> 0)
            int64_t r8 = 0
            int64_t* r12_1 = nullptr
            int64_t arg_8 = 0
            
            do
                int64_t* rbx_1
                
                if (i s< *(arg1 + 0x1f0))
                    rbx_1 = *(r12_1 + *(arg1 + 0x1e8))
                
                if (i s>= *(arg1 + 0x1f0) || rbx_1 == 0)
                    int32_t rsi_1 = 0
                    
                    if (*(arg3 + 0x40) s<= 0)
                        goto label_1421b7af0
                    
                    int64_t* rdi_1 = nullptr
                    void* rbx_3
                    
                    while (true)
                        rbx_3 = *(rdi_1 + *(arg3 + 0x38))
                        
                        if (rbx_3 != 0)
                            void* rax_1 = sub_142554870()
                            void* rdx_1 = *(rbx_3 + 0x10)
                            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                            
                            if (rax_2.d s<= *(rdx_1 + 0x38)
                                    && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                                    && *(rbx_3 + 0x28) s< 0 && i s< *(rbx_3 + 0x38))
                                break
                        
                        rsi_1 += 1
                        rdi_1 = &rdi_1[1]
                        
                        if (rsi_1 s>= *(arg3 + 0x40))
                            goto label_1421b7ae6
                    
                    rbx_1 = *(r12_1 + *(rbx_3 + 0x30))
                    
                    if (rbx_1 == 0)
                    label_1421b7ae6:
                        rdx = var_48_1
                        r8 = arg_8
                    label_1421b7af0:
                        void* rcx_1 = *(arg1 + 0x1d0)
                        
                        if ((*(rcx_1 + 0x46) & 1) == 0)
                        label_1421b7b16:
                            void* rax_6 = *(rdx + 0x28)
                            void* rdx_2 = rdx + 0x10
                            
                            if (rax_6 != 0)
                                rdx_2 = rax_6
                            
                            rbx_1 = sub_1423657b0(*(rcx_1 + 0x30), *(rdx_2 + r8))
                        else
                            rbx_1 = *(arg1 + 0x1a0)
                            
                            if (rbx_1 == 0)
                                rbx_1 = *(*(arg3 + 0x30) + 0x30)
                                
                                if (rbx_1 == 0)
                                    goto label_1421b7b16
                
                if (sub_1423b4730(rbx_1, 0, arg4) != 0 || rbx_1 == 0)
                    rbx_1 = sub_14210f630(0)
                
                int64_t rdi_2 = sx.q(arg2[3].d)
                int32_t rax_10 = (rdi_2 + 1).d
                arg2[3].d = rax_10
                
                if (rax_10 s> *(arg2 + 0x1c))
                    sub_140bcefd0(arg2, rdi_2.d)
                
                result = arg2[2]
                int64_t* result_1 = arg2
                rdx = var_48_1
                
                if (result != 0)
                    result_1 = result
                
                r8 = arg_8 + 0x18
                i += 1
                arg_8 = r8
                r12_1 = &r12_1[1]
                result_1[rdi_2] = rbx_1
            while (i s< *(rdx + 0x30))

return result
