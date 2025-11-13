// 函数: sub_142c3dad0
// 地址: 0x142c3dad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c3c440(arg2)

if (arg3 == 0x4d6f6e67)
    int32_t rdx = *(arg2 + 0x60)
    int32_t r8 = 1
    void* r10_1 = *(arg2 + 0x70)
    
    if (rdx u> 1)
        int32_t* r9_1 = r10_1 + 0x14
        
        do
            if (*r9_1 - 0x180b u<= 2)
                *(r9_1 + 0x12) = *(r10_1 + zx.q(r8 - 1) * 0x14 + 0x12)
            
            r8 += 1
            r9_1 = &r9_1[5]
        while (r8 u< rdx)

int32_t i_2 = *(arg2 + 0x60)
void* result = *(arg2 + 0x70)

if (i_2 != 0)
    result += 4
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint64_t rcx_2 = zx.q(*(result + 0xe))
        result += 0x14
        *(result - 0x14) |= *(arg1 + (rcx_2 << 2))
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
