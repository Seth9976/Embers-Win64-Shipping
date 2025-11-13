// 函数: sub_141f6d4a0
// 地址: 0x141f6d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x440)

if (result != 0)
    int32_t i = 0
    
    if (*(result + 0xc0) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            void* r14_1 = *(rsi_1 + *(result + 0xb8))
            
            if (r14_1 != 0)
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_1 = (rbp_1 + 1).d
                arg2[1].d = rax_1
                
                if (rax_1 s> *(arg2 + 0xc))
                    sub_14083a7e0(arg2)
                
                int64_t* rdx_1 = *arg2 + rbp_1 * 0xc
                
                if (rdx_1 != 0)
                    *rdx_1 = *(r14_1 + 0x28)
                    rdx_1[1].b = 2
            
            result = *(arg1 + 0x440)
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(result + 0xc0))

return result
