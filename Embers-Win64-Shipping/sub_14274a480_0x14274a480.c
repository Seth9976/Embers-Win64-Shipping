// 函数: sub_14274a480
// 地址: 0x14274a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint64_t r11 = zx.q(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rdx = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t* result = zx.q(rdx * r9) + *(arg1 + 0x70)
uint32_t rcx = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rdx_1 = zx.q(rax[3])
int32_t* r9_2 = zx.q(r9 * rcx) + *(arg1 + 0x70)
void* r8_3 = r11 * 0x70 + *(arg1 + 0x50)
*(arg1 + 0x10) = &rax[4]
int64_t r11_1 = sx.q(*(r8_3 + 0x14))
int32_t i = 0
int64_t r10 = *(*(r8_3 + 8) + (rdx_1 << 3))

if (*(arg1 + 0x40) s> 0)
    do
        int64_t rcx_3 = sx.q(*result)
        
        if (rcx_3.d != 0xffffffff)
            *(r10 + ((r11_1 + rcx_3) << 2)) = *r9_2
        
        result = &result[1]
        r9_2 = &r9_2[1]
        i += 1
    while (i s< *(arg1 + 0x40))

return result
