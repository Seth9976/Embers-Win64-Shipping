// 函数: sub_14084a3f0
// 地址: 0x14084a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)

if (arg3 == 0 || *(arg1 + 8) == 0 || *(arg1 + 0x10) == 0)
    int32_t rax_15 = data_143dbb200
    *(arg2 + 0xc) = data_143dbb1f8.q
    *(arg2 + 0x14) = rax_15
    *arg2 = *(arg2 + 0xc)
    arg2[1].d = rax_15
    arg2[3].b = 0
    return arg2

float (* r9)[0x4] = *(arg1 + 0x50)
int64_t rdx = 0
float (* r8)[0x4] = *(arg1 + 0x48)
float (* r10)[0x4] = *(arg1 + 0x40)
int64_t rcx = 0
void* rax_1 = &(*r9)[rax]
float zmm9[0x4] = 0xff7fffff
uint64_t r11_3 = (rax_1 - r9 + 3) u>> 2

if (r9 u> rax_1)
    r11_3 = 0

float zmm0[0x4]

if (r11_3 != 0)
    int128_t* rax_2 = r9
    
    do
        zmm0 = *rax_2
        rax_2 += 4
        rcx += 1
        zmm9 = _mm_max_ss(zmm0[0], zmm9[0])
    while (rcx != r11_3)

void* rax_3 = &(*r8)[rax]
float zmm8[0x4] = 0xff7fffff
int64_t rcx_1 = 0
uint64_t r11_7 = (rax_3 - r8 + 3) u>> 2
float (* rax_4)[0x4] = r8

if (r8 u> rax_3)
    r11_7 = 0

if (r11_7 != 0)
    do
        zmm0 = *rax_4
        rax_4 = &(*rax_4)[1]
        rcx_1 += 1
        zmm8 = _mm_max_ss(zmm0[0], zmm8[0])
    while (rcx_1 != r11_7)

void* rax_5 = &(*r10)[rax]
float zmm6[0x4] = 0xff7fffff
int64_t rcx_2 = 0
uint64_t r11_11 = (rax_5 - r10 + 3) u>> 2
float (* rax_6)[0x4] = r10

if (r10 u> rax_5)
    r11_11 = 0

if (r11_11 != 0)
    do
        zmm0 = *rax_6
        rax_6 = &(*rax_6)[1]
        rcx_2 += 1
        zmm6 = _mm_max_ss(zmm0[0], zmm6[0])
    while (rcx_2 != r11_11)

float zmm3[0x4] = 0x7f7fffff
void* rax_7 = &(*r9)[rax]
float zmm5 = 3.40282347e+38f
int64_t rcx_3 = 0
uint64_t r11_15 = (rax_7 - r9 + 3) u>> 2

if (r9 u> rax_7)
    r11_15 = 0

if (r11_15 != 0)
    do
        zmm0 = *r9
        r9 = &(*r9)[1]
        rcx_3 += 1
        zmm5 = _mm_min_ss(zmm0[0], zmm5)[0]
    while (rcx_3 != r11_15)

void* rax_8 = &(*r8)[rax]
int64_t zmm4 = 0x7f7fffff
int64_t rcx_4 = 0
uint64_t r9_4 = (rax_8 - r8 + 3) u>> 2

if (r8 u> rax_8)
    r9_4 = 0

if (r9_4 != 0)
    do
        zmm0 = *r8
        r8 = &(*r8)[1]
        rcx_4 += 1
        zmm4 = _mm_min_ss(zmm0[0], zmm4.d)[0].q
    while (rcx_4 != r9_4)

void* rax_9 = &(*r10)[rax]
int64_t rcx_5 = 0
uint64_t r8_4 = (rax_9 - r10 + 3) u>> 2

if (r10 u> rax_9)
    r8_4 = 0

if (r8_4 != 0)
    do
        zmm0 = *r10
        r10 = &(*r10)[1]
        rcx_5 += 1
        zmm3 = _mm_min_ss(zmm0[0], zmm3[0])
    while (rcx_5 != r8_4)

float zmm7[0x4] = 0x38d1b717
float zmm1[0x4] = 0x42480000

if (*(arg1 + 0x70) != 0 && *(arg1 + 0x78) != 0)
    float (* r8_5)[0x4] = *(arg1 + 0xb0)
    float zmm2 = -3.40282347e+38f
    float (* rcx_6)[0x4] = *(arg1 + 0xa8)
    int64_t r9_5 = 0
    void* rax_10 = &(*r8_5)[rax]
    uint64_t r10_4 = (rax_10 - r8_5 + 3) u>> 2
    
    if (r8_5 u> rax_10)
        r10_4 = 0
    
    if (r10_4 != 0)
        do
            zmm0 = *r8_5
            r8_5 = &(*r8_5)[1]
            r9_5 += 1
            zmm2 = _mm_max_ss(zmm0[0], zmm2)[0]
        while (r9_5 != r10_4)
    
    void* rax_11 = &(*rcx_6)[rax]
    zmm1 = 0xff7fffff
    uint64_t r8_9 = (rax_11 - rcx_6 + 3) u>> 2
    
    if (rcx_6 u> rax_11)
        r8_9 = 0
    
    if (r8_9 != 0)
        do
            zmm0 = *rcx_6
            rcx_6 = &(*rcx_6)[1]
            rdx += 1
            zmm1 = _mm_max_ss(zmm0[0], zmm1[0])
        while (rdx != r8_9)
    
    zmm1 = _mm_max_ss(zmm1[0], zmm2)

if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] > 9.99999994e-09f))
    zmm7 = 0x3f800000
else if (not(zmm1[0] <= 9.99999975e-05f))
    zmm7 = zmm1

zmm6[0] = zmm6[0] + zmm7[0]
arg2[3].b = 1
zmm8[0] = zmm8[0] + zmm7[0]
zmm9[0] = zmm9[0] + zmm7[0]
zmm3[0] = zmm3[0] - zmm7[0]
zmm4.d = zmm4.d f- zmm7[0]
zmm5 = zmm5 - zmm7[0]
float var_64 = zmm9[0]
*arg2 = (_mm_unpacklo_ps(zmm3, zmm4)).q
float temp0_12[0x4] = _mm_unpacklo_ps(zmm6, zmm8[0].q)
arg2[1].d = zmm5
*(arg2 + 0xc) = temp0_12.q
*(arg2 + 0x14) = var_64
return arg2
