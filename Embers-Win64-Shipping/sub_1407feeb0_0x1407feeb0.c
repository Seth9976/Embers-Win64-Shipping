// 函数: sub_1407feeb0
// 地址: 0x1407feeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r8 = 0
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_28 = rdx_1
int32_t r9
r9.b = rdx_1 != 0x7fff
int32_t var_24 = r9
int32_t* rdx_3
void var_20

if (rdx_1 == 0x7fff)
    rdx_3 = &var_20
else
    rdx_3 = zx.q(rdx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t* var_18 = rdx_3
int32_t rcx_1 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_58 = rcx_1
int32_t rax_1
rax_1.b = rcx_1 != 0x7fff
void* var_48
void var_50

if (rcx_1 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t r11_3 = rcx_4 & 0x7fff
int32_t var_40 = r11_3
int32_t result_1
result_1.b = r11_3 != 0x7fff
void* var_30
void var_38

if (r11_3 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(*(arg2 + 0x80) * r11_3) + *(arg2 + 0x70)
int64_t result = *(arg1 + 0x30)

if (result != 0)
    result = *(result + 0xb8)
    int32_t rcx_11
    
    if (result == 0)
        rcx_11 = 0
    else
        rcx_11 = *result
    
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rcx_11))
    int32_t rcx_12
    
    if (result == 0)
        rcx_12 = 0
    else
        rcx_12 = *(result + 4)
    
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx_12))
    int32_t rcx_14
    
    if (result == 0)
        rcx_14 = 0
    else
        rcx_14 = *(result + 8) & 0x3fffffff
    
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx_14))
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8 += 1
            *rdx_3 = zmm2.d
            int32_t* rdx_6 = var_48
            var_48 = &rdx_6[sx.q(rax_1)]
            *rdx_6 = zmm1.d
            void* rdx_7 = var_30
            result = sx.q(result_1)
            var_30 = rdx_7 + (result << 2)
            *rdx_7 = zmm0.d
            
            if (r8 s>= *(arg2 + 0x40))
                break
            
            rdx_3 = &rdx_3[sx.q(r9)]
            r9 = var_24
else
    int32_t r11_4 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r11_4 += 1
            *rdx_3 = 0
            int32_t* rdx_4 = var_48
            var_48 = &rdx_4[sx.q(rax_1)]
            *rdx_4 = 0
            int32_t* rdx_5 = var_30
            result = sx.q(result_1)
            var_30 = &rdx_5[result]
            *rdx_5 = 0
            
            if (r11_4 s>= *(arg2 + 0x40))
                break
            
            rdx_3 = &rdx_3[sx.q(r9)]
            r9 = var_24

return result
