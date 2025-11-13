// 函数: sub_142bc5ff0
// 地址: 0x142bc5ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x14)
int32_t rbx = 0
int32_t rsi = *(arg1 + 0xc)
uint32_t r9 = 0
char* rdi = *arg1
int32_t r10 = 1
uint32_t r11 = 0x80
int32_t result = 1

if (i_1 != 0)
    int32_t i
    
    do
        if (result != 0)
            while (arg2 u< arg3)
                r9 = zx.d(*arg2)
                r10 ^= 1
                arg2 = &arg2[1]
                
                if (r9 != 0)
                    break
        
        if (r10 != 0)
            rbx |= r11
        
        r11 u>>= 1
        int32_t temp0_1 = rsi
        rsi -= 1
        
        if (temp0_1 == 1)
            *rdi = rbx.b
            rbx = 0
            *arg1 += sx.q(arg1[1].d)
            rdi = *arg1
            rsi = *(arg1 + 0xc)
            r11 = 0x80
        else if (r11 == 0)
            *rdi = rbx.b
            rbx = 0
            rdi = &rdi[1]
            r11 = 0x80
        
        r9 -= 1
        result.b = r9 s<= 0
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (r11 != 0x80)
        *rdi = rbx.b

return result
