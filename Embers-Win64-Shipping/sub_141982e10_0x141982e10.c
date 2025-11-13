// 函数: sub_141982e10
// 地址: 0x141982e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_1 = sx.q(arg2) * 0x1c4
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_1 + r11_1 + 0x1c0))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(rbx_1 + r11_1 + 0x1bc)
            break
        
        r8_2 = r11_1 + 0x1bc + sx.q(i) * 0x1c4

return sub_1419830d0(arg1, arg2, 1) __tailcall
