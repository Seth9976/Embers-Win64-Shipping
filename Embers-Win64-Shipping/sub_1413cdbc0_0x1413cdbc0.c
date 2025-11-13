// 函数: sub_1413cdbc0
// 地址: 0x1413cdbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int32_t rsi = 0
int32_t var_3a8 = 0
void* rax_3 = (*(*arg1 + 0x240))()
float zmm3 = arg2[0x4d].d
float zmm2 = *(rax_3 + 0x520)
float zmm0 = zmm2 - zmm3

if (not(zmm0 < -9.99999975e-05f))
    arg3 = 0x38d1b717

if (zmm0 < -9.99999975e-05f || zmm3 < 9.99999975e-05f || not(zmm0 <= 9.99999975e-05f))
    arg2[0x4d].d = zmm2

int32_t* result = (*(*arg2 + 0x6b8))(arg2, arg3)
arg2[0x7d] = result

if (result != 0)
    void*** rax_5 = j_sub_140a82f30(0x140)
    void*** r14_1
    
    if (rax_5 == 0)
        r14_1 = nullptr
    else
        r14_1 = sub_141384f40(rax_5, arg2, arg1)
    
    *(result + 0x110) = r14_1
    float var_348[0x4]
    (*(*arg2 + 0x698))(arg2, &var_348)
    int64_t* var_3a0_1 = nullptr
    float var_398_1 = 0f
    void* rax_8 = sub_141f3ba40(arg2)
    
    if (rax_8 != 0)
        void* rax_9 = *(rax_8 + 0x130)
        int32_t* rax_10
        float zmm0_1[0x4]
        
        if (rax_9 == 0)
            int32_t var_35c_1 = data_143dbb200
            int64_t var_364
            rax_10 = &var_364
            var_364 = data_143dbb1f8.q
        else
            arg3 = *(rax_9 + 0x1d0)
            int32_t var_370
            rax_10 = &var_370
            var_370 = arg3.d
            zmm0_1 = _mm_shuffle_ps(arg3, arg3, 0x55)
            uint128_t var_268_1 = arg3
            int32_t var_368_1 = _mm_shuffle_ps(arg3, arg3, 0xaa).d
            float var_36c_1 = zmm0_1[0]
        
        arg3 = zx.o(*rax_10)
        int32_t rax_12 = rax_10[2]
        zmm0_1 = arg3
        var_3a0_1:4.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0]
        var_398_1 = rax_12[0]
        var_3a0_1.d = arg3.d
        uint64_t var_380_1 = arg3.q
    
    float var_2f8_1[0x4] = var_348
    int32_t var_2a0_1 = arg2[0x23].d
    float var_294_1 = var_398_1
    float var_2b8_1[0x4] = *(arg2 + 0x100)
    int64_t var_29c_1 = var_3a0_1
    uint64_t var_2a8_1 = arg2[0x22]
    void var_290
    (*(*arg2 + 0x480))(arg2, &var_290, &data_143dbb0c0)
    
    if (_finite(_mm_cvtps_pd((*(arg2 + 0x10c))[0].q)[0].q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x22].d[0].q)[0].q) != 0
            && _finite(_mm_cvtps_pd((*(arg2 + 0x114))[0].q)[0].q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x20].d[0].q)[0].q) != 0
            && _finite(_mm_cvtps_pd((*(arg2 + 0x104))[0].q)[0].q) != 0
            && _finite(_mm_cvtps_pd(arg2[0x21].d[0].q)[0].q) != 0
            && _isnan(_mm_cvtps_pd(arg2[0x23].d[0].q)[0].q) == 0)
        _finite(_mm_cvtps_pd(arg2[0x23].d[0].q)[0].q)
    
    *(arg2 + 0x25c) += 1
    sub_14229e040()
    uint128_t var_168
    sub_1422a13b0(&data_143f53590, &var_168, arg2)
    uint128_t var_258_1 = result.o
    float var_248[0x4] = var_2f8_1
    float var_208[0x4] = var_2b8_1
    float var_288[0x4]
    float zmm1[0x4] = var_288
    uint128_t var_1f8_1 = var_2a8_1.o
    uint128_t var_1e8 = var_29c_1:4.o
    float var_1d8_1[0x4] = zmm1
    char var_178_1 = 0
    uint128_t var_1a8
    float var_198[0x4]
    uint128_t var_188
    char var_138
    
    if (var_138 != 0)
        float var_158[0x4]
        zmm1 = var_158
        var_1a8 = var_168
        uint128_t var_148
        var_188 = var_148
        var_198 = zmm1
        var_178_1 = 1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_26
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_26.b = GetCurrentThreadId() == data_143de5470
        
        uint128_t var_338
        float var_328[0x4]
        uint128_t var_318
        uint128_t var_278
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_26.b == 0))
            void*** rax_29 = j_sub_140a82f30(0x110)
            void*** rdi_1 = rax_29
            int64_t* var_390
            
            if (rax_29 == 0)
                rdi_1 = nullptr
            else
                int64_t var_380_2 = 0
                *rdi_1 = &data_142d40498
                var_390 = nullptr
                rdi_1[1].d = 0xff
                *(rdi_1 + 0xc) = 1
                rdi_1[0x20].b = 0
                *rdi_1 = &data_142f79158
                rdi_1[0x21] = 0
                rsi = 4
            
            if ((rsi.b & 8) != 0)
                rsi &= 0xfffffff7
                
                if (var_3a0_1 != 0)
                    var_3a0_1[9].d -= 1
                    
                    if (var_3a0_1[9].d == 1)
                        sub_140a2f6e0(var_3a0_1)
            
            if ((rsi.b & 4) != 0 && var_390 != 0)
                var_390[9].d -= 1
                
                if (var_390[9].d == 1)
                    sub_140a2f6e0(var_390)
            
            *(rdi_1 + 0x10) = var_258_1
            *(rdi_1 + 0x20) = var_248
            *(rdi_1 + 0x30) = var_338
            *(rdi_1 + 0x40) = var_328
            *(rdi_1 + 0x50) = var_318
            *(rdi_1 + 0x60) = var_208
            *(rdi_1 + 0x70) = var_1f8_1
            *(rdi_1 + 0x80) = var_1e8
            *(rdi_1 + 0x90) = var_1d8_1
            *(rdi_1 + 0xa0) = var_278
            rdi_1[0x16] = arg1
            rdi_1[0x17] = r14_1
            rdi_1[0x1e].b = 0
            
            if (var_178_1 != 0)
                *(rdi_1 + 0xc0) = var_1a8
                *(rdi_1 + 0xd0) = var_198
                *(rdi_1 + 0xe0) = var_188
                rdi_1[0x1e].b = 1
            
            int64_t* rbx_2 = rdi_1[0x21]
            int64_t* var_388_1 = rbx_2
            int32_t* rsi_1 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rsi_1 += 1
                rbx_2 = var_388_1
            
            result = sub_1413f7e10(rdi_1, nullptr, 0xff, 1)
            
            if (rbx_2 != 0)
                int32_t r14_2 = *rsi_1
                *rsi_1 -= 1
                
                if (r14_2 == 1)
                    result = sub_140a2f6e0(var_388_1)
        else
            zmm1 = var_248
            uint128_t var_128 = var_258_1
            float var_118_1[0x4] = zmm1
            uint128_t var_108_1 = var_338
            float var_f8_1[0x4] = var_328
            uint128_t var_e8_1 = var_318
            float var_d8_1[0x4] = var_208
            uint128_t var_c8_1 = var_1f8_1
            float var_b8_1[0x4] = var_1e8
            uint128_t var_a8_1 = var_1d8_1
            float var_98_1[0x4] = var_278
            int64_t* var_88_1 = arg1
            void*** var_80_1 = r14_1
            char var_48_1 = 0
            
            if (var_178_1 != 0)
                uint128_t var_78_1 = var_1a8
                uint128_t var_58_1 = var_188
                float var_68_1[0x4] = var_198
                char var_48_2 = 1
            
            result = sub_1413c7920(&var_128)
    else
        int64_t* rbx_1 = var_258_1.q
        int32_t var_350_1 = var_1e8:4.d
        uint64_t var_358 = var_1f8_1:0xc.q
        sub_1422acec0(rbx_1, &var_248, &var_208, &var_1e8:8, &var_358)
        (*(*rbx_1 + 0xa8))(rbx_1, zmm1)
        result = sub_1413ce290(arg1, r14_1, &var_1a8)

__security_check_cookie(rax_1 ^ &var_3d8)
return result
