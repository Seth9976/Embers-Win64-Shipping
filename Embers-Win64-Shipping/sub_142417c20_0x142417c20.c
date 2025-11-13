// 函数: sub_142417c20
// 地址: 0x142417c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
float zmm6[0x4]
rax, zmm6 = sub_141f20900(arg1)

if (arg1[0x81] != 0)
    if ((arg1[0x83].b & 1) != 0)
        int64_t* rax_1
        int64_t r8_1
        rax_1, r8_1 = j_sub_140a82f30(0x110)
        int64_t* rbx_1 = rax_1
        float zmm1_1[0x4]
        
        if (rax_1 == 0)
            rbx_1 = rax_1
        else
            *rbx_1 = 0
            *(rbx_1 + 0x30) = data_14399f6e0
            *(rbx_1 + 0x40) = data_14399f6f0
            *(rbx_1 + 0x50) = data_14399f700
            *(rbx_1 + 0x60) = data_14399f710
            *(rbx_1 + 0x70) = data_14399f6e0
            *(rbx_1 + 0x80) = data_14399f6f0
            *(rbx_1 + 0x90) = data_14399f700
            *(rbx_1 + 0xa0) = data_14399f710
            *(rbx_1 + 0xb0) = data_14399f6e0
            *(rbx_1 + 0xc0) = data_14399f6f0
            *(rbx_1 + 0xd0) = data_14399f700
            zmm1_1 = data_14399f710
            *(rbx_1 + 0xfc) &= 0xfffffff0
            *(rbx_1 + 0xe0) = zmm1_1
            rbx_1[0x1e] = 0
            rbx_1[0x1f].d = 0xffffffff
            rbx_1[0x20].b = 0
        
        int64_t* rcx = arg1[0x81]
        r8_1.b = 1
        (*(*rcx + 0x260))(rcx, rbx_1, r8_1)
        float zmm3[0x4] = *(arg1 + 0x1c0)
        float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
        float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0, temp0, 0x29), temp0_1)
        float temp0_7[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0, temp0, 0x12))
        zmm1_1 = *(arg1 + 0x1e0)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
        float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_3, temp0_3, 1))
        float zmm4[0x4] = data_143f5bcd0
        float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_5)
        float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_7)
        float temp0_14[0x4] = _mm_sub_ps(zmm4, temp0_11)
        float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm1_1)
        float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_13)
        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_14, zmm1_1), data_143f5be30)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x32)
        float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), temp0_19, 0x82)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
        float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0x10), temp0_22, 0x88)
        float zmm0_1[0x4] = *(arg1 + 0x1d0)
        zmm4[0].q = zmm0_1 u>> 0x40
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
        float temp0_26[0x4] = _mm_shuffle_ps(zmm0_1, zmm4, 0xc4)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
        float var_28[0x4] = temp0_26
        float var_58[0x4] = temp0_21
        float var_48[0x4] = temp0_24
        float var_38[0x4] = temp0_27
        uint32_t (* rax_3)[0x4]
        int512_t zmm6_1
        rax_3, zmm6_1 = sub_1424256a0(rbx_1, &var_58)
        zmm6_1.o = zmm6
        arg1[0x85] = rbx_1
        return rax_3
    
    void* rbx_2 = arg1[0x15]
    
    if (rbx_2 != 0)
    label_142417e45:
        int64_t* rcx_3 = *(rbx_2 + 0x1b0)
        
        if (rcx_3 != 0)
            int64_t rdx_3 = *rcx_3
            rax = (*(rdx_3 + 0x270))(rcx_3, rdx_3)
            
            if (rax != 0)
                int64_t* rcx_4 = *(rbx_2 + 0x1b0)
                int64_t* rax_5 = (*(*rcx_4 + 0x270))(rcx_4)
                arg1[0x84] = rax_5
                int64_t r8_2 = *rax_5
                return (*(r8_2 + 0x28))(rax_5, arg1, r8_2)
    else
        rax = sub_141ee69e0(arg1)
        rbx_2 = rax
        
        if (rax != 0)
            goto label_142417e45

return rax
