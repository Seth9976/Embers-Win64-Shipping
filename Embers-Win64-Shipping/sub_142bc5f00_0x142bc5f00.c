// 函数: sub_142bc5f00
// 地址: 0x142bc5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x14)
int32_t rbx = 0
int32_t rbp = *(arg1 + 0xc)
uint32_t j_1 = 0
char* rsi = *arg1
uint32_t j = 0
int32_t r9 = 1
uint32_t r11 = 0x80
int32_t r8 = 1

if (i_1 != 0)
    int32_t i
    
    do
        if (r8 != 0)
            do
                if (r9 == 0)
                    r9 = 1
                    j = j_1
                else
                    if (arg2 u>= arg3)
                        break
                    
                    uint32_t r10 = zx.d(*arg2)
                    arg2 = &arg2[1]
                    j_1 = r10 & 0xf
                    j = r10 u>> 4
                    r9 = 0
            while (j == 0)
        
        if (r9 != 0)
            rbx |= r11
        
        r11 u>>= 1
        int32_t temp0_1 = rbp
        rbp -= 1
        
        if (temp0_1 == 1)
            *rsi = rbx.b
            *arg1 += sx.q(arg1[1].d)
            rbp = *(arg1 + 0xc)
            rbx = 0
            rsi = *arg1
            r11 = 0x80
        else if (r11 == 0)
            *rsi = rbx.b
            rbx = 0
            rsi = &rsi[1]
            r11 = 0x80
        
        j -= 1
        r8.b = j s<= 0
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (r11 != 0x80)
        *rsi = rbx.b

return j
