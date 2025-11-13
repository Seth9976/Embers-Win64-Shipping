// 函数: sub_140fe0140
// 地址: 0x140fe0140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1 - 0x15)
uint64_t i_12 = zx.q(arg2)
float var_48[0x4]
float zmm0[0x4]
uint128_t zmm1

if (result.d u<= 1)
    int32_t r9_8 = 0
    
    if (arg3 != 0)
        do
            uint32_t r8_8 = 0
            void* rcx_15 = (zx.q(r9_8 * i_12.d) << 4) + arg6
            void* rdx_15 = zx.q(r9_8 * arg5) + arg4
            
            if (i_12.d u>= 4)
                int32_t var_3c_3 = 0x3f800000
                void* r10_2 = rcx_15 + 0x20
                uint64_t rax_38 = zx.q(((i_12 - 4).d u>> 2) + 1)
                uint64_t i_9 = zx.q(rax_38.d)
                r8_8 = (rax_38 << 2).d
                uint64_t i
                
                do
                    r10_2 += 0x40
                    zmm0 = zx.o(0)
                    zmm0[0] = float.s(zx.d(*rdx_15))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    zmm1.d = zmm0[0]
                    zmm0 = zx.o(0)
                    *rcx_15 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    rcx_15 += 0x40
                    zmm0[0] = float.s(zx.d(*(rdx_15 + 2)))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    zmm1.d = zmm0[0]
                    zmm0 = zx.o(0)
                    *(r10_2 - 0x50) = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    zmm0[0] = float.s(zx.d(*(rdx_15 + 4)))
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    zmm1.d = zmm0[0]
                    zmm0 = zx.o(0)
                    *(r10_2 - 0x40) = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    result = zx.q(*(rdx_15 + 6))
                    rdx_15 += 8
                    zmm0[0] = float.s(result.d)
                    zmm0[0] = zmm0[0] * 1.52590219e-05f
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = zmm0[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    zmm1.d = zmm0[0]
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    *(r10_2 - 0x30) = zmm1
                    var_48 = zmm1
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            if (r8_8 u< i_12.d)
                int32_t var_3c_4 = 0x3f800000
                uint64_t i_7 = zx.q(i_12.d - r8_8)
                uint64_t i_1
                
                do
                    result = zx.q(*rdx_15)
                    rcx_15 += 0x10
                    rdx_15 += 2
                    float temp0_25[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
                    temp0_25[0] = temp0_25[0] * 1.52590219e-05f
                    zmm1.d = temp0_25[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = temp0_25[0]
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    zmm1.d = temp0_25[0]
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                    *(rcx_15 - 0x10) = zmm1
                    var_48 = zmm1
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            r9_8 += 1
        while (r9_8 u< arg3)
else
    char arg_8
    char arg_9
    char arg_a
    char arg_b
    
    if (arg1 == 0x25)
        int32_t r14_1 = 0
        
        if (arg3 != 0)
            do
                void* rbx_3 = zx.q(r14_1 * arg5) + arg4
                void* rsi_4 = (zx.q(r14_1 * i_12.d) << 4) + arg6
                
                if (i_12.d != 0)
                    uint64_t i_10 = i_12
                    uint64_t i_2
                    
                    do
                        arg_8 = *(rbx_3 + 2)
                        arg_9 = *(rbx_3 + 1)
                        arg_a = *rbx_3
                        arg_b = *(rbx_3 + 3)
                        result = sub_140acc920(&var_48, &arg_8)
                        rsi_4 += 0x10
                        rbx_3 += 4
                        *(rsi_4 - 0x10) = *result
                        i_2 = i_10
                        i_10 -= 1
                    while (i_2 != 1)
                
                r14_1 += 1
            while (r14_1 u< arg3)
    else if (arg1 != 2)
        switch (arg1)
            case 1
                int32_t var_38_2 = arg7[1].d
                var_48 = *arg7
                return sub_140fe3910(i_12.d, arg3, arg4, arg5, arg6, &var_48)
            case 9, 0x1a
                return sub_140fe3fd0(i_12.d, arg3, arg4, arg5, arg6)
            case 0xa
                int32_t var_38_1 = arg7[1].d
                var_48 = *arg7
                return sub_140fe1da0(i_12.d, arg3, arg4, arg5, arg6, &var_48)
            case 0xb
                int32_t var_38_4 = arg7[1].d
                var_48 = *arg7
                return sub_140fe3350(i_12.d, arg3, arg4, arg5, arg6, &var_48)
            case 0xe
                int32_t r9_6 = 0
                
                if (arg3 != 0)
                    do
                        uint32_t r8_6 = 0
                        void* rdx_11 = (zx.q(r9_6 * i_12.d) << 4) + arg6
                        void* rcx_10 = zx.q(r9_6 * arg5) + arg4
                        float zmm2[0x4]
                        
                        if (i_12.d u>= 4)
                            var_48[2] = 0
                            void* r10_1 = rdx_11 + 0x20
                            uint64_t rax_24 = zx.q(((i_12 - 4).d u>> 2) + 1)
                            int32_t var_3c_1 = 0x3f800000
                            uint64_t i_8 = zx.q(rax_24.d)
                            r8_6 = (rax_24 << 2).d
                            uint64_t i_3
                            
                            do
                                r10_1 += 0x40
                                zmm2 = var_48
                                zmm0 = zx.o(0)
                                zmm0[0] = float.s(zx.d(*rcx_10))
                                zmm1.d = float.s(zx.d(*(rcx_10 + 2)))
                                zmm0[0] = zmm0[0] * 1.52590219e-05f
                                zmm1.d = zmm1.d f* 1.52590219e-05f
                                zmm2[0] = zmm0[0]
                                zmm0 = zx.o(0)
                                float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                                temp0_1[0] = zmm1.d
                                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
                                *rdx_11 = temp0_2
                                rdx_11 += 0x40
                                zmm0[0] = float.s(zx.d(*(rcx_10 + 4)))
                                zmm1.d = float.s(zx.d(*(rcx_10 + 6)))
                                zmm0[0] = zmm0[0] * 1.52590219e-05f
                                zmm1.d = zmm1.d f* 1.52590219e-05f
                                temp0_2[0] = zmm0[0]
                                zmm0 = zx.o(0)
                                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
                                temp0_3[0] = zmm1.d
                                float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
                                *(r10_1 - 0x50) = temp0_4
                                zmm0[0] = float.s(zx.d(*(rcx_10 + 8)))
                                zmm1.d = float.s(zx.d(*(rcx_10 + 0xa)))
                                zmm0[0] = zmm0[0] * 1.52590219e-05f
                                zmm1.d = zmm1.d f* 1.52590219e-05f
                                temp0_4[0] = zmm0[0]
                                zmm0 = zx.o(0)
                                float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
                                temp0_5[0] = zmm1.d
                                float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
                                *(r10_1 - 0x40) = temp0_6
                                zmm0[0] = float.s(zx.d(*(rcx_10 + 0xc)))
                                result = zx.q(*(rcx_10 + 0xe))
                                rcx_10 += 0x10
                                zmm1.d = float.s(result.d)
                                zmm0[0] = zmm0[0] * 1.52590219e-05f
                                zmm1.d = zmm1.d f* 1.52590219e-05f
                                temp0_6[0] = zmm0[0]
                                float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
                                temp0_7[0] = zmm1.d
                                float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
                                *(r10_1 - 0x30) = temp0_8
                                var_48 = temp0_8
                                i_3 = i_8
                                i_8 -= 1
                            while (i_3 != 1)
                        
                        if (r8_6 u< i_12.d)
                            var_48[2] = 0
                            int32_t var_3c_2 = 0x3f800000
                            uint64_t i_6 = zx.q(i_12.d - r8_6)
                            uint64_t i_4
                            
                            do
                                uint32_t rax_34 = zx.d(*rcx_10)
                                rdx_11 += 0x10
                                rcx_10 += 4
                                zmm2 = var_48
                                result = zx.q(*(rcx_10 - 2))
                                float temp0_9[0x4] = _mm_cvtepi32_ps(zx.o(rax_34))
                                temp0_9[0] = temp0_9[0] * 1.52590219e-05f
                                zmm1 = _mm_cvtepi32_ps(zx.o(result.d))
                                zmm2[0] = temp0_9[0]
                                float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                                zmm1.d = zmm1.d f* 1.52590219e-05f
                                temp0_11[0] = zmm1.d
                                float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xe1)
                                *(rdx_11 - 0x10) = temp0_12
                                var_48 = temp0_12
                                i_4 = i_6
                                i_6 -= 1
                            while (i_4 != 1)
                        
                        r9_6 += 1
                    while (r9_6 u< arg3)
            case 0x12
                return sub_140fe0780(i_12.d, arg3, arg4, arg5, arg6)
            case 0x13
                return sub_140fe0ca0(i_12.d, arg3, arg4, arg5, arg6)
            case 0x14
                int32_t var_38_3 = arg7[1].d
                int128_t* var_50_3 = &var_48
                var_48 = *arg7
                return sub_140fe3040(i_12.d, arg3, arg4, zx.q(arg5), arg6)
    else
        int32_t r14_2 = 0
        
        if (arg3 != 0)
            do
                char* rbx_6 = zx.q(r14_2 * arg5) + arg4
                void* rsi_8 = (zx.q(r14_2 * i_12.d) << 4) + arg6
                
                if (i_12.d != 0)
                    uint64_t i_11 = i_12
                    uint64_t i_5
                    
                    do
                        arg_8 = *rbx_6
                        arg_9 = rbx_6[1]
                        arg_a = rbx_6[2]
                        arg_b = rbx_6[3]
                        result = sub_140acc920(&var_48, &arg_8)
                        rsi_8 += 0x10
                        rbx_6 = &rbx_6[4]
                        *(rsi_8 - 0x10) = *result
                        i_5 = i_11
                        i_11 -= 1
                    while (i_5 != 1)
                
                r14_2 += 1
            while (r14_2 u< arg3)
return result
