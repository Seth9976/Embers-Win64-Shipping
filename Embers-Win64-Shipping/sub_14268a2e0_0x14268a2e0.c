// 函数: sub_14268a2e0
// 地址: 0x14268a2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* arg_10 = arg2

if (arg2[1].d != 0)
    int64_t r9_1 = sx.q(*(arg1 + 0x308))
    
    if (r9_1.d != 0)
        int32_t r13_1 = (r9_1 - 1).d
        void* r15_3 = *(arg1 + 0x300) - 0x10 + (r9_1 << 4)
        
        if (r13_1 s>= 0)
            int64_t r12_2 = sx.q(r13_1) << 4
            int32_t r8_3 = 0
            int32_t temp1_1
            
            do
                int64_t* rbx_1 = *(r15_3 + 8)
                void* rdi_1 = nullptr
                void* rax_2
                
                if (rbx_1 == 0)
                    rax_2 = *r15_3
                else
                    int32_t rax = 0
                    bool z_1
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_1 = true
                    else
                        rax = rbx_1[1].d
                        z_1 = false
                    
                    if (z_1)
                    label_14268a398:
                        rbx_1 = nullptr
                        rax_2 = *r15_3
                    else
                        while (true)
                            bool z_2
                            
                            if (rax == rbx_1[1].d)
                                rbx_1[1].d = rax + 1
                                z_2 = true
                            else
                                rbx_1[1].d
                                z_2 = false
                            
                            if (z_2)
                                rdi_1 = *r15_3
                                rax_2 = rdi_1
                                break
                            
                            rax = 0
                            bool z_3
                            
                            if (0 == rbx_1[1].d)
                                rbx_1[1].d = 0
                                z_3 = true
                            else
                                rax = rbx_1[1].d
                                z_3 = false
                            
                            if (z_3)
                                goto label_14268a398
                
                if (rax_2 == 0)
                label_14268a505:
                    int64_t* rcx_10 = *(r12_2 + *(arg1 + 0x300) + 8)
                    
                    if (rcx_10 != 0)
                        int32_t rax_12 = *(rcx_10 + 0xc)
                        *(rcx_10 + 0xc) -= 1
                        
                        if (rax_12 == 1 && rcx_10 != 0)
                            (*(*rcx_10 + 8))(rcx_10, 1)
                    
                    int32_t rdx_6 = *(arg1 + 0x308)
                    int32_t rcx_13 = rdx_6 - r13_1 - 1
                    
                    if (rcx_13 s>= 1)
                        rcx_13 = 1
                    
                    if (rcx_13 != 0)
                        int64_t rax_14 = *(arg1 + 0x300)
                        memcpy(rax_14 + r12_2, (sx.q(rdx_6 - rcx_13) << 4) + rax_14, rcx_13 << 4)
                        rdx_6 = *(arg1 + 0x308)
                    
                    result = zx.q(rdx_6 - 1)
                    *(arg1 + 0x308) = result.d
                label_14268a478:
                    
                    if (rbx_1 == 0)
                        r8_3 = 0
                    else
                        result = zx.q(rbx_1[1].d)
                        rbx_1[1].d -= 1
                        
                        if (result.d == 1)
                            goto label_14268a492
                        
                        r8_3 = 0
                else
                    void* rcx_1 = *(r15_3 + 8)
                    
                    if (rcx_1 == 0)
                        goto label_14268a505
                    
                    int32_t rax_3 = 0
                    
                    if (0 == *(rcx_1 + 8))
                        *(rcx_1 + 8) = 0
                    else
                        rax_3 = *(rcx_1 + 8)
                    
                    if (rax_3 s<= 0)
                        goto label_14268a505
                    
                    int32_t rcx_2 = *(rdi_1 + 0x98)
                    result = zx.q(rcx_2 u>> 1)
                    
                    if ((result.b & 1) != 0 && ((rcx_2 u>> 5).b & 1) == 0)
                        int32_t r11_1 = *(rdi_1 + 0x108)
                        int64_t* r9_2 = *(rdi_1 + 0x100)
                        
                        if (r11_1 s> 0)
                            void** result_1 = *arg2
                            void* r10_1 = *(*(arg1 + 0x4a8) + 8)
                            
                            do
                                int32_t i
                                
                                if (r10_1 == 0)
                                    i = -1
                                else
                                    i = ((1 << (*(r10_1 + 0x9c)).b).d - 1)
                                        & (*r9_2 u>> (*(r10_1 + 0xa0)).b).d
                                
                                void* rcx_6 = (sx.q(arg2[1].d) << 2) + result_1
                                result = result_1
                                
                                if (result_1 != rcx_6)
                                    while (*result != i)
                                        result += 4
                                        
                                        if (result == rcx_6)
                                            goto label_14268a467
                                    
                                    sub_14265cfd0(rdi_1)
                                    goto label_14268a505
                                
                            label_14268a467:
                                r8_3 += 1
                                r9_2 = &r9_2[1]
                            while (r8_3 s< r11_1)
                        
                        goto label_14268a478
                    
                    if (rbx_1 != 0)
                        result = zx.q(rbx_1[1].d)
                        rbx_1[1].d -= 1
                        
                        if (result.d == 1)
                        label_14268a492:
                            (**rbx_1)(rbx_1)
                            result = zx.q(*(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            r8_3 = 0
                
                arg2 = arg_10
                r12_2 -= 0x10
                r15_3 -= 0x10
                temp1_1 = r13_1
                r13_1 -= 1
            while (temp1_1 - 1 s>= 0)

return result
