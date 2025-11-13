// 函数: sub_140371a40
// 地址: 0x140371a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = -2

if (arg1 != 0)
    void* rsi_1 = *(arg1 + 0x28)
    
    if (rsi_1 != 0)
        int32_t rbx_1 = arg2
        int32_t rbp_3
        
        if (arg2 s< 0)
            rbx_1 = neg.d(rbx_1)
            rbp_3 = 0
            
            if (rbx_1 == 0 || (rbx_1 & 0xfffffff8) == 8)
            label_140371a9e:
                int64_t rdx = *(rsi_1 + 0x38)
                
                if (rdx != 0 && *(rsi_1 + 0x28) != rbx_1)
                    (*(arg1 + 0x38))(*(arg1 + 0x40), rdx)
                    *(rsi_1 + 0x38) = 0
                
                *(rsi_1 + 8) = rbp_3
                *(rsi_1 + 0x28) = rbx_1
                void* rax_5 = *(arg1 + 0x28)
                
                if (rax_5 != 0)
                    *(rax_5 + 0x2c) = 0
                    *(rax_5 + 0x34) = 0
                    int64_t* rax_6 = *(arg1 + 0x28)
                    
                    if (rax_6 != 0)
                        *(rax_6 + 0x1c) = 0
                        *(arg1 + 0x1c) = 0
                        *(arg1 + 0xc) = 0
                        *(arg1 + 0x20) = 0
                        int32_t rcx_1 = rax_6[1].d
                        
                        if (rcx_1 != 0)
                            *(arg1 + 0x4c) = rcx_1 & 1
                        
                        *rax_6 = 0
                        *(rax_6 + 0xc) = 0
                        *(rax_6 + 0x14) = 0x8000
                        rax_6[4] = 0
                        rax_6[8] = 0
                        rax_6[0x10] = &rax_6[0xa9]
                        rax_6[0xc] = &rax_6[0xa9]
                        rax_6[0xb] = &rax_6[0xa9]
                        rax_6[0x37b] = -0xffffffff
                        r14 = 0
        else
            rbp_3 = (rbx_1 u>> 4) + 1
            
            if (rbx_1 s< 0x30)
                rbx_1 &= 0xf
            
            if (rbx_1 == 0 || (rbx_1 & 0xfffffff8) == 8)
                goto label_140371a9e

return zx.q(r14)
