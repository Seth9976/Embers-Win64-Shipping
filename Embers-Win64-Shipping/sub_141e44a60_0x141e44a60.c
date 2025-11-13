// 函数: sub_141e44a60
// 地址: 0x141e44a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg2 + 0x190))
int64_t result_1 = result
int32_t rbx = 0
int32_t arg_8 = 0
int32_t r12 = 0

if (result s<= 0)
label_141e44cc6:
    result.b = rbx s> 0
else
    int64_t r15_1 = 0
    int64_t r13_1 = 0
    
    while (true)
        int32_t rbp_1 = -1
        int64_t rcx = *(*(arg2 + 0x1a8) + r13_1)
        int64_t arg_10 = rcx
        rcx.b = sub_140b5b8a0(rcx.d, 0).b == 0
        result.b = arg_10:4.d != 0
        result.b |= rcx.b
        
        if (result.b != 0)
            void* const rcx_4
            
            if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
            labelid_38:
                rcx_4 = nullptr
            else
                int32_t rax_3 = sub_140b5ead0(arg_10.d) + arg_10:4.d
                void* r8_1 = arg1 + 0x120
                void* rcx_2 = *(r8_1 + 8)
                
                if (rcx_2 != 0)
                    r8_1 = rcx_2
                
                int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x130)) - 1) & sx.q(rax_3)) << 2))
                
                if (rax_5 == 0xffffffff)
                label_141e44b4e:
                    rcx_4 = nullptr
                else
                    int64_t r8_2 = *(arg1 + 0xe8)
                    
                    while (true)
                        int64_t rdx_3 = sx.q(rax_5) * 5
                        rcx_4 = r8_2 + (rdx_3 << 2)
                        
                        if (*(r8_2 + (rdx_3 << 2)) == arg_10)
                            break
                        
                        rax_5 = *(rcx_4 + 0xc)
                        
                        if (rax_5 == 0xffffffff)
                            goto label_141e44b4e_1
                    
                    if (rax_5 == 0xffffffff)
                    label_141e44b4e_1:
                        rcx_4 = nullptr
            
            rbx = arg_8
            result = rcx_4 + 8
            
            if (rcx_4 == 0)
                result = 0
            
            if (result != 0)
                rbp_1 = *result
        
        if (rbp_1 == 0xffffffff)
            int64_t rdi_1 = zx.q(r12)
            
            while (rdi_1.d != 0xffffffff)
                int64_t rbx_2 = *(arg2 + 0x1a8)
                rdi_1 = sx.q(*(rbx_2 + sx.q(rdi_1.d) * 0xc + 8))
                
                if (rdi_1.d != 0xffffffff)
                    int64_t rbx_3 = *(rbx_2 + rdi_1 * 0xc)
                    rbp_1 = -1
                    int32_t rcx_8
                    rcx_8.b = sub_140b5b8a0(rbx_3.d, 0) == 0
                    result.b = (rbx_3 u>> 0x20).d != 0
                    rcx_8.b |= result.b
                    
                    if (rcx_8.b != 0)
                        void* const rcx_12
                        
                        if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
                        labelid_1a:
                            rcx_12 = nullptr
                        else
                            int32_t rax_10 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                            void* r8_4 = arg1 + 0x120
                            void* rcx_10 = *(r8_4 + 8)
                            
                            if (rcx_10 != 0)
                                r8_4 = rcx_10
                            
                            int32_t rax_12 =
                                *(r8_4 + (((sx.q(*(arg1 + 0x130)) - 1) & sx.q(rax_10)) << 2))
                            
                            if (rax_12 == 0xffffffff)
                            label_141e44c60:
                                rcx_12 = nullptr
                            else
                                int64_t r8_5 = *(arg1 + 0xe8)
                                
                                while (true)
                                    int64_t rdx_8 = sx.q(rax_12) * 5
                                    rcx_12 = r8_5 + (rdx_8 << 2)
                                    
                                    if (*(r8_5 + (rdx_8 << 2)) == rbx_3)
                                        break
                                    
                                    rax_12 = *(rcx_12 + 0xc)
                                    
                                    if (rax_12 == 0xffffffff)
                                        goto label_141e44c60_1
                                
                                if (rax_12 == 0xffffffff)
                                label_141e44c60_1:
                                    rcx_12 = nullptr
                        
                        result = rcx_12 + 8
                        
                        if (rcx_12 == 0)
                            result = 0
                        
                        if (result != 0)
                            rbp_1 = *result
                
                if (rdi_1.d == 0)
                    break
                
                if (rbp_1 != 0xffffffff)
                    goto label_141e44c99
            
            if (rbp_1 == 0xffffffff)
                result.b = 0
                break
            
        label_141e44c99:
            
            if (sub_141e3c8a0(arg1, rbp_1, arg2).b == 0)
                result.b = 0
                break
            
            rbx = arg_8
        else
            rbx += 1
            arg_8 = rbx
            
            if (sub_141e3c8a0(arg1, rbp_1, arg2).b == 0)
                result.b = 0
                break
        
        r12 += 1
        r15_1 += 1
        r13_1 += 0xc
        
        if (r15_1 s>= result_1)
            goto label_141e44cc6

return result
