// 函数: sub_14274a670
// 地址: 0x14274a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int16_t rdx = *rax
*(arg1 + 0x10) = &rax[2]
int16_t i_4 = rax[2]
void* result = &rax[3]
*(arg1 + 0x10) = result

if (0 u< i_4)
    if (*(arg1 + 0xa8) == 0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i
        
        do
            result += 4
            i = i_2
            i_2 -= 1
        while (i != 1)
        *(arg1 + 0x10) = result
        return result
    
    int64_t rsi_1 = zx.q(rdx) * 0x70
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        int16_t* rax_3 = *(arg1 + 0x10)
        int64_t r9_1 = *(arg1 + 0x50)
        uint32_t count = *(arg1 + 0xa8) << 2
        uint64_t rdx_2 = zx.q(zx.d(*rax_3) * *(arg1 + 0x80))
        *(arg1 + 0x10) = &rax_3[1]
        uint64_t r10_1 = zx.q(rax_3[1])
        *(arg1 + 0x10) = &rax_3[2]
        result = memcpy(
            *(*(r9_1 + rsi_1 + 8) + (r10_1 << 3))
                + ((sx.q(*(r9_1 + rsi_1 + 0x14)) + sx.q(*(arg1 + 0xa4))) << 2), 
            rdx_2 + *(arg1 + 0x70), count)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
