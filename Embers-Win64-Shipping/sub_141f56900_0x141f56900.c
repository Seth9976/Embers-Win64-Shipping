// 函数: sub_141f56900
// 地址: 0x141f56900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi

if (sub_140d3e110(arg1 + 0x438) == 0)
    rsi = arg1
else
    rsi = sub_140d3c6e0(arg1 + 0x438)

int32_t rcx_2 = *(*(arg1 + 0x430) + 0x2e8)
int32_t rax_3 = arg2[1].d

if (rcx_2 s> rax_3)
    arg2[1].d = rcx_2
    
    if (rcx_2 s> *(arg2 + 0xc))
        sub_1405c4fe0(arg2)
else if (rcx_2 s< rax_3 && rcx_2 != rax_3)
    arg2[1].d = rcx_2
    sub_1407c3fe0(arg2)

int32_t i = 0
int32_t rcx_5 = arg2[1].d
void* r8_3 = ((sx.q(*(rsi + 0x494)) + 0x45) << 4) + rsi

if (*(r8_3 + 8) == 0)
    if (rcx_5 s> 0)
        int64_t r8_4 = 0
        
        do
            r8_4 += 0x40
            i += 1
            int64_t rdx_2 = *(*(arg1 + 0x430) + 0x2e0)
            int64_t rcx_10 = *arg2
            *(r8_4 + rcx_10 - 0x40) = *(rdx_2 + r8_4 - 0x40)
            *(r8_4 + rcx_10 - 0x30) = *(rdx_2 + r8_4 - 0x30)
            *(r8_4 + rcx_10 - 0x20) = *(rdx_2 + r8_4 - 0x20)
            *(r8_4 + rcx_10 - 0x10) = *(rdx_2 + r8_4 - 0x10)
        while (i s< arg2[1].d)
else if (rcx_5 s> 0)
    float zmm6[0x4]
    float var_18[0x4] = zmm6
    float (* r9)[0x4] = nullptr
    float zmm7[0x4]
    float var_28[0x4] = zmm7
    int128_t* r10 = nullptr
    float zmm8[0x4]
    float var_38[0x4] = zmm8
    float zmm9[0x4]
    float var_48[0x4] = zmm9
    float zmm10[0x4]
    float var_58[0x4] = zmm10
    uint32_t zmm11[0x4] = data_143f3b880
    
    do
        int64_t rcx_6 = *r8_3
        float zmm3[0x4] = *(r10 + rcx_6)
        zmm8 = *(r10 + rcx_6 + 0x10)
        float temp0_1[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
        float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
        float zmm1[0x4] = *(r10 + rcx_6 + 0x20)
        void* rcx_7 = *(arg1 + 0x430)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 1)
        float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_6)
        int64_t rdx_1 = *(rcx_7 + 0x2e0)
        float temp0_13[0x4] = _mm_sub_ps(temp0_6, temp0_9)
        zmm3 = data_143f3b870
        float temp0_14[0x4] = _mm_add_ps(temp0_8, temp0_11)
        float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1)
        float temp0_16[0x4] = _mm_mul_ps(temp0_10, temp0_13)
        float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_14)
        zmm3[0].q = zmm8 u>> 0x40
        float temp0_18[0x4] = _mm_shuffle_ps(zmm8, zmm3, 0xc4)
        float zmm2[0x4] = _mm_and_ps(_mm_mul_ps(temp0_17, zmm1), zmm11)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
        float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x10)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
        zmm2 = *(r9 + rdx_1)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
        float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_28)
        float temp0_35[0x4] = _mm_mul_ps(temp0_31, temp0_27)
        float temp0_39[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_29, temp0_23), temp0_34), temp0_35), temp0_33)
        zmm2 = *(r9 + rdx_1 + 0x10)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_43[0x4] = _mm_mul_ps(temp0_40, temp0_23)
        float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
        float temp0_46[0x4] = _mm_mul_ps(temp0_41, temp0_28)
        float temp0_47[0x4] = _mm_mul_ps(temp0_42, temp0_27)
        float temp0_50[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_43, temp0_46), temp0_47), temp0_45)
        zmm2 = *(r9 + rdx_1 + 0x20)
        float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        int64_t rcx_8 = *arg2
        float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        i += 1
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_28)
        r10 = &r10[3]
        float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_27)
        float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
        float temp0_61[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_51, temp0_23), temp0_54), temp0_55), temp0_57)
        zmm2 = *(r9 + rdx_1 + 0x30)
        *(r9 + rcx_8) = temp0_39
        float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        *(r9 + rcx_8 + 0x10) = temp0_50
        float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_64[0x4] = _mm_mul_ps(temp0_62, temp0_23)
        float temp0_65[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        *(r9 + rcx_8 + 0x20) = temp0_61
        float temp0_66[0x4] = _mm_mul_ps(temp0_63, temp0_28)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_27)
        float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_18)
        *(r9 + rcx_8 + 0x30) = _mm_add_ps(_mm_add_ps(temp0_69, temp0_67), temp0_70)
        r9 = &r9[4]
    while (i s< arg2[1].d)

return i
