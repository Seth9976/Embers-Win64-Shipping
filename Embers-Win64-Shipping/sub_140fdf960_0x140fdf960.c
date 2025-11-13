// 函数: sub_140fdf960
// 地址: 0x140fdf960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint64_t i_16 = zx.q(arg2)
int128_t* rdx = arg7
int32_t r15 = arg3
char r8 = *(rdx + 8)

if (arg1 - 2 u<= 0x59)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_78_1[0x4] = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    result = zx.q(lookup_table_140fe00e4[sx.q(arg1 - 2)])
    int32_t var_b8
    char arg_8
    char arg_9
    char arg_a
    char arg_b
    uint128_t zmm0
    uint128_t zmm1
    
    switch (result)
        case nullptr
            result = sub_140fe3600(i_16.d, r15, arg4, arg5, arg6, r8)
        case 1
            result = sub_140fe0f50(i_16.d, r15, arg4, arg5, arg6, r8)
        case 2
            int32_t rbx_7 = 0
            
            if (r15 != 0)
                int64_t rcx_20 = arg6
                
                do
                    result = zx.q(rbx_7 * i_16.d)
                    int16_t* rsi_14 = zx.q(rbx_7 * arg5) + arg4
                    void* r14_5 = rcx_20 + (result << 2)
                    
                    if (i_16.d != 0)
                        uint64_t i_12 = i_16
                        uint64_t i
                        
                        do
                            uint32_t rax_31 = zx.d(rsi_14[1])
                            zmm0 = _mm_cvtepi32_ps(zx.o(*rsi_14))
                            uint32_t rax_32 = zx.d(rsi_14[2])
                            zmm0.d = zmm0.d f* 1.52590219e-05f
                            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_31)).d f* 1.52590219e-05f
                            var_b8 = zmm0.d
                            uint32_t rax_33 = zx.d(rsi_14[3])
                            int32_t var_b4_5 = zmm1.d
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_32)).d f* 1.52590219e-05f
                            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_33)).d f* 1.52590219e-05f
                            int32_t var_b0_5 = zmm0.d
                            int32_t var_ac_5 = zmm1.d
                            result = sub_140addff0(&var_b8, &arg_8)
                            r14_5 += 4
                            rsi_14 = &rsi_14[4]
                            *(r14_5 - 4) = *result
                            i = i_12
                            i_12 -= 1
                        while (i != 1)
                        rcx_20 = arg6
                    
                    rbx_7 += 1
                while (rbx_7 u< r15)
        case 3
            int32_t rbx_6 = 0
            uint128_t var_a8_2 = *rdx
            
            if (r15 != 0)
                zmm9 = 0x7fffffff
                zmm6 = 0x3f800000
                zmm8 = 0x3dcccccd
                
                do
                    uint128_t* rsi_11 = zx.q(rbx_6 * arg5) + arg4
                    
                    if (i_16.d != 0)
                        uint64_t i_15 = i_16
                        zmm7.d = zmm6.d f/ var_a8_2:0xc.d.d
                        int32_t* r12_11 = (zx.q(rbx_6 * i_16.d) << 2) - rsi_11 + arg6
                        uint64_t i_1
                        
                        do
                            int32_t var_ac_4 = 0
                            zmm0.d = _mm_min_ss((*rsi_11).d, zmm6.d).d f* zmm8.d
                            zmm0.d = zmm0.d f- zmm8.d
                            zmm1.d = zmm7.d f/ zmm0.d
                            zmm1 = _mm_min_ss(_mm_and_ps(zmm1, zmm9).d, zmm6.d)
                            var_b8 = zmm1.d
                            int32_t var_b4_4 = zmm1.d
                            int32_t var_b0_4 = zmm1.d
                            result, zmm6, zmm7, zmm8, zmm9 =
                                sub_140ae16d0(&var_b8, &arg_8, var_a8_2:8.b)
                            *(r12_11 + rsi_11) = *result
                            rsi_11 += 4
                            i_1 = i_15
                            i_15 -= 1
                        while (i_1 != 1)
                    
                    rbx_6 += 1
                while (rbx_6 u< r15)
        case 4
            int32_t rbx_4 = 0
            
            if (r15 != 0)
                do
                    int32_t* rsi_7 = zx.q(rbx_4 * arg5) + arg4
                    
                    if (i_16.d != 0)
                        uint64_t i_14 = i_16
                        void* r12_6 = (zx.q(rbx_4 * i_16.d) << 2) - rsi_7 + arg6
                        uint64_t i_2
                        
                        do
                            int32_t rcx_9 = *rsi_7
                            zmm0.d = float.s(zx.q(rcx_9) & 0x3ff)
                            zmm0.d = zmm0.d f* 0.000977517106f
                            var_b8 = zmm0.d
                            zmm0.d = float.s(zx.q(rcx_9 u>> 0xa) & 0x3ff)
                            zmm0.d = zmm0.d f* 0.000977517106f
                            int32_t var_b4_2 = zmm0.d
                            zmm0.d = float.s(zx.q(rcx_9 u>> 0x14) & 0x3ff)
                            zmm0.d = zmm0.d f* 0.000977517106f
                            int32_t var_b0_2 = zmm0.d
                            zmm0.d = float.s(zx.q(rcx_9 u>> 0x1e))
                            zmm0.d = zmm0.d f* 0.333333343f
                            int32_t var_ac_2 = zmm0.d
                            result = sub_140addff0(&var_b8, &arg_8)
                            rsi_7 = &rsi_7[1]
                            *(r12_6 + rsi_7 - 4) = *result
                            i_2 = i_14
                            i_14 -= 1
                        while (i_2 != 1)
                    
                    rbx_4 += 1
                while (rbx_4 u< r15)
        case 5
            result = sub_140fe0aa0(i_16.d, r15, arg4, arg5, arg6, r8)
        case 6
            int32_t rbx_2 = 0
            
            if (r15 != 0)
                do
                    result = zx.q(rbx_2 * arg5)
                    void* rcx_6 = result + arg4
                    
                    if (i_16.d != 0)
                        uint64_t i_8 = i_16
                        int64_t rdx_7 = (zx.q(rbx_2 * i_16.d) << 2) - zx.q(result.d) - arg4 + arg6
                        uint64_t i_3
                        
                        do
                            char rax_4 = *(rcx_6 + 2)
                            rcx_6 += 4
                            arg_8 = rax_4
                            arg_9 = *(rcx_6 - 3)
                            arg_a = *(rcx_6 - 4)
                            arg_b = *(rcx_6 - 1)
                            result = zx.q(arg_8.d)
                            *(rdx_7 + rcx_6 - 4) = result.d
                            i_3 = i_8
                            i_8 -= 1
                        while (i_3 != 1)
                    
                    rbx_2 += 1
                while (rbx_2 u< r15)
        case 7
            int32_t rbx_8 = 0
            
            if (r15 != 0)
                do
                    result = zx.q(rbx_8 * arg5)
                    void* r14_6 = result + arg4
                    
                    if (i_16.d != 0)
                        uint64_t i_13 = i_16
                        uint64_t rax_37 = zx.q(rbx_8 * i_16.d) << 2
                        void* rsi_15 = rax_37 + arg6
                        int64_t r15_1 = zx.q(result.d) - rax_37 - arg6 + arg4
                        uint64_t i_4
                        
                        do
                            int32_t var_b0_6 = 0
                            int32_t var_ac_6 = 0x3f800000
                            uint32_t rax_39 = zx.d(*(r15_1 + rsi_15 + 2))
                            zmm0.d = _mm_cvtepi32_ps(zx.o(*r14_6)).d f* 1.52590219e-05f
                            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_39)).d f* 1.52590219e-05f
                            var_b8 = zmm0.d
                            int32_t var_b4_6 = zmm1.d
                            result = sub_140addff0(&var_b8, &arg_8)
                            rsi_15 += 4
                            r14_6 += 4
                            *(rsi_15 - 4) = *result
                            i_4 = i_13
                            i_13 -= 1
                        while (i_4 != 1)
                        r15 = arg3
                    
                    rbx_8 += 1
                while (rbx_8 u< r15)
        case 8
            result = zx.q(rdx[1].d)
            int32_t rbx_5 = 0
            char var_98_1 = result.b
            uint128_t var_a8_1 = *rdx
            
            if (r15 != 0)
                zmm8 = var_a8_1:0xc.d
                zmm9 = 0x7fffffff
                zmm6 = 0x3f800000
                zmm7 = 0x3dcccccd
                
                do
                    if (i_16.d != 0)
                        uint64_t i_11 = i_16
                        uint64_t rax_24 = zx.q(rbx_5 * i_16.d) << 2
                        int32_t* rsi_8 = rax_24 + arg6
                        int32_t* r14_4 = arg4 - rax_24 - arg6
                        uint64_t i_5
                        
                        do
                            if (var_98_1 == 0)
                                int32_t var_ac_3 = 0
                                zmm1.d = zmm6.d f/ zmm8.d
                                zmm0.d = float.s(zx.q(*(r14_4 + rsi_8)) & 0xffffff)
                                zmm0.d = zmm0.d f* 5.96046448e-08f
                                zmm0.d = _mm_min_ss(zmm0.d, zmm6.d).d f* zmm7.d
                                zmm0.d = zmm0.d f- zmm7.d
                                zmm1.d = zmm1.d f/ zmm0.d
                                zmm1 = _mm_min_ss(_mm_and_ps(zmm1, zmm9).d, zmm6.d)
                                var_b8 = zmm1.d
                                int32_t var_b4_3 = zmm1.d
                                int32_t var_b0_3 = zmm1.d
                                char* rax_28
                                rax_28, zmm6, zmm7, zmm8, zmm9 =
                                    sub_140ae16d0(&var_b8, &arg7, var_a8_1:8.b)
                                result = zx.q(*rax_28)
                            else
                                char rax_25 = *(r14_4 + rsi_8 + 3)
                                arg_8 = rax_25
                                arg_9 = rax_25
                                arg_a = rax_25
                                arg_b = 0xff
                                result = zx.q(arg_8.d)
                            
                            *rsi_8 = result.d
                            rsi_8 = &rsi_8[1]
                            i_5 = i_11
                            i_11 -= 1
                        while (i_5 != 1)
                    
                    rbx_5 += 1
                while (rbx_5 u< r15)
        case 9
            int32_t rbx_1 = 0
            
            if (r15 != 0)
                int64_t rcx_3 = arg6
                
                do
                    result = zx.q(rbx_1 * i_16.d)
                    int16_t* rsi_3 = zx.q(rbx_1 * arg5) + arg4
                    void* r14_1 = rcx_3 + (result << 2)
                    
                    if (i_16.d != 0)
                        uint64_t i_10 = i_16
                        uint64_t i_6
                        
                        do
                            int32_t var_ac_1 = 0x3f800000
                            zmm0.d = _mm_cvtepi32_ps(zx.o(*rsi_3)).d f* 1.52590219e-05f
                            var_b8 = zmm0.d
                            int32_t var_b4_1 = zmm0.d
                            int32_t var_b0_1 = zmm0.d
                            result = sub_140addff0(&var_b8, &arg_8)
                            r14_1 += 4
                            rsi_3 = &rsi_3[1]
                            *(r14_1 - 4) = *result
                            i_6 = i_10
                            i_10 -= 1
                        while (i_6 != 1)
                        rcx_3 = arg6
                    
                    rbx_1 += 1
                while (rbx_1 u< r15)
        case 0xa
            int32_t rbx_9 = 0
            
            if (r15 != 0)
                do
                    result = zx.q(rbx_9 * i_16.d)
                    char* rcx_30 = zx.q(rbx_9 * arg5) + arg4
                    void* rdx_21 = arg6 + (result << 2)
                    
                    if (i_16.d != 0)
                        uint64_t i_9 = i_16
                        uint64_t i_7
                        
                        do
                            char rax_41 = *rcx_30
                            rdx_21 += 4
                            arg_8 = rax_41
                            rcx_30 = &rcx_30[1]
                            arg_9 = rax_41
                            arg_a = rax_41
                            arg_b = rax_41
                            result = zx.q(arg_8.d)
                            *(rdx_21 - 4) = result.d
                            i_7 = i_9
                            i_9 -= 1
                        while (i_7 != 1)
                    
                    rbx_9 += 1
                while (rbx_9 u< r15)
        case 0xb
            result = zx.q((i_16 << 2).d)
            
            if (result.d != arg5)
                int32_t rbx_3 = 0
                
                if (r15 != 0)
                    uint32_t count = result.d
                    
                    do
                        result = memcpy(arg6 + (zx.q(rbx_3 * i_16.d) << 2), 
                            zx.q(rbx_3 * arg5) + arg4, count)
                        rbx_3 += 1
                    while (rbx_3 u< r15)
            else
                result = memcpy(arg6, arg4, (i_16.d * r15) << 2)

return result
