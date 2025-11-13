// 函数: sub_142bc0bc0
// 地址: 0x142bc0bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rcx = *arg2

if (*rcx == 0x1e)
    return sub_142bc0db0(rcx, *(arg1 + 0x10), 0, arg3) __tailcall

int32_t i = sub_142bc0c90(rcx, arg2[1])

if (i s<= 0x7fff)
    *arg3 = 0
    return zx.q(i << 0x10)

void* const rcx_2 = &data_14368672c
int32_t r8_1 = 5

while (i s>= *rcx_2)
    r8_1 += 1
    rcx_2 += 4
    
    if (rcx_2 s>= &data_143686740)
        break

int32_t r9_2 = *(&data_143686718 + (sx.q(r8_1 - 5) << 2))

if (divs.dp.d(sx.q(i), r9_2) s<= 0x7fff)
    *arg3 = r8_1 - 5
    return sub_142b91790(i, r9_2) __tailcall

*arg3 = r8_1 - 4
return sub_142b91790(i, *(&data_143686718 + (sx.q(r8_1 - 4) << 2))) __tailcall
