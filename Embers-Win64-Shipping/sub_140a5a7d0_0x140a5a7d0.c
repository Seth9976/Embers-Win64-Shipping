// 函数: sub_140a5a7d0
// 地址: 0x140a5a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = &arg1[7]
    void* r11_1 = *arg1
    void* r8_1 = *(r9_1 + 8)
    int64_t rbx_2 = sx.q(arg2) << 5
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(rbx_2 + r11_1 + 0x1c))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (rcx_1 << 2))
    void* r8_2 = r9_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *r8_2)
        if (i == arg2)
            *r8_2 = *(rbx_2 + r11_1 + 0x18)
            break
        
        r8_2 = r11_1 + 0x18 + (sx.q(i) << 5)

void* rax_7 = (sx.q(arg2) << 5) + *arg1
*(rax_7 + 8) = 0
*(rax_7 + 0x10) = 0xffffffff
return sub_1405c36f0(arg1, arg2, 1) __tailcall
