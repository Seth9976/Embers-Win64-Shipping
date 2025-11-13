// 函数: sub_1420df520
// 地址: 0x1420df520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t zmm0 = data_143dbb1f8.q
int64_t* var_190 = arg6
void* var_168 = arg2
*arg5 = zmm0
arg5[1].d = data_143dbb200
int128_t zmm6 = *data_143f48220
int128_t* result

if (arg1 == 0 || arg3 == 0)
    result.b = 0
else
    int64_t rax_4 = *arg3
    uint64_t rdi
    rdi.b = 0
    int64_t r12
    r12.b = 1
    int32_t r14_1 = 0
    int64_t var_158 = 0
    int32_t var_150_1 = 0
    int32_t rax_5 = (*(rax_4 + 0x4d8))(arg3)
    zmm6 ^= data_142d3f780
    int32_t var_118
    (*(*arg3 + 0x720))(arg3, &var_118, zmm6.d)
    int32_t* var_1b0
    void* var_1a8_1
    void* var_1a0_1
    char var_198
    float var_178[0x4]
    void var_148
    void var_f8
    char rax_14
    TEB* gsbase
    float zmm1_1[0x4]
    
    if (var_118 != 1)
    label_1420df737:
        
        if (data_143f48430
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f48430)
            
            if (data_143f48430 == 0xffffffff)
                sub_140b58170(&data_143f48428, 
                    "ComponentEncroachesBlockingGeometry_WithAdjustment", 1)
                _Init_thread_footer(&data_143f48430)
        
        sub_141eb54c0(&var_f8, data_143f48428, &var_198, 0, var_168)
        sub_142259c00(&var_148)
        sub_142277d10(&var_148, 2)
        (*(*arg3 + 0x718))(arg3, &var_f8, &var_148)
        sub_141eb8b70(&var_f8, var_190)
        float zmm1_2[0x4] = arg4[1]
        var_1a0_1 = &var_148
        var_178 = *arg4
        var_1a8_1 = &var_f8
        var_190.d = zmm1_2[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
        var_1b0 = &var_118
        float temp0_4[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
        void* var_1b8_3
        var_1b8_3.d = rax_5
        var_190:4.d = temp0_3[0]
        float var_188_2 = temp0_4[0]
        int128_t zmm7
        int128_t zmm8
        rax_14, zmm6, zmm7, zmm8 = sub_141ec8580(arg1, &var_158, &var_190, &var_178, var_1b8_3.d, 
            var_1b0, var_1a8_1, var_1a0_1)
    label_1420df801:
        rdi = zx.q(rax_14)
        var_198 = rax_14
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t var_b8
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        if (rdi.b != 0 && r12.b != 0)
            int128_t var_68_1 = zmm7
            int32_t rsi_1 = 0
            int128_t var_78_1 = zmm8
            var_178[0].q = 0
            var_178[2].q = 0
            
            if (var_150_1 s<= 0)
            label_1420dfa2d:
                rdi.b = 0
                *arg5 = data_143dbb1f8.q
                arg5[1].d = data_143dbb200
            else
                do
                    int32_t r12_1 = r14_1
                    uint64_t rax_22 = sub_140d3c6e0(var_158 + ((sx.q(rsi_1) * 3 + 1) << 3))
                    
                    if (rax_22 != 0)
                        int64_t r8_8 = *rax_22
                        
                        if ((*(r8_8 + 0x4d0))(rax_22, zx.q(rax_5), r8_8) == 2)
                            int64_t r8_9 = *arg3
                            r14_1 += 1
                            void var_108
                            (*(r8_9 + 0x720))(arg3, &var_108, r8_9)
                            zmm1_1 = arg4[1]
                            int64_t rax_24 = *rax_22
                            float var_128[0x4] = *arg4
                            var_190.d = zmm1_1[0]
                            float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                            float (* var_1b8_4)[0x4] = &var_128
                            float var_188_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                            var_190:4.d = temp0_5[0]
                            
                            if ((*(rax_24 + 0x848))(rax_22, &var_178, &var_108, &var_190, 
                                    var_1b8_4, var_1b0, var_1a8_1, var_1a0_1) == 0)
                                rdi.b = 1
                                *arg5 = data_143dbb1f8.q
                                arg5[1].d = data_143dbb200
                                goto label_1420dfa6f
                            
                            uint32_t zmm3[0x4] = var_178[3]
                            float zmm0_2[0x4] = var_178[0]
                            zmm1_1 = var_178[1]
                            float zmm2 = var_178[2]
                            zmm0_2[0] = zmm0_2[0] f* zmm3[0]
                            zmm1_1[0] = zmm1_1[0] f* zmm3[0]
                            zmm2 = zmm2 f* zmm3[0]
                            uint32_t temp0_7[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
                            bool cond:0_1 = temp0_7[0] f> 9.99999994e-09f
                            zmm0_2[0] = zmm0_2[0] f+ *arg5
                            zmm1_1[0] = zmm1_1[0] f+ *(arg5 + 4)
                            zmm2 = zmm2 f+ arg5[1].d
                            *arg5 = zmm0_2[0]
                            *(arg5 + 4) = zmm1_1[0]
                            arg5[1].d = zmm2
                            
                            if (not(cond:0_1))
                                (*(*arg3 + 0x720))(arg3, &var_148, zmm6.d, temp0_7)
                                zmm1_1 = arg4[1]
                                int64_t rax_27 = *rax_22
                                var_128 = *arg4
                                var_168.d = zmm1_1[0]
                                float temp0_8[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                float (* var_1b8_5)[0x4] = &var_128
                                float var_160_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                var_168:4.d = temp0_8[0]
                                
                                if ((*(rax_27 + 0x848))(rax_22, &var_178, &var_148, &var_168, 
                                        var_1b8_5) == 0)
                                    r14_1 = r12_1
                                else
                                    zmm0_2 = var_178[3]
                                    zmm3 = var_178[0]
                                    zmm1_1 = var_178[1]
                                    zmm2 = var_178[2]
                                    zmm3[0] = zmm3[0] f* zmm0_2[0]
                                    zmm1_1[0] = zmm1_1[0] * zmm0_2[0]
                                    zmm3[0] = zmm3[0] f+ *arg5
                                    zmm2 = zmm2 * zmm0_2[0]
                                    zmm1_1[0] = zmm1_1[0] f+ *(arg5 + 4)
                                    zmm2 = zmm2 f+ arg5[1].d
                                    *arg5 = zmm3[0]
                                    *(arg5 + 4) = zmm1_1[0]
                                    arg5[1].d = zmm2
                    
                    rsi_1 += 1
                while (rsi_1 s< var_150_1)
                
                if (r14_1 == 0)
                    goto label_1420dfa2d
                
                rdi = zx.q(var_198)
    else
        void* rax_6 = sub_1424814a0()
        void* rdx_1 = arg3[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            goto label_1420df737
        
        if ((arg3[0x11].b & 1) != 0)
            if (data_143f48420 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f48420)
                
                if (data_143f48420 == 0xffffffff)
                    zmm6 = sub_140b58170(&data_143f48418, 
                        "ComponentEncroachesBlockingGeometry_WithAdjustment", 1)
                    _Init_thread_footer(&data_143f48420)
            
            sub_141eb54c0(&var_f8, data_143f48418, &var_198, 0, var_168)
            sub_142259c00(&var_148)
            sub_142277d10(&var_148, 2)
            (*(*arg3 + 0x718))(arg3, &var_f8, &var_148)
            sub_141eb8b70(&var_f8, var_190)
            zmm1_1 = arg4[1]
            var_1a0_1 = &data_143f3a680
            var_178 = *arg4
            var_1a8_1 = &var_f8
            var_1b0.d = rax_5
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_190.d = zmm1_1[0]
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            var_190:4.d = temp0_1[0]
            float var_188_1 = temp0_2[0]
            rax_14 = sub_141ebd9a0(arg1, &var_158, arg3, &var_190, &var_178, var_1b0, var_1a8_1, 
                var_1a0_1)
            r12.b = 0
            goto label_1420df801
label_1420dfa6f:
    int64_t rcx_27 = var_158
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    result = zx.q(rdi.b)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
