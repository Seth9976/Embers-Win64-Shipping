// 函数: sub_14096fa50
// 地址: 0x14096fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t i = 0

if (*(arg1 + 0x60) s> 0)
    void* r14_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x58)
        int32_t j = 0
        void* rsi_1 = r14_1 + rax_1
        
        if (*(r14_1 + rax_1 + 0x38) s> 0)
            int64_t rdi_1 = 0
            
            do
                int64_t* rcx = *(*(rsi_1 + 0x30) + rdi_1 + 8)
                
                if ((**rcx)(rcx, arg2) != 0)
                    r12.b = 1
                    break
                
                j += 1
                rdi_1 += 0x50
            while (j s< *(rsi_1 + 0x38))
        
        i += 1
        r14_1 += 0x50
    while (i s< *(arg1 + 0x60))

return zx.q(r12.b)
