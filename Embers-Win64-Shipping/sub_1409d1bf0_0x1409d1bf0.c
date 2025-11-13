// 函数: sub_1409d1bf0
// 地址: 0x1409d1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg3)
int64_t* r15_1 = *(arg2 + 0x28) + 0x1a8
void* rsi = *(**(arg1[5] + 0x50) + (sx.q(arg1[7].d) << 3))
uint64_t result = *arg4
int64_t r9 = data_143f360f8
float var_108
float zmm2[0x4]

if (result == r9 || result == data_143f36100 || result == data_143f36108)
    if (*(arg2 + 0x520) s<= 0)
        sub_14099ad60(r15_1, &var_108, rbx.d, r9, 0)
        int32_t var_118
        sub_14099ad60(r15_1, &var_118, rbx.d, data_143f36100, 0)
        int32_t var_110
        float zmm15[0x4] = var_110
        float zmm6[0x4] = sub_14099acb0(r15_1, rbx.d, data_143f36108, 0)
        int32_t var_100
        float zmm7[0x4] = var_100
        float zmm4[0x4] = var_118
        float zmm13[0x4] = zmm7
        float zmm9[0x4] = var_108
        float zmm12[0x4] = zmm15
        int32_t var_104
        float zmm8[0x4] = var_104
        int32_t var_114
        float zmm3[0x4] = var_114
        float zmm14[0x4] = zmm9
        zmm15[0] = zmm15[0] * zmm9[0]
        zmm7[0] = zmm7[0] * zmm3[0]
        zmm13[0] = zmm13[0] * zmm4[0]
        zmm12[0] = zmm12[0] * zmm8[0]
        zmm13[0] = zmm13[0] - zmm15[0]
        zmm14[0] = zmm14[0] * zmm3[0]
        zmm12[0] = zmm12[0] - zmm7[0]
        zmm8[0] = zmm8[0] * zmm4[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm14[0] = zmm14[0] - zmm8[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm13[0] = zmm13[0] + zmm14[0]
        
        if (not(zmm13[0] == 1f))
            if (zmm13[0] >= 9.99999994e-09f)
                zmm4 = 0x3f000000
                float temp0_4[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
                zmm2 = 0x3f000000
                zmm13[0] = zmm13[0] * 0.5f
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm13[0] = zmm13[0] * temp0_4[0]
                zmm2[0] = 0.5f - zmm13[0]
                temp0_4[0] = temp0_4[0] * zmm2[0]
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                temp0_4[0] = temp0_4[0] * temp0_4[0]
                zmm13[0] = zmm13[0] * temp0_4[0]
                zmm4[0] = 0.5f - zmm13[0]
                zmm3 = var_114
                temp0_4[0] = temp0_4[0] * zmm4[0]
                zmm4 = var_118
                temp0_4[0] = temp0_4[0] + temp0_4[0]
                zmm12[0] = zmm12[0] * temp0_4[0]
                zmm13[0] = zmm13[0] * temp0_4[0]
                zmm14[0] = zmm14[0] * temp0_4[0]
            else
                zmm12 = data_143dbb1f8
                zmm13 = data_143dbb1fc
                zmm14 = data_143dbb200
        
        bool cond:0_1 = *(rsi + 0xf1) == 0
        int64_t r14_1 = *(rsi + 0xd0)
        zmm12[0] = zmm12[0] * zmm6[0]
        zmm13[0] = zmm13[0] * zmm6[0]
        zmm14[0] = zmm14[0] * zmm6[0]
        float var_f8
        float zmm0_2[0x4]
        
        if (cond:0_1)
            char rbx_3 = -0x80
            zmm4[0] = zmm4[0] * 127f
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm4[0] = zmm4[0] + 0.5f
            int32_t rax_24 = int.d(zmm4[0]) s>> 1
            char rcx_22
            
            if (rax_24 s>= 0xffffff80)
                rcx_22 = 0x7f
                
                if (rax_24 s< 0x7f)
                    rcx_22 = rax_24.b
            else
                rcx_22 = -0x80
            
            *(r14_1 + (rbx << 3)) = rcx_22
            zmm3[0] = zmm3[0] * 127f
            zmm3[0] = zmm3[0] + zmm3[0]
            zmm3[0] = zmm3[0] + 0.5f
            int32_t rax_26 = int.d(zmm3[0]) s>> 1
            char rcx_23
            
            if (rax_26 s>= 0xffffff80)
                rcx_23 = 0x7f
                
                if (rax_26 s< 0x7f)
                    rcx_23 = rax_26.b
            else
                rcx_23 = -0x80
            
            *(r14_1 + (rbx << 3) + 1) = rcx_23
            zmm15[0] = zmm15[0] * 127f
            zmm15[0] = zmm15[0] + zmm15[0]
            zmm15[0] = zmm15[0] + 0.5f
            int32_t rax_28 = int.d(zmm15[0]) s>> 1
            char rcx_24
            
            if (rax_28 s>= 0xffffff80)
                rcx_24 = 0x7f
                
                if (rax_28 s< 0x7f)
                    rcx_24 = rax_28.b
            else
                rcx_24 = -0x80
            
            zmm0_2 = data_142d3f660
            *(r14_1 + (rbx << 3) + 2) = rcx_24
            float var_c8_2[0x4] = zmm0_2
            var_f8 = zmm4[0]
            float var_f4_2 = zmm3[0]
            float var_f0_2 = zmm15[0]
            float var_e8_2 = zmm12[0]
            float var_e4_2 = zmm13[0]
            float var_e0_2 = zmm14[0]
            float var_d8_2 = zmm9[0]
            float var_d4_2 = zmm8[0]
            float var_d0_2 = zmm7[0]
            *(r14_1 + (rbx << 3) + 3) = 0x7f
            int32_t var_ec_2 = 0
            int32_t var_dc_2 = 0
            int32_t var_cc_2 = 0
            float zmm0_4
            int32_t zmm6_2
            float zmm7_2
            float zmm8_2
            float zmm9_2
            float zmm10_2
            float zmm11_2
            zmm0_4, zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2 = sub_14062b8d0(&var_f8)
            float zmm1_2
            
            zmm1_2 = zmm0_4 f>= zmm6_2 ? 254.5f : -253.5f
            
            zmm9_2 = zmm9_2 * zmm11_2
            int32_t rax_30 = int.d(zmm9_2 + zmm9_2 + zmm10_2) s>> 1
            char rcx_26
            
            if (rax_30 s>= 0xffffff80)
                rcx_26 = 0x7f
                
                if (rax_30 s< 0x7f)
                    rcx_26 = rax_30.b
            else
                rcx_26 = -0x80
            
            zmm8_2 = zmm8_2 * zmm11_2
            *(r14_1 + (rbx << 3) + 4) = rcx_26
            int32_t rax_32 = int.d(zmm8_2 + zmm8_2 + zmm10_2) s>> 1
            char rcx_27
            
            if (rax_32 s>= 0xffffff80)
                rcx_27 = 0x7f
                
                if (rax_32 s< 0x7f)
                    rcx_27 = rax_32.b
            else
                rcx_27 = -0x80
            
            zmm7_2 = zmm7_2 * zmm11_2
            *(r14_1 + (rbx << 3) + 5) = rcx_27
            int32_t rax_34 = int.d(zmm7_2 + zmm7_2 + zmm10_2) s>> 1
            char rcx_28
            
            if (rax_34 s>= 0xffffff80)
                rcx_28 = 0x7f
                
                if (rax_34 s< 0x7f)
                    rcx_28 = rax_34.b
            else
                rcx_28 = -0x80
            
            *(r14_1 + (rbx << 3) + 6) = rcx_28
            result = zx.q(int.d(zmm1_2) s>> 1)
            
            if (result.d s>= 0xffffff80)
                rbx_3 = 0x7f
                
                if (result.d s< 0x7f)
                    rbx_3 = result.b
            
            *(r14_1 + (rbx << 3) + 7) = rbx_3
        else
            int16_t rbx_2 = -0x8000
            zmm4[0] = zmm4[0] * 32767f
            int16_t* rdi_3 = (rbx << 4) + r14_1
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm4[0] = zmm4[0] + 0.5f
            int32_t rax_11 = int.d(zmm4[0]) s>> 1
            int16_t rcx_15
            
            if (rax_11 s>= 0xffff8000)
                rcx_15 = 0x7fff
                
                if (rax_11 s< 0x7fff)
                    rcx_15 = rax_11.w
            else
                rcx_15 = -0x8000
            
            *rdi_3 = rcx_15
            zmm3[0] = zmm3[0] * 32767f
            zmm3[0] = zmm3[0] + zmm3[0]
            zmm3[0] = zmm3[0] + 0.5f
            int32_t rax_13 = int.d(zmm3[0]) s>> 1
            int16_t rcx_16
            
            if (rax_13 s>= 0xffff8000)
                rcx_16 = 0x7fff
                
                if (rax_13 s< 0x7fff)
                    rcx_16 = rax_13.w
            else
                rcx_16 = -0x8000
            
            rdi_3[1] = rcx_16
            zmm15[0] = zmm15[0] * 32767f
            zmm15[0] = zmm15[0] + zmm15[0]
            zmm15[0] = zmm15[0] + 0.5f
            int32_t rax_15 = int.d(zmm15[0]) s>> 1
            int16_t rcx_17
            
            if (rax_15 s>= 0xffff8000)
                rcx_17 = 0x7fff
                
                if (rax_15 s< 0x7fff)
                    rcx_17 = rax_15.w
            else
                rcx_17 = -0x8000
            
            zmm0_2 = data_142d3f660
            rdi_3[2] = rcx_17
            float var_c8_1[0x4] = zmm0_2
            var_f8 = zmm4[0]
            float var_f4_1 = zmm3[0]
            float var_f0_1 = zmm15[0]
            float var_e8_1 = zmm12[0]
            float var_e4_1 = zmm13[0]
            float var_e0_1 = zmm14[0]
            float var_d8_1 = zmm9[0]
            float var_d4_1 = zmm8[0]
            float var_d0_1 = zmm7[0]
            rdi_3[3] = 0x7fff
            int32_t var_ec_1 = 0
            int32_t var_dc_1 = 0
            int32_t var_cc_1 = 0
            float zmm0_3
            int32_t zmm6_1
            float zmm7_1
            float zmm8_1
            float zmm9_1
            float zmm10_1
            float zmm11_1
            zmm0_3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_14062b8d0(&var_f8)
            float zmm1_1
            
            zmm1_1 = zmm0_3 f>= zmm6_1 ? 65534.5f : -65533.5f
            
            zmm9_1 = zmm9_1 * zmm11_1
            int32_t rax_17 = int.d(zmm9_1 + zmm9_1 + zmm10_1) s>> 1
            int16_t rcx_19
            
            if (rax_17 s>= 0xffff8000)
                rcx_19 = 0x7fff
                
                if (rax_17 s< 0x7fff)
                    rcx_19 = rax_17.w
            else
                rcx_19 = -0x8000
            
            zmm8_1 = zmm8_1 * zmm11_1
            rdi_3[4] = rcx_19
            int32_t rax_19 = int.d(zmm8_1 + zmm8_1 + zmm10_1) s>> 1
            int16_t rcx_20
            
            if (rax_19 s>= 0xffff8000)
                rcx_20 = 0x7fff
                
                if (rax_19 s< 0x7fff)
                    rcx_20 = rax_19.w
            else
                rcx_20 = -0x8000
            
            zmm7_1 = zmm7_1 * zmm11_1
            rdi_3[5] = rcx_20
            int32_t rax_21 = int.d(zmm7_1 + zmm7_1 + zmm10_1) s>> 1
            int16_t rcx_21
            
            if (rax_21 s>= 0xffff8000)
                rcx_21 = 0x7fff
                
                if (rax_21 s< 0x7fff)
                    rcx_21 = rax_21.w
            else
                rcx_21 = -0x8000
            
            rdi_3[6] = rcx_21
            result = zx.q(int.d(zmm1_1) s>> 1)
            
            if (result.d s>= 0xffff8000)
                rbx_2 = 0x7fff
                
                if (result.d s< 0x7fff)
                    rbx_2 = result.w
            
            rdi_3[7] = rbx_2
else
    float result_1
    
    if (result != data_143f360f0)
        if (result == data_143f36110 && *(arg2 + 0x520) s<= 0)
            zmm2 = *(arg4 + 0x20)
            int64_t r8
            r8.b = 1
            var_108 = zmm2[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float var_fc_1 = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
            float var_104_1 = temp0_1[0]
            float var_100_1 = temp0_2[0]
            sub_140ae16d0(&var_108, &result_1, r8.b)
            result = *(arg2 + 0x28)
            
            if (*(rsi + 0x16c) == *(result + 0x40))
                result = zx.q(result_1)
                *(zx.q(*(rsi + 0x168) * rbx.d) + *(rsi + 0x160)) = result.d
            else if (var_108 f!= data_14399f5c0.d || var_104_1 f!= data_14399f5c0:4.d
                    || var_100_1 f!= data_14399f5c0:8.d || not(var_fc_1 f== data_14399f5c0:0xc.d))
                return (*(*arg1 + 0x270))(arg1, arg2)
    else if (*(arg2 + 0x520) s<= 0)
        result = zx.q(arg4[1].d)
        float zmm0[0x4] = *(arg4 + 0x3c)
        float zmm1[0x4] = arg4[8].d
        int64_t r11_1 = *(rsi + 0xd8)
        int64_t r9_3 = zx.q(*(rsi + 0xe8)) * rbx + result
        
        if (*(rsi + 0xf0) == 0)
            result_1 = zmm0[0]
            float result_2 = result_1
            uint16_t rcx_1 = (result_2 u>> 0x17).w
            uint16_t rdx_1 = (result_2 u>> 0x1f).w << 0xf
            uint32_t r8_1 = zx.d(rcx_1.b)
            
            if (r8_1 u> 0x70)
                if (r8_1 u< 0x8f)
                    rdx_1 |= ((result_2 u>> 0xd).w & 0x3ff) | ((rcx_1 - 0x10) & 0x1f) << 0xa
                else
                    rdx_1 |= 0x7bff
            else if (0x70 - r8_1 + 0xe s<= 0x18)
                int32_t rax_4 = (result_2 & 0x7fffff) | 0x800000
                uint16_t r8_3 = ((rax_4 u>> (0x70 - r8_1 + 0xe).b).w & 0x3ff) | rdx_1
                rdx_1 = r8_3
                
                if (((rax_4 u>> ((0x70 - r8_1).b + 0xd)).b & 1) != 0)
                    rdx_1 = r8_3 + 1
            
            *(r11_1 + (r9_3 << 2)) = rdx_1
            result_1 = zmm1[0]
            result = zx.q(result_1)
            uint16_t rcx_5 = (result.d u>> 0x17).w
            uint16_t rdx_3 = (result.d u>> 0x1f).w << 0xf
            uint32_t r8_4 = zx.d(rcx_5.b)
            
            if (r8_4 u> 0x70)
                if (r8_4 u< 0x8f)
                    result.w = (result.d u>> 0xd).w & 0x3ff
                    result.w |= ((rcx_5 - 0x10) & 0x1f) << 0xa
                    *(r11_1 + (r9_3 << 2) + 2) = rdx_3 | result.w
                else
                    *(r11_1 + (r9_3 << 2) + 2) = rdx_3 | 0x7bff
            else if (0x70 - r8_4 + 0xe s> 0x18)
                *(r11_1 + (r9_3 << 2) + 2) = rdx_3
            else
                int32_t rax_8 = (result.d & 0x7fffff) | 0x800000
                result = zx.q(rax_8 u>> ((0x70 - r8_4).b + 0xd))
                uint16_t r8_6 = ((rax_8 u>> (0x70 - r8_4 + 0xe).b).w & 0x3ff) | rdx_3
                
                if ((result.b & 1) == 0)
                    *(r11_1 + (r9_3 << 2) + 2) = r8_6
                else
                    *(r11_1 + (r9_3 << 2) + 2) = r8_6 + 1
        else
            *(r11_1 + (r9_3 << 3)) = zmm0[0]
            *(r11_1 + (r9_3 << 3) + 4) = zmm1[0]
return result
