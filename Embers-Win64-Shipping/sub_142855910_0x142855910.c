// 函数: sub_142855910
// 地址: 0x142855910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x130)
int64_t r9 = 0
int64_t r10 = *(r8 + 0x1f0)
int16_t* rax = *(r8 + 0x1e8)

if (r10 != 0)
    do
        if (arg2 == zx.d(*rax) && (*(rax + 4) & 0xfffffffd) == 0)
            goto label_142855952
        
        r9 += 1
        rax = &rax[0x1c]
    while (r9 u< r10)

rax = nullptr
label_142855952:
int32_t r11
r11.b = rax != 0
return zx.q(r11)
