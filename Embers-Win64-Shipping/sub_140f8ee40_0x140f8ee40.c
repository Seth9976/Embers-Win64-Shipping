// 函数: sub_140f8ee40
// 地址: 0x140f8ee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t* result = arg1[0x74]

if (result != 0)
    int64_t* rdi_1 = arg1[0x75]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int128_t* result_1 = result
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t var_a8
    result = sub_140e10810(arg1, &var_a8, arg2, &result_1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    int32_t var_a4
    
    if (*(arg1 + 0x4e6) != 0 || var_a8 f!= *(arg1 + 0x434) || not(var_a4 f== arg1[0x87].d))
        sub_140d96150(arg1 + 0x434, &var_a8)
        int32_t rax_5 = (*(*arg1 + 0x268))(arg1)
        int64_t r8_1 = *arg1
        int32_t rax_6 = (*(r8_1 + 0x298))(arg1, &var_a8, r8_1)
        float zmm8[0x4] = zx.o(0)
        uint128_t zmm0_2
        float zmm1_1[0x4]
        uint128_t zmm6
        
        if (arg1[0x7b].b == 0)
            zmm6 = zx.o(arg1[0x7e])
        else if (sub_140e66040(data_143e29f28).d f> *(arg1 + 0x3fc))
            if (not(0f f!= arg1[0x97].d))
                goto label_140f8efae
            
            zmm6 = zx.o(arg1[0x7e])
        else
            char rax_7 = sub_140f4a5f0(arg1[0x76])
            
            if (rax_7 != 0 || *(arg1 + 0x4e4) == rax_7 || 0f f!= arg1[0x97].d)
                zmm6 = zx.o(arg1[0x7e])
            else
            label_140f8efae:
                int32_t rax_9 = (*(*arg1 + 0x268))(arg1)
                zmm6 = zx.o(arg1[0x7e])
                zmm1_1 = _mm_cvtepi32_pd(zx.o(rax_9)[0].q)
                zmm6.q = zmm6.q f/ zmm1_1[0].q
                int64_t rcx_8 = int.q(zmm6.q)
                
                if (rcx_8 != -0x8000000000000000)
                    zmm0_2.q = float.d(rcx_8)
                    
                    if (not(zmm0_2.q f== zmm6.q))
                        zmm6.q = float.d(rcx_8
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm6, zmm6.q))) & 1))
                
                zmm6.q = zmm6.q f- arg1[0x7a]
                zmm6.q = zmm6.q f* zmm1_1[0].q
                zmm6 = _mm_max_sd(zmm6.q, 0)
        
        float zmm2[0x4]
        
        if (arg1[0x7c].b != 0)
            zmm2 = arg4
            arg4 = 0x41400000
            zmm0_2, zmm6 =
                sub_140ad6340(_mm_cvtpd_ps(zx.o(arg1[0x7d])), _mm_cvtpd_ps(zmm6), zmm2, arg4[0])
            zmm1_1 = zx.o(0)
            zmm1_1[0].q = fconvert.d(zmm0_2.d)
            arg1[0x7d] = zmm1_1.q
            zmm1_1[0].q = zmm1_1[0].q f- zmm6.q
            zmm1_1 = __andps_xmmxud_memxud(zmm1_1, data_142d57d00)
        
        if (arg1[0x7c].b == 0 || not(zmm1_1[0].q f> 0.01))
            arg1[0x7d] = zmm6.q
        
        (*(*arg1 + 0x288))(arg1, &result_1, &var_a8, arg4)
        int64_t rax_13 = *arg1
        *(arg1 + 0x410) = result_1.o
        float var_b8[0x4]
        *(arg1 + 0x420) = var_b8
        int32_t rax_14 = (*(rax_13 + 0x290))(arg1, var_b8)
        zmm0_2 = zx.o(var_b8[0].q)
        float zmm9[0x4] = _mm_cvtepi32_pd(zx.o(divs.dp.d(sx.q(rax_14), rax_5))[0].q)
        
        if (not(zmm0_2.q f< zmm9[0].q))
            zmm6 = zx.o(arg1[0x7e])
            
            if (zmm6.q f== 0.0)
                arg1[0x7d] = zmm6.q
            else
                arg1[0x7e] = 0
                sub_140f44620(&arg1[0x78], zx.o(0))
                sub_140f89930(arg1)
                zmm6 = zx.o(arg1[0x7e])
                arg1[0x7d] = zmm6.q
        else if (var_b8[2].b != 0)
            sub_140f8c880(arg1, _mm_cvtpd_ps(_mm_max_sd(result_1, 0))[0].q)
            zmm6 = zx.o(arg1[0x7e])
            arg1[0x7d] = zmm6.q
        
        zmm1_1 = zx.o(arg1[0x7d])
        zmm0_2 = _mm_cvtepi32_pd(zx.q(rax_5))
        zmm1_1[0].q = zmm1_1[0].q f/ zmm0_2.q
        zmm0_2.q = float.d(int.q(zmm1_1[0].q))
        zmm1_1[0].q = zmm1_1[0].q f- zmm0_2.q
        *(arg1[0x74] + 0x318) = _mm_cvtpd_ps(zmm1_1)[0]
        
        if (*(arg1 + 0x4e4) == 0)
            zmm0_2, zmm6, zmm8 = sub_140ebf340(&arg1[0x9c], sub_140e12190(arg1))
            *(arg1[0x74] + 0x31c) = zmm0_2.d
        
        (*(*arg1 + 0x280))(arg1)
        
        if (rax_14 s<= 0)
            zmm2 = 0x3f800000
        else
            zmm2 = zx.o(arg1[0x7d])
            zmm1_1 = zx.o(var_b8[0].q)
            arg4 = 0x3ff0000000000000
            bool cond:2_1 = zmm1_1[0].q f>= arg4[0].q
            zmm0_2 = _mm_cvtepi32_pd(zx.q(rax_14))
            zmm2[0].q = zmm2[0].q f/ zmm0_2.q
            zmm8 = _mm_cvtpd_ps(zmm2)
            
            if (cond:2_1)
                zmm1_1[0].q = zmm1_1[0].q f/ zmm9[0].q
                zmm2 = _mm_cvtpd_ps(zmm1_1)
            else
                zmm0_2.q = _mm_cvtps_pd((*(arg2 + 4)).q).q f/ rdi_1
                zmm2 = _mm_cvtpd_ps(_mm_min_sd(zmm0_2.q, arg4[0].q))
        
        sub_140f61190(arg1[0x76], zmm8[0], zmm2[0])
        float zmm0_3 = sub_140f43ba0(arg1[0x76])
        zmm0_3 - 9.99999994e-09f
        *(arg1 + 0x4e6) = 0
        arg1[0x86].b = zmm0_3 < 9.99999994e-09f
        *(arg1[0x74] + 0x320) = 0
        result = sub_140e19ef0(arg1, 8)
        int32_t rdi_2
        rdi_2.b = rax_6 == 0
        
        if (rax_6 == 0)
            result = (*(*arg1 + 0x2a0))(arg1)
        
        if (rdi_2.b == 0 || not(zmm6.q f== arg1[0x7d]))
            result = sub_140f89930(arg1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
