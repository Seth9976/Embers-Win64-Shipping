// 函数: sub_141bab520
// 地址: 0x141bab520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_5 = sx.q(*(arg1 + 0x110))
int32_t r9 = 0

if (rax_5.d s> 0)
    int64_t r8_1 = 0
    
    do
        void* rax_1
        
        if (r8_1 s>= 0 && r9 s< *(arg1 + 0x110))
            rax_1 = *(*(arg1 + 0x108) + (r8_1 << 3))
        
        int64_t rax_2
        
        if (r8_1 s< 0 || r9 s>= *(arg1 + 0x110) || rax_1 == 0)
            rax_2 = 0
        else
            rax_2 = *(rax_1 + 0x30)
        
        if (rax_2 == arg2)
            return zx.q(r9)
        
        r9 += 1
        r8_1 += 1
    while (r8_1 s< rax_5)

return 0xffffffff
