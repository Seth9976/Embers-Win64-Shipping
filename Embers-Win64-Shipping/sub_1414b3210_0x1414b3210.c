// 函数: sub_1414b3210
// 地址: 0x1414b3210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x610))

if (result.d s> 0)
    void* r11_1 = arg2 + 0x15b8
    void* rax = *(r11_1 + 0x10)
    int64_t r8_1 = 0
    int64_t* rdx = *(arg1 + 0x608)
    
    if (rax != 0)
        r11_1 = rax
    
    do
        int32_t rax_2 = *(*rdx + 0x110)
        int32_t r9_2 = rax_2 & 0x1f
        
        if (rax_2 s< 0)
            rax_2 += 0x1f
        
        if (test_bit(*(r11_1 + (sx.q(rax_2 s>> 5) << 2)), r9_2))
            result.b = 1
            return result
        
        r8_1 += 1
        rdx = &rdx[1]
    while (r8_1 s< result)

result.b = 0
return result
