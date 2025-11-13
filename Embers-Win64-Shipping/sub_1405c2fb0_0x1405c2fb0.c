// 函数: sub_1405c2fb0
// 地址: 0x1405c2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* rbx_1 = r11_1 + sx.q(arg2) * 0x18
    void* r8_2 = *(r9_1 + 8)
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_1 + 0x14))
    
    if (r8_2 != 0)
        r9_1 = r8_2
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_3 = r9_1 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == arg2)
            *r8_3 = *(rbx_1 + 0x10)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t r8_5 = i_1 + ((i_1 + 1) << 1)
        i = *(r11_1 + (r8_5 << 3))
        r8_3 = r11_1 + (r8_5 << 3)

return sub_1405c3640(arg1, arg2, 1) __tailcall
