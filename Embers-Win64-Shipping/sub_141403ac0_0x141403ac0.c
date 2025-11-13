// 函数: sub_141403ac0
// 地址: 0x141403ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
void* rax_3 = (*(*arg1 + 0x240))()
int32_t zmm3 = arg2[0x4d].d
float zmm2[0x4] = *(rax_3 + 0x520)
zmm2[0] = zmm2[0] f- zmm3

if (not(zmm2[0] < -9.99999975e-05f))
    arg3 = 0x38d1b717

if (zmm2[0] < -9.99999975e-05f || zmm3 f< 9.99999975e-05f || not(zmm2[0] <= 9.99999975e-05f))
    arg2[0x4d].d = zmm2[0]

int32_t result

if (arg2[0x7d] == 0)
    result = (**arg1)(arg1, arg2)
else if ((*(*arg2 + 0x6c0))(arg2, arg3) == 0)
    int64_t var_468 = 0
    float var_460_1 = 0f
    void* rax_8 = sub_141f3ba40(arg2)
    float zmm0[0x4]
    
    if (rax_8 != 0)
        void* rcx_6 = *(rax_8 + 0x130)
        int32_t* rax_9
        
        if (rcx_6 == 0)
            int32_t var_438_1 = data_143dbb200
            int64_t var_440
            rax_9 = &var_440
            var_440 = data_143dbb1f8.q
        else
            arg3 = *(rcx_6 + 0x1d0)
            int32_t var_450
            rax_9 = &var_450
            var_450 = arg3.d
            float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0x55)
            uint128_t var_428_1 = arg3
            int32_t var_448_1 = _mm_shuffle_ps(arg3, arg3, 0xaa).d
            float var_44c_1 = temp0_1[0]
        
        arg3 = zx.o(*rax_9)
        int32_t rax_11 = rax_9[2]
        zmm0 = arg3
        var_468:4.d = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
        var_460_1 = rax_11[0]
        var_468.d = arg3.d
        uint64_t var_478_1 = arg3.q
    
    uint128_t zmm9 = *(arg2 + 0x100)
    void* r14_1 = arg2[0x7d]
    uint128_t zmm10 = zx.o(arg2[0x22])
    int64_t rsi
    rsi.b = 0
    int32_t r15_1 = arg2[0x23].d
    uint128_t var_3a8_1 = zmm9
    char var_2f8_1 = 0
    void* var_3b0_1 = r14_1
    uint64_t var_398_1 = zmm10.q
    int32_t var_390_1 = r15_1
    void var_3f8
    int128_t* rax_13 = (*(*arg2 + 0x698))(arg2, &var_3f8)
    uint128_t zmm11 = *rax_13
    uint128_t zmm12 = rax_13[1]
    uint128_t zmm13 = rax_13[2]
    uint128_t zmm14 = rax_13[3]
    uint128_t var_368_1 = zmm11
    uint128_t var_358_1 = zmm12
    uint128_t var_348_1 = zmm13
    uint128_t var_338_1 = zmm14
    void var_418
    int128_t* rax_15 = (*(*arg2 + 0x480))(arg2, &var_418, &data_143dbb0c0)
    zmm0 = zx.o(rax_15[1].q)
    uint128_t zmm15 = *rax_15
    int32_t r12_1 = *(rax_15 + 0x18)
    int64_t var_478_2 = zmm0.q
    uint128_t var_38c_1 = zmm15
    int32_t var_374_1 = r12_1
    int64_t var_37c_1 = zmm0.q
    sub_14229e040()
    void var_118
    int128_t* rax_16 = sub_1422a13b0(&data_143f53590, &var_118, arg2)
    uint128_t var_328
    uint128_t zmm6
    uint128_t zmm7
    uint128_t zmm8
    
    if (rax_16 == &var_328 || rax_16[3].b == 0)
        uint128_t var_308
        zmm8 = var_308
        uint128_t var_318
        zmm7 = var_318
        zmm6 = var_328
    else
        zmm6 = *rax_16
        rsi.b = 1
        zmm7 = rax_16[1]
        zmm8 = rax_16[2]
        var_328 = zmm6
        uint128_t var_318_1 = zmm7
        uint128_t var_308_1 = zmm8
        char var_2f8_2 = 1
    
    if (_finite(_mm_cvtps_pd((*(arg2 + 0x10c)).q).q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x22].d.q).q) != 0
            && _finite(_mm_cvtps_pd((*(arg2 + 0x114)).q).q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x20].d.q).q) != 0
            && _finite(_mm_cvtps_pd((*(arg2 + 0x104)).q).q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x21].d.q).q) != 0
            && _isnan(_mm_cvtps_pd(arg2[0x23].d.q).q) == 0)
        _finite(_mm_cvtps_pd(arg2[0x23].d.q).q)
    
    uint128_t var_2c8 = zmm9
    uint64_t var_2b8_1 = zmm10.q
    uint128_t var_2ac = zmm15
    uint128_t var_288 = zmm11
    char var_218_1 = 0
    uint128_t var_248
    uint128_t var_238
    uint128_t var_228
    
    if (rsi.b != 0)
        var_248 = zmm6
        var_238 = zmm7
        var_228 = zmm8
        var_218_1 = 1
    
    uint64_t var_208 = var_468
    
    if (sub_140a80f40() == 0)
        uint32_t rax_26
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_26.b = GetCurrentThreadId() == data_143de5470
        
        uint64_t var_29c_1
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_26.b == 0))
            void** rax_32 = sub_1413de510(&var_468, nullptr, 0xff)
            void* rdx_7 = *rax_32
            *(rdx_7 + 0x10) = arg1
            *(rdx_7 + 0x18) = r14_1
            *(rdx_7 + 0x20) = var_2c8
            *(rdx_7 + 0x30) = var_2b8_1
            *(rdx_7 + 0x38) = r15_1
            *(rdx_7 + 0x3c) = var_2ac
            *(rdx_7 + 0x4c) = var_29c_1
            *(rdx_7 + 0x54) = r12_1
            *(rdx_7 + 0x60) = var_288
            *(rdx_7 + 0x70) = zmm12
            *(rdx_7 + 0x80) = zmm13
            *(rdx_7 + 0x90) = zmm14
            *(rdx_7 + 0xd0) = 0
            
            if (var_218_1 != 0)
                *(rdx_7 + 0xa0) = var_248
                *(rdx_7 + 0xb0) = var_238
                *(rdx_7 + 0xc0) = var_228
                *(rdx_7 + 0xd0) = 1
            
            *(rdx_7 + 0xe0) = var_208
            *(rdx_7 + 0xe8) = var_460_1
            void* rcx_15 = *rax_32
            int32_t rax_35 = rax_32[2].d
            int64_t* rdx_8 = rax_32[1]
            int64_t* rbx_1 = *(rcx_15 + 0xf8)
            int64_t* var_478_3 = rbx_1
            int32_t* rdi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_1 += 1
                rbx_1 = var_478_3
            
            result = sub_1413f8790(rcx_15, rdx_8, rax_35, 1)
            
            if (rbx_1 != 0)
                result = *rdi_1
                *rdi_1 -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(var_478_3)
        else
            uint128_t var_1e8 = var_2c8
            uint64_t var_1d8_1 = var_2b8_1
            uint128_t var_1cc = var_2ac
            uint64_t var_1bc_1 = var_29c_1
            uint128_t var_1a8 = var_288
            uint128_t var_198_1 = zmm12
            int32_t var_1d0_1 = r15_1
            uint128_t var_188_1 = zmm13
            int32_t var_1b4_1 = r12_1
            uint128_t var_178_1 = zmm14
            char var_138_1 = 0
            uint128_t var_168
            
            if (var_218_1 != 0)
                var_168 = var_248
                uint128_t var_148_1 = var_228
                uint128_t var_158_1 = var_238
                char var_138_2 = 1
            
            uint64_t var_128 = var_208
            float var_120_1 = var_460_1
            uint128_t* var_488_2 = &var_168
            result = sub_1414042b0(arg1, r14_1, &var_1e8, &var_1cc, &var_1a8, &var_128)
    else
        int128_t* var_488_1 = &var_248
        result = sub_1414042b0(arg1, r14_1, &var_2c8, &var_2ac, &var_288, &var_208)
else
    (*(*arg1 + 8))(arg1, arg2)
    result = (**arg1)(arg1, arg2)

__security_check_cookie(rax_1 ^ &var_4b8)
return result
