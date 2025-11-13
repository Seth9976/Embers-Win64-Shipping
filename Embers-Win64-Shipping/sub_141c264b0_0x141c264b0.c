// 函数: sub_141c264b0
// 地址: 0x141c264b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg1 + 0x7e0))
float result[0x4] = zx.o(0)

if (rcx == 1)
    result = *(arg1 + 0x7e4)
else if (rcx == 2)
    uint64_t rax_1 = sub_140d3c6e0(arg1 + 0x7e8)
    uint64_t rbx_1 = rax_1
    float zmm0[0x4]
    uint128_t zmm1
    float zmm2[0x4]
    
    if (rax_1 != 0)
    label_141c26572:
        void* rax_5 = sub_142452380()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            goto label_141c26643
        
        void* rax_8 = *(rbx_1 + 0x130)
        int128_t* rax_9
        
        if (rax_8 == 0)
            rax_9 = &data_143dbb0c0
        else
            rax_9 = rax_8 + 0x1c0
        
        float zmm5_1[0x4] = *rax_9
        zmm0 = *(arg1 + 0x818)
        float zmm4_1[0x4] = *(arg1 + 0x810)
        zmm2 = _mm_unpacklo_ps(*(arg1 + 0x814), zx.o(0).q)
        zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        zmm4_1 = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm0[0].q), zmm2[0].q), rax_9[2])
        float zmm3[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9), zmm1)
        zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm3), zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm5_1 = _mm_add_ps(zmm5_1, zmm4_1)
        zmm1 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm1, zmm3), zmm0), zmm5_1), 
            rax_9[1])
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    else
        if (*(arg1 + 0x7f8) != rax_1)
            if (rax_1.d == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_1 = zx.q(data_1439aaa30)
            
            if (rax_1.d == *(arg1 + 0x7f0) && *(arg1 + 0x7e8) == 0xffffffff)
                goto label_141c26643
            
            void* rax_2 = sub_140d2bce0(arg1 + 0x7f8)
            sub_140d3a3a0(arg1 + 0x7e8, rax_2)
            
            if (rax_2 != 0 || data_143e1d7b4 == 0)
                int32_t rax_3 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_3 = data_1439aaa30
                
                *(arg1 + 0x7f0) = rax_3
            
            uint64_t rax_4 = sub_140d3c6e0(arg1 + 0x7e8)
            rbx_1 = rax_4
            
            if (rax_4 == 0)
                goto label_141c26643
            
            goto label_141c26572
        
    label_141c26643:
        zmm1 = zx.o(*(arg1 + 0x810))
        zmm0 = zmm1
        zmm2 = *(arg1 + 0x818)
        zmm1 = zmm1.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    
    zmm0[0] = zmm0[0] f- arg2[1]
    zmm1.d = zmm1.d f- *arg2
    zmm2[0] = zmm2[0] f- arg2[2]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1.d = zmm1.d f* zmm1.d
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm0[0] = zmm0[0] f+ zmm1.d
    zmm0[0] = zmm0[0] + zmm2[0]
    result = _mm_sqrt_ss(0, zmm0[0])

result[0] = result[0] f+ *(arg1 + 0x830)
return result
