// 函数: sub_141ac9c00
// 地址: 0x141ac9c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result

if ((*(arg1 + 0x13d) & 1) != 0)
    void* rax_2 = (*(*arg2 + 0x150))(arg2)
    int64_t rdx = *arg2
    int64_t* rsi_1 = arg2[4]
    int64_t* rax_3 = (*(rdx + 0x260))(arg2, rdx)
    int64_t* rcx_3
    
    if (rax_3 == 0)
        rcx_3 = nullptr
    else
        int64_t rdx_1 = *rax_3
        rcx_3 = (*(rdx_1 + 0x628))(rax_3, rdx_1)
    
    int64_t var_c8
    int64_t* rax_6
    int64_t var_d4
    
    if ((*(arg1 + 0x123) & 2) == 0)
        if (rcx_3 == 0)
            arg3 = sub_142436950(rax_2)
        else
            (*(*rcx_3 + 0x3e8))(rcx_3)
        
        int32_t var_cc_2 = arg3.d
        var_d4 = 0
        int32_t var_c0_1 = var_cc_2
        rax_6 = &var_c8
        var_c8 = var_d4
    else
        int32_t var_cc_1 = *(arg1 + 0xd8)
        rax_6 = &var_d4
        var_d4 = *(arg1 + 0xd0)
    result = zx.q(rax_6[1].d)
    *(arg1 + 0x2b8) = *rax_6
    *(arg1 + 0x2c0) = result.d
    
    if (rsi_1 != 0)
        if (*(arg1 + 0x1e8) != 0 && (*(arg1 + 0x123) & 1) != 0 && *(arg1 + 0x121) == 1)
            TEB* gsbase
            
            if (data_143f2bb00 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f2bb00)
                
                if (data_143f2bb00 == 0xffffffff)
                    sub_140b58170(&data_143f2baf8, "RagdollNodeFindGeometry", 1)
                    _Init_thread_footer(&data_143f2bb00)
            
            void var_d8
            void var_98
            sub_141a91840(arg1 + 0x2e8, sub_141eb54c0(&var_98, data_143f2baf8, &var_d8, 0, nullptr))
            int64_t var_38
            
            if (var_38 != 0)
                sub_140a74f90(var_38)
            
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            *(arg1 + 0x300) = 1
            void var_b8
            int64_t* rax_13 = (*(*rsi_1 + 0x480))(rsi_1, &var_b8, &rsi_1[0x38])
            int128_t zmm1 = rax_13[3].d
            int32_t var_c0_2 = rax_13[1].d
            float zmm3[0x4] = var_c8.o
            zmm3[0].q = *rax_13
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x93)
            temp0_1[0] = zmm1.d
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
            *(arg1 + 0x2c4) = temp0_2
            float zmm4_1 = *(arg1 + 0x2e4) + 9.99999975e-05f
            float zmm5_1 = *(arg1 + 0x2d0)
            int64_t zmm0
            
            if (zmm5_1 > zmm4_1)
            label_141ac9e5d:
                zmm0 = *(arg1 + 0x10c)
                *(arg1 + 0x2d8) = temp0_2
                zmm0.d = zmm0.d f* *(arg1 + 0x2e4)
                *(arg1 + 0x2e4) = zmm0.d
                *(arg1 + 0x358) = *(rax_2 + 0x1f8)
                *(arg1 + 0x370) = rax_2
            else
                zmm4_1 = zmm4_1 - zmm5_1
                float zmm2 = *(arg1 + 0x2c8) f- *(arg1 + 0x2dc)
                zmm1.d = (*(arg1 + 0x2c4)).d f- *(arg1 + 0x2d8)
                zmm0.d = (*(arg1 + 0x2cc)).d f- *(arg1 + 0x2e0)
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                rax_13.b = zmm4_1 * zmm4_1 >= zmm2 * zmm2 f+ zmm1.d f+ zmm0.d
                
                if (rax_13.b == 0)
                    goto label_141ac9e5d
        
        result = sub_141a91140(arg1 + 0x258, &rsi_1[0xf1])
        *(arg1 + 0x1a0) = *(arg1 + 0x170)
        *(arg1 + 0x1b0) = *(arg1 + 0x180)
        *(arg1 + 0x1c0) = *(arg1 + 0x190)
        *(arg1 + 0x170) = *(rsi_1 + 0x1c0)
        *(arg1 + 0x180) = *(rsi_1 + 0x1d0)
        *(arg1 + 0x190) = *(rsi_1 + 0x1e0)

__security_check_cookie(result_1 ^ &var_108)
return result
