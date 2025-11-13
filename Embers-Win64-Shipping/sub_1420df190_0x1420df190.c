// 函数: sub_1420df190
// 地址: 0x1420df190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int128_t zmm6 = *data_143f48220
int128_t* result

if (arg1 == 0 || arg3 == 0)
    result.b = 0
else
    int32_t rax_3 = (*(*arg3 + 0x4d8))(arg3)
    int512_t zmm2
    zmm2.o = zmm6 ^ data_142d3f780
    int32_t var_f8
    (*(*arg3 + 0x720))(arg3, &var_f8, zmm2)
    void var_138
    float var_134
    int64_t var_128
    float var_108[0x4]
    void var_c8
    int64_t var_88
    int64_t var_68
    int64_t rcx_11
    char result_2
    TEB* gsbase
    
    if (var_f8 != 1)
    label_1420df395:
        
        if (data_143f48410
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f48410)
            
            if (data_143f48410 == 0xffffffff)
                sub_140b58170(&data_143f48408, "ComponentEncroachesBlockingGeometry_NoAdjustment", 
                    1)
                _Init_thread_footer(&data_143f48410)
        
        sub_141eb54c0(&var_c8, data_143f48408, &var_138, 0, arg2)
        sub_142259c00(&var_128)
        sub_142277d10(&var_128, 2)
        (*(*arg3 + 0x718))(arg3, &var_c8, &var_128)
        sub_141eb8b70(&var_c8, arg5)
        float zmm1_2[0x4] = arg4[1]
        int64_t* var_148_2 = &var_128
        var_108 = *arg4
        void* var_150_1 = &var_c8
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
        var_134 = zmm1_2[0]
        float var_12c_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
        float var_130_2 = temp0_3[0]
        result_2 = sub_141ec83d0(arg1, &var_134, &var_108, rax_3, &var_f8, var_150_1, var_148_2)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        rcx_11 = var_88
    label_1420df365:
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        result = zx.q(result_2)
    else
        void* rax_4 = sub_1424814a0()
        void* rdx_1 = arg3[2]
        result = sx.q(*(rax_4 + 0x38))
        int128_t* result_1
        
        if (result.d s<= *(rdx_1 + 0x38))
            result_1 = result
        
        if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result_1 << 3)) == rax_4 + 0x30)
            goto label_1420df395
        
        if ((arg3[0x11].b & 1) != 0)
            uint64_t rdx_2 = zx.q(data_14401b1a0)
            var_128 = 0
            int64_t var_120_1 = 0
            
            if (data_143f48400 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx_2 << 3))))
                _Init_thread_header(&data_143f48400)
                
                if (data_143f48400 == 0xffffffff)
                    sub_140b58170(&data_143f483f8, 
                        "ComponentEncroachesBlockingGeometry_NoAdjustment", 1)
                    _Init_thread_footer(&data_143f48400)
            
            sub_141eb54c0(&var_c8, data_143f483f8, &var_138, 0, arg2)
            void var_e8
            sub_142259c00(&var_e8)
            sub_142277d10(&var_e8, 2)
            (*(*arg3 + 0x718))(arg3, &var_c8, &var_e8)
            sub_141eb8b70(&var_c8, arg5)
            float zmm1_1[0x4] = arg4[1]
            void* var_140_1 = &data_143f3a680
            var_108 = *arg4
            void* var_148_1 = &var_c8
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_134 = zmm1_1[0]
            int64_t var_150
            var_150.d = rax_3
            float var_12c_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float var_130_1 = temp0_1[0]
            result_2 = sub_141ebd9a0(arg1, &var_128, arg3, &var_134, &var_108, var_150, var_148_1, 
                var_140_1)
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            rcx_11 = var_128
            goto label_1420df365
        
        result.b = 0

__security_check_cookie(rax_1 ^ &var_178)
return result
