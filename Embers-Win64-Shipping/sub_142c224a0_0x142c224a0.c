// 函数: sub_142c224a0
// 地址: 0x142c224a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x48)
int32_t rbx = 0
int32_t r11_2 = arg6 - 1 + *(*(arg1 + 0x90) + 0x5c)
*(arg1 + 0x40) = r11_2
*(arg1 + 0x78) = arg2
*(arg1 + 0x7c) = *(*(r10 + 0x90) + 0x60)
void* rdx = *(r10 + 0x90)
char rdx_1

if (r11_2 != *(rdx + 0x5c))
    rdx_1 = 0
else
    rdx_1 = *(*(rdx + 0x70) + zx.q(*(rdx + 0x5c)) * 0x14 + 0xf)

*(arg1 + 0x5c) = rdx_1
*(arg1 + 0x68) = arg5
*(arg1 + 0x60) = arg4
*(arg1 + 0x70) = arg3

if (arg2 != 0)
    do
        if (sub_142c22680(arg1 + 0x40) == 0)
            return 0
        
        rbx += 1
    while (rbx u< arg2)

*arg7 = *(arg1 + 0x40) + 1
int32_t* result
result.b = 1
return result
