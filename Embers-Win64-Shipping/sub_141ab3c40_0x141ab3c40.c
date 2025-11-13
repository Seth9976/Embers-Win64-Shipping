// 函数: sub_141ab3c40
// 地址: 0x141ab3c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t* r8 = *arg2
float zmm3[0x4] = *arg1
float zmm4[0x4] = *(arg1 + 4)
float zmm5[0x4] = *(arg1 + 8)
zmm3[0] = zmm3[0] f- *r8
zmm4[0] = zmm4[0] f- r8[1]
zmm5[0] = zmm5[0] f- r8[2]
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
float zmm1 = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] + zmm3[0]
int128_t zmm13 = 0x322bcc77
int128_t zmm14 = 0x3f800000
zmm4[0] = zmm4[0] + zmm1
float zmm6[0x4] = _mm_sqrt_ss(0, zmm4[0])
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (zmm6[0] <= 9.99999994e-09f)
    zmm8 = data_143dbb1f8
    zmm9 = data_143dbb1fc
    zmm7 = data_143dbb200
else
    zmm7 = 0x3f800000
    zmm7[0] = 1f / zmm6[0]
    zmm8 = zmm7
    zmm9 = zmm7
    zmm8[0] = zmm8[0] * zmm3[0]
    zmm9[0] = zmm9[0] * zmm4[0]
    zmm7[0] = zmm7[0] * zmm5[0]

int64_t rbx = data_143f2b9f0
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    result = GetCurrentThreadId()
    r8 = *arg2
    rcx.b = result.d != data_143de5470

float zmm0[0x4] = *(rbx + (rcx << 2))
zmm3 = 0x3c23d70a

if (not(zmm0[0] < 0.00999999978f))
    zmm3 = __minss_xmmss_memss(zmm0[0], 0x3f7d70a4)

int64_t rcx_1 = sx.q(*(arg2 + 0x24))
int32_t i_2 = 1
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11
int128_t var_68 = zmm11
int64_t* rbx_1 = 0x3c

if (rcx_1 s> 1)
    void* r9_1 = 1
    zmm4 = zx.o(0)
    float zmm2[0x4]
    
    if (rcx_1 s>= 5)
        zmm5 = *r8
        zmm10 = r8[1]
        result = 0x3c
        zmm11 = r8[2]
        int64_t i_4 = ((rcx_1 - 5) u>> 2) + 1
        r9_1 = (i_4 << 2) + 1
        int64_t i
        
        do
            zmm2 = *(result + r8 + 4)
            zmm0 = *(result + r8)
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm1 = *(result + r8 + 8)
            zmm0[0] = zmm0[0] - zmm5[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm1 = (zmm1 f- zmm11.d) * zmm7[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1
            
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            zmm2 = *(result + r8 + 0x40)
            zmm0 = *(result + r8 + 0x3c)
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm1 = *(result + r8 + 0x44)
            zmm0[0] = zmm0[0] - zmm5[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm1 = (zmm1 f- zmm11.d) * zmm7[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1
            
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            zmm2 = *(result + r8 + 0x7c)
            zmm0 = *(result + r8 + 0x78)
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm1 = *(result + r8 + 0x80)
            zmm0[0] = zmm0[0] - zmm5[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm1 = (zmm1 f- zmm11.d) * zmm7[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1
            
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            zmm2 = *(result + r8 + 0xb8)
            zmm0 = *(result + r8 + 0xb4)
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm1 = *(result + r8 + 0xbc)
            zmm0[0] = zmm0[0] - zmm5[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm1 = (zmm1 f- zmm11.d) * zmm7[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1
            
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            result = &result[0x1e]
            i = i_4
            i_4 -= 1
        while (i != 1)
        r8 = *arg2
    
    if (r9_1 s< rcx_1)
        zmm5 = *r8
        zmm10 = r8[1]
        zmm11 = r8[2]
        result = r9_1 * 0x3c
        void* i_3 = rcx_1 - r9_1
        void* i_1
        
        do
            zmm2 = *(result + r8 + 4)
            zmm0 = *(result + r8)
            zmm2[0] = zmm2[0] f- zmm10.d
            zmm1 = *(result + r8 + 8)
            zmm0[0] = zmm0[0] - zmm5[0]
            zmm2[0] = zmm2[0] * zmm9[0]
            zmm0[0] = zmm0[0] * zmm8[0]
            zmm1 = (zmm1 f- zmm11.d) * zmm7[0]
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm2[0] = zmm2[0] + zmm1
            
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            result += 0x3c
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        r8 = *arg2

zmm8[0] = zmm8[0] * zmm6[0]
zmm9[0] = zmm9[0] * zmm6[0]
zmm8[0] = zmm8[0] f+ *r8
zmm7[0] = zmm7[0] * zmm6[0]
zmm9[0] = zmm9[0] f+ r8[1]
zmm7[0] = zmm7[0] f+ r8[2]
*r8 = zmm8[0]
r8[1] = zmm9[0]
r8[2] = zmm7[0]

if (*(arg2 + 0x24) s> 1)
    float zmm12[0x4] = 0x3f000000
    
    do
        int64_t rcx_2 = *arg2
        zmm7 = *(rbx_1 + rcx_2)
        zmm8 = *(rbx_1 + rcx_2 + 4)
        zmm6 = *(rbx_1 + rcx_2 + 8)
        zmm9 = *(rbx_1 + rcx_2 - 0x3c)
        zmm10 = *(rbx_1 + rcx_2 - 0x38)
        zmm7[0] = zmm7[0] - zmm9[0]
        zmm11 = *(rbx_1 + rcx_2 - 0x34)
        zmm8[0] = zmm8[0] f- zmm10.d
        zmm6[0] = zmm6[0] f- zmm11.d
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm1 = zmm6[0] * zmm6[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm8[0] = zmm8[0] + zmm1
        
        if (not(zmm8[0] f== zmm14.d))
            if (zmm8[0] f>= zmm13.d)
                zmm4 = zx.o(0)
                zmm4[0] = zmm12[0]
                float temp0_7[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                zmm8[0] = zmm8[0] * zmm4[0]
                temp0_7[0] = temp0_7[0] * temp0_7[0]
                zmm4[0] = zmm4[0] - zmm8[0] * temp0_7[0]
                temp0_7[0] = temp0_7[0] * zmm4[0]
                temp0_7[0] = temp0_7[0] + temp0_7[0]
                zmm8[0] = zmm8[0] * temp0_7[0] * temp0_7[0]
                zmm4[0] = zmm4[0] - zmm8[0]
                temp0_7[0] = temp0_7[0] * zmm4[0]
                temp0_7[0] = temp0_7[0] + temp0_7[0]
                zmm7[0] = zmm7[0] * temp0_7[0]
                zmm8[0] = zmm8[0] * temp0_7[0]
                zmm6[0] = zmm6[0] * temp0_7[0]
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        zmm0 = *(rbx_1 + rcx_2 - 0x30)
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm8[0] = zmm8[0] * zmm0[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm7[0] = zmm7[0] + zmm9[0]
        zmm8[0] = zmm8[0] f+ zmm10.d
        zmm6[0] = zmm6[0] f+ zmm11.d
        *(rbx_1 + rcx_2) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        result = zx.q(zmm6[0])
        *(rbx_1 + rcx_2 + 8) = result.d
        
        if (*(arg2 + 0x34) != 0)
            result, zmm12, zmm13, zmm14 = sub_141ab33b0(arg2, i_2)
        
        i_2 += 1
        rbx_1 += 0x3c
    while (i_2 s< *(arg2 + 0x24))

return result
