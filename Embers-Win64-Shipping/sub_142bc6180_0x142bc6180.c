// 函数: sub_142bc6180
// 地址: 0x142bc6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x28)

if (*(arg1 + 0x30) == 0)
    return 

int32_t r10_1 = sx.d(*(rdx + 0x62))
int32_t r11_1 = 0
int32_t r8_1 = r10_1 - 1

if (*(rdx + 0x60) s> 0)
    r11_1 = sx.d(*(*(rdx + 0x78) + (sx.q(sx.d(*(rdx + 0x60)) - 1) << 1)))

bool cond:1_1 = r8_1 s< r11_1

if (r8_1 s> r11_1)
    int64_t rcx_1 = *(rdx + 0x68)
    int32_t* rdi_1 = rcx_1 + (sx.q(r11_1) << 3)
    int32_t* rcx_2 = rcx_1 + (sx.q(r8_1) << 3)
    
    if (*rdi_1 == *rcx_2 && rdi_1[1] == rcx_2[1])
        r10_1.w -= 1
        *(rdx + 0x62) = r10_1.w
        r8_1 -= 1
    
    cond:1_1 = r8_1 s< r11_1

if (not(cond:1_1))
    *(*(rdx + 0x78) + (sx.q(*(rdx + 0x60)) << 1)) = r8_1.w
    *(rdx + 0x60) += 1

*(arg1 + 0x30) = 0
