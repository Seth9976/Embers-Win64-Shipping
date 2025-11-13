// 函数: sub_1426569e0
// 地址: 0x1426569e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_5 = sx.q(*(arg1 + 0x3a0))
int32_t r9 = 0

if (rax_5.d s> 0)
    void* r11_1 = *(arg1 + 0x398)
    int64_t r8_1 = 0
    int32_t* rax = r11_1 + 0x10
    
    do
        if (*rax == arg2)
            return *((sx.q(r9) << 5) + r11_1 + 0x18)
        
        r9 += 1
        r8_1 += 1
        rax = &rax[8]
    while (r8_1 s< rax_5)

return 0
