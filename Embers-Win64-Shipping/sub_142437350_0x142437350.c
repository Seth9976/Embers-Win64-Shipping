// 函数: sub_142437350
// 地址: 0x142437350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4 = sx.q(*(arg1 + 0x198))
int32_t r9 = 0

if (rax_4.d s> 0)
    int64_t* r11_1 = *(arg1 + 0x190)
    int64_t* r8_1 = r11_1
    int64_t rcx = 0
    
    do
        if (*(*r8_1 + 0x30) == arg2)
            return r11_1[sx.q(r9)]
        
        r9 += 1
        rcx += 1
        r8_1 = &r8_1[1]
    while (rcx s< rax_4)

return 0
