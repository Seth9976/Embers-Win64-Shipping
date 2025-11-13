// 函数: sub_142afd750
// 地址: 0x142afd750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t* r9 = *(arg1 + 0x20)
char* r8 = *(arg1 + 0x10)
int32_t* result = *(arg1 + 0x30)
int32_t rdx = 0
int32_t i_2 = ((*(arg1 + 0x28) - r9) s>> 1).d
int32_t i_4 = *(arg1 + 0x18) - r8.d

if (i_4 s> i_2)
    *arg2 = 0xf
else
    i_2 = i_4

if (i_2 s>= 8)
    int32_t i = i_2 s>> 3
    int32_t i_1 = i
    i_2 &= 7
    
    do
        i -= 1
        *r9 = zx.w(*r8)
        r9[1] = zx.w(r8[1])
        r9[2] = zx.w(r8[2])
        r9[3] = zx.w(r8[3])
        r9[4] = zx.w(r8[4])
        r9[5] = zx.w(r8[5])
        r9[6] = zx.w(r8[6])
        uint16_t rcx_8 = zx.w(r8[7])
        r8 = &r8[8]
        r9[7] = rcx_8
        r9 = &r9[8]
    while (i s> 0)
    
    if (result != 0)
        int32_t r11_2 = 2
        
        do
            *result = rdx
            result[1] = r11_2 - 1
            rdx += 8
            result[2] = r11_2
            result[3] = r11_2 + 1
            i_1 -= 1
            result[4] = r11_2 + 2
            result[5] = r11_2 + 3
            result[6] = r11_2 + 4
            result[7] = r11_2 + 5
            r11_2 += 8
            result = &result[8]
        while (i_1 s> 0)

int32_t i_5 = i_2
int32_t i_3 = i_2

while (i_2 s> 0)
    i_2 -= 1
    *r9 = zx.w(*r8)
    r8 = &r8[1]
    r9 = &r9[1]

*(arg1 + 0x10) = r8
*(arg1 + 0x20) = r9

if (result != 0)
    if (i_5 s> 0)
        do
            *result = rdx
            i_3 -= 1
            result = &result[1]
            rdx += 1
        while (i_3 s> 0)
    
    *(arg1 + 0x30) = result

return result
