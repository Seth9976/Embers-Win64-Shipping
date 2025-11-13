// 函数: sub_140634f00
// 地址: 0x140634f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0

if (arg2 != 0)
    *arg2 = 0

int64_t rax = sx.q(arg1[1].d)

if (rax.d s<= 0)
    *arg3 = 0xffffffff
    return rax

int32_t* r11 = *arg1
int32_t (* rax_1)[0x4] = r11
int32_t rdx = *r11
void* r8 = &r11[rax]
uint64_t rcx_1 = rax << 2 u>> 2

if (r11 u> r8)
    rcx_1 = 0

if (rcx_1 != 0 && rcx_1 u>= 8 && data_143ccb970 s>= 2)
    uint128_t zmm1 = _mm_shuffle_epi32(zx.o(rdx), 0)
    uint128_t zmm2 = zmm1
    
    do
        i += 8
        zmm1 = _mm_max_epi32(zmm1, *rax_1)
        int32_t zmm0[0x4] = rax_1[1]
        rax_1 = &rax_1[2]
        zmm2 = _mm_max_epi32(zmm2, zmm0)
    while (i != (rcx_1 & 0xfffffffffffffff8))
    
    zmm1 = _mm_max_epi32(zmm1, zmm2)
    zmm1 = _mm_max_epi32(zmm1, _mm_bsrli_si128(zmm1, 8))
    rdx = _mm_max_epi32(zmm1, _mm_bsrli_si128(zmm1, 4)).d

while (rax_1 != r8)
    int32_t rcx_3 = *rax_1
    
    if (rdx s>= rcx_3)
        rcx_3 = rdx
    
    rax_1 = &(*rax_1)[1]
    rdx = rcx_3

if (arg2 != 0)
    int32_t* rax_2 = r11
    
    if (r11 != r8)
        do
            if (*rax_2 == rdx)
                int32_t rax_4 = ((rax_2 - r11) s>> 2).d
                *arg2 = rax_4
                *arg3 = rdx
                return rax_4
            
            rax_2 = &rax_2[1]
        while (rax_2 != r8)
    
    rax_1 = 0xffffffff
    *arg2 = 0xffffffff

*arg3 = rdx
return rax_1
