// 函数: sub_142158300
// 地址: 0x142158300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218

if ((*(*arg1 + 0x628))() != 0 && (arg1[0x46] != 0 || arg1[0x47] != 0))
    void* rbx_1 = arg1[0x26]
    int32_t r14_1 = data_143dbb200
    uint128_t zmm6 = zx.o(data_143dbb1f8.q)
    uint64_t var_1c8
    float var_198
    int32_t var_194
    int32_t* rax_4
    uint128_t zmm0
    float zmm1[0x4]
    
    if (rbx_1 == 0)
        var_1c8 = zmm6.q
        rax_4 = &var_1c8
        int32_t var_1c0_1 = r14_1
    else
        zmm1 = *(rbx_1 + 0x1d0)
        rax_4 = &var_198
        var_198 = zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_190_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_194 = zmm0.d
    
    void* r15_1 = arg1[0x45]
    int32_t rax_5 = rax_4[2]
    uint64_t var_188 = *rax_4
    int64_t rsi
    rsi.b = 1
    zmm0 = *(r15_1 + 0x1e0)
    uint128_t zmm7
    zmm7.d = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55).d, zmm0.d).d f* *(r15_1 + 0x424)
    char var_148
    memset(&var_148, 0, 0x88)
    float var_140_1 = 1f
    float var_1b8
    int32_t* rax_6
    
    if (rbx_1 == 0)
        var_1c8 = zmm6.q
        rax_6 = &var_1c8
        int32_t var_1c0_2 = r14_1
    else
        zmm1 = *(rbx_1 + 0x1d0)
        rax_6 = &var_1b8
        var_1b8 = zmm1[0]
        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_1b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_1b4_1 = temp0_5[0]
    
    float rax_7 = rax_6[2]
    var_198.q = *rax_6
    float zmm3[0x4] = *(r15_1 + 0x1e0)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    temp0_7[0] = temp0_7[0] f* *(r15_1 + 0x420)
    temp0_7[0] = temp0_7[0] * 4f
    float* rax_8
    
    if (rbx_1 == 0)
        var_1c8 = zmm6.q
        rax_8 = &var_1c8
        int32_t var_1c0_3 = r14_1
    else
        zmm1 = *(rbx_1 + 0x1d0)
        rax_8 = &var_1b8
        var_1b8 = zmm1[0]
        float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_1b0_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_1b4_2 = temp0_8[0]
    
    uint128_t zmm2 = zx.o(*rax_8)
    float zmm0_1[0x4] = zmm2
    uint64_t rcx_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    zmm1 = rax_8[2]
    zmm1[0] = zmm1[0] - temp0_7[0]
    float temp0_10[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    int64_t rcx_2 = *(ThreadLocalStoragePointer + (rcx_1 << 3))
    var_1b8 = zmm2.d
    float var_1b4_3 = temp0_10[0]
    float var_1b0_3 = zmm1[0]
    bool cond:0_1 = data_143f4cd98 s> *(0x14 + rcx_2)
    var_1c8 = zmm2.q
    
    if (cond:0_1)
        _Init_thread_header(&data_143f4cd98)
        
        if (data_143f4cd98 == 0xffffffff)
            sub_140b58170(&data_143f4cd90, "NavObjectBase_Validate", 1)
            _Init_thread_footer(&data_143f4cd98)
    
    int64_t rdx_1 = data_143f4cd90
    int32_t var_174_1 = zmm7.d
    int32_t var_170_1 = zmm7.d
    int32_t var_178 = 1
    int32_t var_16c_1 = 0x3f800000
    void var_1a8
    void var_b8
    int64_t* rax_11 = sub_141eb54c0(&var_b8, rdx_1, &var_1a8, 0, arg1)
    int64_t rdx_2 = *arg1
    sub_141ecd380((*(rdx_2 + 0x150))(arg1, rdx_2), &var_148, &var_198, &var_1b8, &data_14399f720, 
        2, &var_178, rax_11, &data_143f3a660)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    if ((var_148 & 1) != 0)
        float zmm1_1[0x4] = var_1b8
        zmm1_1[0] = zmm1_1[0] - var_198
        void* rax_13 = arg1[0x45]
        void* rbx_3 = arg1[0x26]
        float zmm4_1[0x4] = *(rax_13 + 0x1e0)
        float zmm5_1 = *(rax_13 + 0x420)
        zmm1_1[0] = zmm1_1[0] * var_140_1
        zmm5_1 = zmm5_1 * _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
        zmm1_1[0] = zmm1_1[0] + var_198
        float var_168 = zmm1_1[0]
        zmm1_1 = var_1b4_3
        zmm1_1[0] = zmm1_1[0] f- var_194
        zmm1_1[0] = zmm1_1[0] * var_140_1
        float var_160_1 = (var_1b0_3 - rax_7) * var_140_1 + rax_7 + zmm5_1 - 2f
        zmm1_1[0] = zmm1_1[0] f+ var_194
        float var_164_1 = zmm1_1[0]
        float var_158[0x4]
        int32_t rax_17
        float zmm0_2[0x4]
        
        if (rbx_3 == 0)
            zmm0_2 = zx.o(data_143dbb208)
            rax_17 = data_143dbb210
        else
            zmm1_1 = *(rbx_3 + 0x1c0)
            uint32_t temp0_13 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_3 + 0x180), zmm1_1, 4))
            var_158 = zmm1_1
            
            if (temp0_13 != 0)
                *(rbx_3 + 0x180) = zmm1_1
                int32_t* rax_15 = sub_140adf5d0(&var_158, &var_178)
                *(rbx_3 + 0x190) = *rax_15
                *(rbx_3 + 0x198) = rax_15[2]
            
            zmm0_2 = zx.o(*(rbx_3 + 0x190))
            rax_17 = *(rbx_3 + 0x198)
        
        var_1c8 = zmm0_2.q
        int32_t var_19c_1 = rax_17
        int64_t rax_19 = *arg1
        int64_t var_1a4 = var_1c8
        int128_t* var_1f8_2
        var_1f8_2.b = 1
        (*(rax_19 + 0x4f0))(arg1, &var_168, &var_1a4, 0, var_1f8_2)
        void* rbx_4 = arg1[0x26]
        int64_t* rax_20
        
        if (rbx_4 == 0)
            int32_t var_19c_2 = data_143dbb200
            rax_20 = &var_1a4
            var_1a4 = data_143dbb1f8.q
        else
            zmm1_1 = *(rbx_4 + 0x1d0)
            rax_20 = &var_1c8
            var_1c8.d = zmm1_1[0]
            float temp0_14[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float var_1c0_6 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            var_1c8:4.d = temp0_14[0]
        
        zmm0_2 = zx.o(*rax_20)
        bool cond:1_1 = zmm0_2[0] f!= var_188.d
        int32_t rax_22 = rax_20[1].d
        var_1c8 = zmm0_2.q
        
        if (cond:1_1 || var_1c8:4.d[0] f!= var_188:4.d || rax_22[0] f> rax_5)
            rsi.b = 0
        else
            rsi.b = 1
        
        int32_t rax_26
        
        if (rbx_4 == 0)
            zmm0_2 = zx.o(data_143dbb208)
            rax_26 = data_143dbb210
        else
            zmm1_1 = *(rbx_4 + 0x1c0)
            uint32_t temp0_17 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_4 + 0x180), zmm1_1, 4))
            var_158 = zmm1_1
            
            if (temp0_17 != 0)
                *(rbx_4 + 0x180) = zmm1_1
                int32_t* rax_24 = sub_140adf5d0(&var_158, &var_178)
                *(rbx_4 + 0x190) = *rax_24
                *(rbx_4 + 0x198) = rax_24[2]
            
            zmm0_2 = zx.o(*(rbx_4 + 0x190))
            rax_26 = *(rbx_4 + 0x198)
        
        var_1a4 = zmm0_2.q
        int32_t var_1c0_8 = rax_26
        int64_t rax_28 = *arg1
        var_1c8 = var_1a4
        var_1f8_2.b = 1
        (*(rax_28 + 0x4f0))(arg1, &var_188, &var_1c8, 0, var_1f8_2)
    
    int64_t* rcx_12 = arg1[0x46]
    
    if (rcx_12 != 0)
        sub_141f49a80(rcx_12, rsi.b, 1)
    
    int64_t* rcx_13 = arg1[0x47]
    
    if (rcx_13 != 0)
        rsi.b ^= 1
        sub_141f49a80(rcx_13, rsi.b, 1)

int64_t result = sub_141dcf810(arg1)
__security_check_cookie(rax_1 ^ &var_218)
return result
