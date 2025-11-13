// 函数: sub_142177670
// 地址: 0x142177670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint64_t r14
r14.b = 0

if ((arg2[5].b & 1) != 0)
    r14.b = *(arg2 + 0xe4) u>> 1
    r14.b &= 1

void* var_d8 = *arg4
int32_t var_174 = 0
(*(*arg1 + 0x268))(arg1, arg2, sub_142452380(), &var_d8, &var_174)
char result

if ((*(arg2 + 0x29) & 1) != 0)
    result = 0
else
    int64_t r15_1 = data_143f4d0a8
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    int32_t r12_1 = *(r15_1 + (rcx_1 << 2))
    int32_t var_130
    
    if (r12_1 s<= 0)
        void* rcx_2 = arg1[0x62]
        
        if (rcx_2 != 0 && var_174 u> 0)
            arg5 = sub_141f77ab0(rcx_2 + 0xa8, &var_130, &var_174, nullptr)
    
    void* const r15_2 = var_d8
    *(arg3 + 0x78) = var_174
    void* rax_6
    int64_t rax_7
    void* rdx_2
    
    if (r15_2 != 0)
        rax_6 = sub_142452380()
        rdx_2 = *(r15_2 + 0x10)
        rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (r15_2 == 0 || rax_7.d s> *(rdx_2 + 0x38)
            || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        r15_2 = nullptr
    
    *arg4 = r15_2
    result = (*(*arg2 + 0x30))(arg2)
    int32_t rcx_6 = var_174
    
    if (result == 0)
    label_1421777fb:
        
        if (r12_1 s<= 0)
            goto label_14217782a
        
        void* rax_10 = arg1[0x62]
        
        if (rax_10 == 0)
            goto label_14217782a
        
        if (rcx_6 == 0)
            rcx_6.b = 0
        else
            arg5 = sub_141f77ab0(rax_10 + 0xa8, &var_130, &var_174, nullptr)
            rcx_6 = var_174
        label_14217782a:
            
            if (rcx_6 == 0 || (rcx_6.b & 1) != 0)
                rcx_6.b = 0
            else
                rcx_6.b = 1
        
        char rax_11 = arg2[5].b
        
        if (rcx_6.b == 0)
            if ((rax_11 & 1) != 0 && *arg4 == 0)
                if (*(arg1[0x26] + 0x58) != 0)
                    sub_14249b2a0()
                
                if (r12_1 s> 0)
                    void* rcx_36 = arg1[0x62]
                    
                    if (rcx_36 != 0)
                        sub_141fc3c20(rcx_36 + 0xa8, &var_174)
            
            result = 0
        else
            void* var_138 = nullptr
            void* var_e0 = nullptr
            int64_t var_168
            float var_160
            int64_t* var_158
            float var_128
            int32_t var_124
            float var_120
            int64_t var_110
            float var_108
            int64_t var_100
            float var_f8
            int64_t var_f0
            int32_t var_e8
            float zmm2[0x4]
            uint32_t zmm6[0x4]
            
            if ((rax_11 & 2) != 0)
                void* rax_12 = sub_141dcb240(*arg4)
                void* rax_13
                
                if (rax_12 == 0)
                    rax_13 = var_138
                else
                    rax_13 = *(rax_12 + 0x200)
                    var_138 = rax_13
                
                if (rax_13 == 0)
                    void* rax_14
                    rax_14, arg5, zmm6 = sub_140d209c0(*arg4)
                    var_138 = rax_14
                
                void* rax_15 = sub_141dc9840(*arg4)
                int64_t* r8_4 = *arg4
                var_e0 = rax_15
                void* r15_3 = r8_4[0x26]
                float var_150
                float rax_24
                float zmm0_1[0x4]
                
                if (r15_3 == 0)
                    arg5.o = data_143dbb1fc
                    rax_24 = data_143dbb210
                    var_128 = data_143dbb1f8[0]
                    var_124 = arg5.d
                    arg5.o = zx.o(data_143dbb208)
                    var_120 = data_143dbb200[0]
                    var_158 = (arg5.o).q
                else
                    zmm2 = *(r15_3 + 0x1d0)
                    arg5.o = zmm2
                    var_150 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                    arg5.o = _mm_shuffle_ps(arg5.o, zmm2, 0x55)
                    var_168 = (_mm_unpacklo_ps(zmm2, arg5.q)).q
                    float var_160_1 = var_150
                    int64_t* rax_17
                    rax_17, arg5 = sub_14200cdd0(&var_158, &var_168, r8_4)
                    var_128.q = *rax_17
                    var_120 = rax_17[1].d
                    void* r14_1 = *(*arg4 + 0x130)
                    float rax_23
                    
                    if (r14_1 == 0)
                        zmm0_1 = zx.o(data_143dbb208)
                        rax_23 = data_143dbb210
                    else
                        arg5.o = *(r14_1 + 0x1c0)
                        var_168.o = arg5.o
                        
                        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(arg5.o, *(r14_1 + 0x180), 4))
                                != 0)
                            *(r14_1 + 0x180) = arg5.o
                            int32_t* rax_21
                            rax_21, arg5, zmm6 = sub_140adf5d0(&var_168, &var_158)
                            *(r14_1 + 0x190) = *rax_21
                            *(r14_1 + 0x198) = rax_21[2]
                        
                        zmm0_1 = zx.o(*(r14_1 + 0x190))
                        rax_23 = *(r14_1 + 0x198)
                    
                    var_160 = rax_23
                    var_168 = zmm0_1.q
                    rax_24 = var_160
                    var_158 = var_168
                
                var_110 = var_158
                var_108 = rax_24
                float rax_27
                
                if (r15_3 == 0)
                    zmm0_1 = zx.o(data_14399f668.q)
                    rax_27 = data_14399f670
                else
                    void* rcx_15 = *(*arg4 + 0x130)
                    
                    if (rcx_15 == 0)
                        var_168.d = 0x3f800000
                        var_168:4.d = 0x3f800000
                        var_160 = 1f
                        zmm0_1 = zx.o(var_168)
                        rax_27 = 1f
                    else
                        arg5.o = *(rcx_15 + 0x1e0)
                        var_168.d = arg5.d
                        var_168:4.d = _mm_shuffle_ps(arg5.o, arg5.o, 0x55)[0]
                        arg5.o = _mm_shuffle_ps(arg5.o, arg5.o, 0xaa)
                        var_160 = arg5.d
                        zmm0_1 = zx.o(var_168)
                        rax_27 = var_160
                
                var_158 = zmm0_1.q
                var_100 = var_158
                var_f8 = rax_27
                int64_t* rax_30
                
                if (r15_3 == 0)
                    var_150 = data_143dbb200
                    rax_30 = &var_158
                    var_158 = data_143dbb1f8.q
                else
                    int64_t* rcx_16 = *arg4
                    rax_30 = (*(*rcx_16 + 0x2f0))(rcx_16, &var_158)
                
                var_f0 = *rax_30
                var_e8 = rax_30[1].d
            
            int32_t var_118 = 0
            (*(*arg1 + 0x268))(arg1, arg2, sub_140d41340(), &var_138, &var_118)
            uint64_t rax_34
            
            if ((arg2[5].b & 2) != 0)
                (*(*arg1 + 0x268))(arg1, arg2, sub_142527690(), &var_e0, 0)
            else
                rax_34 = arg1[0x26]
                
                if (rax_34 != 0 && *(rax_34 + 0x1358) u>= 5)
                    (*(*arg1 + 0x268))(arg1, arg2, sub_142527690(), &var_e0, 0)
            
            int64_t rcx_19 = sx.q(var_118)
            
            if (rcx_19.d != 0 && var_138 == 0)
                int64_t* r10_3 = arg1[0x62]
                *(r10_3 + 0x34)
                
                if (r10_3[1].d != *(r10_3 + 0x34))
                    void* rdx_9 = r10_3[8]
                    void* r9_3 = &r10_3[7]
                    
                    if (rdx_9 != 0)
                        r9_3 = rdx_9
                    
                    rax_34 = zx.q(*(r9_3 + (((sx.q(r10_3[9].d) - 1) & rcx_19) << 2)))
                    
                    if (rax_34.d != 0xffffffff)
                        int64_t r8_10 = *r10_3
                        
                        do
                            rax_34 = sx.q(rax_34.d) * 0x38
                            
                            if (*(rax_34 + r8_10) == rcx_19.d)
                                break
                            
                            rax_34 = zx.q(*(rax_34 + r8_10 + 0x30))
                        while (rax_34.d != 0xffffffff)
            
            bool cond:2_1 = (arg2[5].b & 2) == 0
            char r9_4 = data_143a2ec48
            char var_175 = 0
            bool var_178 = false
            char var_176 = 0
            char var_177 = 0
            
            if (not(cond:2_1))
                zmm2 = 0x3c23d70a
                uint32_t var_58_1[0x4] = zmm6
                float zmm3[0x4]
                
                zmm3 = r9_4 == 0 ? 0x38d1b717 : 0x3c23d70a
                
                uint32_t zmm0_2[0x4] = var_128
                zmm6 = data_143dbb1f8
                arg5.o = 0x7fffffff
                zmm0_2[0] = zmm0_2[0] f- zmm6[0]
                float zmm5_1[0x4] = data_143dbb1fc
                
                if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                    rax_34.b = 1
                else
                    zmm0_2 = var_124
                    zmm0_2[0] = zmm0_2[0] f- zmm5_1[0]
                    
                    if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                        rax_34.b = 1
                    else
                        zmm0_2 = var_120
                        zmm0_2[0] = zmm0_2[0] f- data_143dbb200
                        
                        if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                            rax_34.b = 1
                        else
                            rax_34.b = 0
                
                bool cond:3_1 = data_143a2ec49 == 0
                var_175 = rax_34.b
                
                zmm3 = cond:3_1 ? 0x38d1b717 : 0x3c23d70a
                
                zmm0_2 = var_f0.d
                zmm0_2[0] = zmm0_2[0] f- zmm6[0]
                
                if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                    rax_34.b = 1
                else
                    zmm0_2 = var_f0:4.d
                    zmm0_2[0] = zmm0_2[0] f- zmm5_1[0]
                    
                    if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                        rax_34.b = 1
                    else
                        zmm0_2 = var_e8
                        zmm0_2[0] = zmm0_2[0] f- data_143dbb200
                        
                        if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm3[0])
                            rax_34.b = 1
                        else
                            rax_34.b = 0
                
                bool cond:5_1 = data_143f4d269 != 0
                var_177 = rax_34.b
                
                if (not(cond:5_1))
                    zmm2 = 0x38d1b717
                
                zmm0_2 = var_100.d
                zmm0_2[0] = zmm0_2[0] f- data_14399f668
                
                if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm2[0])
                    rax_34.b = 1
                else
                    zmm0_2 = var_100:4.d
                    zmm0_2[0] = zmm0_2[0] f- data_14399f66c
                    
                    if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm2[0])
                        rax_34.b = 1
                    else
                        zmm0_2 = var_f8
                        zmm0_2[0] = zmm0_2[0] f- data_14399f670
                        
                        if (_mm_and_ps(zmm0_2, 0x7fffffff)[0] f> zmm2[0])
                            rax_34.b = 1
                        else
                            rax_34.b = 0
                
                zmm5_1 = data_143f4d230
                arg5.o = var_108
                zmm6 = data_143f4d210
                float zmm4_1[0x4] = var_110.d
                zmm3 = data_143f4d240
                var_130 = 0x3a83126f
                zmm0_2 = _mm_unpacklo_ps(var_110:4.d, 0)
                zmm4_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, arg5.q), zmm0_2[0].q)
                var_176 = rax_34.b
                zmm2 = _mm_div_ps(zmm4_1, zmm5_1)
                zmm3 = _mm_cmpeq_ps(zmm3, _mm_and_ps(zmm2, zmm6), 2)
                arg5.o = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
                zmm0_2 = _mm_and_ps(zmm5_1, zmm6)
                zmm3 = _mm_and_ps(zmm3, zmm2 ^ arg5.o) ^ arg5.o
                arg5.o = zx.o(0)
                arg5.o = _mm_sub_ps(zx.o(0), zmm0_2)
                arg5.o = _mm_max_ps(arg5.o, 
                    _mm_min_ps(_mm_sub_ps(zmm4_1, _mm_mul_ps(zmm3, zmm5_1)), zmm0_2))
                zmm3 = _mm_add_ps(arg5.o, zmm5_1)
                zmm2 = _mm_cmpeq_ps(zx.o(0), arg5.o, 2)
                zmm0_2 = zmm3 ^ arg5.o
                arg5.o = data_143f4d220
                zmm3 ^= _mm_and_ps(zmm0_2, zmm2)
                zmm0_2 = _mm_sub_ps(zmm3, zmm5_1)
                arg5.o = _mm_cmpeq_ps(arg5.o, zmm3, 1)
                arg5.o = _mm_and_ps(arg5.o, zmm0_2 ^ zmm3)
                zmm0_2 = var_130
                var_178 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), 
                    _mm_and_ps(zmm3 ^ arg5.o, zmm6), 1)) != 0
            
            var_158 = arg1
            void var_170
            void* var_148_1 = &var_170
            int64_t* var_150_1 = arg2
            int512_t zmm1
            int512_t zmm3_1
            zmm1, zmm3_1 = sub_14215e3c0(&var_158, &var_128, &data_143dbb1f8, r9_4, arg5, &var_175)
            (*(*arg2 + 0x158))(arg2, &var_178, 1)
            
            if (var_178 == 0)
                int32_t rax_39 = data_143dbb210
                var_110 = data_143dbb208
                int32_t var_108_1 = rax_39
            else
                zmm1 = sub_140adcbf0(&var_110, arg2, arg1, &var_170, zmm1, zmm3_1)
            
            int512_t zmm1_1 =
                sub_14215e3c0(&var_158, &var_100, &data_14399f668, data_143f4d269, zmm1, &var_176)
            sub_14215e3c0(&var_158, &var_f0, &data_143dbb1f8, data_143a2ec49, zmm1_1, &var_177)
            
            if ((arg2[5].b & 1) == 0 || *arg4 != 0 || var_138 == 0)
                result = 0
            else
                void* const rbx_1 = var_e0
                void* rax_40
                int64_t rax_41
                void* rdx_16
                
                if (rbx_1 != 0)
                    rax_40 = sub_142527690()
                    rdx_16 = *(rbx_1 + 0x10)
                    rax_41 = sx.q(*(rax_40 + 0x38))
                
                if (rbx_1 == 0 || rax_41.d s> *(rdx_16 + 0x38)
                        || *(*(rdx_16 + 0x30) + (rax_41 << 3)) != rax_40 + 0x30)
                    rbx_1 = nullptr
                label_142177ecd:
                    void var_d0
                    sub_142427eb0(&var_d0)
                    void* r14_2 = var_138
                    
                    if (r14_2 == 0)
                        int64_t var_c8_2 = 0
                    else
                        void* rax_44 = sub_142452380()
                        void* rdx_17 = *(r14_2 + 0x10)
                        int64_t rax_45 = sx.q(*(rax_44 + 0x38))
                        
                        if (rax_45.d s> *(rdx_17 + 0x38))
                            var_c8_2 = 0
                        else
                            void* var_c8_1 = r14_2
                            
                            if (*(*(rdx_17 + 0x30) + (rax_45 << 3)) != rax_44 + 0x30)
                                var_c8_2 = 0
                    
                    char var_a7
                    char var_a7_1 = var_a7 | 3
                    void* const var_b0_1 = rbx_1
                    char var_a8_1 = 1
                    void* rbx_2 = *(*(arg1[0x26] + 0x58) + 0x140)
                    sub_14200cbe0(&var_168, &var_128, rbx_2 + 0x538)
                    sub_140ade170(&var_110, &var_158)
                    uint128_t zmm0_4 = var_158.o
                    void* rax_48 = var_138
                    float zmm3_2[0x4] = _mm_unpacklo_ps(var_168.d, var_160)
                    uint128_t var_98 = zmm0_4
                    zmm0_4 = _mm_unpacklo_ps(var_168:4.d, 0)
                    float zmm2_1[0x4] = data_14399f66c
                    float var_88_1[0x4] = _mm_unpacklo_ps(zmm3_2, zmm0_4.q)
                    float var_78_1[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
                        _mm_unpacklo_ps(zmm2_1, 0)[0].q)
                    int64_t* rax_49 = sub_1420efba0(rbx_2, *(rax_48 + 0x10), &var_98, &var_d0)
                    *arg4 = rax_49
                    int64_t* r8_16 = rax_49
                    
                    if (rax_49 == 0)
                        result = 0
                    else
                        if (var_177 != 0)
                            (*(*rax_49 + 0x430))(r8_16, &var_f0, r8_16)
                            r8_16 = *arg4
                        
                        if (var_176 != 0)
                            var_158 = var_100
                            var_150_1.d = var_f8
                            sub_141dd71d0(r8_16, &var_158)
                            r8_16 = *arg4
                        
                        sub_142173190(arg1[0x62], &var_174, r8_16)
                        result = 1
                else
                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(rbx_1) != 0)
                        goto label_142177ecd
                    
                    result = 0
    else
        if (rcx_6 == 0 || (rcx_6.b & 1) != 0)
            result = 0
        else
            result = 1
        
        if (result == 0)
            goto label_1421777fb
        
        if (r14.b == 0)
            *(arg2 + 0x29) |= 1
        
        result = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
