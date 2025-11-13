// 函数: sub_141f4e140
// 地址: 0x141f4e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
uint64_t result = __security_cookie ^ &var_1c8
uint64_t result_1 = result

if ((*(arg1 + 0x14d) & 2) != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    void* r13_1 = nullptr
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        uint64_t result_2 = arg1[0x15]
        
        if (result_2 != 0)
        label_141f4e1f7:
            int64_t* r14_1 = *(result_2 + 0x100)
            int128_t zmm6
            int128_t zmm7
            int128_t zmm8
            int128_t zmm9
            int128_t zmm10
            float zmm11[0x4]
            int128_t zmm12
            int128_t zmm13
            int128_t zmm14
            int128_t zmm15
            
            if (r14_1 == 0)
                int64_t* rax_9
                rax_9, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_14243ab60(result_2)
                r14_1 = rax_9
            
            uint64_t rax_10 = zx.q(*(result_2 + 0x1f0))
            float var_180
            int64_t* var_158
            
            if (rax_10.d s> 0)
                int128_t var_38_1 = zmm6
                int128_t var_48_1 = zmm7
                int128_t var_58_1 = zmm8
                int128_t var_68_1 = zmm9
                int128_t var_78_1 = zmm10
                float var_88_1[0x4] = zmm11
                int128_t var_98_1 = zmm12
                int128_t var_a8_1 = zmm13
                int128_t var_b8_1 = zmm14
                int128_t var_c8_1 = zmm15
                float zmm1[0x4]
                
                if (rax_10.d s> data_143a2d810)
                label_141f4e40e:
                    uint64_t rcx_8 = zx.q(data_14401b1a0)
                    TEB* gsbase
                    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                    void* rbx_2 = arg1[0x14]
                    int64_t var_170 = 0
                    int32_t var_168_1 = 0
                    
                    if (data_143f3b6b8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_8 << 3))))
                        _Init_thread_header(&data_143f3b6b8)
                        
                        if (data_143f3b6b8 == 0xffffffff)
                            sub_140b58170(&data_143f3b6b0, "UpdatePhysicsVolume", 1)
                            _Init_thread_footer(&data_143f3b6b8)
                    
                    void var_188
                    void var_148
                    sub_141eb54c0(&var_148, data_143f3b6b0, &var_188, 0, rbx_2)
                    char var_134_1 = 1
                    int64_t r15
                    r15.b = 0
                    void* rax_13 = sub_142577430()
                    void* rdx_4 = arg1[2]
                    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                    float zmm0_1[0x4]
                    
                    if (rax_14.d s> *(rdx_4 + 0x38)
                            || *(*(rdx_4 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        zmm1 = *(arg1 + 0x1d0)
                        int64_t rax_18 = *arg1
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        r15.b = 1
                        var_180 = zmm1[0]
                        float var_178_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        float var_17c_2 = zmm0_1[0]
                        var_158 = 2
                        int128_t* var_190_2 = &data_143f3a660
                        void* var_198_2 = &var_148
                        int32_t* var_1a0_1 = &var_158
                        void* var_1a8_1
                        var_1a8_1.d = (*(rax_18 + 0x4d8))(arg1, rdx_4, rax_13 + 0x30)
                        sub_141ec8580(result_2, &var_170, &var_180, &data_14399f720, var_1a8_1.d, 
                            var_1a0_1, var_198_2, var_190_2)
                    else
                        zmm1 = *(arg1 + 0x1d0)
                        int64_t rax_16 = *arg1
                        var_158.o = *(arg1 + 0x1c0)
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        var_180 = zmm1[0]
                        float var_178_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        float var_17c_1 = zmm0_1[0]
                        void* var_190_1 = &data_143f3a680
                        void* var_198_1 = &var_148
                        int64_t var_1a0
                        var_1a0.d = (*(rax_16 + 0x4d8))(arg1, rdx_4, rax_13 + 0x30)
                        sub_141ebd9a0(result_2, &var_170, arg1, &var_180, &var_158, var_1a0, 
                            var_198_1, var_190_1)
                    int32_t rsi_1 = 0
                    
                    if (var_168_1 s> 0)
                        do
                            int64_t* rax_22 = j_sub_140d3c6e0(var_170 + sx.q(rsi_1) * 0x18)
                            
                            if (rax_22 != 0)
                                void* rax_23 = sub_142565770()
                                void* rcx_18 = rax_22[2]
                                int64_t rdx_7 = sx.q(*(rax_23 + 0x38))
                                
                                if (rdx_7.d s<= *(rcx_18 + 0x38)
                                        && *(*(rcx_18 + 0x30) + (rdx_7 << 3)) == rax_23 + 0x30
                                        && *(rax_22 + 0x25c) s> *(r14_1 + 0x25c))
                                    char rax_27
                                    
                                    if (r15.b == 0)
                                        rax_27 = (*(*rax_22 + 0x668))(rax_22, arg1)
                                    
                                    if (r15.b != 0 || rax_27 != 0)
                                        r14_1 = rax_22
                            
                            rsi_1 += 1
                        while (rsi_1 s< var_168_1)
                    
                    int64_t var_e8
                    
                    if (var_e8 != 0)
                        sub_140a74f90(var_e8)
                    
                    int64_t var_108
                    
                    if (var_108 != 0)
                        sub_140a74f90(var_108)
                    
                    int64_t rcx_23 = var_170
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                else
                    int32_t rbx_1 = 0
                    
                    while (true)
                        if (rbx_1 s< 0 || rbx_1 s>= *(result_2 + 0x1f0))
                            rax_10.b = 0
                        else
                            rax_10.b = 1
                        
                        if (rax_10.b == 0)
                            break
                        
                        rax_10 = sub_140d3c6e0(*(result_2 + 0x1e8) + (sx.q(rbx_1) << 3))
                        
                        if (rax_10 != 0)
                            rax_10 = *(rax_10 + 0x130)
                            
                            if (rax_10 != 0)
                                float zmm4[0x4] = *(rax_10 + 0x104)
                                zmm14 = *(rax_10 + 0x100)
                                int128_t zmm5 = *(arg1 + 0x104)
                                zmm15 = arg1[0x20].d
                                zmm4[0] = zmm4[0] f- zmm5.d
                                float zmm2 = zmm14.d f- zmm15.d
                                float zmm0 = *(rax_10 + 0x118) f+ arg1[0x23].d
                                zmm7 = *(rax_10 + 0x108)
                                zmm6 = arg1[0x21].d
                                zmm4[0] = zmm4[0] * zmm4[0]
                                float zmm3 = zmm7.d f- zmm6.d
                                zmm0 = __maxss_xmmss_memss(zmm0 + 9.99999975e-05f, 0)
                                
                                if (not(zmm2 * zmm2 + zmm4[0] + zmm3 * zmm3 > zmm0 * zmm0))
                                    zmm0 = arg1[0x22].d
                                    zmm1 = *(arg1 + 0x114)
                                    zmm10.d = zmm5.d f+ zmm0
                                    zmm3 = *(arg1 + 0x10c)
                                    zmm5.d = zmm5.d f- zmm0
                                    zmm0 = *(rax_10 + 0x10c)
                                    zmm8 = zmm15
                                    zmm2 = *(rax_10 + 0x114)
                                    zmm15.d = zmm15.d f+ zmm3
                                    zmm9 = zmm14
                                    zmm8.d = zmm8.d f- zmm3
                                    zmm14.d = zmm14.d f- zmm0
                                    zmm12.d = zmm6.d f+ zmm1[0]
                                    zmm6.d = zmm6.d f- zmm1[0]
                                    zmm1 = *(rax_10 + 0x110)
                                    zmm13.d = zmm7.d f+ zmm2
                                    zmm4[0] = zmm4[0] + zmm1[0]
                                    zmm9.d = zmm9.d f+ zmm0
                                    zmm7.d = zmm7.d f- zmm2
                                    zmm4[0] = zmm4[0] - zmm1[0]
                                    
                                    if (not(zmm14.d f> zmm15.d) && not(zmm8.d f> zmm9.d)
                                            && not(zmm4[0] f> zmm10.d) && not(zmm5.d f> zmm4[0])
                                            && not(zmm7.d f> zmm12.d) && zmm6.d f<= zmm13.d)
                                        goto label_141f4e40e
                        
                        rbx_1 += 1
            
            if (arg2 == 0)
                result = sub_140d3a3a0(&arg1[0x17], r14_1)
            else
                result = sub_140d3c6e0(&arg1[0x17])
                
                if (r14_1 != result)
                    int64_t r15_1 = arg1[0x14]
                    
                    if (result != 0)
                        int64_t r8_6 = *result
                        (*(r8_6 + 0x660))(result, r15_1, r8_6)
                    
                    sub_141f3d270(arg1 + 0x151, &var_158)
                    int64_t* rcx_27 = var_158
                    
                    if (rcx_27 != 0)
                        var_180.q = r14_1
                        sub_1405a9f90(rcx_27, &var_180)
                    
                    int64_t* var_150
                    
                    if (var_150 != 0)
                        var_150[1].d -= 1
                        
                        if (var_150[1].d == 1)
                            (**var_150)(var_150)
                            int32_t temp3_1 = *(var_150 + 0xc)
                            *(var_150 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_150 + 8))(var_150, 1)
                    
                    sub_140d3a3a0(&arg1[0x17], r14_1)
                    
                    if (r14_1 != 0)
                        int32_t rax_30 = *(r14_1 + 0xc)
                        
                        if (rax_30 s< data_143e1d9b4)
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(rax_30)
                            uint32_t rdx_14 = zx.d(temp4_1)
                            int32_t rax_32 = temp5_1 + rdx_14
                            r13_1 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_32.w) - rdx_14) * 0x18
                    
                    if (r14_1 == 0 || ((*(r13_1 + 8) u>> 0x1d).b & 1) != 0)
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b != 0)
                        result = (*(*r14_1 + 0x658))(r14_1, r15_1)
        else
            result = sub_141ee69e0(arg1)
            result_2 = result
            
            if (result != 0)
                goto label_141f4e1f7

__security_check_cookie(result_1 ^ &var_1c8)
return result
