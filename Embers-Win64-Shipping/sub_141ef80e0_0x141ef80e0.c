// 函数: sub_141ef80e0
// 地址: 0x141ef80e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
float zmm8[0x4] = arg2
int64_t* result = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    int64_t* rcx = arg1[0x16]
    
    if (*(rcx + 0x14f) == 2)
        int64_t rax_3 = *rcx
        uint64_t var_4b8 = 0
        result = (*(rax_3 + 0x3e8))(rcx, 0)
        
        if (result.b == 0)
            void* rbx_1 = arg1[0x29]
            int128_t zmm6 = zx.o(0)
            float zmm7[0x4]
            float var_58_1[0x4] = zmm7
            char rsi_1 = *(rbx_1 + 0xf0)
            
            if (rsi_1 != 1 || 0f f!= *(rbx_1 + 0x78) || 0f f!= *(rbx_1 + 0x7c)
                || 0f f!= *(rbx_1 + 0x80))
            label_141ef8233:
                result = arg1[0x29] + 0x2c8
                
                if (*result != 0 || result[5].b == 0)
                    void var_3d8
                    sub_141f2db80(&var_3d8, arg1[0x16], zx.d(arg1[0x3e].b) u>> 7, 1)
                    uint64_t r12
                    r12.b = 0
                    
                    if (rsi_1 == 1)
                        char rax_5 = *(arg1 + 0x387)
                        
                        if ((rax_5 & 0x40) != 0)
                            rax_5 &= 0xbf
                            r12 = zx.q(rsi_1)
                            *(arg1 + 0x387) = rax_5
                            
                            if (rax_5 s< 0)
                                int64_t r8_3 = *arg1
                                (*(r8_3 + 0x5b0))(arg1, zx.q(*(arg1[0x29] + 0x328)), r8_3)
                                *(arg1 + 0x387) &= 0x7f
                            else if ((rax_5 & 0x20) != 0 || (*(arg1 + 0x1f1) & 8) != 0)
                                *(arg1 + 0x387) = rax_5 & 0xdf
                                (*(*arg1 + 0x9c0))(arg1)
                        else if ((*(arg1 + 0x1f1) & 8) != 0)
                            (*(*arg1 + 0x9c0))(arg1)
                    
                    (*(*arg1 + 0x718))(arg1, zmm8)
                    
                    if (arg1[0x2d].b != 0)
                        (*(*arg1 + 0x640))(arg1)
                    
                    (*(*arg1 + 0x710))(arg1)
                    
                    if (arg1[0x2d].b != 0)
                        uint64_t r15
                        
                        if (rsi_1 != 1 || (*(arg1[0x29] + 0x330) & 0x80) == 0)
                            r15.b = 0
                        else
                            r15 = zx.q(rsi_1)
                        
                        uint64_t rax_11
                        
                        if (rsi_1 == 1)
                            rax_11 = (*(*arg1 + 0x550))(arg1)
                        
                        if (rsi_1 != 1 || rax_11.b == 0 || zmm6.d f!= *(rbx_1 + 0x60)
                                || zmm6.d f!= *(rbx_1 + 0x64) || zmm6.d f!= *(rbx_1 + 0x68))
                            rax_11.b = 0
                        else
                            rax_11 = zx.q(rsi_1)
                        
                        if (r15.b != 0 || rax_11.b != 0)
                            *(arg1 + 0xc4) = data_143dbb1f8.q
                            *(arg1 + 0xcc) = data_143dbb200
                        
                        (*(*arg1 + 0x5f8))(arg1, zmm8)
                        int32_t rax_15 = *(arg1 + 0xcc)
                        uint64_t var_498 = *(arg1 + 0xc4)
                        int32_t var_490_1 = rax_15
                        uint128_t zmm2_1 = *(arg1[0x16] + 0x1d0)
                        int32_t var_480_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
                        int64_t rax_18 = *arg1
                        float zmm1_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                        uint64_t var_488 = (_mm_unpacklo_ps(zmm2_1, zmm1_2[0].q)).q
                        (*(rax_18 + 0x7e0))(arg1)
                        int64_t var_4c8
                        uint128_t var_4a8
                        
                        if (r12.b == 0 || (*(arg1 + 0x1f2) & 2) == 0 || data_143a2d664 == 0)
                            uint128_t zmm0_4 = data_1430219f0
                            int32_t var_478 = var_478 & 0xfffffffe
                            int32_t var_474
                            int32_t var_474_1 = var_474 & 0xfffffff8
                            int64_t var_470_1 = 0
                            int32_t var_3f8_1 = 0xffffffff
                            int64_t var_3f4_1 = 0
                            int64_t var_3ec_1 = 0
                            void var_468
                            memset(&var_468, 0, 0x88)
                            zmm2_1 = zmm8
                            int32_t var_460_1 = 0x3f800000
                            (*(*arg1 + 0x7d8))(arg1, arg1 + 0xc4, zmm2_1, &var_478)
                            char rax_21
                            int64_t r9_3
                            rax_21, r9_3 = (*(*arg1 + 0x550))(arg1)
                            
                            if (rax_21 != 0 || arg1[0x2d].b == 3)
                                int32_t* rsi_2
                                uint128_t zmm0_5
                                
                                if ((var_478.b & 1) != 0)
                                    rsi_2 = &arg1[0x5e]
                                    *rsi_2 = var_474_1.o
                                    float var_464[0x4]
                                    *(rsi_2 + 0x10) = var_464
                                    uint128_t var_454
                                    *(rsi_2 + 0x20) = var_454
                                    float var_444[0x4]
                                    *(rsi_2 + 0x30) = var_444
                                    uint128_t var_434
                                    *(rsi_2 + 0x40) = var_434
                                    float var_424[0x4]
                                    *(rsi_2 + 0x50) = var_424
                                    zmm1_2 = var_3f4_1.o
                                    uint128_t var_414
                                    *(rsi_2 + 0x60) = var_414
                                    zmm0_5 = zmm0_4
                                    *(rsi_2 + 0x70) = zmm0_5
                                    *(rsi_2 + 0x80) = zmm1_2
                                    int32_t var_3e4
                                    rsi_2[0x24] = var_3e4
                                else if (zmm6.d f< *(arg1 + 0xcc))
                                    rsi_2 = &arg1[0x5e]
                                    *rsi_2 &= 0xfffffff8
                                    *(rsi_2 + 4) = 0
                                    zmm0_5 = memset(&rsi_2[3], 0, 0x88)
                                    rsi_2[5] = 0x3f800000
                                else
                                    if (zmm6.d f!= *(arg1 + 0xc4) || zmm6.d f!= arg1[0x19].d
                                            || zmm6.d f!= *(arg1 + 0xcc))
                                        r9_3.b = 0
                                    else
                                        r9_3.b = 1
                                    
                                    rsi_2 = &arg1[0x5e]
                                    var_4c8 = 0
                                    zmm1_2 = *(arg1[0x16] + 0x1d0)
                                    int64_t rax_24 = *arg1
                                    zmm0_5 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                                    var_4b8.d = zmm1_2[0]
                                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                                    float var_4b0_2 = zmm1_2[0]
                                    var_4b8:4.d = zmm0_5.d
                                    (*(rax_24 + 0x8a0))(arg1, &var_4b8, rsi_2, r9_3, var_4c8)
                                
                                if (((*rsi_2).b & 3) == 3)
                                    if ((*(*arg1 + 0x550))(arg1, zmm1_2) != 0)
                                        (*(*arg1 + 0x5f0))(arg1, zmm1_2)
                                        int64_t r9_5
                                        r9_5.b = 1
                                        (*(*arg1 + 0x6f0))(arg1, sub_140d3c6e0(arg1 + 0x36c), 
                                            *(arg1 + 0x374), r9_5, var_4c8)
                                    else if (arg1[0x2d].b == 3)
                                        zmm0_5 = *(arg1 + 0x2f4)
                                        
                                        if (zmm0_5.d f<= 1.89999998f)
                                            (*(*arg1 + 0x760))(arg1, arg1 + 0x2fc)
                                        else if (r15.b == 0)
                                            (*(*arg1 + 0x3e8))(arg1)
                                            int64_t rax_45 = *arg1
                                            int32_t var_4b0_5 = zmm0_5.d
                                            var_4c8.d = zmm8[0]
                                            var_4b8 = 0
                                            int64_t* rax_46 = (*(rax_45 + 0x690))(arg1, &var_4a8, 
                                                arg1 + 0xc4, &var_4b8, var_4c8)
                                            *(arg1 + 0xc4) = *rax_46
                                            *(arg1 + 0xcc) = rax_46[1].d
                                        label_141ef87d3:
                                            *rsi_2 &= 0xfffffff8
                                            *(rsi_2 + 4) = 0
                                            memset(&rsi_2[3], 0, 0x88)
                                            rsi_2[5] = 0x3f800000
                                        else
                                            if (zmm0_5.d f> 2.4000001f)
                                                goto label_141ef87d3
                                            
                                            (*(*arg1 + 0x760))(arg1, arg1 + 0x2fc)
                                else
                                    if (r15.b == 0)
                                        char rax_28
                                        
                                        if (not(zmm6.d f>= *(arg1 + 0xcc))
                                                && (arg1[0x3e].b & 2) == 0)
                                            int64_t* rcx_16 = arg1[0x29]
                                            rax_28 = (*(*rcx_16 + 0x7b0))(rcx_16)
                                        
                                        if (zmm6.d f>= *(arg1 + 0xcc) || (arg1[0x3e].b & 2) != 0
                                                || rax_28 == 0)
                                            (*(*arg1 + 0x3e8))(arg1)
                                            int64_t rax_30 = *arg1
                                            int32_t var_4b0_3 = zmm0_5.d
                                            var_4c8.d = zmm8[0]
                                            var_4b8 = 0
                                            int64_t* rax_31 = (*(rax_30 + 0x690))(arg1, &var_4a8, 
                                                arg1 + 0xc4, &var_4b8, var_4c8)
                                            *(arg1 + 0xc4) = *rax_31
                                            *(arg1 + 0xcc) = rax_31[1].d
                                    
                                    (*(*arg1 + 0x590))(arg1, 3, 0)
                        
                        (*(*arg1 + 0x720))(arg1, zmm8, zmm2_1)
                        int64_t rax_40 = *arg1
                        *(arg1 + 0x38a) &= 0xfd
                        (*(rax_40 + 0x908))(arg1, zmm8, &var_488, &var_498, var_4c8)
                        (*(*arg1 + 0x910))(arg1, sub_141f2f2c0(&var_3d8), &var_488, &var_498)
                        (*(*arg1 + 0x618))(arg1)
                        (*(*arg1 + 0x460))(arg1)
                        void* rcx_31 = arg1[0x16]
                        *(arg1 + 0x387) &= 0xdf
                        float var_4b0_4
                        
                        if (rcx_31 == 0)
                            float rax_48 = data_143dbb200
                            var_4b8 = data_143dbb1f8.q
                            var_4b0_4 = rax_48
                        else
                            float zmm1_3[0x4] = *(rcx_31 + 0x1d0)
                            var_4b8.d = zmm1_3[0]
                            uint128_t zmm0_6 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                            var_4b0_4 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)[0]
                            var_4b8:4.d = zmm0_6.d
                        
                        arg1[0x4a] = var_4b8
                        arg1[0x4b].d = var_4b0_4
                        
                        if (rcx_31 == 0)
                            var_4a8 = data_14399f720
                        else
                            var_4a8 = *(rcx_31 + 0x1c0)
                        
                        result = zx.q(*(arg1 + 0xcc))
                        *(arg1 + 0x240) = var_4a8
                        *(arg1 + 0x25c) = *(arg1 + 0xc4)
                        *(arg1 + 0x264) = result.d
                    else
                        result = sub_141f2f2c0(&var_3d8)
            else
                float zmm0_1[0x4]
                zmm0_1, zmm6, zmm7, zmm8 = sub_140a454f0(*(rbx_1 + 0x84), 0x43b40000)
                
                if (not(zmm0_1[0] f>= zmm6.d))
                    zmm0_1[0] = zmm0_1[0] + zmm7[0]
                
                if (zmm0_1[0] f!= zmm6.d)
                    goto label_141ef8233
                
                float zmm0_2[0x4]
                zmm0_2, zmm6, zmm7, zmm8 = sub_140a454f0(*(rbx_1 + 0x88), zmm7)
                
                if (not(zmm0_2[0] f>= zmm6.d))
                    zmm0_2[0] = zmm0_2[0] + zmm7[0]
                
                if (zmm0_2[0] f!= zmm6.d)
                    goto label_141ef8233
                
                float zmm0_3
                zmm0_3, result, zmm6, zmm7, zmm8 = sub_140a454f0(*(rbx_1 + 0x8c), zmm7)
                
                if (not(zmm0_3 f>= zmm6.d))
                    zmm0_3 = zmm0_3 + zmm7[0]
                
                if (zmm0_3 f!= zmm6.d || zmm6.d f!= *(rbx_1 + 0x60) || zmm6.d f!= *(rbx_1 + 0x64)
                        || not(zmm6.d f== *(rbx_1 + 0x68)))
                    goto label_141ef8233

__security_check_cookie(rax_1 ^ &var_4e8)
return result
