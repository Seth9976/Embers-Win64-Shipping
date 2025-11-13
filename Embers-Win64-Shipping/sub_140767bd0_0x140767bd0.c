// 函数: sub_140767bd0
// 地址: 0x140767bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r11_1 = (r8 u>> 0xf).b
*arg1 = r8
int32_t rax_3 = r8 & 0x7fff

if ((not.b(r11_1) & 1) == 0)
    uint32_t rax_5 = zx.d(r11_1)
    *(arg1 + 8) = zx.q(*(arg2 + 0x80) * rax_3) + *(arg2 + 0x70)
    arg1[4] = rax_5
    return rax_5

int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = 0
int32_t rcx_1 = *r9

if (rax_3 s>= rcx_1)
    int64_t rdx = 0
    
    do
        rax_3 -= rcx_1
        rdx += 1
        rcx_1 = r9[rdx]
        r8_1 += 1
    while (rax_3 s>= rcx_1)

uint32_t rax_4 = zx.d(r11_1)
*(arg1 + 8) = sx.q(rax_3) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))
arg1[4] = rax_4
return rax_4
