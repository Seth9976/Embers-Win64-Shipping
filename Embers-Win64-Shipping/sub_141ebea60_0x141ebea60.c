// 函数: sub_141ebea60
// 地址: 0x141ebea60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg2[1]
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7

if (r12 != 0)
    void* r13_1 = *arg2
    
    if (r13_1 != 0)
        float var_90
        void var_80
        sub_140acc970(&var_80, (*(*r12 + 0xb0))(r12, &var_90))
        bool rax_2 = sub_14222bc40(arg8, &var_80, 0) == 2
        *arg5 &= 0xfe
        *arg5 |= rax_2 | 2
        *(arg5 + 8) = 0
        float zmm2[0x4] = arg7[1]
        float var_88_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        *(arg5 + 0x10) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
        *(arg5 + 0x18) = var_88_1
        int16_t rax_5 = 0
        int16_t rcx_3 = arg2[3].w
        
        if ((rcx_3.b & 1) != 0)
            rax_5 = 1
        
        if ((rcx_3.b & 4) != 0)
            rax_5 |= 4
        
        if ((rcx_3.b & 2) != 0)
            rax_5 |= 2
        
        if ((rcx_3.b & 8) != 0)
            rax_5 |= 8
        
        if ((0x200 & rcx_3) != 0)
            rax_5 |= 0x200
        
        if ((0x400 & rcx_3) != 0)
            rax_5 |= 0x400
        
        float rax_9
        float zmm0[0x4]
        
        if ((rax_5.b & 1) == 0)
            zmm0 = zx.o(*arg3)
            rax_9 = arg3[1].d
        else
            zmm0 = *(arg2 + 0x1c)
            zmm6 = arg2[4].d
            zmm7 = *(arg2 + 0x24)
            var_90 = zmm0[0]
            zmm0 = _mm_cvtps_pd(zmm0[0].q)
            float var_8c_1 = zmm6[0]
            float var_88_2 = zmm7[0]
            
            if (_finite(zmm0[0].q) == 0)
                zmm0 = zx.o(*arg3)
                rax_9 = arg3[1].d
            else if (_finite(_mm_cvtps_pd(zmm6[0].q)[0].q) == 0)
                zmm0 = zx.o(*arg3)
                rax_9 = arg3[1].d
            else if (_finite(_mm_cvtps_pd(zmm7[0].q)[0].q) == 0)
                zmm0 = zx.o(*arg3)
                rax_9 = arg3[1].d
            else
                zmm0 = zx.o(var_90.q)
                rax_9 = var_88_2
        
        *(arg5 + 0x1c) = zmm0.q
        *(arg5 + 0x24) = rax_9
        int32_t rax_10 = arg3[1].d
        *(arg5 + 0x40) = *arg3
        *(arg5 + 0x48) = rax_10
        int32_t rax_11 = arg4[1].d
        *(arg5 + 0x4c) = *arg4
        *(arg5 + 0x54) = rax_11
        zmm0 = arg2[5].d
        zmm6 = *(arg2 + 0x2c)
        zmm7 = arg2[6].d
        var_90 = zmm0[0]
        zmm0 = _mm_cvtps_pd(zmm0[0].q)
        float var_8c_2 = zmm6[0]
        float var_88_3 = zmm7[0]
        char r9
        
        if (_finite(zmm0[0].q) == 0)
            r9 = 0
        else if (_finite(_mm_cvtps_pd(zmm6[0].q)[0].q) == 0)
            r9 = 0
        else if (_finite(_mm_cvtps_pd(zmm7[0].q)[0].q) == 0)
            r9 = 0
        else
            r9 = 1
        
        int16_t r8 = arg2[3].w
        int16_t rcx_4 = r8 & 1
        int16_t rdx_3 = rcx_4 | 4
        
        if ((r8.b & 4) == 0)
            rdx_3 = rcx_4
        
        int16_t rcx_5 = rdx_3 | 2
        
        if ((r8.b & 2) == 0)
            rcx_5 = rdx_3
        
        int16_t rdx_4 = rcx_5 | 8
        
        if ((r8.b & 8) == 0)
            rdx_4 = rcx_5
        
        int16_t rax_18 = rdx_4 | 0x200
        
        if ((r8 & 0x200) == 0)
            rax_18 = rdx_4
        
        char rcx_6
        
        if ((rax_18.b & 2) == 0 || r9 == 0)
            rcx_6 = 0
            *(arg5 + 0x34) = data_14399f678
            *(arg5 + 0x3c) = data_14399f680
            *(arg5 + 0x58) = 0
        else
            rcx_6 = 1
            *(arg5 + 0x34) = var_90.q
            *(arg5 + 0x3c) = var_88_3
            *(arg5 + 0x58) = __andps_xmmxud_memxud(*(arg2 + 0x34), data_142d3f770)[0]
        
        if (rax_2 == 0)
            if (rcx_6 == 0)
                zmm6 = *arg3
                zmm7 = *(arg3 + 4)
                zmm6[0] = zmm6[0] f- *arg4
                zmm7[0] = zmm7[0] f- *(arg4 + 4)
                float zmm8[0x4] = arg3[1].d
                zmm8[0] = zmm8[0] f- arg4[1].d
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                float var_88_4
                
                if (zmm7[0] != 1f)
                    float zmm1[0x4]
                    
                    if (zmm7[0] >= 9.99999994e-09f)
                        float temp0_11[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                        zmm2 = 0x3f000000
                        zmm7[0] = zmm7[0] * 0.5f
                        temp0_11[0] = temp0_11[0] * temp0_11[0]
                        zmm7[0] = zmm7[0] * temp0_11[0]
                        zmm2[0] = 0.5f - zmm7[0]
                        temp0_11[0] = temp0_11[0] * zmm2[0]
                        temp0_11[0] = temp0_11[0] + temp0_11[0]
                        temp0_11[0] = temp0_11[0] * temp0_11[0]
                        zmm7[0] = zmm7[0] * temp0_11[0]
                        temp0_11[0] = temp0_11[0] * (0.5f - zmm7[0])
                        temp0_11[0] = temp0_11[0] + temp0_11[0]
                        zmm1 = temp0_11
                        temp0_11[0] = temp0_11[0] * zmm6[0]
                        temp0_11[0] = temp0_11[0] * zmm8[0]
                        var_90 = temp0_11[0]
                        zmm1[0] = zmm1[0] * zmm7[0]
                        var_88_4 = temp0_11[0]
                    else
                        zmm1 = data_143dbb1fc
                        var_90 = data_143dbb1f8[0]
                        var_88_4 = data_143dbb200[0]
                    
                    float var_8c_4 = zmm1[0]
                else
                    var_90 = zmm6[0]
                    float var_8c_3 = zmm7[0]
                    var_88_4 = zmm8[0]
                
                *(arg5 + 0x34) = var_90.q
                *(arg5 + 0x3c) = var_88_4
        else if (zx.o(0)[0] f== *(arg2 + 0x34) || rcx_6 == 0)
            sub_141ebe030(arg1, arg2, arg6, arg7, arg5)
        
        int32_t r8_2 = *(arg5 + 0x3c)
        *(arg5 + 0x28) = *(arg5 + 0x34)
        *(arg5 + 0x30) = r8_2
        char var_a0_1 = arg9
        sub_141ecb5d0(r12, r13_1, arg2[2].d, &arg5[0x1c], arg5.b)
        return zx.q(rax_2)

zmm7 = zx.o(*(arg5 + 0x40))
int32_t rdi_1 = *(arg5 + 0x48)
zmm6 = zx.o(*(arg5 + 0x4c))
int32_t rbx_1 = *(arg5 + 0x54)
memset(arg5, 0, 0x88)
*(arg5 + 0x40) = zmm7.q
uint64_t result
result.b = 0
*(arg5 + 0x4c) = zmm6.q
*(arg5 + 0x48) = rdi_1
*(arg5 + 0x54) = rbx_1
*(arg5 + 8) = 0x3f800000
return result
