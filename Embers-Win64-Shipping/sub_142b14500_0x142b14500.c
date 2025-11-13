// 函数: sub_142b14500
// 地址: 0x142b14500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = arg2 s>> 6
uint64_t rsi_1 = zx.q(arg2) & 0x3f
int32_t r10 = 1 << rcx_1.b

if (arg2 + 1 == arg3)
    *(arg1 + (rsi_1 << 2)) |= r10
    return arg2 + 1

int32_t r8 = arg3 & 0x3f
int32_t rbx_1 = arg3 s>> 6
uint64_t rdi = zx.q(r8)
uint64_t i = zx.q(rsi_1.d)
uint64_t rdx = zx.q(r8)

if (rcx_1 != rbx_1)
    if (rsi_1.d != 0)
        do
            *(arg1 + (i << 2)) |= r10
            i += 1
        while (i s< 0x40)
        
        rcx_1 += 1
    
    int64_t i_2 = 0
    uint128_t zmm2
    
    if (rcx_1 s< rbx_1)
        int32_t r10_3 = not.d((1 << rcx_1.b) - 1)
        
        if (rbx_1 s< 0x20)
            r10_3 &= (1 << rbx_1.b) - 1
        
        int64_t i_1 = 0
        zmm2 = _mm_shuffle_epi32(zx.o(r10_3), 0)
        
        do
            *(arg1 + (i_1 << 2)) |= zmm2
            *(arg1 + (i_1 << 2) + 0x10) |= zmm2
            i_1 += 8
        while (i_1 s< 0x40)
    
    char rcx_3 = 0x1f
    int32_t i_3 = 0
    
    if (rbx_1 != 0x20)
        rcx_3 = rbx_1.b
    
    int32_t r11_1 = 1 << rcx_3
    zmm2 = _mm_shuffle_epi32(zx.o(r11_1), 0)
    
    if (rdi.d != 0 && rdi.d u>= 8)
        do
            i_3 += 8
            *(arg1 + (i_2 << 2)) |= zmm2
            *(arg1 + (i_2 << 2) + 0x10) |= zmm2
            i_2 += 8
        while (i_2 s< (rdi & 0xfffffff8))
    
    for (i = sx.q(i_3); i s< rdx; i += 1)
        *(arg1 + (i << 2)) |= r11_1
else if (i u< rdx)
    do
        *(arg1 + (i << 2)) |= r10
        i += 1
    while (i s< rdx)

return i
