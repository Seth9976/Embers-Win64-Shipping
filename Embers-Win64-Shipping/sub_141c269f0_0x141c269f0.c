// 函数: sub_141c269f0
// 地址: 0x141c269f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140d3c6e0(arg1 + 0x7a8)
uint64_t rbx = rax
float rax_9
float zmm0[0x4]
float zmm6[0x4]

if (rax != 0)
label_141c26a92:
    void* rax_4 = sub_142452380()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        zmm0 = zx.o(*(arg1 + 0x7d0))
        rax_9 = *(arg1 + 0x7d8)
    else
        void* rax_7 = *(rbx + 0x130)
        float var_18_1[0x4] = zmm6
        int128_t* rax_8
        
        if (rax_7 == 0)
            rax_8 = &data_143dbb0c0
        else
            rax_8 = rax_7 + 0x1c0
        
        zmm6 = *rax_8
        float zmm2[0x4] = *(arg1 + 0x7d4)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x7d0), (*(arg1 + 0x7d8))[0].q)
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_5[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), rax_8[2])
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_3)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_3)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
        float temp0_22[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), rax_8[1])
        rax_9 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
        zmm0 = _mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)
else if (*(arg1 + 0x7b8) == rax)
    zmm0 = zx.o(*(arg1 + 0x7d0))
    rax_9 = *(arg1 + 0x7d8)
else
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != *(arg1 + 0x7b0) || *(arg1 + 0x7a8) != 0xffffffff)
        void* rax_1
        rax_1, zmm6 = sub_140d2bce0(arg1 + 0x7b8)
        sub_140d3a3a0(arg1 + 0x7a8, rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            *(arg1 + 0x7b0) = rax_2
        
        uint64_t rax_3 = sub_140d3c6e0(arg1 + 0x7a8)
        rbx = rax_3
        
        if (rax_3 != 0)
            goto label_141c26a92
        
        zmm0 = zx.o(*(arg1 + 0x7d0))
        rax_9 = *(arg1 + 0x7d8)
    else
        zmm0 = zx.o(*(arg1 + 0x7d0))
        rax_9 = *(arg1 + 0x7d8)
*arg2 = zmm0.q
arg2[1].d = rax_9
return arg2
