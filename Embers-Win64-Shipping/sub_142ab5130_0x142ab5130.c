// 函数: sub_142ab5130
// 地址: 0x142ab5130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t rcx = *(arg1 + 0xc)
int32_t rdi = -1
uint8_t rsi = arg2
int32_t r11 = rcx

if (arg2 != 0 && *(arg1 + 0x28) s< rcx)
    r11 = *(arg1 + 0x28)

if (r11 s<= 0xffffffff)
    int32_t r9_1 = 0xffffffff - rcx
    int32_t rbx_2 = (0xffffffff - rcx) << 2
    
    do
        int64_t zmm0 = float.d(result)
        
        if (result s< 0)
            zmm0 = zmm0 f+ 1.8446744073709552e+19
        
        if (0x43abc16d674ec800 f< zmm0)
            break
        
        if (*(arg1 + 0x40) == 0)
            if (r9_1 u> 0xf)
                arg2 = 0
            else
                arg2 = (*(arg1 + 0x30) u>> rbx_2.b).b & 0xf
        else if (r9_1 s< 0 || r9_1 s>= *(arg1 + 0x10))
            arg2 = 0
        else
            arg2 = *(sx.q(r9_1) + *(arg1 + 0x30))
        
        rdi -= 1
        r9_1 -= 1
        rbx_2 -= 4
        result = sx.q(arg2) + result * 0xa
    while (rdi s>= r11)

if (rsi == 0 && result != 0)
    int64_t i
    
    do
        i = result u/ 0xa
        
        if (result != i * 0xa)
            break
        
        result = i
    while (i != 0)

return result
