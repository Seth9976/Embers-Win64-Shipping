// 函数: sub_142bcef10
// 地址: 0x142bcef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx = *(arg1 + 0x28)

if (rdx == 0)
    return 

int16_t r8_1 = *rdx
int32_t r10_1

if (r8_1 s> 1)
    r10_1 = sx.d(*(*(rdx + 0x18) + (sx.q(sx.d(r8_1) - 2) << 1))) + 1
else
    r10_1 = 0

if (r8_1 != 0 && r10_1 == sx.d(rdx[1]))
    *rdx = r8_1 - 1
    return 

int16_t r9_1 = rdx[1]

if (r9_1 s> 1)
    int64_t rcx_1 = *(rdx + 8)
    int64_t r11_1 = sx.q(r9_1)
    int32_t* rbx_1 = rcx_1 + (sx.q(r10_1) << 3)
    
    if (*rbx_1 == *(rcx_1 + (r11_1 << 3) - 8) && rbx_1[1] == *(rcx_1 + (r11_1 << 3) - 4)
            && *(*(rdx + 0x10) + r11_1 - 1) == 1)
        rdx[1] = r9_1 - 1

if (r8_1 s<= 0)
    return 

int32_t r9_2 = sx.d(rdx[1])

if (r10_1 == r9_2 - 1)
    r9_2.w -= 1
    *rdx = r8_1 - 1
    rdx[1] = r9_2.w
    return 

r9_2.w -= 1
*(*(rdx + 0x18) + (sx.q(sx.d(r8_1) - 1) << 1)) = r9_2.w
