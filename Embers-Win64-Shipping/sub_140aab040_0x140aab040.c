// 函数: sub_140aab040
// 地址: 0x140aab040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t r11_1 = arg3[3].d
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_3 = (arg3[1].d - r11_1) ^ r11_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - r11_1) ^ r10_3 << 8
    int32_t r11_4 = (r11_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - r11_4) ^ r11_4 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - r11_4) ^ r10_6 << 0x10
    int32_t r11_7 = (r11_4 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - r11_7) ^ r11_7 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - r11_7) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(r11_7 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_2 = sx.q(i) * 0xa
            
            if (*(r8_1 + (rdx_2 << 3)) == *arg3 && *(r8_1 + (rdx_2 << 3) + 0x10) == arg3[2])
                *arg2 = i
                return arg2
            
            i = *(r8_1 + (rdx_2 << 3) + 0x48)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
