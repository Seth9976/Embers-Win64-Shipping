// 函数: sub_141a644b0
// 地址: 0x141a644b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg1

if (arg1[1].b == 0)
    void* rdi_1
    
    for (; arg3 != data_143f29fb0; arg3 = *rdi_1)
        void* const rcx_2
        
        if (arg4[0xb].d - *(arg4 + 0x84) == 0)
        label_141a64560:
            rcx_2 = nullptr
        else
            void* r9 = &arg4[0x11]
            void* rcx = *(r9 + 8)
            
            if (rcx != 0)
                r9 = rcx
            
            int32_t rax_2 = *(r9 + (((sx.q(arg4[0x13].d) - 1) & sx.q(arg3)) << 2))
            
            if (rax_2 == 0xffffffff)
            label_141a64560_1:
                rcx_2 = nullptr
            else
                int64_t r9_1 = arg4[0xa]
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_2) * 5
                    rcx_2 = r9_1 + (rdx_3 << 3)
                    
                    if (*(r9_1 + (rdx_3 << 3)) == arg3)
                        break
                    
                    rax_2 = *(rcx_2 + 0x20)
                    
                    if (rax_2 == 0xffffffff)
                        goto label_141a64560_2
                
                if (rax_2 == 0xffffffff)
                label_141a64560_2:
                    rcx_2 = nullptr
        
        rdi_1 = rcx_2 + 8
        
        if (rcx_2 == 0)
            rdi_1 = nullptr
        
        int32_t* rcx_6
        
        if (arg4[1].d - *(arg4 + 0x34) == 0)
        label_141a645c4:
            rcx_6 = nullptr
        else
            void* rcx_3 = arg4[8]
            void* r9_2 = &arg4[7]
            
            if (rcx_3 != 0)
                r9_2 = rcx_3
            
            int32_t rax_4 = *(r9_2 + (((sx.q(arg4[9].d) - 1) & sx.q(arg3)) << 2))
            
            if (rax_4 == 0xffffffff)
            label_141a645c4_1:
                rcx_6 = nullptr
            else
                while (true)
                    rcx_6 = sx.q(rax_4) * 0xf8 + *arg4
                    
                    if (*rcx_6 == arg3)
                        break
                    
                    rax_4 = rcx_6[0x3c]
                    
                    if (rax_4 == 0xffffffff)
                        goto label_141a645c4_2
                
                if (rax_4 == 0xffffffff)
                label_141a645c4_2:
                    rcx_6 = nullptr
        
        void* rax_5 = &rcx_6[2]
        
        if (rcx_6 == 0)
            rax_5 = nullptr
        
        if (rdi_1 == 0)
            break
        
        if (rax_5 == 0)
            break
        
        int32_t rax_6 = *(rax_5 + 0x40)
        
        if (r10 != 0)
            int32_t r10_2 = (r10 - rax_6) ^ rax_6 u>> 0xd
            int32_t r8_2 = (0x9e3779b9 - r10_2 - rax_6) ^ r10_2 << 8
            int32_t r10_6 = (rax_6 - r8_2 - r10_2) ^ r8_2 u>> 0xd
            int32_t rdx_10 = (r10_2 - r8_2 - r10_6) ^ r10_6 u>> 0xc
            int32_t r8_5 = (r8_2 - rdx_10 - r10_6) ^ rdx_10 << 0x10
            int32_t r10_9 = (r10_6 - r8_5 - rdx_10) ^ r8_5 u>> 5
            int32_t rdx_13 = (rdx_10 - r8_5 - r10_9) ^ r10_9 u>> 3
            int32_t r8_8 = (r8_5 - rdx_13 - r10_9) ^ rdx_13 << 0xa
            r10 = (r10_9 - r8_8 - rdx_13) ^ r8_8 u>> 0xf
        else
            r10 = rax_6

*(arg2 + 8) = *(arg1 + 8)
arg2[1].b = 1
*arg2 = r10
return arg2
