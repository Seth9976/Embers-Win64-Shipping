// 函数: sub_1428664a0
// 地址: 0x1428664a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
__chkstk(0x30)

if (*(arg1 + 0x38) != 0)
    if (arg2 != 0xfffffffe)
        goto label_14286652c
    
    if ((*(*(arg1 + 0x488) + 0x1c) & 0x30000) == 0)
        arg2 = 0
        arg_10 = 0
    label_14286652c:
        int64_t rbx_1
        void* const rdi_1
        int64_t r12_1
        void* const r13_1
        
        if ((*(arg1 + 0x5c4) & 0x400000) == 0)
            void* rax_7 = *(arg1 + 0x508)
            r13_1 = *(rax_7 + 0x178)
            r12_1 = *(rax_7 + 0x170)
            int32_t rcx_4 = *(*(arg1 + 0x488) + 0x1c) & 0x30000
            
            if (rcx_4 == 0x10000)
                rbx_1 = 1
                rdi_1 = &data_1434dc6ec
            else if (rcx_4 == 0x20000)
                rdi_1 = &data_1434dc6ee
                rbx_1 = 1
            else if (rcx_4 == 0x30000)
                rbx_1 = 2
                rdi_1 = &data_1434dc6ec
            else
                rdi_1 = *(arg1 + 0x690)
                
                if (rdi_1 != 0)
                    rbx_1 = *(arg1 + 0x688)
                else
                    rdi_1 = &data_1434dc6e0
                    rbx_1 = 5
        else
            int32_t rcx_2 = *(*(arg1 + 0x488) + 0x1c) & 0x30000
            
            if (rcx_2 == 0x10000)
                r12_1 = 1
                r13_1 = &data_1434dc6ec
            else if (rcx_2 == 0x20000)
                r13_1 = &data_1434dc6ee
                r12_1 = 1
            else if (rcx_2 == 0x30000)
                r12_1 = 2
                r13_1 = &data_1434dc6ec
            else
                r13_1 = *(arg1 + 0x690)
                
                if (r13_1 != 0)
                    r12_1 = *(arg1 + 0x688)
                else
                    r13_1 = &data_1434dc6e0
                    r12_1 = 5
            
            void* rax_6 = *(arg1 + 0x508)
            rdi_1 = *(rax_6 + 0x178)
            rbx_1 = *(rax_6 + 0x170)
        
        int32_t r15_1 = 0
        int64_t r14_1 = 0
        
        if (r12_1 != 0)
            do
                uint16_t rsi_1 = *(r13_1 + (r14_1 << 1))
                int64_t rax_9 = 0
                
                if (rbx_1 != 0)
                    do
                        if (*(rdi_1 + (rax_9 << 1)) == rsi_1)
                            if (rsi_1 - 1 u<= 0x1d)
                                if ((zx.q(rsi_1) - 1) * 0xc == -0xfffffffebcb23a90)
                                    arg2 = arg_10
                                else
                                    int32_t r9_1 = *(&data_1434dc570 + (zx.q(rsi_1) - 1) * 0xc)
                                    int32_t r8_1 = *((zx.q(rsi_1) - 1) * 0xc + 0x1434dc574)
                                    char arg_8 = (rsi_1 u>> 8).b
                                    char arg_9 = rsi_1.b
                                    arg2 = arg_10
                                    
                                    if (sub_1428546e0(arg1, 0x20005, r8_1, r9_1, &arg_8) != 0)
                                        if (arg2 == r15_1)
                                            return zx.q(rsi_1)
                                        
                                        r15_1 += 1
                            
                            break
                        
                        rax_9 += 1
                    while (rax_9 u< rbx_1)
                
                r14_1 += 1
            while (r14_1 u< r12_1)
        
        if (arg2 == 0xffffffff)
            return zx.q(r15_1.w)
    else
        int32_t rax_3 = *(*(*(arg1 + 0xa8) + 0x238) + 0x18)
        
        if (rax_3 == 0x300c02b)
            return zx.q(arg2 + 0x19)
        
        if (rax_3 == 0x300c02c)
            return 0x18

return 0
