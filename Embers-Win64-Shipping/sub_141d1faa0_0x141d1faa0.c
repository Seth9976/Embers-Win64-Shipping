// 函数: sub_141d1faa0
// 地址: 0x141d1faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x48))()
int64_t i_1 = sx.q(result.d)

if (result.d s> 0)
    void* r9_1 = nullptr
    result = 8
    int64_t i
    
    do
        int64_t r11_1 = arg1[1]
        int64_t rcx = sx.q(*(r9_1 + r11_1))
        
        if (rcx.d s>= 0)
            *(result + r11_1 - 8) -= *(*arg2 + (rcx << 2))
        
        int64_t rdx_2 = sx.q(*(r9_1 + r11_1 + 4))
        
        if (rdx_2.d s>= 0)
            int64_t r8_1 = arg1[1]
            *(r8_1 + result - 4) -= *(*arg2 + (rdx_2 << 2))
        
        int64_t rdx_4 = sx.q(*(r9_1 + r11_1 + 8))
        
        if (rdx_4.d s>= 0)
            int32_t* r8_2 = arg1[1]
            *(r8_2 + result) -= *(*arg2 + (rdx_4 << 2))
        
        r9_1 += 0xc
        result += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
