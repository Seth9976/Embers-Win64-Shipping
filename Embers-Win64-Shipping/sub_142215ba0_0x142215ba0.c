// 函数: sub_142215ba0
// 地址: 0x142215ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)

if (rcx == 0)
    return 

void* r10_1 = **(*(arg1 + 0x10) + 0x40)
float rax_4

if ((*(*(r10_1 + 0x30) + 0x59) & 1) != 0)
    *(arg1 + 0x14c) = data_143dbb1f8.q
    *(arg1 + 0x154) = data_143dbb200
    *(arg1 + 0x140) = data_143dbb1f8.q
    rax_4 = data_143dbb200
else
    float zmm2[0x4] = *(rcx + 0x1d0)
    float var_c0_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *(arg1 + 0x14c) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    *(arg1 + 0x154) = var_c0_1
    zmm2 = *(rcx + 0x1d0)
    rax_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *(arg1 + 0x140) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q

int64_t i_1 = sx.q(*(arg1 + 0x118))
*(arg1 + 0x148) = rax_4
*(arg1 + 0x158) = 1

if (i_1.d s> 0)
    float zmm5 = -3.40282347e+38f
    int16_t* rdx_2 = *(arg1 + 0xf8)
    int32_t r11_1 = *(arg1 + 0x114)
    int64_t rsi_1 = sx.q(*(arg1 + 0x30))
    int64_t rdi_1 = *(arg1 + 0xf0)
    float zmm6[0x4] = 0xff7fffff
    float zmm7[0x4] = 0xff7fffff
    float zmm8[0x4] = 0x7f7fffff
    float zmm4 = 3.40282347e+38f
    float zmm9[0x4] = 0x7f7fffff
    void* rcx_2 = sx.q(zx.d(*rdx_2) * r11_1) + rdi_1
    float var_e8_1 = 3.40282347e+38f
    int32_t var_e4_1 = 0x7f7fffff
    float var_e0_1 = 3.40282347e+38f
    float var_d8_1 = -3.40282347e+38f
    float zmm14[0x4] = *(rsi_1 + rcx_2 + 0x40)
    int64_t var_c8_1 = *(rcx_2 + 0x10)
    int32_t var_d4_1 = 0xff7fffff
    float var_d0_1 = -3.40282347e+38f
    int32_t var_c0_3 = *(rcx_2 + 0x18)
    
    if (i_1 s> 0)
        float zmm10[0x4]
        float var_58_1[0x4] = zmm10
        float zmm11[0x4]
        float var_68_1[0x4] = zmm11
        float zmm12[0x4]
        float var_78_1[0x4] = zmm12
        int64_t i
        
        do
            void* rcx_4 = sx.q(zx.d(*rdx_2) * r11_1) + rdi_1
            zmm10 = *(rcx_4 + 0x10)
            zmm11 = *(rcx_4 + 0x14)
            zmm10[0] = zmm10[0] f- var_c8_1.d
            zmm12 = *(rcx_4 + 0x18)
            zmm11[0] = zmm11[0] f- var_c8_1:4.d
            float zmm3[0x4] = *(rsi_1 + rcx_4 + 0x40)
            zmm12[0] = zmm12[0] f- var_c0_3
            int32_t rax_11 = *(rcx_4 + 0x18)
            zmm10[0] = zmm10[0] * zmm10[0]
            var_c0_3 = rax_11
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm11[0] = zmm11[0] + zmm10[0]
            zmm11[0] = zmm11[0] + zmm12[0]
            zmm3[0] = zmm3[0] - zmm14[0]
            zmm14 = zmm3
            float temp0_7[0x4] = _mm_sqrt_ss(0, zmm11[0])
            temp0_7[0] = temp0_7[0] + zmm3[0]
            var_c8_1 = *(rcx_4 + 0x10)
            temp0_7[0] = temp0_7[0] * 0.25f
            temp0_7[0] = temp0_7[0] + zmm3[0]
            zmm10[0] = zmm10[0] - temp0_7[0]
            zmm11[0] = zmm11[0] - temp0_7[0]
            zmm12[0] = zmm12[0] - temp0_7[0]
            zmm10[0] = zmm10[0] + temp0_7[0]
            zmm11[0] = zmm11[0] + temp0_7[0]
            bool cond:0_1 = zmm10[0] > zmm8[0]
            zmm12[0] = zmm12[0] + temp0_7[0]
            
            if (not(cond:0_1))
                var_e8_1 = zmm10[0]
                zmm8 = zmm10
            
            if (not(zmm11[0] > zmm4))
                float var_e4_2 = zmm11[0]
                zmm4 = zmm11[0]
            
            if (not(zmm12[0] > zmm9[0]))
                var_e0_1 = zmm12[0]
                zmm9 = zmm12
            
            if (not(zmm10[0] < zmm5))
                var_d8_1 = zmm10[0]
                zmm5 = zmm10[0]
            
            if (not(zmm11[0] < zmm7[0]))
                float var_d4_2 = zmm11[0]
                zmm7 = zmm11
            
            if (not(zmm12[0] < zmm6[0]))
                var_d0_1 = zmm12[0]
                zmm6 = zmm12
            
            if (not(zmm10[0] > zmm8[0]))
                var_e8_1 = zmm10[0]
                zmm8 = zmm10
            
            if (not(zmm11[0] > zmm4))
                zmm4 = zmm11[0]
                float var_e4_3 = zmm4
            
            if (not(zmm12[0] > zmm9[0]))
                var_e0_1 = zmm12[0]
                zmm9 = zmm12
            
            if (not(zmm10[0] < zmm5))
                zmm5 = zmm10[0]
                var_d8_1 = zmm5
            
            if (not(zmm11[0] < zmm7[0]))
                zmm7 = zmm11
                float var_d4_3 = zmm7[0]
            
            if (not(zmm12[0] < zmm6[0]))
                zmm6 = zmm12
                var_d0_1 = zmm6[0]
            
            rdx_2 = &rdx_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    float rax_12 = zx.d(*(arg1 + 0x158))
    float zmm1[0x4]
    
    if (rax_12.b == 0)
        zmm1 = zx.o(var_e8_1.q)
        *(arg1 + 0x14c) = zmm1.q
        *(arg1 + 0x140) = zmm1.q
        *(arg1 + 0x154) = var_e0_1
        *(arg1 + 0x148) = var_e0_1
        rax_12.b = 1
        *(arg1 + 0x158) = 1
    else
        zmm1 = *(arg1 + 0x144)
        float temp0_8[0x4] = _mm_min_ss((*(arg1 + 0x140))[0], zmm8[0])
        float temp0_9[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x14c))
        float temp0_10[0x4] = _mm_min_ss(zmm1[0], zmm4)
        float temp0_11 = __maxss_xmmss_memss(zmm4, *(arg1 + 0x150))
        *(arg1 + 0x140) = temp0_8[0]
        float temp0_12[0x4] = _mm_min_ss((*(arg1 + 0x148))[0], zmm9[0])
        *(arg1 + 0x144) = temp0_10[0]
        *(arg1 + 0x14c) = temp0_9[0]
        *(arg1 + 0x150) = temp0_11
        *(arg1 + 0x148) = temp0_12[0]
        *(arg1 + 0x154) = _mm_max_ss((*(arg1 + 0x154))[0], zmm9[0])[0]
    
    if (rax_12.b == 0)
        zmm1 = zx.o(var_d8_1.q)
        *(arg1 + 0x14c) = zmm1.q
        *(arg1 + 0x140) = zmm1.q
        *(arg1 + 0x154) = var_d0_1
        *(arg1 + 0x148) = var_d0_1
        *(arg1 + 0x158) = 1
    else
        zmm1 = *(arg1 + 0x144)
        float temp0_14[0x4] = _mm_min_ss((*(arg1 + 0x140))[0], zmm5)
        float temp0_15[0x4] = _mm_min_ss(zmm1[0], zmm7[0])
        *(arg1 + 0x140) = temp0_14[0]
        float temp0_16[0x4] = __minss_xmmss_memss(zmm6[0], *(arg1 + 0x148))
        *(arg1 + 0x144) = temp0_15[0]
        float temp0_17[0x4] = _mm_max_ss((*(arg1 + 0x14c))[0], zmm5)
        *(arg1 + 0x148) = temp0_16[0]
        float temp0_18[0x4] = _mm_max_ss((*(arg1 + 0x150))[0], zmm7[0])
        *(arg1 + 0x14c) = temp0_17[0]
        float temp0_19[0x4] = _mm_max_ss((*(arg1 + 0x154))[0], zmm6[0])
        *(arg1 + 0x150) = temp0_18[0]
        *(arg1 + 0x154) = temp0_19[0]

if ((*(*(r10_1 + 0x30) + 0x59) & 1) == 0)
    return 

uint64_t var_b8[0x4]
uint64_t* rax_14 = sub_140ae2c60(arg1 + 0x140, &var_b8, *(arg1 + 0x18) + 0x1c0)
*(arg1 + 0x140) = *rax_14
*(arg1 + 0x150) = rax_14[2]
*(arg1 + 0x158) = rax_14[3].d
