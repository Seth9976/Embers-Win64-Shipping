// 函数: sub_142ba9dd0
// 地址: 0x142ba9dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x204) == 3)
    *(arg1 + 0x18) = 0x9c
    return 

uint64_t r8 = zx.q(*(arg1 + 0x250))
void* r11 = *(arg1 + 0x258)
void* rcx = r11 + r8 * 0x18
bool cond:1 = r11 != rcx

if (r11 u< rcx)
    while (*(r11 + 0xc) != *arg2)
        r11 += 0x18
        
        if (r11 u>= rcx)
            break
    
    cond:1 = r11 != rcx

if (cond:1)
    goto label_142ba9e3c

if (r8.d u>= *(arg1 + 0x254))
    *(arg1 + 0x18) = 0x8d
    return 

*(arg1 + 0x250) = (r8 + 1).d
label_142ba9e3c:

if (*arg2 u> 0xff)
    *(arg1 + 0x18) = 0x8d
    return 

*(r11 + 0xc) = zx.d(*arg2)
*(r11 + 4) = *(arg1 + 0x210) + 1
*r11 = *(arg1 + 0x204)
*(r11 + 0x10) = 1

if (*arg2 u> *(arg1 + 0x264))
    *(arg1 + 0x264) = zx.d(*arg2)

if (sub_142bacca0(arg1).b != 0)
    return 

char i

do
    uint32_t rax_7 = zx.d(*(arg1 + 0x218))
    
    if (rax_7 == 0x2c)
        *(arg1 + 0x18) = 0x89
        return 
    
    if (rax_7 == 0x2d)
        *(r11 + 8) = *(arg1 + 0x210)
        return 
    
    if (rax_7 == 0x89)
        *(arg1 + 0x18) = 0x89
        return 
    
    i = sub_142bacca0(arg1)
while (i == 0)
