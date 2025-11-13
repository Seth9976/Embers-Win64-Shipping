// 函数: sub_140d10a60
// 地址: 0x140d10a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = arg2

if (arg3 == 0)
    *(arg1 + 0x38) = (*(arg1 + 0x38) & 0xffffffffbffffdff) | 0x1000000000
else
    *(arg1 + 0x38) |= 0x1040000200

*(arg1 + 0x34) = r11
int32_t rax_4 = 1
*(arg1 + 0x70) = r11.b

if (arg4 != 0)
    rax_4 = arg4

*(arg1 + 0x71) = 0
int32_t arg_18 = rax_4

if (arg3 != 0)
    *(arg1 + 0x72) = 0xff01
    return rax_4

if (r11 != 0)
    arg2.b = 0
    
    do
        char rcx = *(&arg_18 + zx.q(arg2.b))
        *(arg1 + 0x72) = rcx
        
        if (rcx != 0)
            break
        
        arg2.b += 1
        arg2 = zx.d(arg2.b)
        *(arg1 + 0x71) = arg2.b
    while (arg2 u< r11)

char rax_6 = *(arg1 + 0x72)
*(arg1 + 0x73) = rax_6
return rax_6
