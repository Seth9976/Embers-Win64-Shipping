// 函数: sub_141ab3800
// 地址: 0x141ab3800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
float zmm3[0x4] = *arg1
float zmm4[0x4] = *(arg1 + 4)
float zmm5[0x4] = *(arg1 + 8)
int64_t r10 = sx.q(arg2[1].d)
int64_t r8 = r10 * 0x3c
int128_t zmm12 = 0x322bcc77
int128_t zmm14 = 0x3f800000
zmm3[0] = zmm3[0] f- *(r8 + r9 - 0x3c)
zmm4[0] = zmm4[0] f- *(r8 + r9 - 0x38)
zmm5[0] = zmm5[0] f- *(r8 + r9 - 0x34)
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
float zmm1 = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] + zmm3[0]
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
    uint32_t rax_1 = GetCurrentThreadId()
    r10 = zx.q(arg2[1].d)
    r9 = *arg2
    rcx.b = rax_1 != data_143de5470

float zmm0[0x4] = *(rbx + (rcx << 2))
int32_t result_1 = r10.d
zmm3 = 0x3c23d70a

if (not(zmm0[0] < 0.00999999978f))
    zmm3 = __minss_xmmss_memss(zmm0[0], 0x3f7d70a4)

int64_t rbx_1 = sx.q(*(arg2 + 0x24))
int32_t r8_1 = (rbx_1 - 2).d

if (r8_1 s>= 0)
    int32_t result_2 = result_1
    zmm4 = zx.o(0)
    float zmm2[0x4]
    
    if (r8_1 + 1 s>= 4)
        int64_t rdx = sx.q(result_1) * 0x3c
        float (* rcx_1)[0x4] = (rbx_1 - 2) * 0x3c
        zmm2 = *(rcx_1 + r9 + 4)
        zmm0 = *(rcx_1 + r9)
        zmm2[0] = zmm2[0] f- *(rdx + r9 - 0x38)
        zmm1 = *(rcx_1 + r9 + 8)
        zmm0[0] = zmm0[0] f- *(rdx + r9 - 0x3c)
        zmm1 = zmm1 f- *(rdx + r9 - 0x34)
        zmm2[0] = zmm2[0] * zmm9[0]
        uint64_t i_2 = zx.q(r8_1 + 1) u>> 2
        zmm0[0] = zmm0[0] * zmm8[0]
        zmm1 = zmm1 * zmm7[0]
        zmm2[0] = zmm2[0] + zmm0[0]
        r8_1 += neg.d(i_2.d) << 2
        zmm2[0] = zmm2[0] + zmm1
        uint64_t i
        
        do
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            i = i_2
            i_2 -= 1
        while (i != 1)
        r9 = *arg2
        result_2 = r10.d
    
    result_1 = result_2
    
    if (r8_1 s>= 0)
        int64_t rdx_1 = sx.q(result_2) * 0x3c
        float (* rcx_3)[0x4] = (rbx_1 - 2) * 0x3c
        zmm2 = *(rcx_3 + r9 + 4)
        zmm2[0] = zmm2[0] f- *(rdx_1 + r9 - 0x38)
        zmm0 = *(rcx_3 + r9)
        zmm0[0] = zmm0[0] f- *(rdx_1 + r9 - 0x3c)
        zmm1 = *(rcx_3 + r9 + 8) f- *(rdx_1 + r9 - 0x34)
        zmm2[0] = zmm2[0] * zmm9[0]
        zmm0[0] = zmm0[0] * zmm8[0]
        zmm1 = zmm1 * zmm7[0]
        zmm2[0] = zmm2[0] + zmm0[0]
        zmm2[0] = zmm2[0] + zmm1
        int32_t temp1_1
        
        do
            if (not(zmm2[0] <= zmm4[0]))
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm6 = _mm_min_ss(zmm2[0], zmm6[0])
            
            temp1_1 = r8_1
            r8_1 -= 1
        while (temp1_1 - 1 s>= 0)
        r9 = *arg2
        result_1 = r10.d

int64_t result = sx.q(result_1)
int64_t rcx_4 = result * 0x3c
zmm8[0] = zmm8[0] * zmm6[0]
zmm9[0] = zmm9[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm6[0]
zmm8[0] = zmm8[0] f+ *(rcx_4 + r9 - 0x3c)
zmm9[0] = zmm9[0] f+ *(rcx_4 + r9 - 0x38)
zmm7[0] = zmm7[0] f+ *(rcx_4 + r9 - 0x34)
*(rcx_4 + r9 - 0x3c) = zmm8[0]
*(rcx_4 + r9 - 0x38) = zmm9[0]
*(rcx_4 + r9 - 0x34) = zmm7[0]
int32_t i_1 = *(arg2 + 0x24) - 1

if (i_1 s>= 1)
    int128_t zmm10
    int128_t var_58_1 = zmm10
    int128_t zmm11
    int128_t var_68_1 = zmm11
    float zmm13[0x4] = 0x3f000000
    float (* rbx_2)[0x4] = sx.q(i_1) * 0x3c
    
    do
        int64_t rcx_5 = *arg2
        zmm7 = *(rbx_2 + rcx_5 - 0x3c)
        zmm8 = *(rbx_2 + rcx_5 - 0x38)
        zmm6 = *(rbx_2 + rcx_5 - 0x34)
        zmm9 = *(rbx_2 + rcx_5)
        zmm10 = *(rbx_2 + rcx_5 + 4)
        zmm7[0] = zmm7[0] - zmm9[0]
        zmm11 = *(rbx_2 + rcx_5 + 8)
        zmm8[0] = zmm8[0] f- zmm10.d
        zmm6[0] = zmm6[0] f- zmm11.d
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm1 = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm7[0] = zmm7[0] + zmm1
        
        if (not(zmm7[0] f== zmm14.d))
            if (zmm7[0] f>= zmm12.d)
                zmm4 = zx.o(0)
                zmm4[0] = zmm13[0]
                float temp0_4[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                zmm7[0] = zmm7[0] * zmm4[0]
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm4[0] = zmm4[0] - zmm7[0] * temp0_4[0]
                temp0_4[0] = temp0_4[0] * zmm4[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm7[0] = zmm7[0] * temp0_4[0] * temp0_4[0]
                zmm4[0] = zmm4[0] - zmm7[0]
                temp0_4[0] = temp0_4[0] * zmm4[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm7[0] = zmm7[0] * temp0_4[0]
                zmm8[0] = zmm8[0] * temp0_4[0]
                zmm6[0] = zmm6[0] * temp0_4[0]
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        zmm0 = *(rbx_2 + rcx_5 - 0x30)
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm8[0] = zmm8[0] * zmm0[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm7[0] = zmm7[0] + zmm9[0]
        zmm8[0] = zmm8[0] f+ zmm10.d
        zmm6[0] = zmm6[0] f+ zmm11.d
        *(rbx_2 + rcx_5 - 0x3c) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        result = zx.q(zmm6[0])
        *(rbx_2 + rcx_5 - 0x34) = result.d
        
        if (*(arg2 + 0x34) != 0)
            result, zmm12, zmm13, zmm14 = sub_141ab2f60(arg2, i_1)
        
        i_1 -= 1
        rbx_2 -= 0x3c
    while (i_1 s>= 1)

return result
