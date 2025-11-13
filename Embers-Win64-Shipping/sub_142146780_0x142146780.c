// 函数: sub_142146780
// 地址: 0x142146780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char result = sub_1424385d0((*(*arg1 + 0x150))())

if (result == 0)
    result = (*(*arg1 + 0x628))(arg1)
    
    if (result != 0)
        void var_128
        memset(&var_128, 0, 0x88)
        void* r8_1 = arg1[0x45]
        void* rcx_3 = arg1[0x26]
        int32_t rdx_1 = data_143dbb200
        uint128_t zmm2 = zx.o(data_143dbb1f8.q)
        int32_t var_120_1 = 0x3f800000
        float zmm0_1[0x4] = *(r8_1 + 0x1e0)
        float zmm6[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0], zmm0_1[0])
        zmm6[0] = zmm6[0] f* *(r8_1 + 0x424)
        uint64_t var_168
        float var_154
        float var_150
        int32_t* rax_5
        float zmm1[0x4]
        
        if (rcx_3 == 0)
            var_168 = zmm2.q
            rax_5 = &var_168
            int32_t var_160_1 = rdx_1
        else
            zmm1 = *(rcx_3 + 0x1d0)
            rax_5 = &var_154
            var_154 = zmm1[0]
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float var_14c_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_150 = temp0_3[0]
        
        int32_t rax_6 = rax_5[2]
        int64_t var_138 = *rax_5
        int32_t var_130_1 = rax_6
        float zmm3[0x4] = *(r8_1 + 0x1e0)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        temp0_5[0] = temp0_5[0] f* *(r8_1 + 0x420)
        temp0_5[0] = temp0_5[0] * 4f
        float* rax_7
        
        if (rcx_3 == 0)
            var_168 = zmm2.q
            rax_7 = &var_168
            int32_t var_160_2 = rdx_1
        else
            zmm1 = *(rcx_3 + 0x1d0)
            rax_7 = &var_154
            var_154 = zmm1[0]
            float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float var_14c_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_150 = temp0_6[0]
        
        zmm2 = zx.o(*rax_7)
        zmm0_1 = zmm2
        uint64_t rcx_4 = zx.q(data_14401b1a0)
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        zmm1 = rax_7[2]
        var_168 = zmm2.q
        zmm1[0] = zmm1[0] - temp0_5[0]
        int64_t rcx_5 = *(ThreadLocalStoragePointer + (rcx_4 << 3))
        float temp0_8[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        var_168.d = zmm2.d
        var_168:4.d = temp0_8[0]
        float var_160_4 = zmm1[0]
        
        if (data_143f4cd88 s> *(0x14 + rcx_5))
            _Init_thread_header(&data_143f4cd88)
            
            if (data_143f4cd88 == 0xffffffff)
                zmm6 = sub_140b58170(&data_143f4cd80, "NavFindBase", 1)
                _Init_thread_footer(&data_143f4cd88)
        
        int64_t rdx_2 = data_143f4cd80
        float var_144_1 = zmm6[0]
        float var_140_1 = zmm6[0]
        int32_t var_148 = 1
        int32_t var_13c_1 = 0x3f800000
        var_154 = 1.40129846e-45f
        var_150.b = 0
        void var_158
        void var_98
        int64_t* rax_10 = sub_141eb54c0(&var_98, rdx_2, &var_158, 0, nullptr)
        int64_t rdx_3 = *arg1
        result = sub_141ecd570((*(rdx_3 + 0x150))(arg1, rdx_3), &var_128, &var_138, &var_168, 
            &data_14399f720, &var_154, &var_148, rax_10)
        int64_t var_38
        
        if (var_38 != 0)
            result = sub_140a74f90(var_38)
        
        int64_t var_58
        
        if (var_58 != 0)
            result = sub_140a74f90(var_58)
        
        int64_t* rcx_11 = arg1[0x46]
        
        if (rcx_11 != 0)
            result = sub_141f49a80(rcx_11, 1, 1)
        
        int64_t* rcx_12 = arg1[0x47]
        
        if (rcx_12 != 0)
            result = sub_141f49a80(rcx_12, 0, 1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
