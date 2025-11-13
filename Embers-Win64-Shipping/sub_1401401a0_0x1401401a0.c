// 函数: sub_1401401a0
// 地址: 0x1401401a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg6
uint32_t zmm14[0x4]
uint32_t var_68[0x4] = zmm14
float var_78[0x4] = arg5
uint32_t zmm12[0x4]
uint32_t var_88[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_98[0x4] = zmm11
uint128_t zmm9
uint128_t var_b8 = zmm9
uint32_t zmm8[0x4]
uint32_t var_c8[0x4] = zmm8
uint128_t zmm7
uint128_t var_d8 = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
float (* r10)[0x4] = arg2
float (* r12)[0x4] = arg1
int64_t r15 = sx.q(arg9)
float zmm10[0x4] = arg7
int32_t rcx_1 = *(&data_1434427d0 + (r15 << 2)) * *(&data_1434427b0 + (r15 << 2))
int32_t r11 = 0
int32_t rax = 0x18

if (r15 != 3)
    rax = 0

int32_t rsi_4 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
float (* var_330)[0x4] = r12
int64_t var_278 = r15
uint128_t var_418
float var_388[0x4]
float var_368[0x4]
int32_t var_328
int32_t var_318
int32_t var_2f8
float (* var_288)[0x4]
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
uint128_t zmm5

if (rsi_4 s> 0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float var_358_1[0x4] = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
    zmm8 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    int32_t r13_1 = 0
    r11 = 0
    var_288 = r10
    var_318 = rsi_4
    uint32_t var_308_1[0x4] = zmm8
    
    do
        int64_t rax_1 = sx.q(r13_1)
        zmm0 = *(r10 + rax_1)
        zmm1 = *(r10 + rax_1 + 0x10)
        float var_2e8_1[0x4] = zmm0
        var_368 = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 4)
        int64_t rax_3 = sx.q(zmm0[0])
        int64_t rcx_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdx_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm9 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_2 + 8)), zx.o(*(arg3 + rbp_2 + 8))[0].q)
        zmm7 = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_3 + 8)), zx.o(*(arg3 + rcx_3 + 8))[0].q)
        zmm6 = _mm_unpacklo_epi64(zmm7, zmm9.q)
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_2 + 0xc)), zx.o(*(arg3 + rbp_2 + 0xc))[0].q)
        zmm14 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_3 + 0xc)), zx.o(*(arg3 + rcx_3 + 0xc))[0].q), 
            zmm1[0].q)
        zmm11 = __pcmpeqd_xmmdq_memdq(zmm14, data_142d3f5b0)
        char temp0_28 = _mm_movemask_ps(zmm11)
        float var_348_1[0x4] = zmm6
        float var_458[0x4]
        float var_448[0x4]
        uint128_t var_438
        uint32_t var_428[0x4]
        
        if (temp0_28 != 0)
            zmm8 = zmm7
            var_418 = zmm9
            var_388 = arg6
            float var_298_1[0x4] = arg5
            zmm1 = zmm6 & zmm11
            int64_t rdx_3 = sx.q(zmm1[0])
            void* rcx_5 = arg4 + rdx_3
            zmm0 = *(arg4 + rdx_3)
            int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
            void* rdx_5 = arg4 + rbp_3
            zmm3 = *(arg4 + rbp_3)
            int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
            void* rbp_5 = arg4 + rbx_1
            zmm2 = *(arg4 + rbx_1)
            int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
            void* rbx_3 = arg4 + rdi_1
            zmm10 = *(arg4 + rdi_1)
            zmm7 = zmm11 & data_142fc95e0
            zmm1 = *(zx.q(zmm7.d) + rcx_5)
            zmm6 = *(zx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0]) + rdx_5)
            zmm4 = *(zx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0]) + rbp_5)
            arg6 = *(zx.q(_mm_shuffle_epi32(zmm7, 0xe7).d) + rbx_3)
            zmm5 = zmm11 & data_142fc95f0
            arg5 = *(zx.q(zmm5.d) + rcx_5)
            zmm12 = *(zx.q(_mm_shuffle_epi32(zmm5, 0xe5).d) + rdx_5)
            zmm9 = *(zx.q(_mm_shuffle_epi32(zmm5, 0x4e).d) + rbp_5)
            zmm5 = *(zx.q(_mm_shuffle_epi32(zmm5, 0xe7).d) + rbx_3)
            
            if ((temp0_28 & 1) == 0)
                if ((temp0_28 & 2) != 0)
                    goto label_14014085e
                
                goto label_140140592
            
            var_458[0] = zmm0[0]
            
            if ((temp0_28 & 2) != 0)
            label_14014085e:
                var_458[1] = zmm3[0]
                zmm7 = zmm8
                
                if ((temp0_28 & 4) == 0)
                    goto label_14014059d
                
                goto label_140140871
            
        label_140140592:
            zmm7 = zmm8
            
            if ((temp0_28 & 4) != 0)
            label_140140871:
                var_458[2] = zmm2[0]
                
                if ((temp0_28 & 8) != 0)
                label_14014087f:
                    var_458[3] = zmm10[0]
                    
                    if ((temp0_28 & 1) == 0)
                        goto label_1401405ad
                    
                    goto label_14014088e
            else
            label_14014059d:
                
                if ((temp0_28 & 8) != 0)
                    goto label_14014087f
            
            if ((temp0_28 & 1) != 0)
            label_14014088e:
                var_448[0] = zmm1[0]
                zmm2 = _mm_unpacklo_ps(zmm2, zmm10[0].q)
                zmm0 = _mm_unpacklo_ps(zmm0, zmm3[0].q)
                
                if ((temp0_28 & 2) != 0)
                    var_448[1] = zmm6[0]
            else
            label_1401405ad:
                zmm2 = _mm_unpacklo_ps(zmm2, zmm10[0].q)
                zmm0 = _mm_unpacklo_ps(zmm0, zmm3[0].q)
                
                if ((temp0_28 & 2) != 0)
                    var_448[1] = zmm6[0]
            
            zmm0 = zmm0[0].q | zmm2[0].q << 0x40
            float temp0_40[0x4] = _mm_unpacklo_ps(zmm4, arg6[0].q)
            float temp0_41[0x4] = _mm_unpacklo_ps(zmm1, zmm6[0].q)
            
            if ((temp0_28 & 4) != 0)
                var_448[2] = zmm4[0]
            
            zmm1 = temp0_41[0].q | temp0_40[0].q << 0x40
            zmm3 = _mm_unpacklo_ps(zmm9, zmm5.q)
            float temp0_43[0x4] = _mm_unpacklo_ps(arg5, zmm12[0].q)
            float temp0_44[0x4] = _mm_mul_ps(zmm0, zmm0)
            zmm6 = var_348_1
            
            if ((temp0_28 & 8) != 0)
                var_448[3] = arg6[0]
            
            zmm2 = temp0_43[0].q | zmm3[0].q << 0x40
            zmm3 = _mm_sub_ps(data_142d3f670, temp0_44)
            float temp0_46[0x4] = _mm_mul_ps(zmm1, zmm1)
            
            if ((temp0_28 & 1) != 0)
                var_438.d = arg5[0]
            
            zmm3 = _mm_sub_ps(zmm3, temp0_46)
            float temp0_48[0x4] = _mm_mul_ps(zmm2, zmm2)
            zmm10 = arg7
            
            if ((temp0_28 & 2) != 0)
                var_438:4.d = zmm12[0]
            
            zmm3 = _mm_sub_ps(zmm3, temp0_48)
            zmm8 = var_308_1
            arg6 = var_388
            
            if ((temp0_28 & 4) != 0)
                var_438:8.d = zmm9.d
            
            float temp0_50[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
            float temp0_51[0x4] = _mm_sqrt_ps(zmm3)
            
            if ((temp0_28 & 8) == 0)
                zmm0 = _mm_and_ps(temp0_50, temp0_51)
                zmm9 = var_418
                
                if ((temp0_28 & 1) != 0)
                    goto label_1401408cb
                
                goto label_140140682
            
            var_438:0xc.d = zmm5.d
            zmm0 = _mm_and_ps(temp0_50, temp0_51)
            zmm9 = var_418
            
            if ((temp0_28 & 1) != 0)
            label_1401408cb:
                var_428[0] = zmm0[0]
                arg5 = var_298_1
                
                if ((temp0_28 & 2) == 0)
                    goto label_140140691
                
                goto label_1401408e7
            
        label_140140682:
            arg5 = var_298_1
            
            if ((temp0_28 & 2) == 0)
            label_140140691:
                
                if ((temp0_28 & 4) != 0)
                    goto label_1401408fa
                
                goto label_140140699
            
        label_1401408e7:
            var_428[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
            
            if ((temp0_28 & 4) == 0)
            label_140140699:
                
                if ((temp0_28 & 8) != 0)
                    var_428[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            else
            label_1401408fa:
                var_428[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                
                if ((temp0_28 & 8) != 0)
                    var_428[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
        
        zmm12 = zmm11 ^ data_142d3f800
        uint32_t temp0_54 = _mm_movemask_ps(zmm12)
        
        if (temp0_54 != 0)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm9, zmm7.q))
            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm6)
            zmm3 = _mm_cmpgt_epi32(data_1434422d0, zmm14)
            zmm1 = zmm3 & zmm12
            uint32_t temp0_59 = _mm_movemask_ps(zmm1)
            uint32_t var_378[0x4]
            
            if (temp0_59 == 0)
                zmm1 = zx.o(0)
                
                if (0f < zmm10[0])
                label_140140737:
                    bool cond:8_1 = zmm10[0] >= 1f
                    zmm14 = __paddd_xmmdq_memdq(zmm14, data_142d3f800)
                    
                    if (cond:8_1)
                        zmm11 ^= zmm1
                        zmm3 = (zmm1 ^ zmm12) & zmm14
                        arg5 = _mm_or_ps(_mm_and_ps(arg5, zmm11), zmm3)
                        uint32_t temp0_89[0x4] = _mm_or_ps(_mm_and_ps(zmm11, arg6), zmm3)
                        zmm3 = zx.o(0)
                        arg6 = temp0_89
                    else
                        zmm10 = zmm8
                        zmm8 = zmm7
                        float temp0_64[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm14), temp0_1)
                        uint32_t temp0_65[0x4] = __andps_xmmxud_memxud(temp0_64, data_142d3f780)
                        zmm5 = __addps_xmmps_memps(
                            __addps_xmmps_memps(__andps_xmmxud_memxud(temp0_64, data_142d3f770), 
                                data_142d3f740), 
                            data_1434427a0) ^ temp0_65
                        zmm7 = _mm_add_ps(
                            __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_64, zmm5, 1), data_142d3f7e0), 
                            zmm5)
                        zmm3 = _mm_cvttps_epi32(zmm7)
                        zmm5 = _mm_cmpgt_epi32(zmm3, zmm14)
                        zmm6 = zmm1 ^ zmm12
                        zmm11 ^= zmm1
                        arg5 = (((zmm5 & not.o(zmm3)) | (zmm14 & zmm5)) & zmm6)
                            | _mm_and_ps(arg5, zmm11)
                        zmm3 = zx.o(0)
                        
                        if (arg8 != 1)
                            zmm3 = _mm_sub_ps(temp0_64, zmm7)
                        
                        zmm4 = __psubd_xmmdq_memdq(arg5, data_142d3f800)
                        uint32_t temp0_77[0x4] = _mm_and_ps(zmm11, arg6)
                        arg6 = _mm_cmpgt_epi32(zmm14, zmm4)
                        arg6 = (((arg6 & not.o(zmm14)) | (zmm4 & arg6)) & zmm6) | temp0_77
                        zmm7 = zmm8
                        zmm8 = zmm10
                        zmm10 = arg7
                        zmm6 = var_348_1
                    
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                    var_378 = (var_378 & zmm1) | (zmm1 & not.o(zmm3))
                else
                label_140140921:
                    zmm11 ^= zmm1
                    arg5 = _mm_and_ps(arg5, zmm11)
                    arg6 = _mm_and_ps(arg6, zmm11)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                    var_378 = (var_378 & zmm1) | (zmm1 & not.o(zx.o(0)))
            else
                var_378 = zmm3 & not.o(var_378)
                arg5 = _mm_andnot_ps(zmm1, arg5)
                arg6 = _mm_andnot_ps(zmm1, arg6)
                
                if (temp0_54 != temp0_59)
                    if (0f >= zmm10[0])
                        goto label_140140921
                    
                    goto label_140140737
            
            zmm9 = _mm_unpacklo_epi32(zmm9, zmm0[0].q)
            zmm7 = _mm_unpacklo_epi32(zmm7, zmm2[0].q)
            zmm14 = _mm_shuffle_epi32(zmm8, 0xf5)
            uint64_t r14_1 = zx.q(r15.d)
            float var_298_2[0x4] = arg5
            float var_2c8[0x4]
            uint32_t var_2b8[0x4]
            float var_2a8[0x4]
            
            if (r15.d u> 5)
                char rax_32 = temp0_54.b
                
                if ((rax_32 & 1) == 0)
                    if ((rax_32 & 2) != 0)
                        goto label_140141e7b
                    
                    goto label_140141947
                
                var_458[0] = 0
                
                if ((rax_32 & 2) != 0)
                label_140141e7b:
                    var_458[1] = 0
                    
                    if ((rax_32 & 4) == 0)
                        goto label_14014194f
                    
                    goto label_140141e8b
                
            label_140141947:
                
                if ((rax_32 & 4) == 0)
                label_14014194f:
                    
                    if ((rax_32 & 8) != 0)
                        goto label_140141e9b
                    
                    goto label_140141957
                
            label_140141e8b:
                var_458[2] = 0
                
                if ((rax_32 & 8) != 0)
                label_140141e9b:
                    var_458[3] = 0
                    
                    if ((rax_32 & 1) == 0)
                        goto label_14014195f
                    
                    goto label_140141eab
                
            label_140141957:
                
                if ((rax_32 & 1) == 0)
                label_14014195f:
                    
                    if ((rax_32 & 2) != 0)
                        goto label_140141ebb
                    
                    goto label_140141967
                
            label_140141eab:
                var_448[0] = 0
                
                if ((rax_32 & 2) != 0)
                label_140141ebb:
                    var_448[1] = 0
                    
                    if ((rax_32 & 4) == 0)
                        goto label_14014196f
                    
                    goto label_140141ecb
                
            label_140141967:
                
                if ((rax_32 & 4) == 0)
                label_14014196f:
                    
                    if ((rax_32 & 8) != 0)
                        goto label_140141edb
                    
                    goto label_140141977
                
            label_140141ecb:
                var_448[2] = 0
                
                if ((rax_32 & 8) != 0)
                label_140141edb:
                    var_448[3] = 0
                    
                    if ((rax_32 & 1) == 0)
                        goto label_14014197f
                    
                    goto label_140141eeb
                
            label_140141977:
                
                if ((rax_32 & 1) == 0)
                label_14014197f:
                    
                    if ((rax_32 & 2) != 0)
                        goto label_140141efb
                    
                    goto label_140141987
                
            label_140141eeb:
                var_438.d = 0
                
                if ((rax_32 & 2) != 0)
                label_140141efb:
                    var_438:4.d = 0
                    
                    if ((rax_32 & 4) == 0)
                        goto label_14014198f
                    
                    goto label_140141f0b
                
            label_140141987:
                
                if ((rax_32 & 4) == 0)
                label_14014198f:
                    
                    if ((rax_32 & 8) != 0)
                        goto label_140141f1b
                    
                    goto label_140141997
                
            label_140141f0b:
                var_438:8.d = 0
                
                if ((rax_32 & 8) != 0)
                label_140141f1b:
                    var_438:0xc.d = 0
                    
                    if ((rax_32 & 1) == 0)
                        goto label_14014199f
                    
                    goto label_140141f2b
                
            label_140141997:
                
                if ((rax_32 & 1) == 0)
                label_14014199f:
                    
                    if ((rax_32 & 2) != 0)
                        goto label_140141f3b
                    
                    goto label_1401419a7
                
            label_140141f2b:
                var_428[0] = 0x3f800000
                
                if ((rax_32 & 2) != 0)
                label_140141f3b:
                    var_428[1] = 0x3f800000
                    
                    if ((rax_32 & 4) == 0)
                        goto label_1401419af
                    
                    goto label_140141f4b
                
            label_1401419a7:
                
                if ((rax_32 & 4) != 0)
                label_140141f4b:
                    var_428[2] = 0x3f800000
                    
                    if ((rax_32 & 8) != 0)
                        var_428[3] = 0x3f800000
                else
                label_1401419af:
                    
                    if ((rax_32 & 8) != 0)
                        var_428[3] = 0x3f800000
            else
                zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(arg5, zmm8), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg5, 0xf5), zmm14), 0xe8)[0]
                        .q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                uint32_t temp0_102[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0[0].q)
                zmm11 = _mm_unpacklo_epi32(temp0_102, _mm_cmpgt_epi32(zx.o(0), temp0_102)[0].q)
                char rcx_11
                
                switch (r14_1)
                    case 0
                        zmm3 = _mm_add_epi64(zmm7, var_358_1)
                        zmm4 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm11)
                        zmm3 = _mm_add_epi64(zmm3, zmm2)
                        zmm0 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm3 &= zmm0
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm4 &= zmm1
                        int64_t rax_9 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        void* rsi_5 = arg4 + rax_9
                        int32_t r12_1 = *(arg4 + rax_9)
                        int64_t rax_10 = zmm4[0].q
                        void* rbp_6 = arg4 + rax_10
                        int32_t r15_1 = *(arg4 + rax_10)
                        int64_t rax_11 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rdi_7 = arg4 + rax_11
                        int32_t r14_2 = *(arg4 + rax_11)
                        zmm4 = data_1434426c0
                        zmm2 = zmm0 & zmm4
                        zmm4 &= zmm1
                        void* rax_13 = zmm3[0].q + arg4
                        int32_t r10_1 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rsi_5)
                        int32_t rdx_8 = *(zmm4[0].q + rbp_6)
                        var_2c8[0] = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdi_7)
                        zmm4 = data_1434426e0
                        zmm3 = zmm0 & zmm4
                        zmm4 &= zmm1
                        var_2b8[0] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rsi_5)
                        var_2a8[0] = *(zmm4[0].q + rbp_6)
                        int32_t rdx_16 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdi_7)
                        zmm4 = data_1434426f0
                        zmm0 &= zmm4
                        zmm1 &= zmm4
                        int32_t rdx_18 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rsi_5)
                        var_418.d = *(zmm1[0].q + rbp_6)
                        var_388[0] = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdi_7)
                        int32_t rdi_8 = *(zmm2[0].q + rax_13)
                        int32_t rbp_7 = *(zmm3[0].q + rax_13)
                        int32_t rsi_6 = *(zmm0[0].q + rax_13)
                        char rcx_10 = temp0_54.b
                        
                        if ((rcx_10 & 1) != 0)
                            var_458[0] = *rax_13
                            
                            if ((rcx_10 & 2) != 0)
                            label_1401419cb:
                                var_458[1] = r12_1
                                
                                if ((rcx_10 & 4) == 0)
                                    goto label_140140b91
                                
                                goto label_1401419d9
                        else if ((rcx_10 & 2) != 0)
                            goto label_1401419cb
                        
                        if ((rcx_10 & 4) == 0)
                        label_140140b91:
                            r12 = var_330
                            
                            if ((rcx_10 & 8) != 0)
                                goto label_1401419ef
                            
                            goto label_140140ba2
                        
                    label_1401419d9:
                        var_458[2] = r15_1
                        r12 = var_330
                        
                        if ((rcx_10 & 8) != 0)
                        label_1401419ef:
                            var_458[3] = r14_2
                            r15 = var_278
                            
                            if ((rcx_10 & 1) == 0)
                                goto label_140140bb0
                            
                            goto label_140141a05
                        
                    label_140140ba2:
                        r15 = var_278
                        
                        if ((rcx_10 & 1) != 0)
                        label_140141a05:
                            var_448[0] = rdi_8
                            
                            if ((rcx_10 & 2) != 0)
                            label_140141a15:
                                var_448[1] = r10_1
                                
                                if ((rcx_10 & 4) == 0)
                                    goto label_140140bc8
                                
                                goto label_140141a2a
                        else
                        label_140140bb0:
                            
                            if ((rcx_10 & 2) != 0)
                                goto label_140141a15
                        
                        if ((rcx_10 & 4) == 0)
                        label_140140bc8:
                            r10 = var_288
                            
                            if ((rcx_10 & 8) != 0)
                                goto label_140141a46
                            
                            goto label_140140bd6
                        
                    label_140141a2a:
                        var_448[2] = rdx_8
                        r10 = var_288
                        
                        if ((rcx_10 & 8) != 0)
                        label_140141a46:
                            var_448[3] = var_2c8[0]
                            
                            if ((rcx_10 & 1) == 0)
                                goto label_140140bdf
                            
                            goto label_140141a53
                        
                    label_140140bd6:
                        
                        if ((rcx_10 & 1) == 0)
                        label_140140bdf:
                            
                            if ((rcx_10 & 2) != 0)
                                goto label_140141a67
                            
                            goto label_140140be8
                        
                    label_140141a53:
                        var_438.d = rbp_7
                        
                        if ((rcx_10 & 2) != 0)
                        label_140141a67:
                            var_438:4.d = var_2b8[0]
                            
                            if ((rcx_10 & 4) == 0)
                                goto label_140140bf1
                            
                            goto label_140141a7b
                        
                    label_140140be8:
                        
                        if ((rcx_10 & 4) == 0)
                        label_140140bf1:
                            
                            if ((rcx_10 & 8) != 0)
                                goto label_140141a8f
                            
                            goto label_140140bfa
                        
                    label_140141a7b:
                        var_438:8.d = var_2a8[0]
                        
                        if ((rcx_10 & 8) != 0)
                        label_140141a8f:
                            var_438:0xc.d = rdx_16
                            
                            if ((rcx_10 & 1) == 0)
                                goto label_140140c03
                            
                            goto label_140141a9c
                        
                    label_140140bfa:
                        
                        if ((rcx_10 & 1) == 0)
                        label_140140c03:
                            
                            if ((rcx_10 & 2) != 0)
                                goto label_140141ab0
                            
                            goto label_140140c0f
                        
                    label_140141a9c:
                        var_428[0] = rsi_6
                        
                        if ((rcx_10 & 2) != 0)
                        label_140141ab0:
                            var_428[1] = rdx_18
                            rsi_4 = var_318
                            
                            if ((rcx_10 & 4) == 0)
                                goto label_140140c1c
                            
                            goto label_140141acb
                        
                    label_140140c0f:
                        rsi_4 = var_318
                        
                        if ((rcx_10 & 4) != 0)
                        label_140141acb:
                            var_428[2] = var_418.d
                            
                            if ((rcx_10 & 8) != 0)
                                var_428[3] = var_388[0]
                        else
                        label_140140c1c:
                            
                            if ((rcx_10 & 8) != 0)
                                var_428[3] = var_388[0]
                    case 1
                        var_328.o = zmm14
                        var_388 = arg6
                        arg6 = zmm7
                        zmm3 = _mm_add_epi64(zmm7, var_358_1)
                        var_418 = zmm9
                        zmm4 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm11)
                        zmm3 = _mm_add_epi64(zmm3, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm3 &= zmm1
                        zmm5 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm4 &= zmm5
                        int64_t rdx_26 = zmm3[0].q
                        void* rax_14 = arg4 + rdx_26
                        zmm0 = *(arg4 + rdx_26)
                        int64_t rbp_8 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        void* rdx_27 = arg4 + rbp_8
                        zmm14 = *(arg4 + rbp_8)
                        int64_t rbp_9 = zmm4[0].q
                        void* rbx_5 = arg4 + rbp_9
                        zmm7 = *(arg4 + rbp_9)
                        int64_t rbp_10 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rdi_9 = arg4 + rbp_10
                        zmm3 = *(arg4 + rbp_10)
                        zmm2 = data_1434426c0
                        zmm4 = zmm1 & zmm2
                        zmm6 = zmm5 & zmm2
                        zmm2 = *(zmm4[0].q + rax_14)
                        zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdx_27)
                        zmm8 = *(zmm6[0].q + rbx_5)
                        arg5 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rdi_9)
                        zmm6 = data_1434426e0
                        zmm1 &= zmm6
                        zmm5 &= zmm6
                        zmm11 = *(zmm1[0].q + rax_14)
                        zmm10 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_27)
                        zmm9 = *(zmm5.q + rbx_5)
                        zmm1 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rdi_9)
                        char rax_18 = temp0_54.b
                        
                        if ((rax_18 & 1) == 0)
                            if ((rax_18 & 2) != 0)
                                goto label_140141af6
                            
                            goto label_140140d71
                        
                        var_458[0] = zmm0[0]
                        
                        if ((rax_18 & 2) != 0)
                        label_140141af6:
                            var_458[1] = zmm14[0]
                            
                            if ((rax_18 & 4) == 0)
                                goto label_140140d79
                            
                            goto label_140141b05
                        
                    label_140140d71:
                        
                        if ((rax_18 & 4) != 0)
                        label_140141b05:
                            var_458[2] = zmm7.d
                            
                            if ((rax_18 & 8) != 0)
                            label_140141b13:
                                var_458[3] = zmm3[0]
                                
                                if ((rax_18 & 1) == 0)
                                    goto label_140140d89
                                
                                goto label_140141b21
                        else
                        label_140140d79:
                            
                            if ((rax_18 & 8) != 0)
                                goto label_140141b13
                        
                        if ((rax_18 & 1) != 0)
                        label_140141b21:
                            var_448[0] = zmm2[0]
                            zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm3[0].q)
                            
                            if ((rax_18 & 2) != 0)
                                var_448[1] = zmm4[0]
                        else
                        label_140140d89:
                            zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm3[0].q)
                            
                            if ((rax_18 & 2) != 0)
                                var_448[1] = zmm4[0]
                        
                        zmm0 = zmm0[0].q | zmm7.q << 0x40
                        float temp0_134[0x4] = _mm_unpacklo_ps(zmm2, zmm4[0].q)
                        zmm3 = _mm_unpacklo_ps(zmm8, arg5[0].q)
                        zmm14 = var_328.o
                        
                        if ((rax_18 & 4) != 0)
                            var_448[2] = zmm8[0]
                        
                        zmm2 = temp0_134[0].q | zmm3[0].q << 0x40
                        zmm3 = _mm_unpacklo_ps(zmm11, zmm10[0].q)
                        float temp0_137[0x4] = _mm_unpacklo_ps(zmm9, zmm1[0].q)
                        float temp0_138[0x4] = _mm_mul_ps(zmm0, zmm0)
                        zmm7 = arg6
                        
                        if ((rax_18 & 8) != 0)
                            var_448[3] = arg5[0]
                        
                        zmm3 = zmm3[0].q | temp0_137[0].q << 0x40
                        float temp0_139[0x4] = _mm_sub_ps(data_142d3f670, temp0_138)
                        float temp0_140[0x4] = _mm_mul_ps(zmm2, zmm2)
                        arg5 = var_298_2
                        
                        if ((rax_18 & 1) != 0)
                            var_438.d = zmm11[0]
                        
                        float temp0_141[0x4] = _mm_sub_ps(temp0_139, temp0_140)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        zmm8 = var_308_1
                        arg6 = var_388
                        
                        if ((rax_18 & 2) != 0)
                            var_438:4.d = zmm10[0]
                        
                        float temp0_143[0x4] = _mm_sub_ps(temp0_141, zmm3)
                        
                        if ((rax_18 & 4) != 0)
                            var_438:8.d = zmm9.d
                        
                        float temp0_144[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_143, 1)
                        float temp0_145[0x4] = _mm_sqrt_ps(temp0_143)
                        zmm10 = arg7
                        
                        if ((rax_18 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_144, temp0_145)
                            zmm9 = var_418
                            
                            if ((rax_18 & 1) != 0)
                                goto label_140141b56
                            
                            goto label_140140e69
                        
                        var_438:0xc.d = zmm1[0]
                        zmm0 = _mm_and_ps(temp0_144, temp0_145)
                        zmm9 = var_418
                        
                        if ((rax_18 & 1) != 0)
                        label_140141b56:
                            var_428[0] = zmm0[0]
                            
                            if ((rax_18 & 2) == 0)
                                goto label_140140e71
                            
                            goto label_140141b69
                        
                    label_140140e69:
                        
                        if ((rax_18 & 2) == 0)
                        label_140140e71:
                            
                            if ((rax_18 & 4) != 0)
                                goto label_140141b7c
                            
                            goto label_140140e79
                        
                    label_140141b69:
                        var_428[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        if ((rax_18 & 4) == 0)
                        label_140140e79:
                            
                            if ((rax_18 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                        else
                        label_140141b7c:
                            var_428[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            if ((rax_18 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                    case 2
                        zmm3 = _mm_add_epi64(zmm7, var_358_1)
                        zmm0 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm11)
                        zmm3 = _mm_add_epi64(zmm3, zmm2)
                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm3 &= zmm2
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm0 &= zmm1
                        int64_t rax_19 = zmm3[0].q
                        void* rdi_10 = arg4 + rax_19
                        int64_t rdx_28 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        void* rbx_6 = arg4 + rdx_28
                        int64_t rbp_16 = zmm0[0].q
                        zmm6 = data_1434426b0
                        zmm3 = zmm2 & zmm6
                        void* rsi_7 = zmm3[0].q
                        int16_t* rsi_9 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        zmm4 = data_1434426c0
                        zmm5 = zmm4
                        zmm2 &= zmm4
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_7 + rdi_10)), *(rsi_9 + rbx_6), 1)
                        uint32_t rdi_11 = zx.d(*(zmm2[0].q + rdi_10))
                        void* rsi_11 = arg4 + rbp_16
                        zmm4 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(rdi_11), 
                            *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rbx_6), 1)
                        zmm2 = zmm1 & zmm6
                        zmm1 &= zmm5
                        int16_t* rdi_13 = zmm1[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm2[0].q + rsi_11), 2)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rdi_13 + rsi_11), 2)
                        int64_t rbx_8 = zmm4[0].q
                        void* rdi_14 = arg4 + rbx_8
                        int16_t* rsi_12 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        zmm1 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rsi_12 + rdi_14), 3)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1[0].q + rdi_14), 3)
                        float temp0_171[0x4] = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __punpcklwd_xmmdq_memdq(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_19)), 
                                                *(arg4 + rdx_28), 1), 
                                            *(arg4 + rbp_16), 2), 
                                        *(arg4 + rbx_8), 3), 
                                    data_142d8f750), 
                                data_1434424d0)), 
                            data_1434426d0)
                        char rax_21 = temp0_54.b
                        
                        if ((rax_21 & 1) == 0)
                            zmm3 = __punpcklwd_xmmdq_memdq(zmm3, data_142d8f750)
                            
                            if ((rax_21 & 2) != 0)
                                goto label_140141bb5
                            
                            goto label_140140fd9
                        
                        var_458[0] = temp0_171[0]
                        zmm3 = __punpcklwd_xmmdq_memdq(zmm3, data_142d8f750)
                        
                        if ((rax_21 & 2) != 0)
                        label_140141bb5:
                            var_458[1] = _mm_shuffle_epi32(temp0_171, 0xe5)[0]
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_1434424d0)
                            rsi_4 = var_318
                            
                            if ((rax_21 & 4) == 0)
                                goto label_140140ff0
                            
                            goto label_140141bd7
                        
                    label_140140fd9:
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_1434424d0)
                        rsi_4 = var_318
                        
                        if ((rax_21 & 4) == 0)
                        label_140140ff0:
                            zmm2 = _mm_cvtepi32_ps(zmm3)
                            
                            if ((rax_21 & 8) != 0)
                                goto label_140141bed
                            
                            goto label_140140ffb
                        
                    label_140141bd7:
                        var_458[2] = _mm_shuffle_epi32(temp0_171, 0x4e)[0]
                        zmm2 = _mm_cvtepi32_ps(zmm3)
                        
                        if ((rax_21 & 8) != 0)
                        label_140141bed:
                            var_458[3] = _mm_shuffle_epi32(temp0_171, 0xe7)[0]
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((rax_21 & 1) == 0)
                                goto label_14014100a
                            
                            goto label_140141c02
                        
                    label_140140ffb:
                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                        
                        if ((rax_21 & 1) == 0)
                        label_14014100a:
                            zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                            
                            if ((rax_21 & 2) != 0)
                                goto label_140141c1d
                            
                            goto label_14014101a
                        
                    label_140141c02:
                        var_448[0] = zmm2[0]
                        zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                        
                        if ((rax_21 & 2) != 0)
                        label_140141c1d:
                            var_448[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                            
                            if ((rax_21 & 4) == 0)
                                goto label_14014102a
                            
                            goto label_140141c38
                        
                    label_14014101a:
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                        
                        if ((rax_21 & 4) != 0)
                        label_140141c38:
                            var_448[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(temp0_171, temp0_171)
                            
                            if ((rax_21 & 8) != 0)
                                var_448[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        else
                        label_14014102a:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(temp0_171, temp0_171)
                            
                            if ((rax_21 & 8) != 0)
                                var_448[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        float temp0_181[0x4] = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm3 = _mm_sub_ps(data_142d3f670, zmm1)
                        float temp0_183[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rax_21 & 1) != 0)
                            var_438.d = temp0_181[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_183)
                        float temp0_185[0x4] = _mm_mul_ps(temp0_181, temp0_181)
                        
                        if ((rax_21 & 2) != 0)
                            var_438:4.d = _mm_shuffle_epi32(temp0_181, 0xe5)[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_185)
                        
                        if ((rax_21 & 4) != 0)
                            var_438:8.d = _mm_shuffle_epi32(temp0_181, 0x4e)[0]
                        
                        float temp0_189[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        float temp0_190[0x4] = _mm_sqrt_ps(zmm3)
                        
                        if ((rax_21 & 8) == 0)
                            zmm1 = _mm_and_ps(temp0_189, temp0_190)
                            
                            if ((rax_21 & 1) != 0)
                                goto label_140141c67
                            
                            goto label_1401410a4
                        
                        var_438:0xc.d = _mm_shuffle_epi32(temp0_181, 0xe7)[0]
                        zmm1 = _mm_and_ps(temp0_189, temp0_190)
                        
                        if ((rax_21 & 1) != 0)
                        label_140141c67:
                            var_428[0] = zmm1[0]
                            
                            if ((rax_21 & 2) == 0)
                                goto label_1401410ac
                            
                            goto label_140141c7a
                        
                    label_1401410a4:
                        
                        if ((rax_21 & 2) == 0)
                        label_1401410ac:
                            
                            if ((rax_21 & 4) != 0)
                                goto label_140141c8d
                            
                            goto label_1401410b4
                        
                    label_140141c7a:
                        var_428[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        if ((rax_21 & 4) == 0)
                        label_1401410b4:
                            
                            if ((rax_21 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_140141c8d:
                            var_428[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((rax_21 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    case 3
                        var_328.o = zmm14
                        var_388 = arg6
                        zmm0 = zmm6 & zmm12
                        int64_t rax_23 = sx.q(zmm0[0])
                        void* rbp_17 = arg4 + rax_23
                        zmm14 = *(arg4 + rax_23)
                        int64_t rax_25 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                        void* rbx_9 = arg4 + rax_25
                        zmm14 = _mm_unpacklo_ps(zmm14, (*(arg4 + rax_25))[0].q)
                        int64_t rax_27 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        void* rdi_15 = arg4 + rax_27
                        zmm1 = *(arg4 + rax_27)
                        int64_t rdx_29 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                        void* rax_29 = arg4 + rdx_29
                        float temp0_196[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + rdx_29))[0].q)
                        zmm14 = zmm14[0].q | temp0_196[0].q << 0x40
                        zmm1 = zmm12 & data_142fc95e0
                        zmm0 = *(zx.q(zmm1[0]) + rbp_17)
                        var_2b8 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rbx_9)
                        zmm6 = zmm9
                        zmm9 = *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rdi_15)
                        var_2c8 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rax_29)
                        zmm1 = zmm12 & data_142fc95f0
                        zmm10 = *(zx.q(zmm1[0]) + rbp_17)
                        var_2a8 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rbx_9)
                        var_2f8.o = *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rdi_15)
                        float (* r10_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                        zmm1 = zmm12 & data_143442650
                        zmm8 = _mm_unpacklo_ps(*(zx.q(zmm1[0]) + rbp_17), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rbx_9))[0].q)
                        zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rdi_15), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rax_29))[0].q)
                        zmm8 = zmm8[0].q | zmm3[0].q << 0x40
                        zmm3 = zmm12 & data_143442660
                        zmm1 = zx.o(*(zx.q(zmm3[0]) + rbp_17))
                        arg5 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rbx_9))
                        uint64_t r15_2 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
                        uint64_t r14_3 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
                        zmm4 = zmm12 & data_143442670
                        zmm3 = *(zx.q(zmm4[0]) + rbp_17)
                        uint128_t* rdx_44 = zx.q(_mm_shuffle_epi32(zmm4, 0xe5).d)
                        uint32_t (* rbp_18)[0x4] = zx.q(_mm_shuffle_epi32(zmm4, 0x4e).d)
                        int32_t var_268
                        var_268.o = *(rdx_44 + rbx_9)
                        uint32_t (* rbx_10)[0x4] = zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])
                        var_418 = zmm6
                        zmm4 = _mm_add_epi64(_mm_add_epi64(zmm6, var_358_1), zmm11)
                        arg6 = zmm7
                        zmm5 = _mm_add_epi64(_mm_add_epi64(zmm7, var_358_1), zmm2)
                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50) & zmm5
                        zmm6 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm4
                        int64_t rdx_45 = zmm2[0].q
                        int64_t rsi_14 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        zmm5 = zx.o(*(arg4 + rdx_45))
                        int64_t rdx_46 = zmm6[0].q
                        int64_t rsi_15 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                        zmm2 = zx.o(*(arg4 + rdx_46))
                        zmm5 = _mm_unpacklo_epi32(zmm5, zx.o(*(arg4 + rsi_14))[0].q)
                        zmm2 = _mm_unpacklo_epi32(zmm2, zx.o(*(arg4 + rsi_15))[0].q)
                        int32_t var_248_1[0x4] = *(r10_2 + rax_29)
                        zmm5 = _mm_unpacklo_epi64(zmm5, zmm2[0].q)
                        zmm2 = _mm_srli_epi32(zmm5, 0x15)
                        zmm4 = data_143442440
                        zmm7 = zmm4
                        float temp0_229[0x4] = _mm_mul_ps(
                            __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm4)), 
                                data_143442690), 
                            zmm8)
                        zmm4 = zx.o(*(r15_2 + rdi_15))
                        float temp0_230[0x4] = _mm_add_ps(temp0_229, zmm14)
                        zmm6 = _mm_add_epi32(_mm_srli_epi32(zmm5, 0xa) & data_143442480, zmm7)
                        rcx_11 = temp0_54.b
                        zmm11 = zx.o(*(r14_3 + rax_29))
                        zmm14 = *(rbp_18 + rdi_15)
                        zmm8 = *(rbx_10 + rax_29)
                        
                        if ((rcx_11 & 1) != 0)
                            var_458[0] = temp0_230[0]
                        
                        zmm4 = _mm_unpacklo_epi32(zmm4, zmm11[0].q)
                        zmm1 = _mm_unpacklo_epi32(zmm1, arg5[0].q)
                        float temp0_235[0x4] = _mm_cvtepi32_ps(zmm6)
                        
                        if ((rcx_11 & 2) != 0)
                            var_458[1] = _mm_shuffle_epi32(temp0_230, 0xe5).d
                        
                        zmm9 = __unpcklps_xmmps_memdq(zmm9, var_2c8)
                        float temp0_238[0x4] = __unpcklps_xmmps_memdq(zmm0, var_2b8)
                        zmm1 = _mm_unpacklo_epi64(zmm1, zmm4[0].q)
                        float temp0_240[0x4] = __divps_xmmps_memps(temp0_235, data_143442690)
                        r15 = var_278
                        r10 = var_288
                        rsi_4 = var_318
                        zmm7 = arg6
                        
                        if ((rcx_11 & 4) != 0)
                            var_458[2] = _mm_shuffle_epi32(temp0_230, 0x4e)[0]
                        
                        zmm5 &= data_143442680
                        zmm0 = temp0_238[0].q | zmm9.q << 0x40
                        float temp0_242[0x4] = _mm_mul_ps(zmm1, temp0_240)
                        r12 = var_330
                        
                        if ((rcx_11 & 8) != 0)
                            var_458[3] = _mm_shuffle_epi32(temp0_230, 0xe7)[0]
                        
                        zmm5 = __paddd_xmmdq_memdq(zmm5, data_143442490)
                        float temp0_245[0x4] = _mm_add_ps(zmm0, temp0_242)
                        zmm9 = var_418
                        
                        if ((rcx_11 & 1) != 0)
                            var_448[0] = temp0_245[0]
                        
                        zmm14 = _mm_unpacklo_ps(zmm14, zmm8[0].q)
                        zmm3 = __unpcklps_xmmps_memdq(zmm3, var_268.o)
                        float temp0_248[0x4] = _mm_cvtepi32_ps(zmm5)
                        
                        if ((rcx_11 & 2) != 0)
                            var_448[1] = _mm_shuffle_epi32(temp0_245, 0xe5)[0]
                        
                        zmm5 = __unpcklps_xmmps_memdq(var_2f8.o, var_248_1)
                        float temp0_251[0x4] = __unpcklps_xmmps_memdq(zmm10, var_2a8)
                        zmm3 = zmm3[0].q | zmm14[0].q << 0x40
                        float temp0_252[0x4] = __divps_xmmps_memps(temp0_248, data_1434426a0)
                        arg5 = var_298_2
                        zmm8 = var_308_1
                        
                        if ((rcx_11 & 4) != 0)
                            var_448[2] = _mm_shuffle_epi32(temp0_245, 0x4e)[0]
                        
                        zmm10 = temp0_251[0].q | zmm5.q << 0x40
                        zmm3 = _mm_mul_ps(zmm3, temp0_252)
                        float temp0_255[0x4] = _mm_mul_ps(temp0_230, temp0_230)
                        arg6 = var_388
                        zmm14 = var_328.o
                        
                        if ((rcx_11 & 8) != 0)
                            var_448[3] = _mm_shuffle_epi32(temp0_245, 0xe7)[0]
                        
                        float temp0_257[0x4] = _mm_add_ps(zmm10, zmm3)
                        float temp0_258[0x4] = _mm_sub_ps(data_142d3f670, temp0_255)
                        float temp0_259[0x4] = _mm_mul_ps(temp0_245, temp0_245)
                        
                        if ((rcx_11 & 1) != 0)
                            var_438.d = temp0_257[0]
                        
                        float temp0_260[0x4] = _mm_sub_ps(temp0_258, temp0_259)
                        float temp0_261[0x4] = _mm_mul_ps(temp0_257, temp0_257)
                        
                        if ((rcx_11 & 2) != 0)
                            var_438:4.d = _mm_shuffle_epi32(temp0_257, 0xe5)[0]
                        
                        float temp0_263[0x4] = _mm_sub_ps(temp0_260, temp0_261)
                        
                        if ((rcx_11 & 4) != 0)
                            var_438:8.d = _mm_shuffle_epi32(temp0_257, 0x4e)[0]
                        
                        float temp0_265[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_263, 1)
                        float temp0_266[0x4] = _mm_sqrt_ps(temp0_263)
                        
                        if ((rcx_11 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_265, temp0_266)
                            
                            if ((rcx_11 & 1) != 0)
                                goto label_140141cb8
                            
                            goto label_140141551
                        
                        var_438:0xc.d = _mm_shuffle_epi32(temp0_257, 0xe7)[0]
                        zmm0 = _mm_and_ps(temp0_265, temp0_266)
                        
                        if ((rcx_11 & 1) == 0)
                        label_140141551:
                            zmm10 = arg7
                            
                            if ((rcx_11 & 2) == 0)
                                goto label_14014156b
                            
                            goto label_140141562
                        
                    label_140141cb8:
                        var_428[0] = zmm0[0]
                        zmm10 = arg7
                        
                        if ((rcx_11 & 2) != 0)
                            goto label_140141562
                        
                        goto label_14014156b
                    case 4
                        zmm3 = var_358_1
                        zmm0 = _mm_add_epi64(zmm7, zmm3)
                        zmm1 = _mm_add_epi64(_mm_add_epi64(zmm9, zmm3), zmm11)
                        zmm0 = _mm_add_epi64(zmm0, zmm2)
                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50) & zmm0
                        zmm0 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm1
                        int64_t rax_30 = zmm2[0].q
                        int64_t rdx_47 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        int64_t rbp_19 = zmm0[0].q
                        int64_t rbx_11 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_30)), 
                                zx.o(*(arg4 + rdx_47))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_19)), zx.o(*(arg4 + rbx_11))[0].q)[
                            0].q)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 0xa)
                        float temp0_285[0x4] = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm1, data_143442440)), 
                            data_143442690)
                        char rcx_12 = temp0_54.b
                        
                        if ((rcx_12 & 1) == 0)
                            zmm2 &= data_143442480
                            
                            if ((rcx_12 & 2) != 0)
                                goto label_140141cf2
                            
                            goto label_14014163f
                        
                        var_458[0] = temp0_285[0]
                        zmm2 &= data_143442480
                        
                        if ((rcx_12 & 2) != 0)
                        label_140141cf2:
                            var_458[1] = _mm_shuffle_epi32(temp0_285, 0xe5)[0]
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            
                            if ((rcx_12 & 4) == 0)
                                goto label_140141650
                            
                            goto label_140141d0e
                        
                    label_14014163f:
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                        
                        if ((rcx_12 & 4) == 0)
                        label_140141650:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_12 & 8) != 0)
                                goto label_140141d25
                            
                            goto label_14014165c
                        
                    label_140141d0e:
                        var_458[2] = _mm_shuffle_epi32(temp0_285, 0x4e)[0]
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_12 & 8) != 0)
                        label_140141d25:
                            var_458[3] = _mm_shuffle_epi32(temp0_285, 0xe7)[0]
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rcx_12 & 1) == 0)
                                goto label_14014166c
                            
                            goto label_140141d3b
                        
                    label_14014165c:
                        zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                        
                        if ((rcx_12 & 1) == 0)
                        label_14014166c:
                            zmm0 &= data_143442680
                            
                            if ((rcx_12 & 2) != 0)
                                goto label_140141d57
                            
                            goto label_14014167d
                        
                    label_140141d3b:
                        var_448[0] = zmm2[0]
                        zmm0 &= data_143442680
                        
                        if ((rcx_12 & 2) != 0)
                        label_140141d57:
                            var_448[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rcx_12 & 4) == 0)
                                goto label_14014168e
                            
                            goto label_140141d73
                        
                    label_14014167d:
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        
                        if ((rcx_12 & 4) != 0)
                        label_140141d73:
                            var_448[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(temp0_285, temp0_285)
                            
                            if ((rcx_12 & 8) != 0)
                                var_448[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        else
                        label_14014168e:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(temp0_285, temp0_285)
                            
                            if ((rcx_12 & 8) != 0)
                                var_448[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        float temp0_293[0x4] = __divps_xmmps_memps(zmm0, data_1434426a0)
                        zmm3 = _mm_sub_ps(data_142d3f670, zmm1)
                        float temp0_295[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_12 & 1) != 0)
                            var_438.d = temp0_293[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_295)
                        float temp0_297[0x4] = _mm_mul_ps(temp0_293, temp0_293)
                        
                        if ((rcx_12 & 2) != 0)
                            var_438:4.d = _mm_shuffle_epi32(temp0_293, 0xe5)[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_297)
                        
                        if ((rcx_12 & 4) != 0)
                            var_438:8.d = _mm_shuffle_epi32(temp0_293, 0x4e)[0]
                        
                        float temp0_301[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        float temp0_302[0x4] = _mm_sqrt_ps(zmm3)
                        
                        if ((rcx_12 & 8) == 0)
                            zmm1 = _mm_and_ps(temp0_301, temp0_302)
                            
                            if ((rcx_12 & 1) != 0)
                                goto label_140141da4
                            
                            goto label_14014170e
                        
                        var_438:0xc.d = _mm_shuffle_epi32(temp0_293, 0xe7)[0]
                        zmm1 = _mm_and_ps(temp0_301, temp0_302)
                        
                        if ((rcx_12 & 1) != 0)
                        label_140141da4:
                            var_428[0] = zmm1[0]
                            
                            if ((rcx_12 & 2) == 0)
                                goto label_140141717
                            
                            goto label_140141db8
                        
                    label_14014170e:
                        
                        if ((rcx_12 & 2) == 0)
                        label_140141717:
                            
                            if ((rcx_12 & 4) != 0)
                                goto label_140141dcc
                            
                            goto label_140141720
                        
                    label_140141db8:
                        var_428[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        if ((rcx_12 & 4) == 0)
                        label_140141720:
                            
                            if ((rcx_12 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_140141dcc:
                            var_428[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((rcx_12 & 8) != 0)
                                var_428[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    case 5
                        zmm3 = var_358_1
                        zmm0 = _mm_add_epi64(zmm7, zmm3)
                        zmm1 = _mm_add_epi64(_mm_add_epi64(zmm9, zmm3), zmm11)
                        zmm0 = _mm_add_epi64(zmm0, zmm2)
                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50) & zmm0
                        zmm0 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm1
                        int64_t rax_31 = zmm2[0].q
                        int64_t rdx_48 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        int64_t rbp_20 = zmm0[0].q
                        int64_t rbx_12 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        zmm1 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_31)), 
                                zx.o(*(arg4 + rdx_48))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_20)), zx.o(*(arg4 + rbx_12))[0].q)[
                            0].q)
                        zmm0 = _mm_srli_epi32(zmm1, 0x15)
                        zmm2 = _mm_srli_epi32(zmm1, 5) & data_143442600
                        zmm0 = __paddd_xmmdq_memdq(zmm0 & data_143442320, data_143442330)
                            | (zmm0 & data_143442610) | zmm2
                        rcx_11 = temp0_54.b
                        
                        if ((rcx_11 & 1) != 0)
                            var_458[0] = zmm0[0]
                        
                        uint32_t temp0_318[0x4] = _mm_srli_epi32(zmm1, 0xa)
                        zmm2 = _mm_slli_epi32(zmm1, 6)
                        
                        if ((rcx_11 & 2) != 0)
                            var_458[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        zmm2 &= data_143442600
                        zmm4 = temp0_318 & data_143442610
                        zmm3 = temp0_318 & data_143442320
                        
                        if ((rcx_11 & 4) == 0)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rcx_11 & 8) != 0)
                                goto label_140141e10
                            
                            goto label_14014184e
                        
                        var_458[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                        zmm2 |= zmm4
                        
                        if ((rcx_11 & 8) != 0)
                        label_140141e10:
                            var_458[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                            zmm2 |= zmm3
                            
                            if ((rcx_11 & 1) == 0)
                                goto label_14014185f
                            
                            goto label_140141e23
                        
                    label_14014184e:
                        zmm2 |= zmm3
                        
                        if ((rcx_11 & 1) != 0)
                        label_140141e23:
                            var_448[0] = zmm2[0]
                            zmm3 = _mm_slli_epi32(zmm1, 0x11)
                            
                            if ((rcx_11 & 2) != 0)
                                var_448[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                        else
                        label_14014185f:
                            zmm3 = _mm_slli_epi32(zmm1, 0x11)
                            
                            if ((rcx_11 & 2) != 0)
                                var_448[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                        
                        zmm4 = zmm1 & data_143442620
                        zmm3 &= data_143442630
                        zmm1 &= data_143442640
                        
                        if ((rcx_11 & 4) != 0)
                            var_448[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                        
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                        float temp0_326[0x4] = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rcx_11 & 8) != 0)
                            var_448[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        zmm3 = zmm3 | zmm1 | zmm4
                        float temp0_328[0x4] = _mm_sub_ps(data_142d3f670, temp0_326)
                        float temp0_329[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_11 & 1) != 0)
                            var_438.d = zmm3[0]
                        
                        float temp0_330[0x4] = _mm_sub_ps(temp0_328, temp0_329)
                        float temp0_331[0x4] = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_11 & 2) != 0)
                            var_438:4.d = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        
                        float temp0_333[0x4] = _mm_sub_ps(temp0_330, temp0_331)
                        
                        if ((rcx_11 & 4) != 0)
                            var_438:8.d = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                        
                        float temp0_335[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_333, 1)
                        float temp0_336[0x4] = _mm_sqrt_ps(temp0_333)
                        
                        if ((rcx_11 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_335, temp0_336)
                            
                            if ((rcx_11 & 1) != 0)
                                goto label_140141e57
                            
                            goto label_140141927
                        
                        var_438:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        zmm0 = _mm_and_ps(temp0_335, temp0_336)
                        
                        if ((rcx_11 & 1) != 0)
                        label_140141e57:
                            var_428[0] = zmm0[0]
                            
                            if ((rcx_11 & 2) != 0)
                                goto label_140141562
                            
                            goto label_14014156b
                        
                    label_140141927:
                        
                        if ((rcx_11 & 2) == 0)
                            goto label_14014156b
                        
                    label_140141562:
                        var_428[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    label_14014156b:
                        
                        if ((rcx_11 & 4) != 0)
                            var_428[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        if ((rcx_11 & 8) != 0)
                            var_428[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            
            zmm6 = _mm_cmpeq_epi32(arg5, arg6) & not.o(zmm12)
            uint32_t temp0_386 = _mm_movemask_ps(zmm6)
            
            if (temp0_386 != 0)
                float var_3c8
                float var_3b8
                uint32_t var_3a8
                float var_398
                uint64_t rbx_14
                int64_t r14_5
                
                if (r15.d u> 5)
                    rbx_14 = zx.q(temp0_386)
                    r14_5 = rbx_14 & 1
                    
                    if (r14_5 == 0)
                        if ((rbx_14.b & 2) != 0)
                            goto label_14014347b
                        
                        goto label_140142f41
                    
                    var_3c8 = 0f
                    
                    if ((rbx_14.b & 2) != 0)
                    label_14014347b:
                        int32_t var_3c4_7 = 0
                        
                        if ((rbx_14.b & 4) == 0)
                            goto label_140142f4a
                        
                        goto label_14014348f
                    
                label_140142f41:
                    
                    if ((rbx_14.b & 4) == 0)
                    label_140142f4a:
                        
                        if ((rbx_14.b & 8) != 0)
                            goto label_1401434a3
                        
                        goto label_140142f53
                    
                label_14014348f:
                    int32_t var_3c0_7 = 0
                    
                    if ((rbx_14.b & 8) != 0)
                    label_1401434a3:
                        int32_t var_3bc_7 = 0
                        
                        if (r14_5 == 0)
                            goto label_140142f5c
                        
                        goto label_1401434b7
                    
                label_140142f53:
                    
                    if (r14_5 == 0)
                    label_140142f5c:
                        
                        if ((rbx_14.b & 2) != 0)
                            goto label_1401434cb
                        
                        goto label_140142f65
                    
                label_1401434b7:
                    var_3b8 = 0f
                    
                    if ((rbx_14.b & 2) != 0)
                    label_1401434cb:
                        int32_t var_3b4_7 = 0
                        
                        if ((rbx_14.b & 4) == 0)
                            goto label_140142f6e
                        
                        goto label_1401434df
                    
                label_140142f65:
                    
                    if ((rbx_14.b & 4) == 0)
                    label_140142f6e:
                        
                        if ((rbx_14.b & 8) != 0)
                            goto label_1401434f3
                        
                        goto label_140142f77
                    
                label_1401434df:
                    int32_t var_3b0_7 = 0
                    
                    if ((rbx_14.b & 8) != 0)
                    label_1401434f3:
                        int32_t var_3ac_7 = 0
                        
                        if (r14_5 == 0)
                            goto label_140142f80
                        
                        goto label_140143507
                    
                label_140142f77:
                    
                    if (r14_5 == 0)
                    label_140142f80:
                        
                        if ((rbx_14.b & 2) != 0)
                            goto label_14014351b
                        
                        goto label_140142f89
                    
                label_140143507:
                    var_3a8 = 0
                    
                    if ((rbx_14.b & 2) != 0)
                    label_14014351b:
                        int32_t var_3a4_6 = 0
                        
                        if ((rbx_14.b & 4) == 0)
                            goto label_140142f92
                        
                        goto label_14014352f
                    
                label_140142f89:
                    
                    if ((rbx_14.b & 4) == 0)
                    label_140142f92:
                        
                        if ((rbx_14.b & 8) != 0)
                            goto label_140143543
                        
                        goto label_140142f9b
                    
                label_14014352f:
                    int32_t var_3a0_6 = 0
                    
                    if ((rbx_14.b & 8) != 0)
                    label_140143543:
                        int32_t var_39c_6 = 0
                        
                        if (r14_5 == 0)
                            goto label_140142fa4
                        
                        goto label_140143557
                    
                label_140142f9b:
                    
                    if (r14_5 == 0)
                    label_140142fa4:
                        
                        if ((rbx_14.b & 2) != 0)
                            goto label_14014356b
                        
                        goto label_140142fad
                    
                label_140143557:
                    var_398 = 1f
                    
                    if ((rbx_14.b & 2) != 0)
                    label_14014356b:
                        int32_t var_394_5 = 0x3f800000
                        zmm14 = zmm8
                        zmm12 = zmm10
                        
                        if ((rbx_14.b & 4) == 0)
                            goto label_140142fbf
                        
                        goto label_140143588
                    
                label_140142fad:
                    zmm14 = zmm8
                    zmm12 = zmm10
                    int32_t var_38c_4
                    
                    if ((rbx_14.b & 4) != 0)
                    label_140143588:
                        int32_t var_390_4 = 0x3f800000
                        
                        if ((rbx_14.b & 8) != 0)
                            var_38c_4 = 0x3f800000
                    else
                    label_140142fbf:
                        
                        if ((rbx_14.b & 8) != 0)
                            var_38c_4 = 0x3f800000
                else
                    zmm11 = zmm7
                    zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(arg6, zmm8), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg6, 0xf5), zmm14), 
                            0xe8)[0].q)
                    zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                    zmm7 = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm0[0].q)
                    zmm7 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7)[0].q)
                    
                    switch (r14_1)
                        case 0
                            zmm11 = _mm_add_epi64(zmm11, var_358_1)
                            zmm9 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm7)
                            zmm11 = _mm_add_epi64(zmm11, zmm2)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0x50)
                            zmm11 &= zmm0
                            zmm1 = _mm_shuffle_epi32(zmm6, 0xfa)
                            zmm9 &= zmm1
                            int64_t rax_44 = _mm_shuffle_epi32(zmm11, 0x4e)[0].q
                            void* rdi_16 = arg4 + rax_44
                            int32_t r15_3 = *(arg4 + rax_44)
                            int64_t rax_45 = zmm9.q
                            void* rbx_13 = arg4 + rax_45
                            int32_t rbp_21 = *(arg4 + rax_45)
                            int64_t rax_46 = _mm_shuffle_epi32(zmm9, 0x4e)[0].q
                            void* rdx_49 = arg4 + rax_46
                            int32_t rax_47 = *(arg4 + rax_46)
                            zmm3 = data_1434426c0
                            zmm2 = zmm0 & zmm3
                            zmm3 &= zmm1
                            float* r12_4 = zmm11[0].q + arg4
                            int32_t r10_3 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rdi_16)
                            int32_t rsi_18 = *(zmm3[0].q + rbx_13)
                            var_2c8[0] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdx_49)
                            zmm4 = data_1434426e0
                            zmm3 = zmm0 & zmm4
                            zmm4 &= zmm1
                            var_2a8[0] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdi_16)
                            int32_t rsi_24 = *(zmm4[0].q + rbx_13)
                            int32_t rsi_26 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdx_49)
                            zmm4 = data_1434426f0
                            zmm0 &= zmm4
                            zmm1 &= zmm4
                            var_418.d = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rdi_16)
                            var_388[0] = *(zmm1[0].q + rbx_13)
                            var_348_1[0] = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_49)
                            float rdx_52 = *(zmm2[0].q + r12_4)
                            uint32_t rdi_17 = *(zmm3[0].q + r12_4)
                            var_2b8[0] = *(zmm0[0].q + r12_4)
                            rbx_14 = zx.q(temp0_386)
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 == 0)
                                if ((rbx_14.b & 2) != 0)
                                    goto label_140142fe1
                                
                                goto label_14014216b
                            
                            var_3c8 = *r12_4
                            
                            if ((rbx_14.b & 2) != 0)
                            label_140142fe1:
                                int32_t var_3c4_3 = r15_3
                                r12 = var_330
                                rsi_4 = var_318
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_140142183
                                
                                goto label_140143001
                            
                        label_14014216b:
                            r12 = var_330
                            rsi_4 = var_318
                            
                            if ((rbx_14.b & 4) == 0)
                            label_140142183:
                                r15 = var_278
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_140143019
                                
                                goto label_140142191
                            
                        label_140143001:
                            int32_t var_3c0_2 = rbp_21
                            r15 = var_278
                            
                            if ((rbx_14.b & 8) != 0)
                            label_140143019:
                                int32_t var_3bc_2 = rax_47
                                
                                if (r14_5 == 0)
                                    goto label_14014219a
                                
                                goto label_140143029
                            
                        label_140142191:
                            
                            if (r14_5 != 0)
                            label_140143029:
                                var_3b8 = rdx_52
                                
                                if ((rbx_14.b & 2) != 0)
                                label_140143039:
                                    int32_t var_3b4_4 = r10_3
                                    
                                    if ((rbx_14.b & 4) == 0)
                                        goto label_1401421af
                                    
                                    goto label_140143051
                            else
                            label_14014219a:
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_140143039
                            
                            if ((rbx_14.b & 4) == 0)
                            label_1401421af:
                                r10 = var_288
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_140143070
                                
                                goto label_1401421bd
                            
                        label_140143051:
                            int32_t var_3b0_4 = rsi_18
                            r10 = var_288
                            
                            if ((rbx_14.b & 8) != 0)
                            label_140143070:
                                float var_3ac_6 = var_2c8[0]
                                
                                if (r14_5 == 0)
                                    goto label_1401421c6
                                
                                goto label_140143080
                            
                        label_1401421bd:
                            
                            if (r14_5 == 0)
                            label_1401421c6:
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_140143097
                                
                                goto label_1401421cf
                            
                        label_140143080:
                            var_3a8 = rdi_17
                            
                            if ((rbx_14.b & 2) != 0)
                            label_140143097:
                                float var_3a4_4 = var_2a8[0]
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_1401421d8
                                
                                goto label_1401430ae
                            
                        label_1401421cf:
                            
                            if ((rbx_14.b & 4) == 0)
                            label_1401421d8:
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_1401430c5
                                
                                goto label_1401421e1
                            
                        label_1401430ae:
                            int32_t var_3a0_5 = rsi_24
                            
                            if ((rbx_14.b & 8) != 0)
                            label_1401430c5:
                                int32_t var_39c_2 = rsi_26
                                
                                if (r14_5 == 0)
                                    goto label_1401421ea
                                
                                goto label_1401430dc
                            
                        label_1401421e1:
                            
                            if (r14_5 != 0)
                            label_1401430dc:
                                var_398 = var_2b8[0]
                                
                                if ((rbx_14.b & 2) != 0)
                                label_1401430f3:
                                    int32_t var_394_4 = var_418.d
                                    
                                    if ((rbx_14.b & 4) == 0)
                                        goto label_1401421fc
                                    
                                    goto label_14014310a
                            else
                            label_1401421ea:
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_1401430f3
                            
                            float var_38c_3
                            
                            if ((rbx_14.b & 4) != 0)
                            label_14014310a:
                                float var_390_3 = var_388[0]
                                zmm14 = zmm8
                                zmm12 = zmm10
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_38c_3 = var_348_1[0]
                            else
                            label_1401421fc:
                                zmm14 = zmm8
                                zmm12 = zmm10
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_38c_3 = var_348_1[0]
                        case 1
                            zmm12 = zmm10
                            zmm11 = _mm_add_epi64(zmm11, var_358_1)
                            zmm9 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm7)
                            zmm11 = _mm_add_epi64(zmm11, zmm2)
                            zmm1 = _mm_shuffle_epi32(zmm6, 0x50)
                            zmm11 &= zmm1
                            uint32_t temp0_417[0x4] = _mm_shuffle_epi32(zmm6, 0xfa)
                            zmm9 &= temp0_417
                            int64_t rdx_53 = zmm11[0].q
                            void* rax_48 = arg4 + rdx_53
                            zmm0 = *(arg4 + rdx_53)
                            int64_t rbp_22 = _mm_shuffle_epi32(zmm11, 0x4e)[0].q
                            void* rdx_54 = arg4 + rbp_22
                            zmm14 = *(arg4 + rbp_22)
                            int64_t rbp_23 = zmm9.q
                            void* rbx_15 = arg4 + rbp_23
                            zmm7 = *(arg4 + rbp_23)
                            int64_t rbp_24 = _mm_shuffle_epi32(zmm9, 0x4e)[0].q
                            void* rdi_18 = arg4 + rbp_24
                            zmm5 = *(arg4 + rbp_24)
                            zmm2 = data_1434426c0
                            zmm4 = zmm1 & zmm2
                            zmm6 = temp0_417 & zmm2
                            zmm2 = *(zmm4[0].q + rax_48)
                            zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdx_54)
                            arg5 = *(zmm6[0].q + rbx_15)
                            zmm8 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rdi_18)
                            zmm6 = data_1434426e0
                            zmm1 &= zmm6
                            zmm3 = temp0_417 & zmm6
                            zmm11 = *(zmm1[0].q + rax_48)
                            zmm10 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_54)
                            zmm9 = *(zmm3[0].q + rbx_15)
                            zmm6 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdi_18)
                            rbx_14 = zx.q(temp0_386)
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 == 0)
                                if ((rbx_14.b & 2) != 0)
                                    goto label_140143148
                                
                                goto label_14014233e
                            
                            var_3c8 = zmm0[0]
                            
                            if ((rbx_14.b & 2) != 0)
                            label_140143148:
                                uint32_t var_3c4_4 = zmm14[0]
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_140142347
                                
                                goto label_14014315b
                            
                        label_14014233e:
                            
                            if ((rbx_14.b & 4) != 0)
                            label_14014315b:
                                int32_t var_3c0_3 = zmm7.d
                                
                                if ((rbx_14.b & 8) != 0)
                                label_14014316d:
                                    int32_t var_3bc_3 = zmm5.d
                                    
                                    if (r14_5 == 0)
                                        goto label_140142359
                                    
                                    goto label_14014317f
                            else
                            label_140142347:
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_14014316d
                            
                            float var_3b4_1
                            
                            if (r14_5 != 0)
                            label_14014317f:
                                var_3b8 = zmm2[0]
                                zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
                                zmm7 = _mm_unpacklo_ps(zmm7, zmm5.q)
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_3b4_1 = zmm4[0]
                            else
                            label_140142359:
                                zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
                                zmm7 = _mm_unpacklo_ps(zmm7, zmm5.q)
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_3b4_1 = zmm4[0]
                            zmm0 = zmm0[0].q | zmm7.q << 0x40
                            float temp0_426[0x4] = _mm_unpacklo_ps(zmm2, zmm4[0].q)
                            float temp0_427[0x4] = _mm_unpacklo_ps(arg5, zmm8[0].q)
                            
                            if ((rbx_14.b & 4) != 0)
                                float var_3b0_1 = arg5[0]
                            
                            zmm2 = temp0_426[0].q | temp0_427[0].q << 0x40
                            float temp0_428[0x4] = _mm_unpacklo_ps(zmm11, zmm10[0].q)
                            zmm3 = _mm_unpacklo_ps(zmm9, zmm6[0].q)
                            float temp0_430[0x4] = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rbx_14.b & 8) != 0)
                                uint32_t var_3ac_1 = zmm8[0]
                            
                            zmm1 = temp0_428[0].q | zmm3[0].q << 0x40
                            zmm3 = _mm_sub_ps(data_142d3f670, temp0_430)
                            float temp0_432[0x4] = _mm_mul_ps(zmm2, zmm2)
                            zmm14 = var_308_1
                            
                            if (r14_5 == 0)
                                zmm3 = _mm_sub_ps(zmm3, temp0_432)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_1401431b6
                                
                                goto label_1401423e1
                            
                            var_3a8 = zmm11[0]
                            zmm3 = _mm_sub_ps(zmm3, temp0_432)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            int32_t var_3a0_1
                            
                            if ((rbx_14.b & 2) == 0)
                            label_1401423e1:
                                zmm3 = _mm_sub_ps(zmm3, zmm1)
                                
                                if ((rbx_14.b & 4) != 0)
                                    var_3a0_1 = zmm9.d
                            else
                            label_1401431b6:
                                float var_3a4_5 = zmm10[0]
                                zmm3 = _mm_sub_ps(zmm3, zmm1)
                                
                                if ((rbx_14.b & 4) != 0)
                                    var_3a0_1 = zmm9.d
                            float temp0_436[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            float temp0_437[0x4] = _mm_sqrt_ps(zmm3)
                            
                            if ((rbx_14.b & 8) == 0)
                                zmm0 = _mm_and_ps(temp0_436, temp0_437)
                                
                                if (r14_5 != 0)
                                    goto label_1401431e6
                                
                                goto label_140142412
                            
                            float var_39c_3 = zmm6[0]
                            zmm0 = _mm_and_ps(temp0_436, temp0_437)
                            
                            if (r14_5 != 0)
                            label_1401431e6:
                                var_398 = zmm0[0]
                                
                                if ((rbx_14.b & 2) == 0)
                                    goto label_140142425
                                
                                goto label_14014241c
                            
                        label_140142412:
                            
                            if ((rbx_14.b & 2) == 0)
                                goto label_140142425
                            
                        label_14014241c:
                            float var_394_1 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        label_140142425:
                            
                            if ((rbx_14.b & 4) == 0)
                                goto label_140142438
                            
                        label_14014242f:
                            float var_390_1 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        label_140142438:
                            
                            if ((rbx_14.b & 8) != 0)
                                float var_38c_1 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                        case 2
                            zmm11 = _mm_add_epi64(zmm11, var_358_1)
                            zmm9 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm7)
                            zmm11 = _mm_add_epi64(zmm11, zmm2)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0x50)
                            zmm11 &= zmm0
                            zmm1 = _mm_shuffle_epi32(zmm6, 0xfa)
                            zmm9 &= zmm1
                            int64_t rax_52 = zmm11[0].q
                            void* rdi_19 = arg4 + rax_52
                            int64_t rdx_55 = _mm_shuffle_epi32(zmm11, 0x4e)[0].q
                            void* rbx_16 = arg4 + rdx_55
                            int64_t rbp_30 = zmm9.q
                            zmm6 = data_1434426b0
                            zmm2 = zmm0 & zmm6
                            void* rsi_35 = zmm2[0].q
                            uint32_t temp0_449[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                            zmm3 = data_1434426c0
                            zmm0 &= zmm3
                            zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_35 + rdi_19)), 
                                *(temp0_449[0].q + rbx_16), 1)
                            uint32_t rdi_20 = zx.d(*(zmm0[0].q + rdi_19))
                            void* rsi_39 = arg4 + rbp_30
                            uint32_t temp0_451[0x4] = _mm_shuffle_epi32(zmm9, 0x4e)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(rdi_20), 
                                *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rbx_16), 1)
                            zmm4 = zmm1 & zmm6
                            zmm1 &= zmm3
                            int16_t* rdi_22 = zmm1[0].q
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(zmm4[0].q + rsi_39), 2)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rdi_22 + rsi_39), 2)
                            int64_t rbx_18 = temp0_451[0].q
                            void* rdi_23 = arg4 + rbx_18
                            int16_t* rsi_40 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            zmm1 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rsi_40 + rdi_23), 3)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1[0].q + rdi_23), 3)
                            float temp0_466[0x4] = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __punpcklwd_xmmdq_memdq(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_52)), 
                                                    *(arg4 + rdx_55), 1), 
                                                *(arg4 + rbp_30), 2), 
                                            *(arg4 + rbx_18), 3), 
                                        data_142d8f750), 
                                    data_1434424d0)), 
                                data_1434426d0)
                            rbx_14 = zx.q(temp0_386)
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 == 0)
                                zmm2 = __punpcklwd_xmmdq_memdq(zmm2, data_142d8f750)
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_14014321c
                                
                                goto label_1401425a9
                            
                            var_3c8 = temp0_466[0]
                            zmm2 = __punpcklwd_xmmdq_memdq(zmm2, data_142d8f750)
                            
                            if ((rbx_14.b & 2) != 0)
                            label_14014321c:
                                uint32_t var_3c4_5 = _mm_shuffle_epi32(temp0_466, 0xe5)[0]
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                                rsi_4 = var_318
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_1401425c1
                                
                                goto label_140143242
                            
                        label_1401425a9:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                            rsi_4 = var_318
                            
                            if ((rbx_14.b & 4) == 0)
                            label_1401425c1:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_14014325c
                                
                                goto label_1401425cd
                            
                        label_140143242:
                            uint32_t var_3c0_4 = _mm_shuffle_epi32(temp0_466, 0x4e)[0]
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rbx_14.b & 8) != 0)
                            label_14014325c:
                                uint32_t var_3bc_4 = _mm_shuffle_epi32(temp0_466, 0xe7)[0]
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if (r14_5 == 0)
                                    goto label_1401425dd
                                
                                goto label_140143275
                            
                        label_1401425cd:
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if (r14_5 == 0)
                            label_1401425dd:
                                zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_140143294
                                
                                goto label_1401425ee
                            
                        label_140143275:
                            var_3b8 = zmm2[0]
                            zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                            
                            if ((rbx_14.b & 2) != 0)
                            label_140143294:
                                uint32_t var_3b4_5 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_1401425ff
                                
                                goto label_1401432b3
                            
                        label_1401425ee:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                            uint32_t var_3ac_2
                            
                            if ((rbx_14.b & 4) != 0)
                            label_1401432b3:
                                uint32_t var_3b0_5 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(temp0_466, temp0_466)
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_3ac_2 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_1401425ff:
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(temp0_466, temp0_466)
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_3ac_2 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        label_140142bec:
                            zmm3 = _mm_sub_ps(data_142d3f670, zmm1)
                            float temp0_578[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (r14_5 != 0)
                                var_3a8 = zmm0[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_578)
                            float temp0_580[0x4] = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rbx_14.b & 2) != 0)
                                float var_3a4_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_580)
                            
                            if ((rbx_14.b & 4) != 0)
                                float var_3a0_3 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            float temp0_584[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            float temp0_585[0x4] = _mm_sqrt_ps(zmm3)
                            
                            if ((rbx_14.b & 8) != 0)
                                float var_39c_1 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                zmm1 = _mm_and_ps(temp0_584, temp0_585)
                                
                                if (r14_5 != 0)
                                label_140142ecd:
                                    var_398 = zmm1[0]
                                    
                                    if ((rbx_14.b & 2) == 0)
                                        goto label_140142c5a
                                    
                                    goto label_140142ee4
                            else
                                zmm1 = _mm_and_ps(temp0_584, temp0_585)
                                
                                if (r14_5 != 0)
                                    goto label_140142ecd
                            
                            if ((rbx_14.b & 2) == 0)
                            label_140142c5a:
                                zmm14 = zmm8
                                zmm12 = zmm10
                                
                                if ((rbx_14.b & 4) != 0)
                                    goto label_140142f04
                                
                                goto label_140142c6c
                            
                        label_140142ee4:
                            float var_394_3 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            zmm14 = zmm8
                            zmm12 = zmm10
                            float var_38c_2
                            
                            if ((rbx_14.b & 4) == 0)
                            label_140142c6c:
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_38c_2 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            else
                            label_140142f04:
                                float var_390_2 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_38c_2 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        case 3
                            var_388 = arg6
                            zmm1 = var_348_1 & zmm6
                            int64_t rax_55 = sx.q(zmm1[0])
                            void* rbx_19 = arg4 + rax_55
                            zmm12 = *(arg4 + rax_55)
                            int64_t rdx_56 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                            void* rax_57 = arg4 + rdx_56
                            zmm12 = _mm_unpacklo_ps(zmm12, (*(arg4 + rdx_56))[0].q)
                            int64_t rdx_58 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                            void* r10_4 = arg4 + rdx_58
                            zmm0 = *(arg4 + rdx_58)
                            int64_t rdx_60 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                            void* rdi_24 = arg4 + rdx_60
                            float temp0_481[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + rdx_60))[0].q)
                            zmm12 = zmm12[0].q | temp0_481[0].q << 0x40
                            zmm3 = zmm6 & data_142fc95e0
                            zmm14 = *(zx.q(zmm3[0]) + rbx_19)
                            var_418 = *(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rax_57)
                            float var_348_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + r10_4)
                            var_328.o = *(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24)
                            zmm3 = zmm6 & data_142fc95f0
                            arg5 = *(zx.q(zmm3[0]) + rbx_19)
                            uint128_t* r14_8 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
                            uint32_t (* rbp_31)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
                            var_2b8[0].q = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
                            zmm4 = zmm6 & data_143442650
                            zmm3 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rbx_19), 
                                (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rax_57))[0].q)
                            float temp0_492[0x4] = _mm_unpacklo_ps(
                                *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + r10_4), 
                                (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rdi_24))[0].q)
                            zmm3 = zmm3[0].q | temp0_492[0].q << 0x40
                            zmm1 = zmm6 & data_143442660
                            zmm0 = zmm9
                            zmm9 = *(zx.q(zmm1[0]) + rbx_19)
                            float (* rdx_72)[0x4] = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                            float (* r12_5)[0x4] = zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                            var_2c8[0].q = zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                            zmm1 = zmm6 & data_143442670
                            zmm4 = zx.o(*(zx.q(zmm1[0]) + rbx_19))
                            float (* rbx_20)[0x4] = zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
                            uint64_t r15_4 = zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                            var_2f8.o = *(r14_8 + rax_57)
                            uint64_t rsi_44 = zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                            zmm8 = *(rbp_31 + r10_4)
                            zmm0 = _mm_add_epi64(_mm_add_epi64(zmm0, var_358_1), zmm7)
                            zmm10 = *(rdx_72 + rax_57)
                            zmm11 = _mm_add_epi64(_mm_add_epi64(zmm11, var_358_1), zmm2)
                            zmm1 = _mm_shuffle_epi32(zmm6, 0x50) & zmm11
                            var_2a8 = *(rbx_20 + rax_57)
                            zmm2 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm0
                            int64_t rax_58 = zmm1[0].q
                            int64_t rdx_73 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                            zmm7 = zx.o(*(arg4 + rax_58))
                            int64_t rax_59 = zmm2[0].q
                            int64_t rdx_74 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                            zmm1 = zx.o(*(arg4 + rax_59))
                            zmm7 = _mm_unpacklo_epi32(zmm7, zx.o(*(arg4 + rdx_73))[0].q)
                            zmm1 = _mm_unpacklo_epi32(zmm1, zx.o(*(arg4 + rdx_74))[0].q)
                            zmm11 = *(var_2b8[0].q + rdi_24)
                            zmm7 = _mm_unpacklo_epi64(zmm7, zmm1[0].q)
                            zmm1 = _mm_srli_epi32(zmm7, 0x15)
                            zmm2 = data_143442440
                            float temp0_514[0x4] = _mm_mul_ps(
                                __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm2)), 
                                    data_143442690), 
                                zmm3)
                            zmm6 = *(r12_5 + r10_4)
                            float temp0_515[0x4] = _mm_add_ps(temp0_514, zmm12)
                            zmm3 = _mm_add_epi32(_mm_srli_epi32(zmm7, 0xa) & data_143442480, zmm2)
                            rbx_14 = zx.q(temp0_386)
                            zmm1 = zx.o(*(r15_4 + r10_4))
                            arg6 = zx.o(*(rsi_44 + rdi_24))
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 != 0)
                                var_3c8 = temp0_515[0]
                            
                            float temp0_518[0x4] =
                                _mm_unpacklo_ps(zmm6, (*(var_2c8[0].q + rdi_24))[0].q)
                            zmm9 = _mm_unpacklo_ps(zmm9, zmm10[0].q)
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            
                            if ((rbx_14.b & 2) != 0)
                                int32_t var_3c4_1 = _mm_shuffle_epi32(temp0_515, 0xe5).d
                            
                            float temp0_522[0x4] = __unpcklps_xmmps_memdq(var_348_2, var_328.o)
                            zmm14 = __unpcklps_xmmps_memdq(zmm14, var_418)
                            zmm9 = zmm9.q | temp0_518[0].q << 0x40
                            zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                            r12 = var_330
                            r15 = var_278
                            r10 = var_288
                            rsi_4 = var_318
                            
                            if ((rbx_14.b & 4) != 0)
                                int32_t var_3c0_1 = _mm_shuffle_epi32(temp0_515, 0x4e).d
                            
                            zmm7 &= data_143442680
                            zmm14 = zmm14[0].q | temp0_522[0].q << 0x40
                            zmm9 = _mm_mul_ps(zmm9, zmm3)
                            
                            if ((rbx_14.b & 8) != 0)
                                uint32_t var_3bc_1 = _mm_shuffle_epi32(temp0_515, 0xe7)[0]
                            
                            zmm7 = __paddd_xmmdq_memdq(zmm7, data_143442490)
                            zmm14 = _mm_add_ps(zmm14, zmm9)
                            
                            if (r14_5 != 0)
                                var_3b8 = zmm14[0]
                            
                            zmm1 = _mm_unpacklo_epi32(zmm1, arg6[0].q)
                            zmm4 = __punpckldq_xmmdq_memdq(zmm4, var_2a8)
                            zmm3 = _mm_cvtepi32_ps(zmm7)
                            
                            if ((rbx_14.b & 2) != 0)
                                int32_t var_3b4_2 = _mm_shuffle_epi32(zmm14, 0xe5).d
                            
                            zmm8 = _mm_unpacklo_ps(zmm8, zmm11[0].q)
                            float temp0_535[0x4] = __unpcklps_xmmps_memdq(arg5, var_2f8.o)
                            zmm4 = _mm_unpacklo_epi64(zmm4, zmm1[0].q)
                            zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                            zmm12 = arg7
                            
                            if ((rbx_14.b & 4) != 0)
                                float var_3b0_2 = _mm_shuffle_epi32(zmm14, 0x4e)[0]
                            
                            arg5 = temp0_535[0].q | zmm8[0].q << 0x40
                            float temp0_539[0x4] = _mm_mul_ps(zmm4, zmm3)
                            float temp0_540[0x4] = _mm_mul_ps(temp0_515, temp0_515)
                            arg6 = var_388
                            
                            if ((rbx_14.b & 8) != 0)
                                float var_3ac_3 = _mm_shuffle_epi32(zmm14, 0xe7)[0]
                            
                            float temp0_542[0x4] = _mm_add_ps(arg5, temp0_539)
                            float temp0_543[0x4] = _mm_sub_ps(data_142d3f670, temp0_540)
                            zmm14 = _mm_mul_ps(zmm14, zmm14)
                            
                            if (r14_5 != 0)
                                var_3a8 = temp0_542[0]
                            
                            float temp0_545[0x4] = _mm_sub_ps(temp0_543, zmm14)
                            float temp0_546[0x4] = _mm_mul_ps(temp0_542, temp0_542)
                            
                            if ((rbx_14.b & 2) != 0)
                                float var_3a4_1 = _mm_shuffle_epi32(temp0_542, 0xe5)[0]
                            
                            float temp0_548[0x4] = _mm_sub_ps(temp0_545, temp0_546)
                            
                            if ((rbx_14.b & 4) != 0)
                                float var_3a0_2 = _mm_shuffle_epi32(temp0_542, 0x4e)[0]
                            
                            float temp0_550[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_548, 1)
                            float temp0_551[0x4] = _mm_sqrt_ps(temp0_548)
                            
                            if ((rbx_14.b & 8) == 0)
                                zmm0 = _mm_and_ps(temp0_550, temp0_551)
                                
                                if (r14_5 != 0)
                                    goto label_1401432eb
                                
                                goto label_140142aaa
                            
                            float var_39c_4 = _mm_shuffle_epi32(temp0_542, 0xe7)[0]
                            zmm0 = _mm_and_ps(temp0_550, temp0_551)
                            
                            if (r14_5 == 0)
                            label_140142aaa:
                                zmm14 = var_308_1
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_14014241c
                                
                                goto label_140142425
                            
                        label_1401432eb:
                            var_398 = zmm0[0]
                            zmm14 = var_308_1
                            
                            if ((rbx_14.b & 2) != 0)
                                goto label_14014241c
                            
                            goto label_140142425
                        case 4
                            zmm11 = _mm_add_epi64(zmm11, var_358_1)
                            zmm9 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm7)
                            zmm11 = _mm_add_epi64(zmm11, zmm2)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0x50) & zmm11
                            zmm1 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm9
                            int64_t rax_62 = zmm0[0].q
                            int64_t rdx_75 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                            int64_t rbp_32 = zmm1[0].q
                            int64_t rbx_21 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                            zmm0 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_62)), 
                                    zx.o(*(arg4 + rdx_75))[0].q), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_32)), 
                                zx.o(*(arg4 + rbx_21))[0].q)[0].q)
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm_srli_epi32(zmm0, 0xa)
                            float temp0_568[0x4] = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm1, data_143442440)), 
                                data_143442690)
                            rbx_14 = zx.q(temp0_386)
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 == 0)
                                zmm2 &= data_143442480
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_14014332b
                                
                                goto label_140142b76
                            
                            var_3c8 = temp0_568[0]
                            zmm2 &= data_143442480
                            
                            if ((rbx_14.b & 2) != 0)
                            label_14014332b:
                                uint32_t var_3c4_6 = _mm_shuffle_epi32(temp0_568, 0xe5)[0]
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_140142b87
                                
                                goto label_14014334a
                            
                        label_140142b76:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            
                            if ((rbx_14.b & 4) == 0)
                            label_140142b87:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_140143364
                                
                                goto label_140142b93
                            
                        label_14014334a:
                            uint32_t var_3c0_5 = _mm_shuffle_epi32(temp0_568, 0x4e)[0]
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rbx_14.b & 8) != 0)
                            label_140143364:
                                uint32_t var_3bc_5 = _mm_shuffle_epi32(temp0_568, 0xe7)[0]
                                zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                                
                                if (r14_5 == 0)
                                    goto label_140142ba3
                                
                                goto label_14014337d
                            
                        label_140142b93:
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if (r14_5 == 0)
                            label_140142ba3:
                                zmm0 &= data_143442680
                                
                                if ((rbx_14.b & 2) != 0)
                                    goto label_14014339c
                                
                                goto label_140142bb4
                            
                        label_14014337d:
                            var_3b8 = zmm2[0]
                            zmm0 &= data_143442680
                            
                            if ((rbx_14.b & 2) != 0)
                            label_14014339c:
                                uint32_t var_3b4_6 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                
                                if ((rbx_14.b & 4) == 0)
                                    goto label_140142bc5
                                
                                goto label_1401433bb
                            
                        label_140142bb4:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            uint32_t var_3ac_4
                            
                            if ((rbx_14.b & 4) != 0)
                            label_1401433bb:
                                uint32_t var_3b0_6 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(temp0_568, temp0_568)
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_3ac_4 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_140142bc5:
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(temp0_568, temp0_568)
                                
                                if ((rbx_14.b & 8) != 0)
                                    var_3ac_4 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            goto label_140142bec
                        case 5
                            zmm11 = _mm_add_epi64(zmm11, var_358_1)
                            zmm9 = _mm_add_epi64(_mm_add_epi64(zmm9, var_358_1), zmm7)
                            zmm11 = _mm_add_epi64(zmm11, zmm2)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0x50) & zmm11
                            zmm1 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm9
                            int64_t rax_63 = zmm0[0].q
                            int64_t rdx_76 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                            int64_t rbp_33 = zmm1[0].q
                            int64_t rbx_22 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                            zmm1 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_63)), 
                                    zx.o(*(arg4 + rdx_76))[0].q), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_33)), 
                                zx.o(*(arg4 + rbx_22))[0].q)[0].q)
                            zmm0 = _mm_srli_epi32(zmm1, 0x15)
                            zmm2 = _mm_srli_epi32(zmm1, 5) & data_143442600
                            zmm0 = __paddd_xmmdq_memdq(zmm0 & data_143442320, data_143442330)
                                | (zmm0 & data_143442610) | zmm2
                            rbx_14 = zx.q(temp0_386)
                            r14_5 = rbx_14 & 1
                            
                            if (r14_5 != 0)
                                var_3c8 = zmm0[0]
                            
                            uint32_t temp0_601[0x4] = _mm_srli_epi32(zmm1, 0xa)
                            zmm2 = _mm_slli_epi32(zmm1, 6)
                            
                            if ((rbx_14.b & 2) != 0)
                                float var_3c4_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            zmm2 &= data_143442600
                            zmm4 = temp0_601 & data_143442610
                            zmm3 = temp0_601 & data_143442320
                            
                            if ((rbx_14.b & 4) == 0)
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                                zmm2 |= zmm4
                                
                                if ((rbx_14.b & 8) != 0)
                                    goto label_140143400
                                
                                goto label_140142d9e
                            
                            int32_t var_3c0_6 = _mm_shuffle_epi32(zmm0, 0x4e).d
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rbx_14.b & 8) != 0)
                            label_140143400:
                                float var_3bc_6 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                zmm2 |= zmm3
                                
                                if (r14_5 == 0)
                                    goto label_140142daf
                                
                                goto label_140143416
                            
                        label_140142d9e:
                            zmm2 |= zmm3
                            float var_3b4_3
                            
                            if (r14_5 != 0)
                            label_140143416:
                                var_3b8 = zmm2[0]
                                zmm3 = _mm_slli_epi32(zmm1, 0x11)
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_3b4_3 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            else
                            label_140142daf:
                                zmm3 = _mm_slli_epi32(zmm1, 0x11)
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_3b4_3 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm4 = zmm1 & data_143442620
                            zmm3 &= data_143442630
                            zmm1 &= data_143442640
                            
                            if ((rbx_14.b & 4) != 0)
                                int32_t var_3b0_3 = _mm_shuffle_epi32(zmm2, 0x4e).d
                            
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                            float temp0_609[0x4] = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rbx_14.b & 8) != 0)
                                float var_3ac_5 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            
                            zmm3 = zmm3 | zmm1 | zmm4
                            float temp0_611[0x4] = _mm_sub_ps(data_142d3f670, temp0_609)
                            float temp0_612[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (r14_5 != 0)
                                var_3a8 = zmm3[0]
                            
                            float temp0_613[0x4] = _mm_sub_ps(temp0_611, temp0_612)
                            float temp0_614[0x4] = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rbx_14.b & 2) != 0)
                                float var_3a4_3 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            
                            float temp0_616[0x4] = _mm_sub_ps(temp0_613, temp0_614)
                            
                            if ((rbx_14.b & 4) != 0)
                                float var_3a0_4 = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                            
                            float temp0_618[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_616, 1)
                            float temp0_619[0x4] = _mm_sqrt_ps(temp0_616)
                            
                            if ((rbx_14.b & 8) == 0)
                                zmm0 = _mm_and_ps(temp0_618, temp0_619)
                                
                                if (r14_5 != 0)
                                    goto label_140143450
                                
                                goto label_140142e89
                            
                            float var_39c_5 = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                            zmm0 = _mm_and_ps(temp0_618, temp0_619)
                            float var_394_2
                            
                            if (r14_5 == 0)
                            label_140142e89:
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_394_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            else
                            label_140143450:
                                var_398 = zmm0[0]
                                
                                if ((rbx_14.b & 2) != 0)
                                    var_394_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            zmm14 = zmm8
                            zmm12 = zmm10
                            
                            if ((rbx_14.b & 4) != 0)
                                goto label_14014242f
                            
                            goto label_140142438
                
                zmm3 = var_3c8.o
                zmm7 = var_3b8.o
                zmm6 = var_3a8.o
                zmm10 = var_398.o
                float temp0_665[0x4] = _mm_mul_ps(var_458, zmm3)
                float temp0_667[0x4] = _mm_add_ps(_mm_mul_ps(var_448, zmm7), temp0_665)
                float temp0_669[0x4] = _mm_add_ps(_mm_mul_ps(var_438, zmm6), temp0_667)
                float temp0_671[0x4] = _mm_add_ps(_mm_mul_ps(var_428, zmm10), temp0_669)
                zmm5 = _mm_cmpeq_ps(zx.o(0), temp0_671, 2)
                zmm1 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), temp0_671, 6), data_142d3f7e0)
                zmm2 = data_142d3f670
                zmm11 = zmm2
                zmm5 = _mm_or_ps(_mm_and_ps(zmm5, zmm2), zmm1)
                zmm2 = var_378
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm7 = _mm_mul_ps(zmm7, zmm2)
                float temp0_679[0x4] = _mm_mul_ps(zmm6, zmm2)
                float temp0_680[0x4] = _mm_mul_ps(zmm10, zmm2)
                float temp0_682[0x4] = _mm_mul_ps(_mm_sub_ps(zmm11, zmm2), zmm5)
                float temp0_684[0x4] = _mm_add_ps(_mm_mul_ps(var_458, temp0_682), zmm3)
                float temp0_686[0x4] = _mm_add_ps(_mm_mul_ps(var_448, temp0_682), zmm7)
                zmm9 = _mm_add_ps(_mm_mul_ps(var_438, temp0_682), temp0_679)
                float temp0_690[0x4] = _mm_add_ps(_mm_mul_ps(temp0_682, var_428), temp0_680)
                float var_168_1[0x4] = temp0_684
                float var_158_1[0x4] = temp0_686
                uint128_t var_148_1 = zmm9
                float var_138_1[0x4] = temp0_690
                float temp0_691[0x4] = _mm_mul_ps(temp0_684, temp0_684)
                zmm3 = _mm_mul_ps(temp0_686, temp0_686)
                zmm5 = _mm_add_ps(_mm_mul_ps(zmm9, zmm9), temp0_691)
                float temp0_697[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_690, temp0_690), zmm3), zmm5)
                zmm10 = data_142d3f640
                float temp0_698[0x4] = _mm_mul_ps(temp0_697, zmm10)
                zmm8 = _mm_cmpeq_ps(data_142d3f5c0, temp0_697, 2)
                zmm3 = _mm_rsqrt_ps(temp0_697)
                zmm5 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), temp0_698)), 
                        zmm3), 
                    zmm3)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(zmm5, zmm5), temp0_698)), 
                        zmm5), 
                    zmm5)
                zmm4 = _mm_and_ps(_mm_mul_ps(temp0_684, zmm3), zmm8)
                
                if (r14_5 != 0)
                    var_458[0] = zmm4[0]
                
                if ((rbx_14.b & 2) == 0)
                    zmm10 = zmm12
                    
                    if ((rbx_14.b & 4) != 0)
                        goto label_140140306
                    
                    goto label_140143723
                
                var_458[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                zmm10 = zmm12
                
                if ((rbx_14.b & 4) != 0)
                label_140140306:
                    var_458[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    zmm0 = _mm_mul_ps(temp0_686, zmm3)
                    
                    if ((rbx_14.b & 8) == 0)
                        goto label_14014372f
                    
                    goto label_14014031d
                
            label_140143723:
                zmm0 = _mm_mul_ps(temp0_686, zmm3)
                
                if ((rbx_14.b & 8) != 0)
                label_14014031d:
                    var_458[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    zmm0 = _mm_and_ps(zmm0, zmm8)
                    
                    if (r14_5 != 0)
                        var_448[0] = zmm0[0]
                else
                label_14014372f:
                    zmm0 = _mm_and_ps(zmm0, zmm8)
                    
                    if (r14_5 != 0)
                        var_448[0] = zmm0[0]
                
                if ((rbx_14.b & 2) == 0)
                    if ((rbx_14.b & 4) != 0)
                        goto label_14014034e
                    
                    goto label_140143750
                
                var_448[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((rbx_14.b & 4) != 0)
                label_14014034e:
                    var_448[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    zmm9 = _mm_mul_ps(zmm9, zmm3)
                    
                    if ((rbx_14.b & 8) == 0)
                        goto label_14014375d
                    
                    goto label_140140366
                
            label_140143750:
                zmm9 = _mm_mul_ps(zmm9, zmm3)
                
                if ((rbx_14.b & 8) != 0)
                label_140140366:
                    var_448[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                    zmm9 = _mm_and_ps(zmm9, zmm8)
                    
                    if (r14_5 != 0)
                        var_438.d = zmm9.d
                else
                label_14014375d:
                    zmm9 = _mm_and_ps(zmm9, zmm8)
                    
                    if (r14_5 != 0)
                        var_438.d = zmm9.d
                
                if ((rbx_14.b & 2) != 0)
                    var_438:4.d = _mm_shuffle_epi32(zmm9, 0xe5)[0]
                
                float temp0_718[0x4] = _mm_cmpeq_ps(data_142d3f5c0, temp0_697, 6)
                zmm3 = _mm_mul_ps(zmm3, temp0_690)
                
                if ((rbx_14.b & 4) != 0)
                    var_438:8.d = _mm_shuffle_epi32(zmm9, 0x4e)[0]
                
                uint32_t temp0_721[0x4] = _mm_and_ps(zmm3, zmm8)
                zmm2 = __andps_xmmxud_memxud(temp0_718, data_142d3f670)
                
                if ((rbx_14.b & 8) != 0)
                    var_438:0xc.d = _mm_shuffle_epi32(zmm9, 0xe7)[0]
                
                uint32_t temp0_724[0x4] = _mm_or_ps(temp0_721, zmm2)
                arg5 = var_298_2
                zmm8 = zmm14
                
                if (r14_5 != 0)
                    var_428[0] = temp0_724[0]
                
                if ((rbx_14.b & 2) == 0)
                    if ((rbx_14.b & 4) != 0)
                        goto label_140140397
                    
                    goto label_1401437e7
                
                var_428[1] = _mm_shuffle_epi32(temp0_724, 0xe5)[0]
                
                if ((rbx_14.b & 4) == 0)
                label_1401437e7:
                    
                    if ((rbx_14.b & 8) != 0)
                        var_428[3] = _mm_shuffle_epi32(temp0_724, 0xe7)[0]
                else
                label_140140397:
                    var_428[2] = _mm_shuffle_epi32(temp0_724, 0x4e)[0]
                    
                    if ((rbx_14.b & 8) != 0)
                        var_428[3] = _mm_shuffle_epi32(temp0_724, 0xe7)[0]
        
        zmm2 = var_438
        float temp0_726[0x4] = _mm_unpacklo_ps(zmm2, var_428[0].q)
        float temp0_727[0x4] = _mm_unpackhi_ps(zmm2, var_428)
        zmm3 = _mm_unpacklo_ps(var_458, var_448[0].q)
        float temp0_729[0x4] = _mm_unpackhi_ps(var_458, var_448)
        zmm1 = zmm3[0].q | temp0_726[0].q << 0x40
        float var_1a8_1[0x4] = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, temp0_726[0].q)
        uint32_t var_198_1[0x4] = zmm3
        zmm4 = temp0_729[0].q | temp0_727[0].q << 0x40
        float var_188_1[0x4] = zmm4
        float var_178_1[0x4] = _mm_unpackhi_pd(temp0_729, temp0_727[0].q)
        r12[sx.q(var_2e8_1[0]) * 3] = zmm1
        r12[sx.q(_mm_shuffle_epi32(var_2e8_1, 0x4e)[0]) * 3] = zmm3
        r12[sx.q(var_368[0]) * 3] = zmm4
        r12[sx.q(_mm_shuffle_epi32(var_368, 0x4e)[0]) * 3] = var_178_1
        r11 += 4
        r13_1 += 0x20
    while (r11 s< rsi_4)

uint64_t i = zx.q(arg10)

if (r11 s< i.d)
    arg6 = zmm10
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r11), 0), data_142e11d00)
    zmm5 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & zmm5
    int64_t rdx_77 = sx.q(zmm0[0])
    int64_t rbp_34 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    int64_t rbx_24 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    int64_t rsi_46 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
    zmm4 = zx.o(*(r10 + rsi_46))
    zmm7 = zx.o(*(r10 + rbx_24))
    zmm14 = zx.o(*(r10 + rdx_77))
    zmm10 = zx.o(*(r10 + rbp_34))
    zmm0 = data_142fc95e0 & zmm5
    uint64_t rdx_78 = zx.q(zmm0[0])
    uint64_t rbp_35 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rbx_25 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r10 + rsi_46))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rbx_25 + r10 + rbx_24)), zmm0[0].q)
    zmm0 = _mm_slli_epi32(
        _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(rdx_78 + r10 + rdx_77)), 
                zx.o(*(rbp_35 + r10 + rbp_34))[0].q), 
            zmm1[0].q), 
        4) & zmm5
    zmm1 = data_142fc95f0 & zmm5
    int64_t rax_93 = sx.q(zmm0[0]) + arg3
    uint64_t r10_6 = zx.q(zmm1[0])
    int64_t rcx_19 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + arg3
    uint64_t rbx_26 = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    int64_t rdx_81 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + arg3
    uint64_t rdi_26 = zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    int64_t rsi_50 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + arg3
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rsi_50))
    zmm6 = _mm_unpacklo_epi32(zx.o(*(rdi_26 + rdx_81)), zmm0[0].q)
    zmm8 = _mm_unpacklo_epi32(zx.o(*(r10_6 + rax_93)), zx.o(*(rbx_26 + rcx_19))[0].q)
    zmm2 = _mm_unpacklo_epi64(zmm8, zmm6[0].q)
    zmm0 = data_143442650 & zmm5
    uint64_t r8 = zx.q(zmm0[0])
    uint64_t rbx_27 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rdi_27 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rsi_50))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_27 + rdx_81)), zmm0[0].q)
    zmm9 = _mm_unpacklo_epi64(
        _mm_unpacklo_epi32(zx.o(*(r8 + rax_93)), zx.o(*(rbx_27 + rcx_19))[0].q), zmm1[0].q)
    zmm11 = zx.o(0)
    arg5 = _mm_cmpeq_epi32(data_142d3f5b0, zmm9)
    zmm3 = arg5 & zmm5
    char temp0_765 = _mm_movemask_ps(zmm3)
    uint128_t var_2e8_2 = zmm5
    float var_348_3[0x4] = zmm2
    uint32_t var_498[0x4]
    uint128_t var_488
    float var_478[0x4]
    uint128_t var_468
    
    if (temp0_765 != 0)
        float var_358_2[0x4] = zmm10
        float var_308_2[0x4] = zmm4
        float var_378_1[0x4] = arg5
        var_418 = zmm14
        var_368 = zmm8
        var_388 = zmm6
        uint128_t var_298_3 = zmm7
        zmm1 = zmm2 & zmm3
        int64_t rdx_82 = sx.q(zmm1[0])
        void* rcx_21 = arg4 + rdx_82
        zmm0 = *(arg4 + rdx_82)
        int64_t rbp_38 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
        void* rdx_84 = arg4 + rbp_38
        zmm14 = *(arg4 + rbp_38)
        int64_t rbx_28 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
        void* rbp_40 = arg4 + rbx_28
        zmm4 = *(arg4 + rbx_28)
        int64_t rdi_28 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
        void* rbx_30 = arg4 + rdi_28
        zmm8 = *(arg4 + rdi_28)
        zmm1 = data_142fc95e0 & zmm3
        zmm6 = *(zx.q(zmm1[0]) + rcx_21)
        zmm10 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rdx_84)
        zmm12 = *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rbp_40)
        zmm1 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rbx_30)
        zmm3 &= data_142fc95f0
        arg5 = *(zx.q(zmm3[0]) + rcx_21)
        zmm11 = *(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_84)
        arg6 = *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rbp_40)
        zmm7 = *(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbx_30)
        
        if ((temp0_765 & 1) == 0)
            if ((temp0_765 & 2) != 0)
                goto label_140143f08
            
            goto label_140143c06
        
        var_498[0] = zmm0[0]
        
        if ((temp0_765 & 2) != 0)
        label_140143f08:
            var_498[1] = zmm14[0]
            
            if ((temp0_765 & 4) == 0)
                goto label_140143c0f
            
            goto label_140143f18
        
    label_140143c06:
        
        if ((temp0_765 & 4) != 0)
        label_140143f18:
            var_498[2] = zmm4[0]
            
            if ((temp0_765 & 8) != 0)
            label_140143f27:
                var_498[3] = zmm8[0]
                
                if ((temp0_765 & 1) == 0)
                    goto label_140143c21
                
                goto label_140143f37
        else
        label_140143c0f:
            
            if ((temp0_765 & 8) != 0)
                goto label_140143f27
        
        if ((temp0_765 & 1) != 0)
        label_140143f37:
            var_488.d = zmm6[0]
            zmm4 = _mm_unpacklo_ps(zmm4, zmm8[0].q)
            zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
            
            if ((temp0_765 & 2) != 0)
                var_488:4.d = zmm10[0]
        else
        label_140143c21:
            zmm4 = _mm_unpacklo_ps(zmm4, zmm8[0].q)
            zmm0 = _mm_unpacklo_ps(zmm0, zmm14[0].q)
            
            if ((temp0_765 & 2) != 0)
                var_488:4.d = zmm10[0]
        
        zmm0 = zmm0[0].q | zmm4[0].q << 0x40
        zmm3 = _mm_unpacklo_ps(zmm12, zmm1[0].q)
        float temp0_778[0x4] = _mm_unpacklo_ps(zmm6, zmm10[0].q)
        zmm8 = var_368
        
        if ((temp0_765 & 4) != 0)
            var_488:8.d = zmm12[0]
        
        zmm6 = temp0_778[0].q | zmm3[0].q << 0x40
        zmm12 = zmm7
        zmm5 = _mm_unpacklo_ps(arg6, zmm7.q)
        float temp0_780[0x4] = _mm_unpacklo_ps(arg5, zmm11[0].q)
        float temp0_781[0x4] = _mm_mul_ps(zmm0, zmm0)
        zmm7 = var_298_3
        zmm14 = var_418
        zmm10 = var_358_2
        
        if ((temp0_765 & 8) != 0)
            var_488:0xc.d = zmm1[0]
        
        zmm4 = temp0_780[0].q | zmm5.q << 0x40
        zmm3 = _mm_sub_ps(data_142d3f670, temp0_781)
        float temp0_783[0x4] = _mm_mul_ps(zmm6, zmm6)
        
        if ((temp0_765 & 1) != 0)
            var_478[0] = arg5[0]
        
        zmm3 = _mm_sub_ps(zmm3, temp0_783)
        float temp0_785[0x4] = _mm_mul_ps(zmm4, zmm4)
        
        if ((temp0_765 & 2) != 0)
            var_478[1] = zmm11[0]
        
        zmm3 = _mm_sub_ps(zmm3, temp0_785)
        zmm6 = var_388
        arg5 = var_378_1
        
        if ((temp0_765 & 4) != 0)
            var_478[2] = arg6[0]
        
        float temp0_787[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
        float temp0_788[0x4] = _mm_sqrt_ps(zmm3)
        zmm11 = zx.o(0)
        zmm4 = var_308_2
        
        if ((temp0_765 & 8) == 0)
            zmm0 = _mm_and_ps(temp0_787, temp0_788)
            zmm5 = var_2e8_2
            
            if ((temp0_765 & 1) != 0)
                goto label_140143f6f
            
            goto label_140143d22
        
        var_478[3] = zmm12[0]
        zmm0 = _mm_and_ps(temp0_787, temp0_788)
        zmm5 = var_2e8_2
        
        if ((temp0_765 & 1) != 0)
        label_140143f6f:
            var_468.d = zmm0[0]
            arg6 = arg7
            
            if ((temp0_765 & 2) == 0)
                goto label_140143d32
            
            goto label_140143f8d
        
    label_140143d22:
        arg6 = arg7
        
        if ((temp0_765 & 2) == 0)
        label_140143d32:
            
            if ((temp0_765 & 4) != 0)
                goto label_140143fa1
            
            goto label_140143d3b
        
    label_140143f8d:
        var_468:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
        
        if ((temp0_765 & 4) == 0)
        label_140143d3b:
            
            if ((temp0_765 & 8) != 0)
                var_468:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7)[0]
        else
        label_140143fa1:
            var_468:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
            
            if ((temp0_765 & 8) != 0)
                var_468:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7)[0]
    
    uint128_t var_298_4 = _mm_unpacklo_epi32(zmm7, zmm4[0].q)
    zmm14 = _mm_unpacklo_epi32(zmm14, zmm10[0].q)
    arg5 &= not.o(zmm5)
    char temp0_793 = _mm_movemask_ps(arg5)
    
    if (temp0_793 != 0)
        zmm0 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm6, zmm8[0].q))
        zmm11 = _mm_cmpgt_epi32(zmm11, var_348_3)
        zmm5 = _mm_slli_epi32(_mm_cmpgt_epi32(data_1434422d0, zmm9) & arg5, 0x1f)
        char temp0_799 = _mm_movemask_ps(zmm5)
        zmm1 = zx.o(0)
        zmm4 = zx.o(0)
        float var_378_2[0x4] = arg5
        
        if (temp0_799 == 0)
            goto label_140143de3
        
        zmm12 = zx.o(0)
        zmm3 = zx.o(0)
        uint32_t var_308_3[0x4] = zmm3
        zmm10 = zx.o(0)
        
        if (temp0_793 != temp0_799)
            zmm4 = _mm_srai_epi32(zmm5, 0x1f)
        label_140143de3:
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            zmm4 ^= zmm3
            
            if (zx.o(0).d f>= arg6[0])
                zmm12 = zx.o(0)
                var_308_3 = zx.o(0)
            else
                zmm9 = _mm_add_epi32(zmm9, zmm3)
                
                if (arg6[0] >= 1f)
                    zmm12 = zmm4 & arg5 & zmm9
                    var_308_3 = zmm12
                else
                    zmm10 = zmm8
                    float temp0_803[0x4] = _mm_shuffle_ps(arg6, arg6, 0)
                    float temp0_805[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_803)
                    zmm8 = zmm4 & arg5
                    zmm1 = data_142d3f780
                    zmm3 =
                        __addps_xmmps_memps(_mm_and_ps(data_142d3f770, temp0_805), data_142d3f740)
                    zmm1 = _mm_and_ps(zmm1, temp0_805)
                    zmm3 = __addps_xmmps_memps(zmm3, data_1434427a0) ^ zmm1
                    zmm1 = zx.o(0)
                    zmm7 = _mm_add_ps(
                        __andps_xmmxud_memxud(_mm_cmpeq_ps(temp0_805, zmm3, 1), data_142d3f7e0), 
                        zmm3)
                    zmm3 = _mm_cvttps_epi32(zmm7)
                    zmm12 = _mm_cmpgt_epi32(zmm3, zmm9)
                    zmm12 = ((zmm12 & not.o(zmm3)) | (zmm9 & zmm12)) & zmm8
                    
                    if (arg8 != 1)
                        zmm1 = _mm_sub_ps(temp0_805, zmm7)
                    
                    zmm5 = _mm_sub_epi32(zmm12, _mm_cmpeq_epi32(zmm3, zmm3))
                    zmm3 = _mm_cmpgt_epi32(zmm9, zmm5)
                    var_308_3 = ((zmm3 & not.o(zmm9)) | (zmm5 & zmm3)) & zmm8
                    zmm6 = zmm6
                    zmm8 = zmm10
                    zmm14 = zmm14
                    arg5 = var_378_2
            
            zmm10 = zmm1 & zmm4
        
        zmm6 = _mm_unpacklo_epi32(zmm6, zmm0[0].q)
        zmm8 = _mm_unpacklo_epi32(zmm8, zmm11[0].q)
        arg6 = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
        zmm11 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        uint64_t r8_1 = zx.q(r15.d)
        float var_358_3[0x4] = zmm10
        
        if (r15.d u> 5)
            if ((temp0_793 & 1) == 0)
                zmm5 = var_2e8_2
                
                if ((temp0_793 & 2) != 0)
                    goto label_1401451bd
                
                goto label_1401442e4
            
            var_498[0] = 0
            zmm5 = var_2e8_2
            
            if ((temp0_793 & 2) != 0)
            label_1401451bd:
                var_498[1] = 0
                
                if ((temp0_793 & 4) == 0)
                    goto label_1401442ec
                
                goto label_1401451cd
            
        label_1401442e4:
            
            if ((temp0_793 & 4) == 0)
            label_1401442ec:
                
                if ((temp0_793 & 8) != 0)
                    goto label_1401451dd
                
                goto label_1401442f4
            
        label_1401451cd:
            var_498[2] = 0
            
            if ((temp0_793 & 8) != 0)
            label_1401451dd:
                var_498[3] = 0
                
                if ((temp0_793 & 1) == 0)
                    goto label_1401442fc
                
                goto label_1401451ed
            
        label_1401442f4:
            
            if ((temp0_793 & 1) == 0)
            label_1401442fc:
                
                if ((temp0_793 & 2) != 0)
                    goto label_1401451fd
                
                goto label_140144304
            
        label_1401451ed:
            var_488.d = 0
            
            if ((temp0_793 & 2) != 0)
            label_1401451fd:
                var_488:4.d = 0
                
                if ((temp0_793 & 4) == 0)
                    goto label_14014430c
                
                goto label_14014520d
            
        label_140144304:
            
            if ((temp0_793 & 4) == 0)
            label_14014430c:
                
                if ((temp0_793 & 8) != 0)
                    goto label_14014521d
                
                goto label_140144314
            
        label_14014520d:
            var_488:8.d = 0
            
            if ((temp0_793 & 8) != 0)
            label_14014521d:
                var_488:0xc.d = 0
                
                if ((temp0_793 & 1) == 0)
                    goto label_14014431c
                
                goto label_14014522d
            
        label_140144314:
            
            if ((temp0_793 & 1) == 0)
            label_14014431c:
                
                if ((temp0_793 & 2) != 0)
                    goto label_14014523d
                
                goto label_140144324
            
        label_14014522d:
            var_478[0] = 0
            
            if ((temp0_793 & 2) != 0)
            label_14014523d:
                var_478[1] = 0
                
                if ((temp0_793 & 4) == 0)
                    goto label_14014432c
                
                goto label_14014524d
            
        label_140144324:
            
            if ((temp0_793 & 4) == 0)
            label_14014432c:
                
                if ((temp0_793 & 8) != 0)
                    goto label_14014525d
                
                goto label_140144334
            
        label_14014524d:
            var_478[2] = 0
            
            if ((temp0_793 & 8) != 0)
            label_14014525d:
                var_478[3] = 0
                
                if ((temp0_793 & 1) == 0)
                    goto label_14014433c
                
                goto label_14014526d
            
        label_140144334:
            
            if ((temp0_793 & 1) == 0)
            label_14014433c:
                
                if ((temp0_793 & 2) != 0)
                    goto label_14014527d
                
                goto label_140144344
            
        label_14014526d:
            var_468.d = 0x3f800000
            
            if ((temp0_793 & 2) != 0)
            label_14014527d:
                var_468:4.d = 0x3f800000
                
                if ((temp0_793 & 4) == 0)
                    goto label_14014434c
                
                goto label_14014528d
            
        label_140144344:
            
            if ((temp0_793 & 4) != 0)
            label_14014528d:
                var_468:8.d = 0x3f800000
                
                if ((temp0_793 & 8) != 0)
                    var_468:0xc.d = 0x3f800000
            else
            label_14014434c:
                
                if ((temp0_793 & 8) != 0)
                    var_468:0xc.d = 0x3f800000
        else
            var_368 = zmm8
            zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm12, 0xf5), zmm11), 0xe8)
            zmm7 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm12, zmm11), 0xe8), zmm1[0].q)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm7)
            uint32_t temp0_835[0x4] = _mm_shuffle_epi32(zmm7, 0x4e)
            zmm7 = _mm_unpacklo_epi32(zmm7, zmm1[0].q)
            zmm8 = _mm_unpacklo_epi32(temp0_835, _mm_cmpgt_epi32(zx.o(0), temp0_835)[0].q)
            char rcx_38
            
            switch (r8_1)
                case 0
                    var_388[0].q = r8_1
                    zmm4 = _mm_add_epi64(var_368, arg6)
                    zmm2 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm8)
                    zmm4 = _mm_add_epi64(zmm4, zmm7)
                    arg5 = var_378_2
                    zmm0 = _mm_shuffle_epi32(arg5, 0x50)
                    zmm4 &= zmm0
                    zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                    zmm2 &= zmm1
                    int64_t r8_2 = _mm_shuffle_epi32(zmm4, 0x4e).q
                    int64_t rdx_87 = zmm2[0].q
                    int64_t rbp_41 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                    zmm5 = data_1434426c0
                    zmm2 = zmm0 & zmm5
                    zmm5 &= zmm1
                    void* rsi_51 = zmm4[0].q
                    int32_t* r11_2 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                    int32_t* r12_6 = zmm5.q
                    int32_t* rbx_31 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                    zmm4 = data_1434426e0
                    zmm5 = zmm0 & zmm4
                    int32_t* rdi_34 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                    void* rax_96 = arg4 + r8_2
                    int32_t r14_13 = *(arg4 + r8_2)
                    void* rcx_26 = arg4 + rdx_87
                    int32_t r10_7 = *(arg4 + rdx_87)
                    void* rdx_88 = arg4 + rbp_41
                    int32_t r8_3 = *(arg4 + rbp_41)
                    void* rsi_52 = rsi_51 + arg4
                    int32_t r15_5 = *(r11_2 + rax_96)
                    int32_t r12_7 = *(r12_6 + rcx_26)
                    var_288.d = *(rbx_31 + rdx_88)
                    zmm4 &= zmm1
                    int32_t rbp_43 = *(rdi_34 + rax_96)
                    var_418.d = *(zmm4[0].q + rcx_26)
                    int32_t rbp_45 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rdx_88)
                    zmm4 = data_1434426f0
                    zmm0 &= zmm4
                    zmm1 &= zmm4
                    int32_t rdi_35 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rax_96)
                    int32_t rbx_35 = *(zmm1[0].q + rcx_26)
                    int32_t rdx_89 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_88)
                    int32_t r11_3 = *(zmm2[0].q + rsi_52)
                    int32_t rax_101 = *(zmm5.q + rsi_52)
                    int32_t rax_102 = *(zmm0[0].q + rsi_52)
                    
                    if ((temp0_793 & 1) != 0)
                        var_498[0] = *rsi_52
                    
                    if ((temp0_793 & 2) != 0)
                        var_498[1] = r14_13
                    
                    zmm6 = zmm6
                    zmm8 = var_368
                    zmm5 = var_2e8_2
                    
                    if ((temp0_793 & 4) != 0)
                        var_498[2] = r10_7
                        
                        if ((temp0_793 & 8) != 0)
                        label_1401450c1:
                            var_498[3] = r8_3
                            
                            if ((temp0_793 & 1) == 0)
                                goto label_14014424a
                            
                            goto label_1401450cf
                    else if ((temp0_793 & 8) != 0)
                        goto label_1401450c1
                    
                    if ((temp0_793 & 1) != 0)
                    label_1401450cf:
                        var_488.d = r11_3
                        r8_1 = var_388[0].q
                        
                        if ((temp0_793 & 2) != 0)
                        label_1401450e5:
                            var_488:4.d = r15_5
                            
                            if ((temp0_793 & 4) == 0)
                                goto label_140144264
                            
                            goto label_1401450f3
                    else
                    label_14014424a:
                        r8_1 = var_388[0].q
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_1401450e5
                    
                    if ((temp0_793 & 4) == 0)
                    label_140144264:
                        r15 = var_278
                        
                        if ((temp0_793 & 8) != 0)
                            goto label_140145110
                        
                        goto label_140144275
                    
                label_1401450f3:
                    var_488:8.d = r12_7
                    r15 = var_278
                    
                    if ((temp0_793 & 8) != 0)
                    label_140145110:
                        var_488:0xc.d = var_288.d
                        r12 = var_330
                        
                        if ((temp0_793 & 1) == 0)
                            goto label_140144283
                        
                        goto label_14014512c
                    
                label_140144275:
                    r12 = var_330
                    
                    if ((temp0_793 & 1) == 0)
                    label_140144283:
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_140145140
                        
                        goto label_14014428c
                    
                label_14014512c:
                    var_478[0] = rax_101
                    
                    if ((temp0_793 & 2) != 0)
                    label_140145140:
                        var_478[1] = rbp_43
                        
                        if ((temp0_793 & 4) == 0)
                            goto label_140144295
                        
                        goto label_140145154
                    
                label_14014428c:
                    
                    if ((temp0_793 & 4) == 0)
                    label_140144295:
                        
                        if ((temp0_793 & 8) != 0)
                            goto label_140145161
                        
                        goto label_14014429e
                    
                label_140145154:
                    var_478[2] = var_418.d
                    
                    if ((temp0_793 & 8) != 0)
                    label_140145161:
                        var_478[3] = rbp_45
                        
                        if ((temp0_793 & 1) == 0)
                            goto label_1401442a7
                        
                        goto label_140145175
                    
                label_14014429e:
                    
                    if ((temp0_793 & 1) == 0)
                    label_1401442a7:
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_140145182
                        
                        goto label_1401442b0
                    
                label_140145175:
                    var_468.d = rax_102
                    
                    if ((temp0_793 & 2) != 0)
                    label_140145182:
                        var_468:4.d = rdi_35
                        
                        if ((temp0_793 & 4) == 0)
                            goto label_1401442b9
                        
                        goto label_14014518f
                    
                label_1401442b0:
                    
                    if ((temp0_793 & 4) != 0)
                    label_14014518f:
                        var_468:8.d = rbx_35
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = rdx_89
                    else
                    label_1401442b9:
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = rdx_89
                case 1
                    var_418 = zmm11
                    zmm4 = _mm_add_epi64(var_368, arg6)
                    var_388 = zmm6
                    var_318.o = arg6
                    zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm8)
                    zmm4 = _mm_add_epi64(zmm4, zmm7)
                    uint32_t temp0_857[0x4] = _mm_shuffle_epi32(var_378_2, 0x50)
                    zmm4 &= temp0_857
                    zmm2 = _mm_shuffle_epi32(var_378_2, 0xfa)
                    zmm6 &= zmm2
                    int64_t rcx_29 = zmm4[0].q
                    void* rax_105 = arg4 + rcx_29
                    zmm0 = *(arg4 + rcx_29)
                    int64_t rcx_30 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rdx_91 = arg4 + rcx_30
                    arg6 = *(arg4 + rcx_30)
                    int64_t rcx_31 = zmm6[0].q
                    void* rbp_47 = arg4 + rcx_31
                    zmm5 = *(arg4 + rcx_31)
                    int64_t rcx_32 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                    void* rbx_37 = arg4 + rcx_32
                    zmm7 = *(arg4 + rcx_32)
                    zmm6 = data_1434426c0
                    zmm1 = temp0_857 & zmm6
                    zmm6 &= zmm2
                    zmm4 = *(zmm1[0].q + rax_105)
                    zmm8 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_91)
                    zmm9 = *(zmm6[0].q + rbp_47)
                    zmm6 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_37)
                    zmm1 = data_1434426e0
                    zmm3 = temp0_857 & zmm1
                    zmm2 &= zmm1
                    zmm11 = *(zmm3[0].q + rax_105)
                    zmm10 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdx_91)
                    zmm3 = *(zmm2[0].q + rbp_47)
                    zmm2 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rbx_37)
                    rcx_38 = temp0_793
                    
                    if ((rcx_38 & 1) == 0)
                        if ((rcx_38 & 2) != 0)
                            goto label_1401452b8
                        
                        goto label_140144495
                    
                    var_498[0] = zmm0[0]
                    
                    if ((rcx_38 & 2) != 0)
                    label_1401452b8:
                        var_498[1] = arg6[0]
                        
                        if ((rcx_38 & 4) == 0)
                            goto label_14014449e
                        
                        goto label_1401452c8
                    
                label_140144495:
                    
                    if ((rcx_38 & 4) != 0)
                    label_1401452c8:
                        var_498[2] = zmm5.d
                        
                        if ((rcx_38 & 8) != 0)
                        label_1401452d7:
                            var_498[3] = zmm7.d
                            
                            if ((rcx_38 & 1) == 0)
                                goto label_1401444b0
                            
                            goto label_1401452e6
                    else
                    label_14014449e:
                        
                        if ((rcx_38 & 8) != 0)
                            goto label_1401452d7
                    
                    if ((rcx_38 & 1) != 0)
                    label_1401452e6:
                        var_488.d = zmm4[0]
                        zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                        zmm5 = _mm_unpacklo_ps(zmm5, zmm7.q)
                        
                        if ((rcx_38 & 2) != 0)
                            var_488:4.d = zmm8[0]
                    else
                    label_1401444b0:
                        zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                        zmm5 = _mm_unpacklo_ps(zmm5, zmm7.q)
                        
                        if ((rcx_38 & 2) != 0)
                            var_488:4.d = zmm8[0]
                    
                    zmm0 = zmm0[0].q | zmm5.q << 0x40
                    float temp0_867[0x4] = _mm_unpacklo_ps(zmm4, zmm8[0].q)
                    float temp0_868[0x4] = _mm_unpacklo_ps(zmm9, zmm6[0].q)
                    arg6 = var_318.o
                    
                    if ((rcx_38 & 4) != 0)
                        var_488:8.d = zmm9.d
                    
                    zmm4 = temp0_867[0].q | temp0_868[0].q << 0x40
                    zmm5 = _mm_unpacklo_ps(zmm11, zmm10[0].q)
                    zmm7 = _mm_unpacklo_ps(zmm3, zmm2[0].q)
                    float temp0_871[0x4] = _mm_mul_ps(zmm0, zmm0)
                    zmm8 = var_368
                    
                    if ((rcx_38 & 8) != 0)
                        var_488:0xc.d = zmm6[0]
                    
                    zmm5 = zmm5.q | zmm7.q << 0x40
                    float temp0_872[0x4] = _mm_sub_ps(data_142d3f670, temp0_871)
                    float temp0_873[0x4] = _mm_mul_ps(zmm4, zmm4)
                    
                    if ((rcx_38 & 1) != 0)
                        var_478[0] = zmm11[0]
                    
                    float temp0_874[0x4] = _mm_sub_ps(temp0_872, temp0_873)
                    zmm5 = _mm_mul_ps(zmm5, zmm5)
                    zmm6 = var_388
                    arg5 = var_378_2
                    
                    if ((rcx_38 & 2) != 0)
                        var_478[1] = zmm10[0]
                    
                    float temp0_876[0x4] = _mm_sub_ps(temp0_874, zmm5)
                    zmm11 = var_418
                    
                    if ((rcx_38 & 4) != 0)
                        var_478[2] = zmm3[0]
                    
                    float temp0_877[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_876, 1)
                    float temp0_878[0x4] = _mm_sqrt_ps(temp0_876)
                    zmm5 = var_2e8_2
                    
                    if ((rcx_38 & 8) != 0)
                        var_478[3] = zmm2[0]
                    
                    zmm0 = _mm_and_ps(temp0_877, temp0_878)
                    
                    if ((rcx_38 & 1) == 0)
                        goto label_140145079
                    
                label_140145073:
                    var_468.d = zmm0[0]
                label_140145079:
                    
                    if ((rcx_38 & 2) == 0)
                        if ((rcx_38 & 4) == 0)
                            goto label_14014508e
                        
                        goto label_140145088
                    
                    var_468:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    
                    if ((rcx_38 & 4) == 0)
                        goto label_14014508e
                    
                label_140145088:
                    var_468:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                label_14014508e:
                    
                    if ((rcx_38 & 8) != 0)
                        var_468:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                case 2
                    zmm3 = _mm_add_epi64(var_368, arg6)
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm8)
                    zmm3 = _mm_add_epi64(zmm3, zmm7)
                    zmm0 = _mm_shuffle_epi32(var_378_2, 0x50)
                    zmm3 &= zmm0
                    zmm2 = _mm_shuffle_epi32(var_378_2, 0xfa)
                    zmm1 &= zmm2
                    int64_t rax_109 = zmm3[0].q
                    void* rbx_38 = arg4 + rax_109
                    int64_t rdx_92 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    void* rdi_37 = arg4 + rdx_92
                    int64_t rbp_48 = zmm1[0].q
                    zmm4 = data_1434426b0
                    zmm3 = zmm0 & zmm4
                    void* rsi_53 = zmm3[0].q
                    zmm7 = _mm_shuffle_epi32(zmm3, 0x4e)
                    zmm3 = data_1434426c0
                    zmm0 &= zmm3
                    zmm5 = __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_53 + rbx_38)), *(zmm7.q + rdi_37), 1)
                    void* rcx_41 = zmm0[0].q
                    int16_t* rbx_39 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                    zmm0 = zx.o(*(rcx_41 + rbx_38))
                    void* rcx_43 = arg4 + rbp_48
                    zmm1 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rbx_39 + rdi_37), 1)
                    zmm4 &= zmm2
                    zmm2 &= zmm3
                    int16_t* rdi_38 = zmm2[0].q
                    zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(zmm4[0].q + rcx_43), 2)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rdi_38 + rcx_43), 2)
                    int64_t rcx_44 = zmm1[0].q
                    void* rbx_41 = arg4 + rcx_44
                    int16_t* rdi_39 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm1 = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(rdi_39 + rbx_41), 3)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1[0].q + rbx_41), 3)
                    zmm1 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_109)), *(arg4 + rdx_92), 
                                    1), 
                                *(arg4 + rbp_48), 2), 
                            *(arg4 + rcx_44), 3), 
                        0)
                    zmm7 = data_1434424d0
                    float temp0_903[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm7))
                    zmm4 = data_1434426d0
                    float temp0_904[0x4] = _mm_div_ps(temp0_903, zmm4)
                    
                    if ((temp0_793 & 1) == 0)
                        zmm5 = _mm_unpacklo_epi16(zmm5, 0)
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_140145317
                        
                        goto label_1401446fa
                    
                    var_498[0] = temp0_904[0]
                    zmm5 = _mm_unpacklo_epi16(zmm5, 0)
                    
                    if ((temp0_793 & 2) != 0)
                    label_140145317:
                        var_498[1] = _mm_shuffle_epi32(temp0_904, 0xe5)[0]
                        zmm5 = _mm_add_epi32(zmm5, zmm7)
                        zmm8 = var_368
                        
                        if ((temp0_793 & 4) == 0)
                            goto label_140144710
                        
                        goto label_140145338
                    
                label_1401446fa:
                    zmm5 = _mm_add_epi32(zmm5, zmm7)
                    zmm8 = var_368
                    
                    if ((temp0_793 & 4) == 0)
                    label_140144710:
                        zmm5 = _mm_cvtepi32_ps(zmm5)
                        
                        if ((temp0_793 & 8) != 0)
                            goto label_14014534e
                        
                        goto label_14014471b
                    
                label_140145338:
                    var_498[2] = _mm_shuffle_epi32(temp0_904, 0x4e)[0]
                    zmm5 = _mm_cvtepi32_ps(zmm5)
                    
                    if ((temp0_793 & 8) != 0)
                    label_14014534e:
                        var_498[3] = _mm_shuffle_epi32(temp0_904, 0xe7)[0]
                        zmm5 = _mm_div_ps(zmm5, zmm4)
                        
                        if ((temp0_793 & 1) == 0)
                            goto label_140144726
                        
                        goto label_14014535f
                    
                label_14014471b:
                    zmm5 = _mm_div_ps(zmm5, zmm4)
                    
                    if ((temp0_793 & 1) == 0)
                    label_140144726:
                        zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_140145376
                        
                        goto label_140144732
                    
                label_14014535f:
                    var_488.d = zmm5.d
                    zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                    
                    if ((temp0_793 & 2) == 0)
                    label_140144732:
                        zmm0 = _mm_add_epi32(zmm0, zmm7)
                        
                        if ((temp0_793 & 4) != 0)
                            var_488:8.d = _mm_shuffle_epi32(zmm5, 0x4e)[0]
                    else
                    label_140145376:
                        var_488:4.d = _mm_shuffle_epi32(zmm5, 0xe5)[0]
                        zmm0 = _mm_add_epi32(zmm0, zmm7)
                        
                        if ((temp0_793 & 4) != 0)
                            var_488:8.d = _mm_shuffle_epi32(zmm5, 0x4e)[0]
                    
                    float temp0_912[0x4] = _mm_cvtepi32_ps(zmm0)
                    float temp0_913[0x4] = _mm_mul_ps(temp0_904, temp0_904)
                    zmm7 = data_142d3f670
                    
                    if ((temp0_793 & 8) != 0)
                        var_488:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                    
                    float temp0_915[0x4] = _mm_div_ps(temp0_912, zmm4)
                    zmm7 = _mm_sub_ps(zmm7, temp0_913)
                    zmm5 = _mm_mul_ps(zmm5, zmm5)
                    
                    if ((temp0_793 & 1) != 0)
                        var_478[0] = temp0_915[0]
                    
                    zmm7 = _mm_sub_ps(zmm7, zmm5)
                    float temp0_919[0x4] = _mm_mul_ps(temp0_915, temp0_915)
                    
                    if ((temp0_793 & 2) == 0)
                        zmm7 = _mm_sub_ps(zmm7, temp0_919)
                        zmm5 = var_2e8_2
                        
                        if ((temp0_793 & 4) != 0)
                            goto label_1401453b1
                        
                        goto label_1401447a3
                    
                    var_478[1] = _mm_shuffle_epi32(temp0_915, 0xe5)[0]
                    zmm7 = _mm_sub_ps(zmm7, temp0_919)
                    zmm5 = var_2e8_2
                    
                    if ((temp0_793 & 4) != 0)
                    label_1401453b1:
                        var_478[2] = _mm_shuffle_epi32(temp0_915, 0x4e)[0]
                        zmm2 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                        zmm1 = _mm_sqrt_ps(zmm7)
                        
                        if ((temp0_793 & 8) == 0)
                            goto label_1401447b2
                        
                        goto label_1401453cb
                    
                label_1401447a3:
                    zmm2 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                    zmm1 = _mm_sqrt_ps(zmm7)
                    
                    if ((temp0_793 & 8) == 0)
                    label_1401447b2:
                        zmm2 = _mm_and_ps(zmm2, zmm1)
                        arg5 = var_378_2
                        
                        if ((temp0_793 & 1) != 0)
                            goto label_1401453e6
                        
                        goto label_1401447c7
                    
                label_1401453cb:
                    var_478[3] = _mm_shuffle_epi32(temp0_915, 0xe7)[0]
                    zmm2 = _mm_and_ps(zmm2, zmm1)
                    arg5 = var_378_2
                    
                    if ((temp0_793 & 1) != 0)
                    label_1401453e6:
                        var_468.d = zmm2[0]
                        
                        if ((temp0_793 & 2) == 0)
                            goto label_1401447cf
                        
                        goto label_1401453f9
                    
                label_1401447c7:
                    
                    if ((temp0_793 & 2) == 0)
                    label_1401447cf:
                        
                        if ((temp0_793 & 4) != 0)
                            goto label_14014540c
                        
                        goto label_1401447d7
                    
                label_1401453f9:
                    var_468:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                    
                    if ((temp0_793 & 4) == 0)
                    label_1401447d7:
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                    else
                    label_14014540c:
                        var_468:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                case 3
                    var_418 = zmm11
                    zmm0 = var_348_3 & var_378_2
                    int64_t rax_113 = sx.q(zmm0[0])
                    void* rsi_54 = arg4 + rax_113
                    arg5 = *(arg4 + rax_113)
                    int64_t rcx_45 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    void* rax_115 = arg4 + rcx_45
                    float temp0_925[0x4] = _mm_unpacklo_ps(arg5, (*(arg4 + rcx_45))[0].q)
                    int64_t rcx_47 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    void* rbp_49 = arg4 + rcx_47
                    zmm1 = *(arg4 + rcx_47)
                    int64_t rcx_49 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    void* rbx_42 = arg4 + rcx_49
                    float temp0_928[0x4] = _mm_unpacklo_ps(zmm1, (*(arg4 + rcx_49))[0].q)
                    arg5 = temp0_925[0].q | temp0_928[0].q << 0x40
                    zmm0 = data_142fc95e0 & var_378_2
                    zmm5 = *(zx.q(zmm0[0]) + rsi_54)
                    var_288.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_115)
                    var_278.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_49)
                    var_2f8.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbx_42)
                    zmm0 = data_142fc95f0 & var_378_2
                    zmm11 = *(zx.q(zmm0[0]) + rsi_54)
                    var_328.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_115)
                    uint64_t r11_4 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    uint64_t r10_8 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    zmm0 = data_143442650 & var_378_2
                    float temp0_936[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rsi_54), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_115))[0].q)
                    float temp0_939[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_49), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbx_42))[0].q)
                    zmm4 = temp0_936[0].q | temp0_939[0].q << 0x40
                    zmm0 = data_143442660 & var_378_2
                    zmm3 = arg6
                    arg6 = *(zx.q(zmm0[0]) + rsi_54)
                    float var_2b8_1[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_115)
                    uint64_t rdx_93 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    uint64_t rdi_41 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    zmm0 = data_143442670 & var_378_2
                    zmm9 = zx.o(*(zx.q(zmm0[0]) + rsi_54))
                    float var_2a8_1[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_115)
                    uint64_t rax_116 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    uint64_t rsi_55 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    zmm0 = _mm_add_epi64(var_368, zmm3)
                    var_388 = zmm6
                    var_318.o = zmm3
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm6, zmm3), zmm8)
                    zmm0 = _mm_add_epi64(zmm0, zmm7)
                    zmm3 = _mm_shuffle_epi32(var_378_2, 0x50) & zmm0
                    zmm0 = _mm_shuffle_epi32(var_378_2, 0xfa) & zmm1
                    int64_t rcx_64 = zmm3[0].q
                    zmm1 = _mm_shuffle_epi32(zmm3, 0x4e)
                    zmm10 = zx.o(*(arg4 + rcx_64))
                    zmm1 = zx.o(*(arg4 + zmm1[0].q))
                    int64_t rcx_66 = zmm0[0].q
                    zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm10 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm10, zmm1[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_66)), zx.o(*(arg4 + zmm0[0].q))[0].q)[
                            0].q)
                    zmm0 = _mm_srli_epi32(zmm10, 0x15)
                    zmm1 = data_143442440
                    zmm7 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                    zmm3 = data_143442690
                    zmm7 = _mm_mul_ps(_mm_div_ps(zmm7, zmm3), zmm4)
                    zmm8 = *(r11_4 + rbp_49)
                    zmm7 = _mm_add_ps(zmm7, arg5)
                    zmm0 = _mm_add_epi32(_mm_srli_epi32(zmm10, 0xa) & data_143442480, zmm1)
                    float var_2c8_1[0x4] = *(r10_8 + rbx_42)
                    rcx_38 = temp0_793
                    zmm4 = *(rdx_93 + rbp_49)
                    zmm6 = *(rdi_41 + rbx_42)
                    zmm1 = zx.o(*(rax_116 + rbp_49))
                    zmm2 = zx.o(*(rsi_55 + rbx_42))
                    
                    if ((rcx_38 & 1) != 0)
                        var_498[0] = zmm7.d
                    
                    float temp0_965[0x4] = _mm_unpacklo_ps(zmm4, zmm6[0].q)
                    float temp0_966[0x4] = __unpcklps_xmmps_memdq(arg6, var_2b8_1)
                    float temp0_967[0x4] = _mm_cvtepi32_ps(zmm0)
                    
                    if ((rcx_38 & 2) != 0)
                        var_498[1] = _mm_shuffle_epi32(zmm7, 0xe5)[0]
                    
                    float temp0_969[0x4] = __unpcklps_xmmps_memdq(var_278.o, var_2f8.o)
                    zmm5 = __unpcklps_xmmps_memdq(zmm5, var_288.o)
                    arg6 = temp0_966[0].q | temp0_965[0].q << 0x40
                    float temp0_971[0x4] = _mm_div_ps(temp0_967, zmm3)
                    
                    if ((rcx_38 & 4) != 0)
                        var_498[2] = _mm_shuffle_epi32(zmm7, 0x4e)[0]
                    
                    zmm10 &= data_143442680
                    zmm5 = zmm5.q | temp0_969[0].q << 0x40
                    float temp0_973[0x4] = _mm_mul_ps(arg6, temp0_971)
                    
                    if ((rcx_38 & 8) != 0)
                        var_498[3] = _mm_shuffle_epi32(zmm7, 0xe7)[0]
                    
                    zmm10 = __paddd_xmmdq_memdq(zmm10, data_143442490)
                    zmm5 = _mm_add_ps(zmm5, temp0_973)
                    zmm6 = var_388
                    
                    if ((rcx_38 & 1) != 0)
                        var_488.d = zmm5.d
                    
                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                    zmm9 = __punpckldq_xmmdq_memdq(zmm9, var_2a8_1)
                    float temp0_979[0x4] = _mm_cvtepi32_ps(zmm10)
                    arg6 = var_318.o
                    
                    if ((rcx_38 & 2) != 0)
                        var_488:4.d = _mm_shuffle_epi32(zmm5, 0xe5)[0]
                    
                    zmm8 = __unpcklps_xmmps_memdq(zmm8, var_2c8_1)
                    zmm11 = __unpcklps_xmmps_memdq(zmm11, var_328.o)
                    zmm9 = _mm_unpacklo_epi64(zmm9, zmm1[0].q)
                    float temp0_984[0x4] = __divps_xmmps_memps(temp0_979, data_1434426a0)
                    
                    if ((rcx_38 & 4) != 0)
                        var_488:8.d = _mm_shuffle_epi32(zmm5, 0x4e)[0]
                    
                    zmm11 = zmm11[0].q | zmm8[0].q << 0x40
                    zmm9 = _mm_mul_ps(zmm9, temp0_984)
                    zmm7 = _mm_mul_ps(zmm7, zmm7)
                    zmm1 = data_142d3f670
                    
                    if ((rcx_38 & 8) != 0)
                        var_488:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                    
                    zmm11 = _mm_add_ps(zmm11, zmm9)
                    float temp0_990[0x4] = _mm_sub_ps(zmm1, zmm7)
                    zmm5 = _mm_mul_ps(zmm5, zmm5)
                    zmm8 = var_368
                    
                    if ((rcx_38 & 1) != 0)
                        var_478[0] = zmm11[0]
                    
                    float temp0_992[0x4] = _mm_sub_ps(temp0_990, zmm5)
                    float temp0_993[0x4] = _mm_mul_ps(zmm11, zmm11)
                    zmm5 = var_2e8_2
                    arg5 = var_378_2
                    
                    if ((rcx_38 & 2) == 0)
                        zmm1 = _mm_sub_ps(temp0_992, temp0_993)
                        zmm0 = zx.o(0)
                        
                        if ((rcx_38 & 4) != 0)
                            goto label_140145445
                        
                        goto label_140144c21
                    
                    var_478[1] = _mm_shuffle_epi32(zmm11, 0xe5)[0]
                    zmm1 = _mm_sub_ps(temp0_992, temp0_993)
                    zmm0 = zx.o(0)
                    
                    if ((rcx_38 & 4) != 0)
                    label_140145445:
                        var_478[2] = _mm_shuffle_epi32(zmm11, 0x4e)[0]
                        zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rcx_38 & 8) == 0)
                            goto label_140144c31
                        
                        goto label_140145461
                    
                label_140144c21:
                    zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    
                    if ((rcx_38 & 8) != 0)
                    label_140145461:
                        var_478[3] = _mm_shuffle_epi32(zmm11, 0xe7)[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rcx_38 & 1) != 0)
                        label_140145473:
                            var_468.d = zmm0[0]
                            
                            if ((rcx_38 & 2) == 0)
                                goto label_140144c49
                            
                            goto label_140145487
                    else
                    label_140144c31:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rcx_38 & 1) != 0)
                            goto label_140145473
                    
                    if ((rcx_38 & 2) == 0)
                    label_140144c49:
                        zmm11 = var_418
                        
                        if ((rcx_38 & 4) != 0)
                            goto label_140145088
                        
                        goto label_14014508e
                    
                label_140145487:
                    var_468:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    zmm11 = var_418
                    
                    if ((rcx_38 & 4) != 0)
                        goto label_140145088
                    
                    goto label_14014508e
                case 4
                    zmm0 = _mm_add_epi64(var_368, arg6)
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm8)
                    zmm0 = _mm_add_epi64(zmm0, zmm7)
                    arg5 = var_378_2
                    zmm2 = _mm_shuffle_epi32(arg5, 0x50) & zmm0
                    zmm0 = _mm_shuffle_epi32(arg5, 0xfa) & zmm1
                    int64_t rax_117 = zmm2[0].q
                    int64_t rcx_68 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                    int64_t rdx_94 = zmm0[0].q
                    int64_t rbp_50 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_117)), zx.o(*(arg4 + rcx_68))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_94)), zx.o(*(arg4 + rbp_50))[0].q)[0]
                            .q)
                    zmm1 = _mm_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm_srli_epi32(zmm0, 0xa)
                    zmm5 = data_143442440
                    float temp0_1012[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm5))
                    zmm4 = data_143442690
                    float temp0_1013[0x4] = _mm_div_ps(temp0_1012, zmm4)
                    
                    if ((temp0_793 & 1) == 0)
                        zmm2 &= data_143442480
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_1401454c0
                        
                        goto label_140144d27
                    
                    var_498[0] = temp0_1013[0]
                    zmm2 &= data_143442480
                    
                    if ((temp0_793 & 2) != 0)
                    label_1401454c0:
                        var_498[1] = _mm_shuffle_epi32(temp0_1013, 0xe5)[0]
                        zmm2 = _mm_add_epi32(zmm2, zmm5)
                        zmm8 = var_368
                        
                        if ((temp0_793 & 4) == 0)
                            goto label_140144d3e
                        
                        goto label_1401454e2
                    
                label_140144d27:
                    zmm2 = _mm_add_epi32(zmm2, zmm5)
                    zmm8 = var_368
                    
                    if ((temp0_793 & 4) == 0)
                    label_140144d3e:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        zmm5 = var_2e8_2
                        
                        if ((temp0_793 & 8) != 0)
                            goto label_140145502
                        
                        goto label_140144d53
                    
                label_1401454e2:
                    var_498[2] = _mm_shuffle_epi32(temp0_1013, 0x4e)[0]
                    zmm2 = _mm_cvtepi32_ps(zmm2)
                    zmm5 = var_2e8_2
                    
                    if ((temp0_793 & 8) != 0)
                    label_140145502:
                        var_498[3] = _mm_shuffle_epi32(temp0_1013, 0xe7)[0]
                        zmm2 = _mm_div_ps(zmm2, zmm4)
                        
                        if ((temp0_793 & 1) == 0)
                            goto label_140144d5f
                        
                        goto label_140145514
                    
                label_140144d53:
                    zmm2 = _mm_div_ps(zmm2, zmm4)
                    
                    if ((temp0_793 & 1) == 0)
                    label_140144d5f:
                        zmm0 &= data_143442680
                        
                        if ((temp0_793 & 2) != 0)
                            goto label_140145530
                        
                        goto label_140144d70
                    
                label_140145514:
                    var_488.d = zmm2[0]
                    zmm0 &= data_143442680
                    
                    if ((temp0_793 & 2) == 0)
                    label_140144d70:
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        
                        if ((temp0_793 & 4) != 0)
                            var_488:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                    else
                    label_140145530:
                        var_488:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        
                        if ((temp0_793 & 4) != 0)
                            var_488:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                    
                    float temp0_1019[0x4] = _mm_cvtepi32_ps(zmm0)
                    float temp0_1020[0x4] = _mm_mul_ps(temp0_1013, temp0_1013)
                    zmm4 = data_142d3f670
                    
                    if ((temp0_793 & 8) != 0)
                        var_488:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                    
                    float temp0_1022[0x4] = __divps_xmmps_memps(temp0_1019, data_1434426a0)
                    float temp0_1023[0x4] = _mm_sub_ps(zmm4, temp0_1020)
                    float temp0_1024[0x4] = _mm_mul_ps(zmm2, zmm2)
                    
                    if ((temp0_793 & 1) != 0)
                        var_478[0] = temp0_1022[0]
                    
                    float temp0_1025[0x4] = _mm_sub_ps(temp0_1023, temp0_1024)
                    float temp0_1026[0x4] = _mm_mul_ps(temp0_1022, temp0_1022)
                    
                    if ((temp0_793 & 2) == 0)
                        zmm4 = _mm_sub_ps(temp0_1025, temp0_1026)
                        zmm1 = zx.o(0)
                        
                        if ((temp0_793 & 4) != 0)
                            goto label_14014556b
                        
                        goto label_140144dde
                    
                    var_478[1] = _mm_shuffle_epi32(temp0_1022, 0xe5)[0]
                    zmm4 = _mm_sub_ps(temp0_1025, temp0_1026)
                    zmm1 = zx.o(0)
                    
                    if ((temp0_793 & 4) != 0)
                    label_14014556b:
                        var_478[2] = _mm_shuffle_epi32(temp0_1022, 0x4e)[0]
                        zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
                        zmm2 = _mm_sqrt_ps(zmm4)
                        
                        if ((temp0_793 & 8) == 0)
                            goto label_140144dee
                        
                        goto label_140145586
                    
                label_140144dde:
                    zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
                    zmm2 = _mm_sqrt_ps(zmm4)
                    
                    if ((temp0_793 & 8) == 0)
                    label_140144dee:
                        zmm1 = _mm_and_ps(zmm1, zmm2)
                        
                        if ((temp0_793 & 1) != 0)
                            goto label_140145598
                        
                        goto label_140144dfa
                    
                label_140145586:
                    var_478[3] = _mm_shuffle_epi32(temp0_1022, 0xe7)[0]
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    
                    if ((temp0_793 & 1) != 0)
                    label_140145598:
                        var_468.d = zmm1[0]
                        
                        if ((temp0_793 & 2) == 0)
                            goto label_140144e03
                        
                        goto label_1401455ac
                    
                label_140144dfa:
                    
                    if ((temp0_793 & 2) == 0)
                    label_140144e03:
                        
                        if ((temp0_793 & 4) != 0)
                            goto label_1401455c0
                        
                        goto label_140144e0c
                    
                label_1401455ac:
                    var_468:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                    
                    if ((temp0_793 & 4) == 0)
                    label_140144e0c:
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    else
                    label_1401455c0:
                        var_468:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        
                        if ((temp0_793 & 8) != 0)
                            var_468:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                case 5
                    var_418 = zmm11
                    zmm0 = _mm_add_epi64(var_368, arg6)
                    zmm2 = arg6
                    arg6 = zmm6
                    zmm11 = zmm2
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm6, zmm2), zmm8)
                    zmm0 = _mm_add_epi64(zmm0, zmm7)
                    zmm3 = var_378_2
                    zmm2 = _mm_shuffle_epi32(zmm3, 0x50) & zmm0
                    zmm0 = _mm_shuffle_epi32(zmm3, 0xfa) & zmm1
                    int64_t rax_118 = zmm2[0].q
                    int64_t rcx_70 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                    int64_t rdx_95 = zmm0[0].q
                    int64_t rbp_51 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                    zmm2 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_118)), zx.o(*(arg4 + rcx_70))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_95)), zx.o(*(arg4 + rbp_51))[0].q)[0]
                            .q)
                    zmm0 = _mm_srli_epi32(zmm2, 0x15)
                    zmm1 = _mm_srli_epi32(zmm2, 5)
                    zmm7 = data_143442600
                    zmm5 = data_143442610
                    zmm3 = (zmm0 & zmm5) | (zmm1 & zmm7)
                    zmm1 = data_143442320
                    zmm8 = data_143442330
                    zmm0 = _mm_add_epi32(zmm0 & zmm1, zmm8) | zmm3
                    rcx_38 = temp0_793
                    
                    if ((rcx_38 & 1) != 0)
                        var_498[0] = zmm0[0]
                    
                    zmm6 = _mm_srli_epi32(zmm2, 0xa)
                    zmm4 = _mm_slli_epi32(zmm2, 6)
                    
                    if ((rcx_38 & 2) != 0)
                        var_498[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    
                    if ((rcx_38 & 4) != 0)
                        var_498[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    
                    int32_t temp0_1049[0x4] = _mm_add_epi32(zmm1 & zmm6, zmm8)
                    zmm4 = (zmm4 & zmm7) | (zmm5 & zmm6)
                    zmm6 = arg6
                    arg5 = var_378_2
                    
                    if ((rcx_38 & 8) != 0)
                        var_498[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                    
                    zmm4 |= temp0_1049
                    zmm8 = var_368
                    arg6 = zmm11
                    
                    if ((rcx_38 & 1) != 0)
                        var_488.d = zmm4[0]
                    
                    zmm1 = _mm_slli_epi32(zmm2, 0x11)
                    
                    if ((rcx_38 & 2) != 0)
                        var_488:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                    
                    zmm1 &= data_143442630
                    zmm5 = data_143442620 & zmm2
                    zmm2 &= data_143442640
                    
                    if ((rcx_38 & 4) != 0)
                        var_488:8.d = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    
                    zmm5 = __paddd_xmmdq_memdq(zmm5, data_1434423a0)
                    zmm1 |= zmm2
                    float temp0_1055[0x4] = _mm_mul_ps(zmm0, zmm0)
                    zmm2 = data_142d3f670
                    
                    if ((rcx_38 & 8) != 0)
                        var_488:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    
                    zmm1 |= zmm5
                    float temp0_1057[0x4] = _mm_sub_ps(zmm2, temp0_1055)
                    float temp0_1058[0x4] = _mm_mul_ps(zmm4, zmm4)
                    
                    if ((rcx_38 & 1) != 0)
                        var_478[0] = zmm1[0]
                    
                    float temp0_1059[0x4] = _mm_sub_ps(temp0_1057, temp0_1058)
                    float temp0_1060[0x4] = _mm_mul_ps(zmm1, zmm1)
                    zmm5 = var_2e8_2
                    
                    if ((rcx_38 & 2) != 0)
                        var_478[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                    
                    float temp0_1062[0x4] = _mm_sub_ps(temp0_1059, temp0_1060)
                    zmm11 = var_418
                    
                    if ((rcx_38 & 4) != 0)
                        var_478[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                    
                    float temp0_1064[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_1062, 1)
                    float temp0_1065[0x4] = _mm_sqrt_ps(temp0_1062)
                    
                    if ((rcx_38 & 8) != 0)
                        var_478[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    
                    zmm0 = _mm_and_ps(temp0_1064, temp0_1065)
                    
                    if ((rcx_38 & 1) == 0)
                        goto label_140145079
                    
                    goto label_140145073
        
        zmm1 = var_308_3
        zmm12 =
            _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm12, zmm1) & not.o(arg5), 0x1f), 0x1f)
        char temp0_1122 = _mm_movemask_ps(zmm12)
        
        if (temp0_1122 != 0)
            float var_408
            uint32_t var_3f8
            float var_3e8
            float var_3d8
            uint64_t rcx_72
            int64_t rdi_46
            
            if (r15.d u> 5)
                rcx_72 = zx.q(temp0_1122)
                rdi_46 = rcx_72 & 1
                
                if (rdi_46 == 0)
                    if ((rcx_72.b & 2) != 0)
                        goto label_140146998
                    
                    goto label_140146413
                
                var_408 = 0f
                
                if ((rcx_72.b & 2) != 0)
                label_140146998:
                    int32_t var_404_7 = 0
                    
                    if ((rcx_72.b & 4) == 0)
                        goto label_14014641c
                    
                    goto label_1401469ac
                
            label_140146413:
                
                if ((rcx_72.b & 4) == 0)
                label_14014641c:
                    
                    if ((rcx_72.b & 8) != 0)
                        goto label_1401469c0
                    
                    goto label_140146425
                
            label_1401469ac:
                int32_t var_400_7 = 0
                
                if ((rcx_72.b & 8) != 0)
                label_1401469c0:
                    int32_t var_3fc_7 = 0
                    
                    if (rdi_46 == 0)
                        goto label_14014642e
                    
                    goto label_1401469d4
                
            label_140146425:
                
                if (rdi_46 == 0)
                label_14014642e:
                    
                    if ((rcx_72.b & 2) != 0)
                        goto label_1401469e8
                    
                    goto label_140146437
                
            label_1401469d4:
                var_3f8 = 0
                
                if ((rcx_72.b & 2) != 0)
                label_1401469e8:
                    int32_t var_3f4_7 = 0
                    
                    if ((rcx_72.b & 4) == 0)
                        goto label_140146440
                    
                    goto label_1401469fc
                
            label_140146437:
                
                if ((rcx_72.b & 4) == 0)
                label_140146440:
                    
                    if ((rcx_72.b & 8) != 0)
                        goto label_140146a10
                    
                    goto label_140146449
                
            label_1401469fc:
                int32_t var_3f0_7 = 0
                
                if ((rcx_72.b & 8) != 0)
                label_140146a10:
                    int32_t var_3ec_7 = 0
                    
                    if (rdi_46 == 0)
                        goto label_140146452
                    
                    goto label_140146a24
                
            label_140146449:
                
                if (rdi_46 == 0)
                label_140146452:
                    
                    if ((rcx_72.b & 2) != 0)
                        goto label_140146a38
                    
                    goto label_14014645b
                
            label_140146a24:
                var_3e8 = 0f
                
                if ((rcx_72.b & 2) != 0)
                label_140146a38:
                    int32_t var_3e4_7 = 0
                    
                    if ((rcx_72.b & 4) == 0)
                        goto label_140146464
                    
                    goto label_140146a4c
                
            label_14014645b:
                
                if ((rcx_72.b & 4) == 0)
                label_140146464:
                    
                    if ((rcx_72.b & 8) != 0)
                        goto label_140146a60
                    
                    goto label_14014646d
                
            label_140146a4c:
                int32_t var_3e0_7 = 0
                
                if ((rcx_72.b & 8) != 0)
                label_140146a60:
                    int32_t var_3dc_6 = 0
                    
                    if (rdi_46 == 0)
                        goto label_140146476
                    
                    goto label_140146a74
                
            label_14014646d:
                
                if (rdi_46 == 0)
                label_140146476:
                    
                    if ((rcx_72.b & 2) != 0)
                        goto label_140146a88
                    
                    goto label_14014647f
                
            label_140146a74:
                var_3d8 = 1f
                
                if ((rcx_72.b & 2) != 0)
                label_140146a88:
                    int32_t var_3d4_4 = 0x3f800000
                    
                    if ((rcx_72.b & 4) == 0)
                        goto label_140146488
                    
                    goto label_140146a9c
                
            label_14014647f:
                int32_t var_3cc_4
                
                if ((rcx_72.b & 4) != 0)
                label_140146a9c:
                    int32_t var_3d0_4 = 0x3f800000
                    
                    if ((rcx_72.b & 8) != 0)
                        var_3cc_4 = 0x3f800000
                else
                label_140146488:
                    
                    if ((rcx_72.b & 8) != 0)
                        var_3cc_4 = 0x3f800000
            else
                zmm0 = _mm_shuffle_epi32(zmm1, 0xf5)
                zmm5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm11), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm11, 0xf5), zmm0), 0xe8)[0]
                        .q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm5)
                zmm7 = _mm_shuffle_epi32(zmm5, 0x4e)
                zmm5 = _mm_unpacklo_epi32(zmm5, zmm1[0].q)
                zmm7 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7)[0].q)
                
                switch (r8_1)
                    case 0
                        zmm8 = _mm_add_epi64(zmm8, arg6)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm7)
                        zmm8 = _mm_add_epi64(zmm8, zmm5)
                        zmm0 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm8 &= zmm0
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm6 &= zmm1
                        int64_t rax_124 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                        void* rdi_42 = arg4 + rax_124
                        int32_t rdx_98 = *(arg4 + rax_124)
                        int64_t rax_125 = zmm6[0].q
                        void* rbp_52 = arg4 + rax_125
                        int32_t rbx_43 = *(arg4 + rax_125)
                        int64_t rsi_56 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                        void* rax_126 = arg4 + rsi_56
                        int32_t r14_14 = *(arg4 + rsi_56)
                        zmm3 = data_1434426c0
                        zmm2 = zmm0 & zmm3
                        zmm3 &= zmm1
                        void* r10_10 = zmm8[0].q + arg4
                        int32_t r11_5 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rdi_42)
                        int32_t r9 = *(zmm3[0].q + rbp_52)
                        int32_t r13_3 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rax_126)
                        zmm3 = data_1434426e0
                        zmm4 = zmm0 & zmm3
                        zmm3 &= zmm1
                        int32_t r15_6 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rdi_42)
                        var_418.d = *(zmm3[0].q + rbp_52)
                        var_388[0] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rax_126)
                        zmm3 = data_1434426f0
                        zmm0 &= zmm3
                        zmm1 &= zmm3
                        var_348_3[0] = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rdi_42)
                        var_368[0] = *(zmm1[0].q + rbp_52)
                        var_378_2[0] = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rax_126)
                        rcx_72 = zx.q(temp0_1122)
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 == 0)
                            if ((rcx_72.b & 2) != 0)
                                goto label_1401464a9
                            
                            goto label_1401457b7
                        
                        var_408 = *r10_10
                        
                        if ((rcx_72.b & 2) != 0)
                        label_1401464a9:
                            int32_t var_404_3 = rdx_98
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_1401457c0
                            
                            goto label_1401464b9
                        
                    label_1401457b7:
                        
                        if ((rcx_72.b & 4) == 0)
                        label_1401457c0:
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_1401464c9
                            
                            goto label_1401457c9
                        
                    label_1401464b9:
                        int32_t var_400_2 = rbx_43
                        
                        if ((rcx_72.b & 8) != 0)
                        label_1401464c9:
                            int32_t var_3fc_2 = r14_14
                            
                            if (rdi_46 == 0)
                                goto label_1401457d2
                            
                            goto label_1401464da
                        
                    label_1401457c9:
                        
                        if (rdi_46 == 0)
                        label_1401457d2:
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_1401464ea
                            
                            goto label_1401457db
                        
                    label_1401464da:
                        var_3f8 = *(zmm2[0].q + r10_10)
                        
                        if ((rcx_72.b & 2) != 0)
                        label_1401464ea:
                            int32_t var_3f4_4 = r11_5
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_1401457e4
                            
                            goto label_1401464fb
                        
                    label_1401457db:
                        
                        if ((rcx_72.b & 4) == 0)
                        label_1401457e4:
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_14014650c
                            
                            goto label_1401457ed
                        
                    label_1401464fb:
                        int32_t var_3f0_6 = r9
                        
                        if ((rcx_72.b & 8) != 0)
                        label_14014650c:
                            int32_t var_3ec_6 = r13_3
                            
                            if (rdi_46 == 0)
                                goto label_1401457f6
                            
                            goto label_14014651d
                        
                    label_1401457ed:
                        
                        if (rdi_46 == 0)
                        label_1401457f6:
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_14014652e
                            
                            goto label_1401457ff
                        
                    label_14014651d:
                        var_3e8 = *(zmm4[0].q + r10_10)
                        
                        if ((rcx_72.b & 2) != 0)
                        label_14014652e:
                            int32_t var_3e4_3 = r15_6
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_140145808
                            
                            goto label_140146546
                        
                    label_1401457ff:
                        
                        if ((rcx_72.b & 4) == 0)
                        label_140145808:
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_14014655d
                            
                            goto label_140145811
                        
                    label_140146546:
                        int32_t var_3e0_3 = var_418.d
                        
                        if ((rcx_72.b & 8) != 0)
                        label_14014655d:
                            float var_3dc_2 = var_388[0]
                            
                            if (rdi_46 == 0)
                                goto label_14014581a
                            
                            goto label_14014656d
                        
                    label_140145811:
                        
                        if (rdi_46 == 0)
                        label_14014581a:
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_140146585
                            
                            goto label_140145826
                        
                    label_14014656d:
                        var_3d8 = *(zmm0[0].q + r10_10)
                        
                        if ((rcx_72.b & 2) != 0)
                        label_140146585:
                            float var_3d4_1 = var_348_3[0]
                            r12 = var_330
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_140145834
                            
                            goto label_1401465a4
                        
                    label_140145826:
                        r12 = var_330
                        float var_3cc_1
                        
                        if ((rcx_72.b & 4) != 0)
                        label_1401465a4:
                            float var_3d0_1 = var_368[0]
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_1 = var_378_2[0]
                        else
                        label_140145834:
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_1 = var_378_2[0]
                    case 1
                        zmm8 = _mm_add_epi64(zmm8, arg6)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm7)
                        zmm8 = _mm_add_epi64(zmm8, zmm5)
                        zmm2 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm8 &= zmm2
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm6 &= zmm1
                        int64_t rdx_99 = zmm8[0].q
                        void* rax_130 = arg4 + rdx_99
                        zmm0 = *(arg4 + rdx_99)
                        int64_t rbp_56 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                        void* rdx_100 = arg4 + rbp_56
                        arg6 = *(arg4 + rbp_56)
                        int64_t rbx_44 = zmm6[0].q
                        void* rbp_57 = arg4 + rbx_44
                        zmm7 = *(arg4 + rbx_44)
                        int64_t rdi_47 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                        void* rbx_45 = arg4 + rdi_47
                        zmm6 = *(arg4 + rdi_47)
                        zmm4 = data_1434426c0
                        zmm5 = zmm2 & zmm4
                        zmm4 &= zmm1
                        zmm3 = *(zmm5.q + rax_130)
                        zmm5 = *(_mm_shuffle_epi32(zmm5, 0x4e).q + rdx_100)
                        arg5 = *(zmm4[0].q + rbp_57)
                        zmm12 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_45)
                        zmm4 = data_1434426e0
                        zmm2 &= zmm4
                        zmm1 &= zmm4
                        zmm11 = *(zmm2[0].q + rax_130)
                        zmm10 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rdx_100)
                        zmm9 = *(zmm1[0].q + rbp_57)
                        zmm8 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rbx_45)
                        rcx_72 = zx.q(temp0_1122)
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 == 0)
                            if ((rcx_72.b & 2) != 0)
                                goto label_1401465d9
                            
                            goto label_140145958
                        
                        var_408 = zmm0[0]
                        
                        if ((rcx_72.b & 2) != 0)
                        label_1401465d9:
                            float var_404_4 = arg6[0]
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_140145961
                            
                            goto label_1401465ec
                        
                    label_140145958:
                        
                        if ((rcx_72.b & 4) != 0)
                        label_1401465ec:
                            int32_t var_400_3 = zmm7.d
                            
                            if ((rcx_72.b & 8) != 0)
                            label_1401465fe:
                                float var_3fc_3 = zmm6[0]
                                
                                if (rdi_46 == 0)
                                    goto label_140145973
                                
                                goto label_140146610
                        else
                        label_140145961:
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_1401465fe
                        
                        int32_t var_3f4_1
                        
                        if (rdi_46 != 0)
                        label_140146610:
                            var_3f8 = zmm3[0]
                            zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm6[0].q)
                            
                            if ((rcx_72.b & 2) != 0)
                                var_3f4_1 = zmm5.d
                        else
                        label_140145973:
                            zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm6[0].q)
                            
                            if ((rcx_72.b & 2) != 0)
                                var_3f4_1 = zmm5.d
                        zmm0 = zmm0[0].q | zmm7.q << 0x40
                        zmm3 = _mm_unpacklo_ps(zmm3, zmm5.q)
                        float temp0_1164[0x4] = _mm_unpacklo_ps(arg5, zmm12[0].q)
                        
                        if ((rcx_72.b & 4) != 0)
                            float var_3f0_1 = arg5[0]
                        
                        zmm3 = zmm3[0].q | temp0_1164[0].q << 0x40
                        float temp0_1165[0x4] = _mm_unpacklo_ps(zmm11, zmm10[0].q)
                        float temp0_1166[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
                        float temp0_1167[0x4] = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rcx_72.b & 8) != 0)
                            uint32_t var_3ec_1 = zmm12[0]
                        
                        zmm2 = temp0_1165[0].q | temp0_1166[0].q << 0x40
                        float temp0_1168[0x4] = _mm_sub_ps(data_142d3f670, temp0_1167)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdi_46 == 0)
                            zmm1 = _mm_sub_ps(temp0_1168, zmm3)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_140146647
                            
                            goto label_1401459f2
                        
                        var_3e8 = zmm11[0]
                        zmm1 = _mm_sub_ps(temp0_1168, zmm3)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_72.b & 2) != 0)
                        label_140146647:
                            float var_3e4_4 = zmm10[0]
                            zmm1 = _mm_sub_ps(zmm1, zmm2)
                            zmm0 = zx.o(0)
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_140145a01
                            
                            goto label_140146660
                        
                    label_1401459f2:
                        zmm1 = _mm_sub_ps(zmm1, zmm2)
                        zmm0 = zx.o(0)
                        
                        if ((rcx_72.b & 4) == 0)
                        label_140145a01:
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_14014667a
                            
                            goto label_140146778
                        
                    label_140146660:
                        int32_t var_3e0_4 = zmm9.d
                        zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rcx_72.b & 8) != 0)
                        label_14014667a:
                            uint32_t var_3dc_3 = zmm8[0]
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_46 != 0)
                                goto label_140146780
                            
                            goto label_140146789
                        
                    label_140146778:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdi_46 == 0)
                            goto label_140146789
                        
                    label_140146780:
                        var_3d8 = zmm0[0]
                    label_140146789:
                        
                        if ((rcx_72.b & 2) == 0)
                            if ((rcx_72.b & 4) != 0)
                                goto label_1401467b5
                            
                            goto label_140146793
                        
                        float var_3d4_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        float var_3cc_2
                        
                        if ((rcx_72.b & 4) == 0)
                        label_140146793:
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_2 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                        else
                        label_1401467b5:
                            float var_3d0_2 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_2 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                    case 2
                        zmm8 = _mm_add_epi64(zmm8, arg6)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm7)
                        zmm8 = _mm_add_epi64(zmm8, zmm5)
                        zmm1 = _mm_shuffle_epi32(zmm12, 0x50)
                        zmm8 &= zmm1
                        zmm0 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm6 &= zmm0
                        int64_t rax_134 = zmm8[0].q
                        void* rbp_58 = arg4 + rax_134
                        int64_t rdx_101 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                        void* rbx_46 = arg4 + rdx_101
                        zmm2 = data_1434426b0
                        zmm3 = zmm1 & zmm2
                        void* rdi_54 = zmm3[0].q
                        uint32_t temp0_1182[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
                        zmm3 = data_1434426c0
                        zmm1 &= zmm3
                        zmm4 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_54 + rbp_58)), 
                            *(temp0_1182[0].q + rbx_46), 1)
                        void* rdi_57 = zmm1[0].q
                        int16_t* rdi_58 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                        int64_t rbp_60 = zmm6[0].q
                        zmm1 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_57 + rbp_58)), 
                            *(rdi_58 + rbx_46), 1)
                        void* rbx_47 = arg4 + rbp_60
                        zmm2 &= zmm0
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm2[0].q + rbx_47), 2)
                        zmm0 &= zmm3
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(zmm0[0].q + rbx_47), 2)
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_134)), *(arg4 + rdx_101), 1)
                        int64_t rax_136 = _mm_shuffle_epi32(zmm6, 0x4e).q
                        zmm3 = __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zmm3, *(arg4 + rbp_60), 2), *(arg4 + rax_136), 
                            3)
                        void* rax_137 = arg4 + rax_136
                        int16_t* rdx_102 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rdx_102 + rax_137), 3)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(zmm0[0].q + rax_137), 3)
                        zmm3 = _mm_unpacklo_epi16(zmm3, 0)
                        zmm5 = data_1434424d0
                        float temp0_1198[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm5))
                        zmm3 = data_1434426d0
                        float temp0_1199[0x4] = _mm_div_ps(temp0_1198, zmm3)
                        rcx_72 = zx.q(temp0_1122)
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 == 0)
                            zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_1401466b0
                            
                            goto label_140145b5d
                        
                        var_408 = temp0_1199[0]
                        zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                        
                        if ((rcx_72.b & 2) != 0)
                        label_1401466b0:
                            float var_404_5 = _mm_shuffle_epi32(temp0_1199, 0xe5)[0]
                            zmm4 = _mm_add_epi32(zmm4, zmm5)
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_140145b6a
                            
                            goto label_1401466cb
                        
                    label_140145b5d:
                        zmm4 = _mm_add_epi32(zmm4, zmm5)
                        
                        if ((rcx_72.b & 4) == 0)
                        label_140145b6a:
                            zmm4 = _mm_cvtepi32_ps(zmm4)
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_1401466e5
                            
                            goto label_140145b76
                        
                    label_1401466cb:
                        float var_400_4 = _mm_shuffle_epi32(temp0_1199, 0x4e)[0]
                        zmm4 = _mm_cvtepi32_ps(zmm4)
                        
                        if ((rcx_72.b & 8) != 0)
                        label_1401466e5:
                            float var_3fc_4 = _mm_shuffle_epi32(temp0_1199, 0xe7)[0]
                            zmm4 = _mm_div_ps(zmm4, zmm3)
                            
                            if (rdi_46 == 0)
                                goto label_140145b82
                            
                            goto label_1401466fa
                        
                    label_140145b76:
                        zmm4 = _mm_div_ps(zmm4, zmm3)
                        
                        if (rdi_46 == 0)
                        label_140145b82:
                            zmm1 = _mm_unpacklo_epi16(zmm1, 0)
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_140146715
                            
                            goto label_140145b8f
                        
                    label_1401466fa:
                        var_3f8 = zmm4[0]
                        zmm1 = _mm_unpacklo_epi16(zmm1, 0)
                        int32_t var_3f0_2
                        
                        if ((rcx_72.b & 2) == 0)
                        label_140145b8f:
                            zmm1 = _mm_add_epi32(zmm1, zmm5)
                            
                            if ((rcx_72.b & 4) != 0)
                                var_3f0_2 = _mm_shuffle_epi32(zmm4, 0x4e).d
                        else
                        label_140146715:
                            float var_3f4_5 = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            zmm1 = _mm_add_epi32(zmm1, zmm5)
                            
                            if ((rcx_72.b & 4) != 0)
                                var_3f0_2 = _mm_shuffle_epi32(zmm4, 0x4e).d
                        float temp0_1207[0x4] = _mm_cvtepi32_ps(zmm1)
                        float temp0_1208[0x4] = _mm_mul_ps(temp0_1199, temp0_1199)
                        zmm5 = data_142d3f670
                        
                        if ((rcx_72.b & 8) != 0)
                            float var_3ec_2 = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        zmm1 = _mm_div_ps(temp0_1207, zmm3)
                        zmm5 = _mm_sub_ps(zmm5, temp0_1208)
                        float temp0_1212[0x4] = _mm_mul_ps(zmm4, zmm4)
                        
                        if (rdi_46 != 0)
                            var_3e8 = zmm1[0]
                        
                        zmm5 = _mm_sub_ps(zmm5, temp0_1212)
                        float temp0_1214[0x4] = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rcx_72.b & 2) != 0)
                            uint32_t var_3e4_1 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        zmm5 = _mm_sub_ps(zmm5, temp0_1214)
                        
                        if ((rcx_72.b & 4) != 0)
                            float var_3e0_1 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        zmm2 = _mm_sqrt_ps(zmm5)
                        
                        if ((rcx_72.b & 8) == 0)
                            goto label_140145c29
                        
                    label_140145c20:
                        float var_3dc_1 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    label_140145c29:
                        zmm0 = _mm_and_ps(zmm0, zmm2)
                        
                        if (rdi_46 != 0)
                            goto label_140146780
                        
                        goto label_140146789
                    case 3
                        uint32_t var_418_1[0x4] = zmm14
                        zmm1 = var_348_3 & zmm12
                        int64_t rax_139 = sx.q(zmm1[0])
                        void* rsi_67 = arg4 + rax_139
                        zmm9 = *(arg4 + rax_139)
                        int64_t rdx_104 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                        void* rax_141 = arg4 + rdx_104
                        zmm9 = _mm_unpacklo_ps(zmm9, (*(arg4 + rdx_104))[0].q)
                        int64_t rdx_106 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                        void* rbp_61 = arg4 + rdx_106
                        zmm0 = *(arg4 + rdx_106)
                        int64_t rdx_108 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                        void* rbx_48 = arg4 + rdx_108
                        zmm9 = zmm9.q | _mm_unpacklo_ps(zmm0, (*(arg4 + rdx_108))[0].q)[0].q << 0x40
                        zmm0 = data_142fc95e0 & zmm12
                        zmm10 = arg6
                        arg6 = *(zx.q(zmm0[0]) + rsi_67)
                        float var_378_3[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_141)
                        uint64_t r11_6 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        uint64_t r14_15 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                        zmm0 = data_142fc95f0 & zmm12
                        arg5 = zmm8
                        zmm8 = *(zx.q(zmm0[0]) + rsi_67)
                        uint64_t r15_7 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                        uint64_t r10_11 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        uint64_t r8_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                        zmm0 = data_143442650 & zmm12
                        zmm4 = zmm6
                        float temp0_1234[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rsi_67), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_141))[0].q)
                        float temp0_1237[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_61), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbx_48))[0].q)
                        zmm6 = temp0_1234[0].q | temp0_1237[0].q << 0x40
                        zmm2 = data_143442660 & zmm12
                        zmm0 = *(zx.q(zmm2[0]) + rsi_67)
                        uint64_t rdx_117 = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                        uint32_t temp0_1239[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                        zmm1 = data_143442670 & zmm12
                        zmm11 = zx.o(*(zx.q(zmm1[0]) + rsi_67))
                        uint64_t r12_9 = zx.q(temp0_1239[0])
                        uint32_t (* rdi_63)[0x4] = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                        uint32_t var_368_1[0x4] = *(r15_7 + rax_141)
                        arg5 = _mm_add_epi64(arg5, zmm10)
                        zmm4 = _mm_add_epi64(zmm4, zmm10)
                        zmm14 = *(rdx_117 + rax_141)
                        zmm4 = _mm_add_epi64(zmm4, zmm7)
                        uint32_t var_348_4[0x4] = *(rdi_63 + rax_141)
                        zmm10 = _mm_shuffle_epi32(zmm2, 0xe7)
                        arg5 = _mm_add_epi64(arg5, zmm5)
                        zmm3 = _mm_shuffle_epi32(zmm12, 0x50) & arg5
                        zmm5 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm4
                        int64_t rax_142 = zmm3[0].q
                        uint32_t temp0_1248[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
                        zmm7 = zx.o(*(arg4 + rax_142))
                        zmm3 = zx.o(*(arg4 + temp0_1248[0].q))
                        int64_t rax_144 = zmm5.q
                        zmm5 = _mm_shuffle_epi32(zmm5, 0x4e)
                        zmm4 = zx.o(*(arg4 + rax_144))
                        zmm2 = zx.o(*(arg4 + zmm5.q))
                        uint64_t rax_146 = zx.q(zmm10[0])
                        uint64_t rdx_118 = zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                        zmm5 = *(r11_6 + rbp_61)
                        uint64_t rsi_68 = zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                        zmm10 = *(r14_15 + rbx_48)
                        zmm7 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm7, zmm3[0].q), 
                            _mm_unpacklo_epi32(zmm4, zmm2[0].q)[0].q)
                        zmm1 = _mm_srli_epi32(zmm7, 0x15)
                        zmm4 = data_143442440
                        zmm3 = _mm_mul_ps(
                            __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm4)), 
                                data_143442690), 
                            zmm6)
                        zmm6 = *(r10_11 + rbp_61)
                        zmm3 = _mm_add_ps(zmm3, zmm9)
                        zmm2 = _mm_add_epi32(_mm_srli_epi32(zmm7, 0xa) & data_143442480, zmm4)
                        arg5 = *(r8_5 + rbx_48)
                        rcx_72 = zx.q(temp0_1122)
                        zmm1 = zx.o(*(rdx_118 + rbp_61))
                        float var_388_1[0x4] = zx.o(*(rsi_68 + rbx_48))
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 != 0)
                            var_408 = zmm3[0]
                        
                        zmm9 = _mm_unpacklo_ps(*(r12_9 + rbp_61), (*(rax_146 + rbx_48))[0].q)
                        float temp0_1264[0x4] = _mm_unpacklo_ps(zmm0, zmm14[0].q)
                        float temp0_1265[0x4] = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_72.b & 2) != 0)
                            float var_404_1 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        
                        zmm5 = _mm_unpacklo_ps(zmm5, zmm10[0].q)
                        float temp0_1268[0x4] = __unpcklps_xmmps_memdq(arg6, var_378_3)
                        zmm0 = temp0_1264[0].q | zmm9.q << 0x40
                        float temp0_1269[0x4] = __divps_xmmps_memps(temp0_1265, data_143442690)
                        r12 = var_330
                        zmm14 = var_418_1
                        
                        if ((rcx_72.b & 4) != 0)
                            float var_400_1 = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                        
                        zmm7 &= data_143442680
                        arg6 = temp0_1268[0].q | zmm5.q << 0x40
                        float temp0_1271[0x4] = _mm_mul_ps(zmm0, temp0_1269)
                        
                        if ((rcx_72.b & 8) != 0)
                            float var_3fc_1 = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        
                        zmm7 = __paddd_xmmdq_memdq(zmm7, data_143442490)
                        float temp0_1274[0x4] = _mm_add_ps(arg6, temp0_1271)
                        
                        if (rdi_46 != 0)
                            var_3f8 = temp0_1274[0]
                        
                        zmm1 = __punpckldq_xmmdq_memdq(zmm1, var_388_1)
                        zmm11 = __punpckldq_xmmdq_memdq(zmm11, var_348_4)
                        float temp0_1277[0x4] = _mm_cvtepi32_ps(zmm7)
                        
                        if ((rcx_72.b & 2) != 0)
                            float var_3f4_2 = _mm_shuffle_epi32(temp0_1274, 0xe5)[0]
                        
                        float temp0_1279[0x4] = _mm_unpacklo_ps(zmm6, arg5[0].q)
                        zmm8 = __unpcklps_xmmps_memdq(zmm8, var_368_1)
                        zmm11 = _mm_unpacklo_epi64(zmm11, zmm1[0].q)
                        float temp0_1282[0x4] = __divps_xmmps_memps(temp0_1277, data_1434426a0)
                        
                        if ((rcx_72.b & 4) != 0)
                            float var_3f0_3 = _mm_shuffle_epi32(temp0_1274, 0x4e)[0]
                        
                        zmm8 = zmm8[0].q | temp0_1279[0].q << 0x40
                        zmm11 = _mm_mul_ps(zmm11, temp0_1282)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        zmm1 = data_142d3f670
                        
                        if ((rcx_72.b & 8) != 0)
                            float var_3ec_3 = _mm_shuffle_epi32(temp0_1274, 0xe7)[0]
                        
                        zmm8 = _mm_add_ps(zmm8, zmm11)
                        float temp0_1288[0x4] = _mm_sub_ps(zmm1, zmm3)
                        float temp0_1289[0x4] = _mm_mul_ps(temp0_1274, temp0_1274)
                        
                        if (rdi_46 != 0)
                            var_3e8 = zmm8[0]
                        
                        float temp0_1290[0x4] = _mm_sub_ps(temp0_1288, temp0_1289)
                        float temp0_1291[0x4] = _mm_mul_ps(zmm8, zmm8)
                        
                        if ((rcx_72.b & 2) == 0)
                            zmm1 = _mm_sub_ps(temp0_1290, temp0_1291)
                            zmm0 = zx.o(0)
                            
                            if ((rcx_72.b & 4) != 0)
                                goto label_140146754
                            
                            goto label_140146047
                        
                        float var_3e4_5 = _mm_shuffle_epi32(zmm8, 0xe5)[0]
                        zmm1 = _mm_sub_ps(temp0_1290, temp0_1291)
                        zmm0 = zx.o(0)
                        float var_3dc_4
                        
                        if ((rcx_72.b & 4) == 0)
                        label_140146047:
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3dc_4 = _mm_shuffle_epi32(zmm8, 0xe7)[0]
                        else
                        label_140146754:
                            float var_3e0_5 = _mm_shuffle_epi32(zmm8, 0x4e)[0]
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3dc_4 = _mm_shuffle_epi32(zmm8, 0xe7)[0]
                        goto label_140146778
                    case 4
                        zmm8 = _mm_add_epi64(zmm8, arg6)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm7)
                        zmm8 = _mm_add_epi64(zmm8, zmm5)
                        zmm0 = _mm_shuffle_epi32(zmm12, 0x50) & zmm8
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm6
                        int64_t rax_147 = zmm0[0].q
                        int64_t rdx_119 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        int64_t rbp_62 = zmm1[0].q
                        int64_t rbx_49 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_147)), 
                                zx.o(*(arg4 + rdx_119))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_62)), zx.o(*(arg4 + rbx_49))[0].q)[
                            0].q)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 0xa)
                        zmm4 = data_143442440
                        float temp0_1309[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm4))
                        zmm3 = data_143442690
                        float temp0_1310[0x4] = _mm_div_ps(temp0_1309, zmm3)
                        rcx_72 = zx.q(temp0_1122)
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 == 0)
                            zmm2 &= data_143442480
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_1401467f9
                            
                            goto label_140146112
                        
                        var_408 = temp0_1310[0]
                        zmm2 &= data_143442480
                        
                        if ((rcx_72.b & 2) != 0)
                        label_1401467f9:
                            int32_t var_404_6 = _mm_shuffle_epi32(temp0_1310, 0xe5).d
                            zmm2 = _mm_add_epi32(zmm2, zmm4)
                            
                            if ((rcx_72.b & 4) == 0)
                                goto label_14014611f
                            
                            goto label_140146814
                        
                    label_140146112:
                        zmm2 = _mm_add_epi32(zmm2, zmm4)
                        
                        if ((rcx_72.b & 4) == 0)
                        label_14014611f:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_14014682e
                            
                            goto label_14014612b
                        
                    label_140146814:
                        float var_400_5 = _mm_shuffle_epi32(temp0_1310, 0x4e)[0]
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_72.b & 8) != 0)
                        label_14014682e:
                            float var_3fc_5 = _mm_shuffle_epi32(temp0_1310, 0xe7)[0]
                            zmm2 = _mm_div_ps(zmm2, zmm3)
                            
                            if (rdi_46 == 0)
                                goto label_140146137
                            
                            goto label_140146843
                        
                    label_14014612b:
                        zmm2 = _mm_div_ps(zmm2, zmm3)
                        
                        if (rdi_46 == 0)
                        label_140146137:
                            zmm0 &= data_143442680
                            
                            if ((rcx_72.b & 2) != 0)
                                goto label_140146862
                            
                            goto label_140146148
                        
                    label_140146843:
                        var_3f8 = zmm2[0]
                        zmm0 &= data_143442680
                        uint32_t var_3f0_4
                        
                        if ((rcx_72.b & 2) == 0)
                        label_140146148:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rcx_72.b & 4) != 0)
                                var_3f0_4 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        else
                        label_140146862:
                            uint32_t var_3f4_6 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rcx_72.b & 4) != 0)
                                var_3f0_4 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        float temp0_1316[0x4] = _mm_cvtepi32_ps(zmm0)
                        float temp0_1317[0x4] = _mm_mul_ps(temp0_1310, temp0_1310)
                        zmm3 = data_142d3f670
                        
                        if ((rcx_72.b & 8) != 0)
                            float var_3ec_4 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        float temp0_1319[0x4] = __divps_xmmps_memps(temp0_1316, data_1434426a0)
                        zmm3 = _mm_sub_ps(zmm3, temp0_1317)
                        float temp0_1321[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if (rdi_46 != 0)
                            var_3e8 = temp0_1319[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_1321)
                        float temp0_1323[0x4] = _mm_mul_ps(temp0_1319, temp0_1319)
                        
                        if ((rcx_72.b & 2) == 0)
                            zmm3 = _mm_sub_ps(zmm3, temp0_1323)
                            zmm1 = zx.o(0)
                            
                            if ((rcx_72.b & 4) != 0)
                                goto label_1401468a3
                            
                            goto label_1401461bf
                        
                        float var_3e4_6 = _mm_shuffle_epi32(temp0_1319, 0xe5)[0]
                        zmm3 = _mm_sub_ps(zmm3, temp0_1323)
                        zmm1 = zx.o(0)
                        
                        if ((rcx_72.b & 4) != 0)
                        label_1401468a3:
                            float var_3e0_6 = _mm_shuffle_epi32(temp0_1319, 0x4e)[0]
                            zmm1 = _mm_cmpeq_ps(zmm1, zmm3, 1)
                            zmm2 = _mm_sqrt_ps(zmm3)
                            
                            if ((rcx_72.b & 8) == 0)
                                goto label_1401461cf
                            
                            goto label_1401468c1
                        
                    label_1401461bf:
                        zmm1 = _mm_cmpeq_ps(zmm1, zmm3, 1)
                        zmm2 = _mm_sqrt_ps(zmm3)
                        
                        if ((rcx_72.b & 8) == 0)
                        label_1401461cf:
                            zmm1 = _mm_and_ps(zmm1, zmm2)
                            
                            if (rdi_46 != 0)
                                goto label_1401468d6
                            
                            goto label_1401461db
                        
                    label_1401468c1:
                        float var_3dc_5 = _mm_shuffle_epi32(temp0_1319, 0xe7)[0]
                        zmm1 = _mm_and_ps(zmm1, zmm2)
                        
                        if (rdi_46 != 0)
                        label_1401468d6:
                            var_3d8 = zmm1[0]
                            
                            if ((rcx_72.b & 2) == 0)
                                goto label_1401461e4
                            
                            goto label_1401468ed
                        
                    label_1401461db:
                        
                        if ((rcx_72.b & 2) == 0)
                        label_1401461e4:
                            
                            if ((rcx_72.b & 4) != 0)
                                goto label_140146904
                            
                            goto label_1401461ed
                        
                    label_1401468ed:
                        float var_3d4_3 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        float var_3cc_3
                        
                        if ((rcx_72.b & 4) == 0)
                        label_1401461ed:
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_3 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                        else
                        label_140146904:
                            float var_3d0_3 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            if ((rcx_72.b & 8) != 0)
                                var_3cc_3 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    case 5
                        zmm8 = _mm_add_epi64(zmm8, arg6)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, arg6), zmm7)
                        zmm8 = _mm_add_epi64(zmm8, zmm5)
                        zmm0 = _mm_shuffle_epi32(zmm12, 0x50) & zmm8
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm6
                        int64_t rax_148 = zmm0[0].q
                        int64_t rdx_120 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        int64_t rbp_63 = zmm1[0].q
                        int64_t rbx_50 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                        zmm2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_148)), 
                                zx.o(*(arg4 + rdx_120))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_63)), zx.o(*(arg4 + rbx_50))[0].q)[
                            0].q)
                        zmm0 = _mm_srli_epi32(zmm2, 0x15)
                        zmm1 = _mm_srli_epi32(zmm2, 5)
                        zmm6 = data_143442600
                        zmm4 = data_143442610
                        zmm3 = (zmm0 & zmm4) | (zmm1 & zmm6)
                        zmm1 = data_143442320
                        zmm8 = data_143442330
                        zmm0 = _mm_add_epi32(zmm0 & zmm1, zmm8) | zmm3
                        rcx_72 = zx.q(temp0_1122)
                        rdi_46 = rcx_72 & 1
                        
                        if (rdi_46 != 0)
                            var_408 = zmm0[0]
                        
                        zmm7 = _mm_srli_epi32(zmm2, 0xa)
                        uint32_t temp0_1343[0x4] = _mm_slli_epi32(zmm2, 6)
                        
                        if ((rcx_72.b & 2) != 0)
                            int32_t var_404_2 = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        zmm3 = temp0_1343 & zmm6
                        zmm4 &= zmm7
                        zmm1 &= zmm7
                        
                        if ((rcx_72.b & 4) == 0)
                            zmm1 = _mm_add_epi32(zmm1, zmm8)
                            zmm3 |= zmm4
                            
                            if ((rcx_72.b & 8) != 0)
                                goto label_14014694e
                            
                            goto label_140146316
                        
                        int32_t var_400_6 = _mm_shuffle_epi32(zmm0, 0x4e).d
                        zmm1 = _mm_add_epi32(zmm1, zmm8)
                        zmm3 |= zmm4
                        
                        if ((rcx_72.b & 8) != 0)
                        label_14014694e:
                            float var_3fc_6 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                            zmm3 |= zmm1
                            
                            if (rdi_46 == 0)
                                goto label_140146327
                            
                            goto label_140146964
                        
                    label_140146316:
                        zmm3 |= zmm1
                        float var_3f4_3
                        
                        if (rdi_46 != 0)
                        label_140146964:
                            var_3f8 = zmm3[0]
                            zmm1 = _mm_slli_epi32(zmm2, 0x11)
                            
                            if ((rcx_72.b & 2) != 0)
                                var_3f4_3 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        else
                        label_140146327:
                            zmm1 = _mm_slli_epi32(zmm2, 0x11)
                            
                            if ((rcx_72.b & 2) != 0)
                                var_3f4_3 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        zmm1 &= data_143442630
                        zmm4 = data_143442620 & zmm2
                        zmm2 &= data_143442640
                        
                        if ((rcx_72.b & 4) != 0)
                            int32_t var_3f0_5 = _mm_shuffle_epi32(zmm3, 0x4e).d
                        
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                        zmm1 |= zmm2
                        float temp0_1350[0x4] = _mm_mul_ps(zmm0, zmm0)
                        zmm2 = data_142d3f670
                        
                        if ((rcx_72.b & 8) != 0)
                            int32_t var_3ec_5 = _mm_shuffle_epi32(zmm3, 0xe7).d
                        
                        zmm1 |= zmm4
                        float temp0_1352[0x4] = _mm_sub_ps(zmm2, temp0_1350)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdi_46 != 0)
                            var_3e8 = zmm1[0]
                        
                        float temp0_1354[0x4] = _mm_sub_ps(temp0_1352, zmm3)
                        float temp0_1355[0x4] = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rcx_72.b & 2) != 0)
                            uint32_t var_3e4_2 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        float temp0_1357[0x4] = _mm_sub_ps(temp0_1354, temp0_1355)
                        
                        if ((rcx_72.b & 4) != 0)
                            uint32_t var_3e0_2 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_1357, 1)
                        zmm2 = _mm_sqrt_ps(temp0_1357)
                        
                        if ((rcx_72.b & 8) == 0)
                            goto label_140145c29
                        
                        goto label_140145c20
            
            zmm4 = var_408.o
            zmm0 = var_3f8.o
            zmm11 = var_3e8.o
            zmm10 = var_3d8.o
            zmm7 = _mm_mul_ps(var_498, zmm4)
            float temp0_1413[0x4] = _mm_add_ps(_mm_mul_ps(var_488, zmm0), zmm7)
            zmm7 = _mm_add_ps(_mm_mul_ps(var_478, zmm11), temp0_1413)
            float temp0_1417[0x4] = _mm_add_ps(_mm_mul_ps(var_468, zmm10), zmm7)
            float temp0_1418[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_1417, 2)
            zmm7 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), temp0_1417, 6), data_142d3f7e0)
            zmm8 = data_142d3f670
            zmm6 = _mm_or_ps(_mm_and_ps(temp0_1418, zmm8), zmm7)
            float temp0_1423[0x4] = _mm_mul_ps(zmm4, var_358_3)
            float temp0_1424[0x4] = _mm_mul_ps(zmm0, var_358_3)
            zmm11 = _mm_mul_ps(zmm11, var_358_3)
            float temp0_1426[0x4] = _mm_mul_ps(zmm10, var_358_3)
            zmm7 = _mm_mul_ps(_mm_sub_ps(zmm8, var_358_3), zmm6)
            zmm3 = _mm_add_ps(_mm_mul_ps(var_498, zmm7), temp0_1423)
            zmm5 = _mm_add_ps(_mm_mul_ps(var_488, zmm7), temp0_1424)
            float temp0_1434[0x4] = _mm_add_ps(_mm_mul_ps(var_478, zmm7), zmm11)
            zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, var_468), temp0_1426)
            uint32_t var_228_1[0x4] = zmm3
            uint128_t var_218_1 = zmm5
            uint128_t var_1f8_1 = zmm7
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            zmm5 = _mm_mul_ps(zmm5, zmm5)
            float temp0_1440[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1434, temp0_1434), zmm3)
            zmm7 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7, zmm7), zmm5), temp0_1440)
            zmm2 = data_142d3f640
            zmm3 = _mm_cmpeq_ps(data_142d3f5c0, zmm7, 2)
            float temp0_1445[0x4] = _mm_rsqrt_ps(zmm7)
            zmm7 = _mm_mul_ps(zmm7, zmm2)
            uint128_t var_128_1 = zmm7
            uint128_t var_118_1 = zmm7
            uint128_t var_108_1 = zmm7
            uint128_t var_f8_1 = zmm7
            float temp0_1451[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(temp0_1445, temp0_1445), zmm7)), 
                    temp0_1445), 
                temp0_1445)
            float temp0_1456[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(temp0_1451, temp0_1451), zmm7)), 
                    temp0_1451), 
                temp0_1451)
            float temp0_1457[0x4] = _mm_mul_ps(var_228_1, temp0_1456)
            float temp0_1458[0x4] = _mm_mul_ps(var_218_1, temp0_1456)
            float temp0_1459[0x4] = _mm_mul_ps(temp0_1434, temp0_1456)
            float temp0_1460[0x4] = __mulps_xmmps_memps(temp0_1456, var_1f8_1)
            zmm0 = _mm_and_ps(temp0_1457, zmm3)
            
            if (rdi_46 != 0)
                var_498[0] = zmm0[0]
            
            zmm5 = var_2e8_2
            
            if ((rcx_72.b & 2) != 0)
                var_498[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                
                if ((rcx_72.b & 4) != 0)
                label_140146e32:
                    var_498[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                    
                    if ((rcx_72.b & 8) == 0)
                        goto label_140146c5e
                    
                    goto label_140146e49
            else if ((rcx_72.b & 4) != 0)
                goto label_140146e32
            
            if ((rcx_72.b & 8) != 0)
            label_140146e49:
                var_498[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                zmm1 = _mm_and_ps(temp0_1458, zmm3)
                
                if (rdi_46 != 0)
                    var_488.d = zmm1[0]
            else
            label_140146c5e:
                zmm1 = _mm_and_ps(temp0_1458, zmm3)
                
                if (rdi_46 != 0)
                    var_488.d = zmm1[0]
            
            if ((rcx_72.b & 2) != 0)
                var_488:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                
                if ((rcx_72.b & 4) != 0)
                label_140146e79:
                    var_488:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                    
                    if ((rcx_72.b & 8) == 0)
                        goto label_140146c87
                    
                    goto label_140146e8d
            else if ((rcx_72.b & 4) != 0)
                goto label_140146e79
            
            if ((rcx_72.b & 8) != 0)
            label_140146e8d:
                var_488:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                zmm4 = _mm_and_ps(temp0_1459, zmm3)
                
                if (rdi_46 != 0)
                    var_478[0] = zmm4[0]
            else
            label_140146c87:
                zmm4 = _mm_and_ps(temp0_1459, zmm3)
                
                if (rdi_46 != 0)
                    var_478[0] = zmm4[0]
            
            if ((rcx_72.b & 2) == 0)
                if ((rcx_72.b & 4) != 0)
                    goto label_140146ebd
                
                goto label_140146ca7
            
            var_478[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
            
            if ((rcx_72.b & 4) != 0)
            label_140146ebd:
                var_478[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                zmm2 = _mm_and_ps(temp0_1460, zmm3)
                zmm3 = _mm_andnot_ps(zmm3, zmm8)
                
                if ((rcx_72.b & 8) == 0)
                    goto label_140146cb7
                
                goto label_140146ed8
            
        label_140146ca7:
            zmm2 = _mm_and_ps(temp0_1460, zmm3)
            zmm3 = _mm_andnot_ps(zmm3, zmm8)
            
            if ((rcx_72.b & 8) != 0)
            label_140146ed8:
                var_478[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rdi_46 != 0)
                    var_468.d = zmm2[0]
            else
            label_140146cb7:
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rdi_46 != 0)
                    var_468.d = zmm2[0]
            
            if ((rcx_72.b & 2) == 0)
                if ((rcx_72.b & 4) != 0)
                    goto label_140146f08
                
                goto label_140146cd7
            
            var_468:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
            
            if ((rcx_72.b & 4) == 0)
            label_140146cd7:
                
                if ((rcx_72.b & 8) != 0)
                    var_468:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
            else
            label_140146f08:
                var_468:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                
                if ((rcx_72.b & 8) != 0)
                    var_468:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
    
    zmm14 = __punpcklqdq_xmmdq_memdq(zmm14, var_298_4)
    zmm0 = var_498
    zmm1 = var_488
    zmm3 = var_468
    float temp0_1469[0x4] = _mm_unpacklo_ps(var_478, zmm3[0].q)
    float temp0_1470[0x4] = _mm_unpackhi_ps(var_478, zmm3)
    zmm3 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    float temp0_1472[0x4] = _mm_unpackhi_ps(zmm0, zmm1)
    float var_1e8[0x4] = zmm3[0].q | temp0_1469[0].q << 0x40
    uint32_t var_1d8_1[0x4] = _mm_unpackhi_pd(zmm3, temp0_1469[0].q)
    float var_1c8_1[0x4] = temp0_1472[0].q | temp0_1470[0].q << 0x40
    float var_1b8_1[0x4] = _mm_unpackhi_pd(temp0_1472, temp0_1470[0].q)
    i = zx.q(_mm_movemask_ps(zmm5))
    
    do
        uint64_t rcx_73
        uint64_t rflags_1
        
        if (i == 0)
            rcx_73 = 0x40
        else
            rcx_73, rflags_1 = _bit_scan_forward(i)
        uint32_t var_238[0x4] = zmm14
        r12[sx.q(var_238[zx.q(rcx_73.d) & 3]) * 3] = (&var_1e8)[rcx_73]
        i &= rol.q(-2, rcx_73.b)
    while (i != 0)

return i
