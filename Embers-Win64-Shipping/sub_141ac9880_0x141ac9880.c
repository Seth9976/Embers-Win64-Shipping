// 函数: sub_141ac9880
// 地址: 0x141ac9880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result

if ((*(arg1 + 0x1d8) & 1) != 0)
    int64_t* r14_1 = arg2[4]
    int64_t* rax_2 = (*(*arg2 + 0x260))(arg2)
    int64_t* rsi_1
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        int64_t rdx = *rax_2
        rsi_1 = (*(rdx + 0x628))(rax_2, rdx)
    
    result = (*(*arg2 + 0x150))(arg2)
    uint64_t result_2 = result
    
    if (result != 0)
        int64_t var_c8
        int64_t* rax_5
        int64_t var_d4
        
        if ((*(arg1 + 0x1bc) & 2) == 0)
            if (rsi_1 == 0)
                arg3 = sub_142436950(result_2)
            else
                (*(*rsi_1 + 0x3e8))(rsi_1)
            
            int32_t var_cc_2 = arg3.d
            var_d4 = 0
            int32_t var_c0_1 = var_cc_2
            rax_5 = &var_c8
            var_c8 = var_d4
        else
            rax_5 = &var_d4
            int32_t rcx_3 = *(arg1 + 0x170)
            var_d4 = *(arg1 + 0x168)
            int32_t var_cc_1 = rcx_3
        result = zx.q(rax_5[1].d)
        *(arg1 + 0x2c0) = *rax_5
        *(arg1 + 0x2c8) = result.d
        
        if (r14_1 != 0)
            if (*(arg1 + 0x1f0) != 0 && (*(arg1 + 0x1bc) & 1) != 0 && *(arg1 + 0x1b9) == 1)
                TEB* gsbase
                
                if (data_143f2baf0 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143f2baf0)
                    
                    if (data_143f2baf0 == 0xffffffff)
                        sub_140b58170(&data_143f2bae8, "RagdollNodeFindGeometry", 1)
                        _Init_thread_footer(&data_143f2baf0)
                
                void var_d8
                void var_98
                sub_141a91840(arg1 + 0x2f0, 
                    sub_141eb54c0(&var_98, data_143f2bae8, &var_d8, 0, nullptr))
                int64_t var_38
                
                if (var_38 != 0)
                    sub_140a74f90(var_38)
                
                int64_t var_58
                
                if (var_58 != 0)
                    sub_140a74f90(var_58)
                
                *(arg1 + 0x308) = 1
                void var_b8
                int64_t* rax_12 = (*(*r14_1 + 0x480))(r14_1, &var_b8, &r14_1[0x38])
                int128_t zmm1 = rax_12[3].d
                int32_t var_c0_2 = rax_12[1].d
                float zmm3[0x4] = var_c8.o
                zmm3[0].q = *rax_12
                float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x93)
                temp0_1[0] = zmm1.d
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
                *(arg1 + 0x2cc) = temp0_2
                float zmm4_1 = *(arg1 + 0x2ec) + 9.99999975e-05f
                float zmm5_1 = *(arg1 + 0x2d8)
                int64_t zmm0
                
                if (zmm5_1 > zmm4_1)
                label_141ac9ae9:
                    zmm0 = *(arg1 + 0x1a4)
                    *(arg1 + 0x2e0) = temp0_2
                    zmm0.d = zmm0.d f* *(arg1 + 0x2ec)
                    *(arg1 + 0x2ec) = zmm0.d
                    *(arg1 + 0x360) = *(result_2 + 0x1f8)
                    *(arg1 + 0x378) = result_2
                else
                    zmm4_1 = zmm4_1 - zmm5_1
                    float zmm2 = *(arg1 + 0x2d0) f- *(arg1 + 0x2e4)
                    zmm1.d = (*(arg1 + 0x2cc)).d f- *(arg1 + 0x2e0)
                    zmm0.d = (*(arg1 + 0x2d4)).d f- *(arg1 + 0x2e8)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm0.d = zmm0.d f* zmm0.d
                    rax_12.b = zmm4_1 * zmm4_1 >= zmm2 * zmm2 f+ zmm1.d f+ zmm0.d
                    
                    if (rax_12.b == 0)
                        goto label_141ac9ae9
            
            result = sub_141a91140(arg1 + 0x260, &r14_1[0xf1])
            *(arg1 + 0x130) = *(arg1 + 0x100)
            *(arg1 + 0x140) = *(arg1 + 0x110)
            *(arg1 + 0x150) = *(arg1 + 0x120)
            *(arg1 + 0x100) = *(r14_1 + 0x1c0)
            *(arg1 + 0x110) = *(r14_1 + 0x1d0)
            *(arg1 + 0x120) = *(r14_1 + 0x1e0)

__security_check_cookie(result_1 ^ &var_108)
return result
