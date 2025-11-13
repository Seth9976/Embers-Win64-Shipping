// 函数: sub_141dcb280
// 地址: 0x141dcb280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x18)

if (r9 != 0)
    void* r10_1 = *(arg1 + 0x50)
    
    if (r10_1 != 0)
        int32_t* rdx_4
        
        if (*(r9 + 0x40) == *(r9 + 0x6c))
        label_141dcb2ee:
            rdx_4 = nullptr
        else
            void* rdx_1 = *(r9 + 0x78)
            void* r8_1 = r9 + 0x70
            int64_t r10_2 = sx.q(*(r10_1 + 0x28))
            
            if (rdx_1 != 0)
                r8_1 = rdx_1
            
            int32_t rax_2 = *(r8_1 + (((sx.q(*(r9 + 0x80)) - 1) & r10_2) << 2))
            
            if (rax_2 == 0xffffffff)
            label_141dcb2ee_1:
                rdx_4 = nullptr
            else
                while (true)
                    rdx_4 = (sx.q(rax_2) << 4) + *(r9 + 0x38)
                    
                    if (*rdx_4 == r10_2.d)
                        break
                    
                    rax_2 = rdx_4[2]
                    
                    if (rax_2 == 0xffffffff)
                        goto label_141dcb2ee_2
                
                if (rax_2 == 0xffffffff)
                label_141dcb2ee_2:
                    rdx_4 = nullptr
        
        void* rax_3 = &rdx_4[1]
        
        if (rdx_4 == 0)
            rax_3 = nullptr
        
        if (rax_3 != 0)
            return zx.q(*rax_3)

return 0
