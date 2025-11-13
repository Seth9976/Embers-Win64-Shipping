// 函数: sub_141ab41e0
// 地址: 0x141ab41e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg1

if (*(arg1 + 0x108) != *(arg1 + 0x12c))
    int32_t rdi_1 = arg3[1]
    int32_t rsi_1 = *arg3
    void* r8 = r11 + 0x130
    void* rdx = *(r8 + 8)
    int32_t r10_3 = (rsi_1 - rdi_1) ^ rdi_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rdi_1) ^ r10_3 << 8
    int32_t rcx_3 = (rdi_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rcx_3) ^ r10_6 << 0x10
    int32_t rcx_6 = (rcx_3 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rcx_6) ^ rcx_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rcx_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i = *(r8
        + (((sx.q(rcx_6 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(*(r11 + 0x140)) - 1)) << 2))
    
    if (i != 0xffffffff)
        void* rcx_12 = *(r11 + 0x100)
        
        if (rcx_12 != 0)
            r11 = rcx_12
        
        do
            int32_t* rcx_14 = sx.q(i) << 6
            
            if (*(rcx_14 + r11) == rsi_1 && *(rcx_14 + r11 + 4) == rdi_1)
                *arg2 = i
                return arg2
            
            i = *(rcx_14 + r11 + 0x38)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
