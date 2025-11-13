// 函数: sub_14264a440
// 地址: 0x14264a440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t rbp = zx.q(arg5)
int32_t* r14 = arg2

if (rbp.d != 0)
    float zmm0[0x4] = zx.o(0)
    int32_t i = 1
    float r12_1 = arg2[1].d
    *arg2
    float zmm9[0x4] = *arg3
    float zmm10[0x4] = *(arg3 + 4)
    float zmm11[0x4] = *(arg3 + 8)
    zmm9[0] = zmm9[0] f- *arg2
    zmm10[0] = zmm10[0] f- *(arg2 + 4)
    zmm11[0] = zmm11[0] f- arg2[1].d
    zmm0[0] = float.s(rbp)
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm11[0] = zmm11[0] * zmm11[0]
    int128_t zmm13
    zmm13.d = 1f / zmm0[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm10[0] = zmm10[0] + zmm9[0]
    zmm10[0] = zmm10[0] + zmm11[0]
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm10[0])
    
    if (rbp.d u>= 1)
        float zmm6[0x4]
        float var_28_1[0x4] = zmm6
        float zmm7[0x4]
        float var_38_1[0x4] = zmm7
        temp0_1[0] = temp0_1[0] f* arg4
        
        do
            float zmm2[0x4] = zx.o(0)
            float zmm1[0x4] = 0x3f800000
            arg3.b = 1
            zmm2[0] = float.s(zx.q(i))
            zmm2[0] = zmm2[0] f* zmm13.d
            zmm9[0] = zmm9[0] * zmm2[0]
            zmm2[0] = zmm2[0] + zmm2[0]
            zmm10[0] = zmm10[0] * zmm2[0]
            zmm9[0] = zmm9[0] f+ *r14
            zmm10[0] = zmm10[0] f+ r14[1]
            zmm2[0] = zmm2[0] - 1f
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm1[0] = 1f - zmm2[0]
            zmm11[0] = zmm11[0] * zmm2[0]
            zmm11[0] = zmm11[0] f+ r14[2]
            zmm1[0] = zmm1[0] * temp0_1[0]
            zmm1[0] = zmm1[0] + zmm11[0]
            float var_d0_1 = zmm1[0]
            char* rax_1
            int64_t zmm8_1
            rax_1, arg3, zmm6, zmm7, zmm8_1, zmm9 = sub_140ae16d0(arg6, &arg5, arg3.b)
            int64_t rsi_1 = sx.q(arg1[1].d)
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
            float var_c0_1 = r12_1
            r12_1 = var_d0_1
            int32_t var_b0_1 = *rax_1
            int32_t rax_3 = (rsi_1 + 1).d
            float var_b4_1 = r12_1
            int32_t var_ac_1 = 0
            arg1[1].d = rax_3
            
            if (rax_3 s> *(arg1 + 0xc))
                sub_1405c4e40(arg1)
            
            result = *arg1
            int128_t* rcx_3 = rsi_1 << 5
            i += 1
            temp0_2[0]
            *(rcx_3 + result) = zmm8_1.o
            *(rcx_3 + result + 0x10) = temp0_2.q:4.o
        while (i u<= rbp.d)

return result
