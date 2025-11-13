// 函数: sub_1409036a0
// 地址: 0x1409036a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x28)
char rax_1

if (arg2 != 0)
    rax_1 = sub_140a54810()

if (arg2 == 0 || rax_1 != 0)
    int32_t r15_1 = *(arg1 + 0x58)
    
    if (r15_1 s> 0)
        int32_t r12_1 = 0
        
        do
            r12_1 += 1
            int32_t temp1_1 = mods.dp.d(sx.q(*(arg1 + 0x60) + 1), r15_1)
            int64_t* r8_3 = (sx.q(temp1_1) << 4) + *(arg1 + 0x50)
            *(arg1 + 0x60) = temp1_1
            int64_t* rdi_1 = r8_3[1]
            
            if (rdi_1 == 0)
                sub_1409062e0(arg1 - 8, *(arg1 + 0x60))
            else
                int32_t rax_6 = 0
                bool z_1
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_1 = true
                else
                    rax_6 = rdi_1[1].d
                    z_1 = false
                
                if (z_1)
                label_140903744:
                    rdi_1 = nullptr
                    sub_1409062e0(arg1 - 8, *(arg1 + 0x60))
                else
                    while (true)
                        bool z_2
                        
                        if (rax_6 == rdi_1[1].d)
                            rdi_1[1].d = rax_6 + 1
                            z_2 = true
                        else
                            rdi_1[1].d
                            z_2 = false
                        
                        if (z_2)
                            break
                        
                        rax_6 = 0
                        bool z_3
                        
                        if (0 == rdi_1[1].d)
                            rdi_1[1].d = 0
                            z_3 = true
                        else
                            rax_6 = rdi_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140903744
                    
                    if (rdi_1 == 0)
                        sub_1409062e0(arg1 - 8, *(arg1 + 0x60))
                    else
                        void* rcx_5 = *r8_3
                        
                        if (rcx_5 == 0)
                            sub_1409062e0(arg1 - 8, *(arg1 + 0x60))
                        else
                            uint64_t result = sub_140903450(rcx_5)
                            
                            if (result != 0)
                                rdi_1[1].d -= 1
                                
                                if (rdi_1[1].d == 1)
                                    (**rdi_1)(rdi_1)
                                    int32_t r14_1 = *(rdi_1 + 0xc)
                                    *(rdi_1 + 0xc) -= 1
                                    
                                    if (r14_1 == 1)
                                        (*(*rdi_1 + 8))(rdi_1, zx.q(r14_1))
                                
                                if (arg1 != -0x28)
                                    LeaveCriticalSection(arg1 + 0x28)
                                
                                return result
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_10 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        while (r12_1 s< r15_1)

if (arg2 != 0)
    int64_t rsi_2 = sx.q(*(arg1 + 0x20))
    int32_t rax_15 = (rsi_2 + 1).d
    *(arg1 + 0x20) = rax_15
    
    if (rax_15 s> *(arg1 + 0x24))
        sub_1405a4d70(arg1 + 0x18)
    
    *(*(arg1 + 0x18) + (rsi_2 << 3)) = arg2

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return 0
