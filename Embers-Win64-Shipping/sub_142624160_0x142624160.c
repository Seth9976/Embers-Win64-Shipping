// 函数: sub_142624160
// 地址: 0x142624160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = 0x7f7fffff
int32_t rax = arg1 - 1
int32_t r9 = 0
int32_t i = 0
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm0
float zmm2
float zmm3[0x4]
float zmm5

if (arg1 s>= 4)
    zmm7 = *(arg3 + 8)
    zmm9 = *arg3
    void* rcx = arg2 + 0x14
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    int128_t zmm13
    int128_t var_88_1 = zmm13
    int64_t rdx_1 = sx.q(rax) * 0xc
    
    do
        zmm8 = *(rcx - 0xc)
        zmm10 = *(rdx_1 + arg2 + 8)
        int32_t r8
        r8.b = zmm8[0] > zmm7[0]
        int32_t rax_2
        rax_2.b = zmm10[0] > zmm7[0]
        
        if (r8 != rax_2)
            zmm3 = *(rdx_1 + arg2)
            zmm0 = zmm7[0]
            zmm3[0] = zmm3[0] f- *(rcx - 0x14)
            zmm0 = zmm0 - zmm8[0]
            zmm10[0] = zmm10[0] - zmm8[0]
            zmm3[0] = zmm3[0] * zmm0
            zmm3[0] = zmm3[0] / zmm10[0]
            zmm3[0] = zmm3[0] f+ *(rcx - 0x14)
            
            if (not(zmm9[0] >= zmm3[0]))
                int32_t rax_3
                rax_3.b = r9 == 0
                r9 = rax_3
        
        zmm11 = *(rdx_1 + arg2)
        zmm12 = *(rcx - 0x14)
        zmm8[0] = zmm8[0] - zmm10[0]
        zmm2 = zmm12.d - zmm11[0]
        zmm5 = zmm9[0] - zmm11[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm8[0] = zmm8[0] + zmm2 * zmm2
        zmm5 = zmm5 * zmm2 + (zmm7[0] - zmm10[0]) * zmm8[0]
        
        if (not(zmm8[0] <= 0f))
            zmm5 = zmm5 / zmm8[0]
        
        if (zmm5 >= 0f)
            zmm5 = _mm_min_ss(zmm5, 0x3f800000)
        else
            zmm5 = (zx.o(0)).d
        
        zmm0 = zmm5 * zmm2 + zmm11[0]
        zmm11 = *rcx
        zmm5 = zmm5 * zmm8[0] + zmm10[0] - zmm7[0]
        zmm0 = zmm0 - zmm9[0]
        int32_t r11_1
        r11_1.b = zmm11[0] > zmm7[0]
        float temp0_2 = _mm_min_ss(zmm5 * zmm5 + zmm0 * zmm0, zmm4[0])
        
        if (r11_1 != r8)
            zmm0 = zmm12.d f- *(rcx - 8)
            zmm7[0] = zmm7[0] - zmm11[0]
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm7[0] = zmm7[0] * zmm0
            zmm7[0] = zmm7[0] / zmm8[0]
            zmm7[0] = zmm7[0] f+ *(rcx - 8)
            
            if (not(zmm9[0] >= zmm7[0]))
                int32_t rax_4
                rax_4.b = r9 == 0
                r9 = rax_4
        
        zmm13 = *(rcx - 8)
        zmm11[0] = zmm11[0] - zmm8[0]
        zmm2 = zmm13.d f- zmm12.d
        zmm9[0] = zmm9[0] f- zmm12.d
        zmm11[0] = zmm11[0] * zmm11[0]
        zmm9[0] = zmm9[0] * zmm2
        zmm11[0] = zmm11[0] + zmm2 * zmm2
        bool cond:2_1 = zmm11[0] <= 0f
        zmm9[0] = zmm9[0] + (zmm7[0] - zmm8[0]) * zmm11[0]
        
        if (not(cond:2_1))
            zmm9[0] = zmm9[0] / zmm11[0]
        
        if (zmm9[0] >= 0f)
            zmm4 = _mm_min_ss(zmm9[0], 0x3f800000)
        else
            zmm4 = zx.o(0)
        
        zmm10 = *(rcx + 0xc)
        zmm0 = zmm4[0]
        zmm4[0] = zmm4[0] * zmm11[0]
        zmm4[0] = zmm4[0] + zmm8[0]
        bool cond:5_1 = zmm10[0] > zmm7[0]
        zmm4[0] = zmm4[0] - zmm7[0]
        int32_t rdx_2
        rdx_2.b = cond:5_1
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm0 = zmm0 * zmm2 f+ zmm12.d - zmm9[0]
        zmm4[0] = zmm4[0] + zmm0 * zmm0
        float temp0_4[0x4] = _mm_min_ss(zmm4[0], temp0_2)
        
        if (rdx_2 != r11_1)
            zmm0 = zmm13.d f- *(rcx + 4)
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm11[0] = zmm11[0] - zmm10[0]
            zmm7[0] = zmm7[0] * zmm0
            zmm7[0] = zmm7[0] / zmm11[0]
            zmm7[0] = zmm7[0] f+ *(rcx + 4)
            
            if (not(zmm9[0] >= zmm7[0]))
                int32_t rax_5
                rax_5.b = r9 == 0
                r9 = rax_5
        
        zmm12 = *(rcx + 4)
        zmm10[0] = zmm10[0] - zmm11[0]
        zmm2 = zmm12.d f- zmm13.d
        zmm5 = zmm9[0] f- zmm13.d
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm10[0] = zmm10[0] + zmm2 * zmm2
        zmm5 = zmm5 * zmm2 + (zmm7[0] - zmm11[0]) * zmm10[0]
        
        if (not(zmm10[0] <= 0f))
            zmm5 = zmm5 / zmm10[0]
        
        if (zmm5 >= 0f)
            zmm5 = _mm_min_ss(zmm5, 0x3f800000)
        else
            zmm5 = (zx.o(0)).d
        
        zmm8 = *(rcx + 0x18)
        zmm0 = zmm5
        zmm5 = zmm5 * zmm10[0] + zmm11[0] - zmm7[0]
        int32_t rax_6
        rax_6.b = zmm8[0] > zmm7[0]
        zmm0 = zmm0 * zmm2 f+ zmm13.d - zmm9[0]
        float temp0_6 = _mm_min_ss(zmm5 * zmm5 + zmm0 * zmm0, temp0_4[0])
        
        if (rax_6 != rdx_2)
            zmm0 = zmm12.d f- *(rcx + 0x10)
            zmm7[0] = zmm7[0] - zmm8[0]
            zmm10[0] = zmm10[0] - zmm8[0]
            zmm7[0] = zmm7[0] * zmm0
            zmm7[0] = zmm7[0] / zmm10[0]
            zmm7[0] = zmm7[0] f+ *(rcx + 0x10)
            
            if (not(zmm9[0] >= zmm7[0]))
                int32_t rax_7
                rax_7.b = r9 == 0
                r9 = rax_7
        
        zmm2 = *(rcx + 0x10)
        zmm8[0] = zmm8[0] - zmm10[0]
        zmm2 = zmm2 f- zmm12.d
        zmm9[0] = zmm9[0] f- zmm12.d
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm9[0] = zmm9[0] * zmm2
        zmm8[0] = zmm8[0] + zmm2 * zmm2
        bool cond:6_1 = zmm8[0] <= 0f
        zmm9[0] = zmm9[0] + (zmm7[0] - zmm10[0]) * zmm8[0]
        
        if (not(cond:6_1))
            zmm9[0] = zmm9[0] / zmm8[0]
        
        if (zmm9[0] >= 0f)
            zmm4 = _mm_min_ss(zmm9[0], 0x3f800000)
        else
            zmm4 = zx.o(0)
        
        zmm0 = zmm4[0]
        rax = i + 3
        zmm4[0] = zmm4[0] * zmm8[0]
        rdx_1 = 0x10 - arg2 + rcx
        rcx += 0x30
        i += 4
        zmm4[0] = zmm4[0] + zmm10[0]
        zmm4[0] = zmm4[0] - zmm7[0]
        zmm0 = zmm0 * zmm2 f+ zmm12.d - zmm9[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] + zmm0 * zmm0
        zmm4 = _mm_min_ss(zmm4[0], temp0_6)
    while (i s< arg1 - 3)

if (i s< arg1)
    zmm8 = *(arg3 + 8)
    zmm10 = *arg3
    float (* rdx_4)[0x4] = sx.q(rax) * 0xc
    int32_t* r8_1 = arg2 + sx.q(i) * 0xc
    uint64_t i_2 = zx.q(arg1 - i)
    uint64_t i_1
    
    do
        zmm7 = *(rdx_4 + arg2 + 8)
        zmm5 = r8_1[2]
        int32_t rcx_2
        rcx_2.b = zmm7[0] > zmm8[0]
        int32_t rax_10
        rax_10.b = zmm5 > zmm8[0]
        
        if (rax_10 != rcx_2)
            zmm3 = *(rdx_4 + arg2)
            zmm0 = zmm8[0]
            zmm3[0] = zmm3[0] f- *r8_1
            zmm7[0] = zmm7[0] - zmm5
            zmm3[0] = zmm3[0] * (zmm0 - zmm5)
            zmm3[0] = zmm3[0] / zmm7[0]
            zmm3[0] = zmm3[0] f+ *r8_1
            
            if (not(zmm10[0] >= zmm3[0]))
                int32_t rax_11
                rax_11.b = r9 == 0
                r9 = rax_11
        
        zmm9 = *(rdx_4 + arg2)
        zmm5 = zmm5 - zmm7[0]
        zmm3 = *r8_1
        zmm3[0] = zmm3[0] - zmm9[0]
        zmm10[0] = zmm10[0] - zmm9[0]
        zmm0 = zmm3[0]
        zmm10[0] = zmm10[0] * zmm3[0]
        zmm2 = zmm5 * zmm5 + zmm0 * zmm3[0]
        zmm10[0] = zmm10[0] + (zmm8[0] - zmm7[0]) * zmm5
        
        if (not(zmm2 <= 0f))
            zmm10[0] = zmm10[0] / zmm2
        
        float zmm1[0x4]
        
        if (zmm10[0] >= 0f)
            zmm1 = _mm_min_ss(zmm10[0], 0x3f800000)
        else
            zmm1 = zx.o(0)
        
        zmm0 = zmm1[0]
        zmm1[0] = zmm1[0] * zmm5
        rdx_4 = r8_1 - arg2
        r8_1 = &r8_1[3]
        zmm0 = zmm0 * zmm3[0]
        zmm1[0] = zmm1[0] + zmm7[0]
        zmm0 = zmm0 + zmm9[0]
        zmm1[0] = zmm1[0] - zmm8[0]
        zmm0 = zmm0 - zmm10[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] + zmm0 * zmm0
        zmm4 = _mm_min_ss(zmm1[0], zmm4[0])
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r9 != 0)
    zmm4 ^= data_142d3f780

return zmm4[0]
