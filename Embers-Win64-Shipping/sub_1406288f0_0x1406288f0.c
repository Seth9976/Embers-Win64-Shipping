// 函数: sub_1406288f0
// 地址: 0x1406288f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg1 != 0)
    void* rax_1 = sub_1424890f0()
    void* rcx = *(arg1 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax << 3)) == rax_1 + 0x30)
        void var_28
        sub_142216e60(arg1, &var_28)
        int64_t var_58
        sub_140ae4210(&var_28, &var_58)
        void* rax_2 = *(arg1 + 0x130)
        float (* rax_3)[0x4]
        
        if (rax_2 == 0)
            rax_3 = &data_143dbb0c0
        else
            rax_3 = rax_2 + 0x1c0
        
        float temp0[0x4] = __mulps_xmmps_memps(data_143cdbe60, *rax_3)
        int32_t var_50
        uint128_t zmm6 = var_58 | var_50[0].q << 0x40
        uint128_t zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
        float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, temp0_3)
        uint128_t zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_2)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
        zmm3 = _mm_sub_ps(zmm3, zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_10[0x4] = _mm_mul_ps(temp0_7, zmm3)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, temp0_3)
        float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_2)
        float temp0_15[0x4] = _mm_add_ps(temp0_10, zmm6)
        float temp0_17[0x4] = _mm_add_ps(_mm_sub_ps(temp0_14, zmm0), temp0_15)
        float var_48 = temp0_17[0]
        zmm0 = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
        float var_40 = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)[0]
        int32_t var_44 = zmm0.d
        int32_t var_38
        sub_140adf3c0(&var_48, &var_38)
        int32_t* rax_4
        rax_4.b = 1
        int32_t zmm1_1 = var_38
        int32_t var_34
        *arg3 = var_34
        *arg2 = zmm1_1
        return rax_4

rax.b = 0
return rax
