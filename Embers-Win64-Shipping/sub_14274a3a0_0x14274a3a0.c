// 函数: sub_14274a3a0
// 地址: 0x14274a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int32_t* rbx = *(arg1 + 0x20)
int16_t rsi = *rax
*(arg1 + 0x10) = &rax[1]
int32_t i = 0
uint64_t r9_1 = zx.q(r9 * zx.d(rax[1]))
int32_t r11 = 0
*(arg1 + 0x10) = &rax[2]
uint32_t rdx_1 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t r8_1 = *rbx
int32_t* r9_2 = r9_1 + *(arg1 + 0x70)

if (rdx_1 s>= r8_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= r8_1
        rcx += 1
        r8_1 = rbx[rcx]
        r11 += 1
    while (rdx_1 s>= r8_1)

uint64_t r8_3 = zx.q(rax[3])
int32_t r11_1 = *(sx.q(rdx_1) + *(*(arg1 + 0x18) + (sx.q(r11) << 3)))
*(arg1 + 0x10) = &rax[4]
void* rdx_4 = zx.q(rsi) * 0x70 + *(arg1 + 0x50)
int64_t r8_4 = *(*(rdx_4 + 8) + (r8_3 << 3)) + (sx.q(*(rdx_4 + 0x14)) << 2)

if (*(arg1 + 0x40) s> 0)
    do
        int64_t rcx_7 = sx.q(*r9_2)
        
        if (rcx_7.d != 0xffffffff)
            *(r8_4 + (rcx_7 << 2)) = r11_1
        
        r9_2 = &r9_2[1]
        i += 1
    while (i s< *(arg1 + 0x40))

return i
