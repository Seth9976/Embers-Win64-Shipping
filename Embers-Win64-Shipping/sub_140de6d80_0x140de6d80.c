// 函数: sub_140de6d80
// 地址: 0x140de6d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = *arg2
int64_t result = sx.q(arg2[1].d)
void* rbp_1 = result * 0x58 + rdi

if (rdi != rbp_1)
    int128_t zmm12 = 0x3f000000
    int128_t zmm13 = zx.o(0)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    
    do
        result = zx.q(*(rdi + 0x4e))
        
        if (result.d u<= 0xb)
            switch (result)
                case 0
                    int64_t* rdx = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dc7ba0(arg1, rdx)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dc60b0(arg1, rdx)
                case 1
                    int32_t r8 = data_14399f630
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4 = sub_140dcea40(arg1, rdi, r8)
                    else
                        result, arg4 = sub_140dce550(arg1, rdi, r8)
                case 2
                    int64_t* rdx_2 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dcf780(arg1, rdx_2)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dcf4d0(arg1, rdx_2)
                case 3
                    int64_t* rdx_3 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dcf1f0(arg1, rdx_3)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dcef10(arg1, rdx_3)
                case 4
                    result, arg4, zmm12, zmm13 = sub_140de74e0(arg1, rdi)
                case 5
                    int64_t* rdx_4 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dccee0(arg1, rdx_4)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dcb530(arg1, rdx_4)
                case 6
                    int64_t* rdx_7 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dcad30(arg1, rdx_7)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dca400(arg1, rdx_7)
                case 7
                    int64_t* rdx_8 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4 = sub_140dcff20(arg1, rdx_8)
                    else
                        result, arg4 = sub_140dcfa30(arg1, rdx_8)
                case 8
                    int64_t* rdx_1 = rdi
                    
                    if ((*(rdi + 0x4d) & 0x10) != 0)
                        result, arg4, zmm12, zmm13 = sub_140dc41f0(arg1, rdx_1, arg4)
                    else
                        result, arg4, zmm12, zmm13 = sub_140dc2350(arg1, rdx_1, arg4)
                case 9
                    int32_t rdx_9 = rdi[6].d
                    int128_t var_78
                    __builtin_memset(&var_78, 0, 0x20)
                    result, arg4 = sub_140e0db30(arg1, rdx_9, &var_78, 0, 0, 0, 0, 0, rdi)
                    void* rdx_10 = *rdi
                    int64_t result_1 = result
                    int64_t r8_2 = 0
                    int64_t* rbx_1 = *(rdx_10 + 0x10)
                    
                    if (rbx_1 != 0)
                        result = 0
                        bool z_1
                        
                        if (0 == rbx_1[1].d)
                            rbx_1[1].d = 0
                            z_1 = true
                        else
                            result = zx.q(rbx_1[1].d)
                            z_1 = false
                        
                        if (z_1)
                        label_140de6f88:
                            rbx_1 = nullptr
                        else
                            while (true)
                                bool z_2
                                
                                if (result.d == rbx_1[1].d)
                                    rbx_1[1].d = (result + 1).d
                                    z_2 = true
                                else
                                    result = zx.q(rbx_1[1].d)
                                    z_2 = false
                                
                                if (z_2)
                                    if (rbx_1 != 0)
                                        r8_2 = *(rdx_10 + 8)
                                    
                                    break
                                
                                result = 0
                                bool z_3
                                
                                if (0 == rbx_1[1].d)
                                    rbx_1[1].d = 0
                                    z_3 = true
                                else
                                    result = zx.q(rbx_1[1].d)
                                    z_3 = false
                                
                                if (z_3)
                                    goto label_140de6f88
                    
                    *(result_1 + 0x50) = r8_2
                    
                    if (rbx_1 != 0)
                        result = zx.q(rbx_1[1].d)
                        rbx_1[1].d -= 1
                        
                        if (result.d == 1)
                            (**rbx_1)(rbx_1)
                            result = zx.q(*(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    *(result_1 + 0x7d) &= 0xfe
                case 0xa
                    result, arg4 = sub_140de69e0(arg1, rdi)
                case 0xb
                    arg1[4].d += 1
                    zmm6 = data_143dbb1f0.d
                    uint128_t zmm2 = data_143dbb1f0:4.d
                    float zmm5[0x4] = zmm6
                    float zmm4[0x4] = rdi[1].d
                    uint128_t zmm0
                    zmm0.d = zmm2.d f* rdi[2].d
                    void* rdx_12 = *rdi
                    arg4 = rdi[5].d
                    uint128_t zmm3 = *(rdi + 0x2c)
                    zmm5[0] = zmm5[0] * zmm4[0]
                    zmm5[0] = zmm5[0] f+ zmm0.d
                    zmm5[0] = zmm5[0] f+ rdi[3].d
                    zmm5[0] = zmm5[0] f+ zmm12.d
                    int32_t rcx_16 = int.d(zmm5[0])
                    
                    if (rcx_16 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_16)).d f== zmm5[0]))
                        result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q))) & 1
                        zmm5 = _mm_cvtepi32_ps(zx.o(rcx_16 - result.d))
                    
                    zmm6[0] = zmm6[0] f* *(rdi + 0xc)
                    zmm2.d = zmm2.d f* *(rdi + 0x14)
                    zmm6[0] = zmm6[0] f+ zmm2.d
                    zmm6[0] = zmm6[0] f+ *(rdi + 0x1c)
                    zmm6[0] = zmm6[0] f+ zmm12.d
                    int32_t rcx_18 = int.d(zmm6[0])
                    
                    if (rcx_18 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_18)).d f== zmm6[0]))
                        result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q))) & 1
                        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_18 - result.d))
                    
                    zmm4[0] = zmm4[0] * arg4[0]
                    zmm0.d = zmm3.d f* rdi[2].d
                    zmm4[0] = zmm4[0] f+ zmm0.d
                    zmm4[0] = zmm4[0] f+ rdi[3].d
                    zmm4[0] = zmm4[0] f+ zmm12.d
                    int32_t rcx_20 = int.d(zmm4[0])
                    
                    if (rcx_20 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_20)).d f== zmm4[0]))
                        result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q))) & 1
                        zmm4 = _mm_cvtepi32_ps(zx.o(rcx_20 - result.d))
                    
                    arg4[0] = arg4[0] f* *(rdi + 0xc)
                    zmm3.d = zmm3.d f* *(rdi + 0x14)
                    arg4[0] = arg4[0] f+ zmm3.d
                    arg4[0] = arg4[0] f+ *(rdi + 0x1c)
                    arg4[0] = arg4[0] f+ zmm12.d
                    int32_t rcx_22 = int.d(arg4[0])
                    
                    if (rcx_22 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_22)).d f== arg4[0]))
                        result = zx.q(_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q))) & 1
                        arg4 = _mm_cvtepi32_ps(zx.o(rcx_22 - result.d))
                    
                    zmm0.d = zmm4.d f- zmm5[0]
                    zmm0.d = zmm0.d f/ *arg3
                    
                    if (not(zmm0.d f<= zmm13.d))
                        zmm0.d = arg4.d f- zmm6[0]
                        zmm0.d = zmm0.d f/ arg3[1]
                        
                        if (not(zmm0.d f<= zmm13.d))
                            zmm3 = zx.o(*(rdx_12 + 0x20))
                            zmm2 = *(rdx_12 + 0x14)
                            int32_t rdx_13 = rdi[6].d
                            float var_8c_1 = arg4[0]
                            int32_t var_9c_1 = 0
                            float var_a8[0x4]
                            var_a8[0] = (*(rdx_12 + 0x10)).d
                            float temp0_19[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
                            temp0_19[0] = zmm2.d
                            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            float var_98 = zmm5[0]
                            temp0_20[0] = zmm3.d
                            float var_94_1 = zmm6[0]
                            float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
                            var_a8 = temp0_22
                            float var_88_1[0x4] = temp0_22
                            float var_90_1 = zmm4[0]
                            result, arg4 = sub_140e0db30(arg1, rdx_13, &var_98, 0, 2, 6, 0, 0, rdi)
        
        rdi = &rdi[0xb]
    while (rdi != rbp_1)

return result
