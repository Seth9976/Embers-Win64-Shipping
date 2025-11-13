// 函数: sub_140db7b70
// 地址: 0x140db7b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x798) != 0)
    void* rax_1 = *(arg1 + 0x790)
    void* r11_1 = arg1 + 0x750
    void* r10_1 = *(r11_1 + 0x20)
    void* r8_1 = arg1 + 0x780
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    if (*(r11_1 + (sx.q(*(r8_1 + (sx.q(*(arg1 + 0x798)) << 2) - 4)) << 3)) != 0)
        void* rax_3 = *(arg1 + 0x740)
        void* rdx_1 = arg1 + 0x100
        
        if (rax_3 != 0)
            rdx_1 = rax_3
        
        int64_t rax_5 = sx.q(*(arg1 + 0x748)) << 5
        int64_t rdi = *(rdx_1 + rax_5 - 0x20)
        int64_t rbx = *(rdx_1 + rax_5 - 0x18)
        *(rdx_1 + rax_5 - 0x18) = 0
        *(rdx_1 + rax_5 - 0x20) = 0
        sub_140dbad60(arg1 + 0x100, *(arg1 + 0x748) - 1, 1, 0)
        *arg2 = rdi
        arg2[1] = rbx
        return arg2

*arg2 = data_143e20ef0.q
void* rax_8 = data_143e20ef0:8
arg2[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 0xc) += 1

return arg2
