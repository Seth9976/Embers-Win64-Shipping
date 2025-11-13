// 函数: sub_141f967d0
// 地址: 0x141f967d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r11_1 = *arg1
    void* r9_1 = &arg1[7]
    void* rbx_1 = r11_1 + sx.q(arg2) * 0xc
    void* r8_2 = *(r9_1 + 8)
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_1 + 8))
    
    if (r8_2 != 0)
        r9_1 = r8_2
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_3 = r9_1 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == arg2)
            *r8_3 = *(rbx_1 + 4)
            break
        
        int64_t i_1 = sx.q(i)
        i = *(r11_1 + ((i_1 * 3 + 1) << 2))
        r8_3 = r11_1 + ((i_1 * 3 + 1) << 2)

return sub_14090a460(arg1, arg2, 1) __tailcall
