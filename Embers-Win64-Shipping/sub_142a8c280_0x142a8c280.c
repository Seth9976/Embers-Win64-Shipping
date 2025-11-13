// 函数: sub_142a8c280
// 地址: 0x142a8c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
void* rcx = &arg1[1]
int16_t r8 = *arg2
void* rdx = &arg2[1]

if (i == r8)
    while (i != 0)
        i = *rcx
        rcx += 2
        r8 = *rdx
        rdx += 2
        
        if (i != r8)
            break

return zx.q(zx.d(i) - zx.d(r8))
