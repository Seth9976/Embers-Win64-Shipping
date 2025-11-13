// 函数: sub_1422903d0
// 地址: 0x1422903d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0xf8))

if (rdx.d s< 3)
    return (zx.o(0)).d

void* rax = *(arg1 + 0xf0)
void* rcx = arg1 + 0x30
int128_t zmm5 = zx.o(0)

if (rax != 0)
    rcx = rax

int128_t zmm9 = *rcx
float zmm10[0x4] = *(rcx + 4)
int128_t zmm11 = *(rcx + 8)
float zmm7[0x4] = *(rcx + 0xc)
float zmm8[0x4] = *(rcx + 0x10)
zmm7[0] = zmm7[0] f- zmm9.d
int128_t zmm6 = *(rcx + 0x14)
zmm8[0] = zmm8[0] - zmm10[0]
int32_t var_b8 = zmm9.d
zmm6.d = zmm6.d f- zmm11.d
float var_b4 = zmm10[0]
int32_t var_b0 = zmm11.d
int32_t arg_18 = 0

if (rdx s> 2)
    void* r8_1 = 2
    float zmm12[0x4] = 0x3f000000
    float zmm0
    float zmm1[0x4]
    int128_t zmm2
    float zmm3[0x4]
    float zmm4[0x4]
    
    if (rdx s>= 6)
        float zmm13[0x4]
        float var_88_1[0x4] = zmm13
        void* r9_1 = rcx + 0x2c
        int64_t i_2 = ((rdx - 6) u>> 2) + 1
        int128_t zmm14
        int128_t var_98_1 = zmm14
        float zmm15[0x4]
        float var_a8_1[0x4] = zmm15
        r8_1 = (i_2 << 2) + 2
        int64_t i
        
        do
            zmm3 = *(r9_1 - 0x10)
            zmm5 = *(r9_1 - 0x14)
            zmm3[0] = zmm3[0] - zmm10[0]
            zmm1 = *(r9_1 - 0xc)
            zmm5.d = zmm5.d f- zmm9.d
            zmm4 = *(r9_1 - 4)
            zmm1[0] = zmm1[0] f- zmm11.d
            zmm2 = *r9_1
            zmm4[0] = zmm4[0] - zmm10[0]
            zmm2.d = zmm2.d f- zmm11.d
            zmm13 = zmm3
            zmm0 = zmm3[0] f* zmm6.d
            zmm14.d = zmm5.d f* zmm6.d
            zmm15 = zmm1
            zmm12 = zmm3
            zmm6.d = (*(r9_1 - 8)).d f- zmm9.d
            zmm15[0] = zmm15[0] * zmm8[0]
            zmm13[0] = zmm13[0] * zmm7[0]
            zmm15[0] = zmm15[0] - zmm0
            zmm12[0] = zmm12[0] f* zmm2.d
            zmm11.d = zmm6.d f* zmm1[0]
            zmm14.d = zmm14.d f- zmm1[0] * zmm7[0]
            zmm0 = zmm5.d * zmm8[0]
            zmm8 = zmm4
            zmm8[0] = zmm8[0] f* zmm5.d
            zmm13[0] = zmm13[0] - zmm0
            zmm0 = zmm4[0] * zmm1[0]
            zmm1 = *(r9_1 + 0xc)
            zmm1[0] = zmm1[0] f- *(rcx + 8)
            zmm12[0] = zmm12[0] - zmm0
            zmm0 = zmm5.d
            zmm5.d = (*(r9_1 + 4)).d f- zmm9.d
            zmm11.d = zmm11.d f- zmm0 f* zmm2.d
            zmm0 = zmm6.d * zmm3[0]
            zmm3 = *(r9_1 + 8)
            zmm3[0] = zmm3[0] - zmm10[0]
            zmm9.d = zmm5.d f* zmm2.d
            zmm8[0] = zmm8[0] - zmm0
            zmm1[0] = zmm1[0] * zmm4[0]
            zmm0 = zmm3[0] f* zmm2.d
            zmm2.d = (*(r9_1 + 0x18)).d f- *(rcx + 8)
            zmm1[0] = zmm1[0] - zmm0
            zmm3[0] = zmm3[0] f* zmm6.d
            zmm0 = zmm1[0] f* zmm6.d
            int32_t arg_20 = zmm2.d
            zmm6.d = zmm2.d f* zmm3[0]
            zmm9.d = zmm9.d f- zmm0
            zmm0 = zmm5.d * zmm4[0]
            zmm4 = *(r9_1 + 0x10)
            zmm4[0] = zmm4[0] f- *rcx
            zmm3[0] = zmm3[0] - zmm0
            zmm0 = *(r9_1 + 0x14) f- *(rcx + 4)
            float arg_8 = zmm4[0]
            zmm4[0] = zmm4[0] * zmm1[0]
            float arg_10 = zmm0
            zmm6.d = zmm6.d f- zmm0 * zmm1[0]
            zmm4[0] = zmm4[0] - zmm2.d f* zmm5.d
            zmm0 = arg_8 * zmm3[0]
            r9_1 += 0x30
            zmm2.d = arg_10.d f* zmm5.d
            zmm11.d = zmm11.d f* zmm11.d
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm2.d = zmm2.d f- zmm0
            zmm14.d = zmm14.d f* zmm14.d
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm11.d = zmm11.d f+ zmm12[0]
            zmm12 = 0x3f000000
            zmm15[0] = zmm15[0] * zmm15[0]
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm11.d = zmm11.d f+ zmm8[0]
            zmm8 = arg_10
            zmm14.d = zmm14.d f+ zmm15[0]
            zmm9.d = zmm9.d f* zmm9.d
            zmm1[0] = zmm1[0] * zmm1[0]
            float temp0_1[0x4] = _mm_sqrt_ss(0, zmm11.d)
            zmm14.d = zmm14.d f+ zmm13[0]
            zmm11 = var_b0
            zmm9.d = zmm9.d f+ zmm1[0]
            zmm10 = var_b4
            float temp0_2 = _mm_sqrt_ss(0, zmm14.d)
            temp0_1[0] = temp0_1[0] * 0.5f
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            temp0_1[0] = temp0_1[0] + temp0_2 * 0.5f
            zmm6.d = zmm6.d f* zmm6.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm9.d = zmm9.d f+ zmm3[0]
            zmm7 = arg_8
            zmm4[0] = zmm4[0] f+ zmm6.d
            zmm6 = arg_20
            float temp0_3 = _mm_sqrt_ss(0, zmm9.d)
            zmm9 = var_b8
            zmm4[0] = zmm4[0] f+ zmm2.d
            temp0_1[0] = temp0_1[0] + temp0_3 * 0.5f
            zmm0 = _mm_sqrt_ss(0, zmm4[0]) * 0.5f
            temp0_1[0] = temp0_1[0] + zmm0
            zmm5.d = arg_18.d f+ temp0_1[0]
            arg_18 = zmm5.d
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (r8_1 s< rdx)
        void* rcx_2 = rcx + r8_1 * 0xc + 8
        void* i_3 = rdx - r8_1
        void* i_1
        
        do
            zmm3 = *(rcx_2 - 4)
            zmm2 = *rcx_2
            zmm3[0] = zmm3[0] - zmm10[0]
            zmm4 = *(rcx_2 - 8)
            zmm2.d = zmm2.d f- zmm11.d
            zmm1 = zmm8
            zmm4[0] = zmm4[0] f- zmm9.d
            rcx_2 += 0xc
            zmm0 = zmm6.d * zmm3[0]
            zmm1[0] = zmm1[0] f* zmm2.d
            zmm6.d = zmm6.d f* zmm4[0]
            zmm8[0] = zmm8[0] * zmm4[0]
            zmm1[0] = zmm1[0] - zmm0
            zmm0 = zmm7[0]
            zmm7[0] = zmm7[0] * zmm3[0]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm7[0] = zmm7[0] - zmm8[0]
            zmm6.d = zmm6.d f- zmm0 f* zmm2.d
            zmm8 = zmm3
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6.d = zmm6.d f* zmm6.d
            zmm6.d = zmm6.d f+ zmm1[0]
            zmm6.d = zmm6.d f+ zmm7[0]
            zmm7 = zmm4
            float temp0_5[0x4] = _mm_sqrt_ss(0, zmm6.d)
            zmm6 = zmm2
            temp0_5[0] = temp0_5[0] * zmm12[0]
            zmm5.d = zmm5.d f+ temp0_5[0]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return zmm5.d
