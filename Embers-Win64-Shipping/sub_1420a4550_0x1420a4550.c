// 函数: sub_1420a4550
// 地址: 0x1420a4550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
float zmm9[0x4]
float var_68[0x4] = zmm9
int32_t i = 0

if (*(arg1 + 0x168) s> 0)
    int64_t rbp_1 = 0
    
    do
        void* r14_1 = *(arg1 + 0x160)
        int32_t j = 0
        
        if (*(r14_1 + rbp_1 + 0x48) s> 0)
            void* r15_1 = r14_1 + rbp_1
            int64_t rsi_1 = 0
            
            do
                void* rax_1 = *(r15_1 + 0x40)
                void* rbx_1 = r15_1 + 0x30
                
                if (rax_1 != 0)
                    rbx_1 = rax_1
                
                int64_t* rcx = *(rbx_1 + rsi_1)
                
                if ((*(*rcx + 0x2d8))(rcx, 7) == 0)
                    *(rbx_1 + rsi_1) = sub_14210f630(0)
                
                j += 1
                rsi_1 += 0x10
            while (j s< *(r14_1 + rbp_1 + 0x48))
        
        i += 1
        rbp_1 -= -0x80
    while (i s< *(arg1 + 0x168))
    
    rbx = arg2

*(arg1 + 0x688) = *(*(rbx + 0x440) + 0x50)
*(arg1 + 0x690) = *(rbx + 0x4c4)
*(arg1 + 0x694) = *(rbx + 0x4c8)
int64_t var_cc[0x4]
int64_t* rax_8
int128_t zmm6
rax_8, zmm6 = sub_142363310(*(rbx + 0x440), &var_cc)
uint128_t zmm0
zmm0.d = (*(rax_8 + 0x14)).d f+ rax_8[1].d
uint128_t zmm2
zmm2.d = (*rax_8).d f+ *(rax_8 + 0xc)
uint128_t zmm1
zmm1.d = rax_8[2].d.d f+ *(rax_8 + 4)
zmm0.d = zmm0.d f* 0.5f
*(arg1 + 0x69c) = 0x101
zmm2.d = zmm2.d f* 0.5f
*(arg1 + 0x680) = 0
zmm1.d = zmm1.d f* 0.5f
*(arg1 + 0x6ac) = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
*(arg1 + 0x6b4) = zmm0.d
*(arg1 + 0x698) = *(arg1 + 0x624)
int64_t i_3 = sx.q(*(rbx + 0x4a0))
float result
int64_t zmm8
float zmm10[0x4]

if (i_3.d s<= 0)
    zmm0 = 0x3f800000
    zmm9 = 0x3f800000
    zmm10 = 0x3f800000
    zmm1 = 0x3f800000
    zmm8 = 0x3f800000
    result = 1f
else
    int64_t i_2 = i_3
    zmm9 = 0x7f7fffff
    uint128_t* rcx_3 = *(rbx + 0x498)
    zmm10 = 0x7f7fffff
    int128_t var_38_1 = zmm6
    zmm8 = 0xff7fffff
    result = -3.40282347e+38f
    uint128_t zmm12 = 0x7f7fffff
    void* rax_11 = rcx_3 + 0x18
    uint128_t zmm13 = 0xff7fffff
    int64_t i_1
    
    do
        zmm0 = *(rax_11 - 0x14)
        int32_t zmm5_1 = (zx.o(0)).d
        zmm2 = *rcx_3
        zmm1 = *(rax_11 - 0x10)
        zmm2.d = zmm2.d f* zmm2.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f<= 9.99999994e-09f))
            zmm5_1 = _mm_sqrt_ss(zmm5_1, zmm2.d)
        
        zmm2 = *(rax_11 - 4)
        int32_t zmm4_1 = (zx.o(0)).d
        zmm0 = *(rax_11 - 8)
        zmm1 = *rax_11
        zmm2.d = zmm2.d f* zmm2.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f<= 9.99999994e-09f))
            zmm4_1 = _mm_sqrt_ss(zmm4_1, zmm2.d)
        
        zmm2 = *(rax_11 + 0xc)
        int32_t zmm3_1 = (zx.o(0)).d
        zmm0 = *(rax_11 + 8)
        zmm1 = *(rax_11 + 0x10)
        zmm2.d = zmm2.d f* zmm2.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f<= 9.99999994e-09f))
            zmm3_1 = _mm_sqrt_ss(zmm3_1, zmm2.d)
        
        zmm9 = _mm_min_ss(zmm9[0], zmm4_1)
        zmm0 = _mm_min_ss(zmm12.d, zmm5_1)
        zmm1 = _mm_max_ss(zmm13.d, zmm5_1)
        rcx_3 = &rcx_3[4]
        rax_11 += 0x40
        zmm10 = _mm_min_ss(zmm10[0], zmm3_1)
        zmm8 = _mm_max_ss(zmm8.d, zmm4_1)
        result = _mm_max_ss(result, zmm3_1)
        zmm12 = zmm0
        zmm13 = zmm1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

zmm1.d = zmm1.d f- zmm0.d
zmm8.d = zmm8.d f- zmm9[0]
zmm1.d = zmm1.d f* 0.5f
zmm8.d = zmm8.d f* 0.5f
zmm1.d = zmm1.d f+ zmm0.d
zmm8.d = zmm8.d f+ zmm9[0]
result = (result - zmm10[0]) * 0.5f + zmm10[0]
*(arg1 + 0x6a0) = (_mm_unpacklo_ps(zmm1, zmm8)).q
*(arg1 + 0x6a8) = result
zmm1 = *(arg1 + 0x690)
*(arg1 + 0x6b8) = *(arg1 + 0x680)
zmm0 = *(arg1 + 0x6a0)
*(arg1 + 0x6c8) = zmm1
zmm1 = zx.o(*(arg1 + 0x6b0))
*(arg1 + 0x6d8) = zmm0
zmm0 = *(arg1 + 0x680)
*(arg1 + 0x6e8) = zmm1.q
zmm1 = *(arg1 + 0x690)
*(arg1 + 0x6d5) = 0
*(arg1 + 0x6f0) = zmm0
zmm0 = *(arg1 + 0x6a0)
*(arg1 + 0x700) = zmm1
zmm1 = zx.o(*(arg1 + 0x6b0))
*(arg1 + 0x710) = zmm0
*(arg1 + 0x720) = zmm1.q
*(arg1 + 0x70c) = 0
return result
