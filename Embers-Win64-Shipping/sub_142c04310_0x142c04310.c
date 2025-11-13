// 函数: sub_142c04310
// 地址: 0x142c04310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg2 + 0x18))
int128_t* const r8 = &data_14369a5d0
int32_t rcx = *(arg2 + 0x10)
int128_t* const r10

if (rax.d u< rcx)
    r10 = rax + *(arg2 + 8)
else
    *(arg2 + 0x1c) = 1
    r10 = &data_14369a5d0

int32_t r11 = (rax + 1).d
int128_t* const rbx

if (r11 u< rcx)
    rbx = zx.q(r11) + *(arg2 + 8)
else
    *(arg2 + 0x1c) = 1
    rbx = &data_14369a5d0

uint64_t r11_1 = zx.q((rax + 2).d)
int128_t* const r11_2

if (r11_1.d u< rcx)
    r11_2 = r11_1 + *(arg2 + 8)
else
    *(arg2 + 0x1c) = 1
    r11_2 = &data_14369a5d0

if (rax.d + 3 u< rcx)
    r8 = zx.q(rax.d + 3) + *(arg2 + 8)
else
    *(arg2 + 0x1c) = 1

uint64_t rcx_1 = zx.q(*(arg1 + 4))
uint32_t r10_8 = ((zx.d(*r10) << 8 | zx.d(*rbx)) << 8 | zx.d(*r11_2)) << 8 | zx.d(*r8)
uint64_t* rax_7

if (rcx_1.d u>= *(arg1 + 8))
    *arg1 = 1
    data_144017550.q = 0
    rax_7 = &data_144017550
else
    *(arg1 + 4) = (rcx_1 + 1).d
    
    if (rcx_1.d u>= *(arg1 + 8))
        data_144017550.q = 0
        rax_7 = &data_144017550
    else
        rax_7 = *(arg1 + 0x10) + (rcx_1 << 3)

*rax_7 = _mm_cvtepi32_pd(zx.q(r10_8))
int32_t result

if (*(arg2 + 0x1c) != 0)
    result = *(arg2 + 0x10)
    *(arg2 + 0x1c) = 1
else
    int32_t rax_8 = *(arg2 + 0x18)
    int32_t rcx_2 = *(arg2 + 0x10)
    
    if (rax_8 u> rcx_2)
        result = *(arg2 + 0x10)
        *(arg2 + 0x1c) = 1
    else
        result = rax_8 + 4
        
        if (result u> rcx_2)
            result = *(arg2 + 0x10)
            *(arg2 + 0x1c) = 1

*(arg2 + 0x18) = result
return result
