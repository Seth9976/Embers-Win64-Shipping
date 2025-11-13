// 函数: sub_141edb2c0
// 地址: 0x141edb2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
char result = (*(*arg1 + 0x5c0))()

if (result != 0)
    uint128_t zmm1 = *arg2
    uint128_t zmm6 = *(arg2 + 4)
    zmm1.d = zmm1.d f* zmm1.d
    *(arg2 + 8) = 0
    uint128_t zmm0
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm1.d f+ zmm0.d
    uint64_t var_240
    uint128_t zmm2
    uint128_t zmm3
    uint128_t zmm5_1
    
    if (not(zmm1.d f!= 1f))
        zmm0 = zx.o(*arg2)
        zmm1 = *(arg2 + 8)
        var_240 = zmm0.q
        zmm5_1 = var_240.d
        zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    else if (zmm1.d f>= 9.99999994e-09f)
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1.d)
        zmm3.d = zmm1.d f* 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm2.d = zmm3.d f* zmm0.d
        zmm1.d = 0.5f f- zmm2.d
        zmm0.d = temp0_2.d f* zmm1.d
        zmm1 = zx.o(0)
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm3.d = zmm3.d f* zmm0.d
        zmm5_1.d = 0.5f f- zmm3.d
        zmm5_1.d = zmm5_1.d f* temp0_2[0]
        zmm5_1.d = zmm5_1.d f+ temp0_2[0]
        zmm0 = zmm5_1
        zmm5_1.d = zmm5_1.d f* *arg2
        zmm0.d = zmm0.d f* zmm6.d
        zmm3 = zmm0
    else
        zmm5_1 = data_143dbb1f8
        zmm3 = data_143dbb1fc
        zmm1 = data_143dbb200
    
    void* rcx = *(arg1[0x29] + 0x290)
    zmm0 = *(rcx + 0x1e0)
    zmm2 = *(arg1[0x16] + 0x1d0)
    zmm6.d = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55).d, zmm0.d).d f* *(rcx + 0x424)
    zmm0.d = zmm6.d f* 1.20000005f
    zmm1.d = zmm1.d f* zmm0.d
    zmm3.d = zmm3.d f* zmm0.d
    zmm5_1.d = zmm5_1.d f* zmm0.d
    zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f+ zmm1.d
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm2.d = zmm2.d f+ zmm5_1.d
    zmm1.d = zmm1.d f+ zmm3.d
    int32_t var_238_2 = zmm0.d
    *arg2 = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
    *(arg2 + 8) = var_238_2
    void var_1c8
    memset(&var_1c8, 0, 0x88)
    int32_t var_1c0_1 = 0x3f800000
    TEB* gsbase
    void* r12_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143f3ad40 s> *(r12_1 + 0x14))
        _Init_thread_header(&data_143f3ad40)
        
        if (data_143f3ad40 == 0xffffffff)
            sub_140b58170(&data_143f3ad38, "CheckWaterJump", 1)
            _Init_thread_footer(&data_143f3ad40)
    
    void var_248
    void var_c8
    sub_141eb54c0(&var_c8, data_143f3ad38, &var_248, 0, arg1[0x29])
    void var_208
    sub_142259c00(&var_208)
    sub_142277d10(&var_208, 2)
    (*(*arg1 + 0x468))(arg1, &var_c8, &var_208)
    void* rcx_7 = *(arg1[0x29] + 0x290)
    zmm2 = *(rcx_7 + 0x1e0)
    float zmm0_1[0x4] = *(rcx_7 + 0x424)
    uint128_t zmm1_1 = _mm_min_ss(_mm_shuffle_ps(zmm2, zmm2, 0x55).d, zmm2.d)
    zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* *(rcx_7 + 0x420)
    int64_t* rcx_8 = arg1[0x16]
    int32_t var_228 = 3
    zmm1_1.d = zmm1_1.d f* zmm0_1[0]
    int32_t var_220_1 = zmm2.d
    int32_t var_224_1 = zmm1_1.d
    int32_t rax_13 = (*(*rcx_8 + 0x4d8))(rcx_8)
    zmm1_1 = *(arg1[0x16] + 0x1d0)
    var_240.d = zmm1_1.d
    float temp0_11[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    int32_t var_238_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
    var_240:4.d = temp0_11[0]
    char rax_15
    float zmm6_1[0x4]
    rax_15, zmm6_1 = sub_141ecd380(sub_1405be820(arg1), &var_1c8, &var_240, arg2, &data_14399f720, 
        rax_13.b, &var_228, &var_c8, &var_208)
    void* rax_16
    void* rax_17
    int64_t rax_18
    void* rdx_3
    
    if (rax_15 != 0)
        void var_160
        rax_16 = sub_140d3c6e0(&var_160)
        
        if (rax_16 != 0)
            rax_17 = sub_14255d000()
            rdx_3 = *(rax_16 + 0x10)
            rax_18 = sx.q(*(rax_17 + 0x38))
    
    int64_t* rbx
    
    if (rax_15 != 0 && (rax_16 == 0 || rax_18.d s> *(rdx_3 + 0x38)
            || *(*(rdx_3 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30))
        zmm6_1[0] = zmm6_1[0] * 3.20000005f
        int32_t var_194
        float zmm0_2[0x4] = var_194
        int32_t var_190
        float zmm2_1[0x4] = var_190
        int32_t var_18c
        float zmm3_1[0x4] = var_18c
        zmm0_2[0] = zmm0_2[0] * -1f
        zmm2_1[0] = zmm2_1[0] * -1f
        zmm3_1[0] = zmm3_1[0] * -1f
        float zmm1_2 = zmm6_1[0]
        *arg3 = (_mm_unpacklo_ps(zmm0_2, zmm2_1[0].q)).q
        arg3[1].d = zmm3_1[0]
        zmm6_1[0] = zmm6_1[0] f* *(arg3 + 4)
        void* rax_21 = arg1[0x16]
        zmm1_2 = zmm1_2 f* *arg3
        zmm6_1[0] = zmm6_1[0] f* arg3[1].d
        float zmm4_2[0x4] = *(rax_21 + 0x1d0)
        var_240.d = zmm4_2[0]
        float temp0_14[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        temp0_14[0] = temp0_14[0] f+ arg1[0x40].d
        float temp0_15[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        zmm4_2[0] = zmm4_2[0] + zmm1_2
        var_240:4.d = temp0_15[0]
        temp0_15[0] = temp0_15[0] + zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] + temp0_14[0]
        float var_238_5 = temp0_14[0]
        *arg2 = (_mm_unpacklo_ps(zmm4_2, temp0_15[0].q)).q
        *(arg2 + 8) = zmm6_1[0]
        
        if (data_143f3ad50 s> *(r12_1 + 0x14))
            _Init_thread_header(&data_143f3ad50)
            
            if (data_143f3ad50 == 0xffffffff)
                sub_140b58170(&data_143f3ad48, "CheckWaterJump", 1)
                _Init_thread_footer(&data_143f3ad50)
        
        void var_138
        sub_141eb54c0(&var_138, data_143f3ad48, &var_248, 1, arg1[0x29])
        void var_1e8
        sub_142259c00(&var_1e8)
        sub_142277d10(&var_1e8, 2)
        (*(*arg1 + 0x468))(arg1, &var_138, &var_1e8)
        int32_t var_270_1
        var_270_1.q = &var_138
        void* var_278_3
        var_278_3.d = rax_13
        char rax_27 = sub_141ec6a20(sub_1405be820(arg1), &var_1c8, &var_240, arg2, var_278_3.b, 
            var_270_1, &var_1e8)
        char rax_29
        
        if (rax_27 != 0)
            rax_29 = (*(*arg1 + 0x820))(arg1, &var_1c8)
        
        if (rax_27 == 0 || rax_29 != 0)
            rbx.b = 1
        else
            rbx.b = 0
        
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t var_f8
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
    else
        rbx.b = 0
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    result = rbx.b

__security_check_cookie(rax_1 ^ &var_298)
return result
