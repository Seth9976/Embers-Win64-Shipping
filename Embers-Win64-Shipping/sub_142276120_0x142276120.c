// 函数: sub_142276120
// 地址: 0x142276120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_2 = sx.q(arg2) * 0x12
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r11_1 + (rbx_2 << 3) + 0x84))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(r11_1 + (rbx_2 << 3) + 0x80)
            break
        
        r8_2 = r11_1 + 0x80 + sx.q(i) * 0x90

return sub_140dbb160(arg1, arg2, 1) __tailcall
