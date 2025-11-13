// 函数: sub_1407549d0
// 地址: 0x1407549d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = arg1
char r9

if (arg2 == 0 || *(arg2 + 0x10) != *(arg1 + 0x10))
    r9 = 0
else
    r9 = 1

bool cond:0 = *(arg2 + 0x38) == *(arg1 + 0x38)
int64_t r11 = *(arg1 + 0x30)

if (*(arg1 + 0x3c) f!= *(arg2 + 0x3c))
    arg1.b = 0
else
    arg1 = nullptr
    
    if (*(arg2 + 0x30) == r11)
        arg1 = zx.q(r9)
    
    arg1.b &= cond:0

uint32_t result

if (*(r8 + 0x40) f!= *(arg2 + 0x40))
    result.b = 0
else
    result.b = 1

arg1.b &= result.b

if (not(*(r8 + 0x44) f!= *(arg2 + 0x44)))
    return zx.q(arg1.b)

result.b = 0
return result
