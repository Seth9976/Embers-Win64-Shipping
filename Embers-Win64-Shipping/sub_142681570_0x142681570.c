// 函数: sub_142681570
// 地址: 0x142681570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r9_1 = &arg1[7]
    uint32_t rdi_2 = (arg3 u>> 0x20).d
    int32_t r11_3 = (arg3.d - rdi_2) ^ rdi_2 u>> 0xd
    int32_t r10_3 = (0x9e3779b9 - rdi_2 - r11_3) ^ r11_3 << 8
    int32_t rcx_3 = (rdi_2 - r10_3 - r11_3) ^ r10_3 u>> 0xd
    int32_t r11_6 = (r11_3 - r10_3 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t r10_6 = (r10_3 - r11_6 - rcx_3) ^ r11_6 << 0x10
    int32_t rcx_6 = (rcx_3 - r10_6 - r11_6) ^ r10_6 u>> 5
    int32_t r11_9 = (r11_6 - r10_6 - rcx_6) ^ rcx_6 u>> 3
    int32_t r10_9 = (r10_6 - r11_9 - rcx_6) ^ r11_9 << 0xa
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t i = *(r9_1
        + (((sx.q(rcx_6 - r10_9 - r11_9) ^ zx.q(r10_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx_2 = sx.q(i) << 5
            int64_t rcx_12 = *(rdx_2 + r9_2)
            
            if (rcx_12.d == arg3.d && (rcx_12 u>> 0x20).d == rdi_2)
                *arg2 = i
                return arg2
            
            i = *(rdx_2 + r9_2 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
