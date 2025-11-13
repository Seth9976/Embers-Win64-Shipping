// 函数: sub_142348d10
// 地址: 0x142348d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(arg2 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_1 + 0x30)
        float zmm3[0x4] = *(arg2 + 0x1c0)
        float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
        float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
        float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
        float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_6)
        float zmm1[0x4] = *(arg2 + 0x1e0)
        float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
        float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float zmm4[0x4] = data_143f58a80
        float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_5)
        float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_8)
        float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm1)
        float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_13)
        float zmm2[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_10), zmm1), data_143f58a90)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
        float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_19, 0x82)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm2, 0x31)
        float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm2, 0xe8)
        float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0x10), temp0_22, 0x88)
        float zmm0[0x4] = *(arg2 + 0x1d0)
        *(arg1 + 0xc0) = temp0_21
        *(arg1 + 0xd0) = temp0_26
        *(arg1 + 0xe0) = temp0_24
        zmm4[0].q = zmm0 u>> 0x40
        *(arg1 + 0xf0) = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        
        if ((*(arg2 + 0x71a) & 2) != 0)
            *(arg1 + 0x100) = 0
            sub_141f460c0(arg1 + 0x70)
            uint64_t rax_2
            rax_2.b = 1
            return rax_2
        
        *(arg1 + 0x100) = *(arg2 + 0x734)
        
        if (arg1 + 0x70 != arg2 + 0x8e0)
            int64_t rdi_1 = sx.q(*(arg2 + 0x928))
            void* rbx_1 = arg1 + 0xa8
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax_4 = *(arg2 + 0x920)
            void* rdx_1 = arg2 + 0x918
            void* r9_1 = *(rbx_1 + 8)
            
            if (rax_4 != 0)
                rdx_1 = rax_4
            
            if (r9_1 != 0)
                rbx_1 = r9_1
            
            memcpy(rbx_1, rdx_1, (rdi_1 << 2).d)
            *(arg1 + 0xb8) = rdi_1.d
            sub_14232bef0(arg1 + 0x70, arg2 + 0x8e0)
        
        int32_t rax_3
        rax_3.b = 1
        return rax_3

rax.b = 0
return rax
