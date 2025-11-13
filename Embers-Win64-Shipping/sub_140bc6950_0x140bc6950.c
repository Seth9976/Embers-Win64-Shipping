// 函数: sub_140bc6950
// 地址: 0x140bc6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int32_t i

if (*(rdi + 0x30) != *(rdi + 0x5c))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = rdi + 0x60
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    i = *(r8_1 + (((sx.q(*(rdi + 0x70)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(rdi + 0x28)
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            
            if (*(r8_2 + (rdx_3 << 2)) == arg2)
                goto label_140bc69c5
            
            i = *(r8_2 + (rdx_3 << 2) + 0xc)
        while (i != 0xffffffff)

i = -1
label_140bc69c5:
i.b = i != 0xffffffff
return i
