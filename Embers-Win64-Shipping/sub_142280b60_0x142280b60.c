// 函数: sub_142280b60
// 地址: 0x142280b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_cf8
int64_t rax_1 = __security_cookie ^ &var_cf8
uint128_t zmm9 = arg3
int64_t result

if (arg1[0x288] != 0 && (arg1[0x348].b & 1) != 0)
    if (*arg2 == arg1[0x1ca] && arg2[0xbc] == arg1[0x286])
        result = sub_141e9eba0(&arg2[2], &arg1[0x1cc])
    
    if (*arg2 != arg1[0x1ca] || arg2[0xbc] != arg1[0x286] || result.b == 0)
        result.b = 0
    else
        result.b = 1

if (arg1[0x288] == 0 || (arg1[0x348].b & 1) == 0 || result.b == 0)
    void var_658
    sub_142259c20(&var_658, &arg2[2])
    arg2[5].d = arg1[0x47].d
    arg2[6].d = arg1[0x48].d
    *(arg2 + 0x3c) = arg1[0x49].d
    arg2[8].d = ((arg1[0x4e2].d & 2) | 4) u>> 1 | (arg2[8].d & 0xfffffffe)
    *(arg2 + 0x44) = (arg1[0x4e2].d).b & 1
    char var_b98
    char* rax_9
    int512_t zmm2
    rax_9, zmm2 = sub_1422d7fd0(&var_b98)
    sub_1405af800(&arg2[0xa], rax_9)
    int64_t var_668
    
    if (var_668 != 0)
        sub_140a74f90(var_668)
    
    *(arg2 + 0x33c) = 0
    arg2[0x96].d = 0
    int64_t rsi_1 = *arg2
    arg2[9].d = 0x3f800000
    void* rax_10
    int64_t rax_11
    void* rdx_3
    
    if (rsi_1 != 0)
        rax_10 = sub_142486290()
        rdx_3 = *(rsi_1 + 0x10)
        rax_11 = sx.q(*(rax_10 + 0x38))
    
    uint64_t var_ca8
    uint64_t var_c98
    
    if (rsi_1 == 0 || rax_11.d s> *(rdx_3 + 0x38)
            || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
        TEB* gsbase
        void* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        float zmm6
        
        if (data_143f52798 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143f52798)
            
            if (data_143f52798 == 0xffffffff)
                zmm2, zmm6 = sub_140b58260(&data_143f52790, u"Fixed", 1)
                _Init_thread_footer(&data_143f52798)
        
        if (data_143f527a8 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143f527a8)
            
            if (data_143f527a8 == 0xffffffff)
                zmm2, zmm6 = sub_140b58260(&data_143f527a0, u"ThirdPerson", 1)
                _Init_thread_footer(&data_143f527a8)
        
        if (data_143f527b8 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143f527b8)
            
            if (data_143f527b8 == 0xffffffff)
                zmm2, zmm6 = sub_140b58260(&data_143f527b0, u"FreeCam", 1)
                _Init_thread_footer(&data_143f527b8)
        
        if (data_143f527c8 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143f527c8)
            
            if (data_143f527c8 == 0xffffffff)
                zmm2, zmm6 = sub_140b58260(&data_143f527c0, u"FreeCam_Default", 1)
                _Init_thread_footer(&data_143f527c8)
        
        if (data_143f527d8 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143f527d8)
            
            if (data_143f527d8 == 0xffffffff)
                zmm2, zmm6 = sub_140b58260(&data_143f527d0, u"FirstPerson", 1)
                _Init_thread_footer(&data_143f527d8)
        
        int64_t rax_20 = arg1[0x46]
        
        if (rax_20 != data_143f52790)
            if (rax_20 == data_143f527a0 || rax_20 == data_143f527b0 || rax_20 == data_143f527c0)
                int64_t rcx_16 = *arg2
                float var_48_1 = zmm6
                void* rax_23 = *(rcx_16 + 0x130)
                float var_c90_1
                uint128_t zmm0_1
                uint128_t zmm1_1
                
                if (rax_23 == 0)
                    float rax_24 = data_143dbb200
                    var_c98 = data_143dbb1f8.q
                    var_c90_1 = rax_24
                else
                    zmm1_1 = *(rax_23 + 0x1d0)
                    var_c98.d = zmm1_1.d
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    var_c90_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
                    var_c98:4.d = zmm0_1.d
                
                uint64_t var_c80 = var_c98
                float var_c78_1 = var_c90_1
                void* rsi_2 = *(rcx_16 + 0x130)
                uint128_t var_c58
                int32_t rax_29
                
                if (rsi_2 == 0)
                    zmm0_1 = zx.o(data_143dbb208)
                    rax_29 = data_143dbb210
                else
                    zmm1_1 = *(rsi_2 + 0x1c0)
                    var_c58 = zmm1_1
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1_1, *(rsi_2 + 0x180), 4)) != 0)
                        *(rsi_2 + 0x180) = zmm1_1
                        int32_t* rax_27 = sub_140adf5d0(&var_c58, &var_ca8)
                        *(rsi_2 + 0x190) = *rax_27
                        *(rsi_2 + 0x198) = rax_27[2]
                        rcx_16 = *arg2
                    
                    zmm0_1 = zx.o(*(rsi_2 + 0x190))
                    rax_29 = *(rsi_2 + 0x198)
                
                int64_t* r8_4 = arg1[0x44]
                var_ca8 = zmm0_1.q
                zmm0_1 = zx.o(var_ca8)
                uint64_t var_c70 = zmm0_1.q
                int32_t var_c68_1 = rax_29
                
                if (rcx_16 == r8_4)
                    int64_t* rax_32 = (*(*r8_4 + 0xd38))(r8_4, &var_ca8)
                    zmm0_1 = zx.o(*rax_32)
                    var_c80 = zmm0_1.q
                    var_c78_1 = rax_32[1].d
                
                int64_t rax_34 = arg1[0x46]
                
                if (rax_34 == data_143f527b0 || rax_34 == data_143f527c0)
                    int64_t* rax_36 = (*(*arg1[0x44] + 0x660))(zmm0_1, &var_ca8)
                    var_c70 = *rax_36
                    var_c68_1 = rax_36[1].d
                
                float var_c48[0x10]
                float* rax_38
                int512_t zmm7_1
                rax_38, zmm7_1 = sub_14077e760(&var_c48, &var_c70)
                float zmm2_1[0x4] = arg1[0x4c9].d
                int32_t zmm3_1 = *(arg1 + 0x264c)
                zmm7_1.o = arg1[0x4c8].d
                int32_t var_c9c_1 = 0
                float zmm8_1[0x4] = var_ca8.o
                zmm8_1[0] = (*(arg1 + 0x2644))[0]
                var_c58.q = 0
                float temp0_5[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
                temp0_5[0] = zmm2_1[0]
                var_c58:8.d = 0
                float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
                temp0_6[0] = zmm3_1
                float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
                var_ca8.o = temp0_7
                float temp0_9[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0x55), *(rax_38 + 0x10))
                float temp0_11[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0), *rax_38)
                float temp0_13[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xff), *(rax_38 + 0x30))
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xaa)
                float temp0_15[0x4] = _mm_add_ps(temp0_11, temp0_9)
                _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(temp0_14, *(rax_38 + 0x20)), temp0_13), 
                    temp0_15)
                int32_t* rax_39
                float zmm7_2
                float zmm8_2[0x4]
                rax_39, zmm7_2, zmm8_2 = sub_140ae4210(&var_c70, &var_ca8)
                float zmm6_1 = zmm7_2 f* rax_39[1]
                float zmm5_1 = zmm7_2
                zmm7_2 = zmm7_2 f* *rax_39
                zmm5_1 = zmm5_1 f* rax_39[2]
                bool cond:2_1 = data_143f527e8 s> *(r15_1 + 0x14)
                float zmm2_2 = var_c80.d f+ arg1[0x4ca].d
                float zmm0_3 = var_c78_1 f+ arg1[0x4cb].d
                float zmm1_3 = var_c80:4.d f+ *(arg1 + 0x2654)
                float temp0_19[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)
                float temp0_20[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
                zmm8_2[0] = zmm8_2[0] + zmm2_2
                temp0_19[0] = temp0_19[0] + zmm0_3
                temp0_20[0] = temp0_20[0] + zmm1_3
                zmm8_2[0] = zmm8_2[0] - zmm7_2
                temp0_19[0] = temp0_19[0] - zmm5_1
                temp0_20[0] = temp0_20[0] - zmm6_1
                var_c98.d = zmm8_2[0]
                var_c98:4.d = temp0_20[0]
                float var_c90_2 = temp0_19[0]
                
                if (cond:2_1)
                    _Init_thread_header(&data_143f527e8)
                    
                    if (data_143f527e8 == 0xffffffff)
                        sub_140b58170(&data_143f527e0, "FreeCam", 1)
                        _Init_thread_footer(&data_143f527e8)
                
                void var_c88
                void var_c08
                sub_141eb54c0(&var_c08, data_143f527e0, &var_c88, 0, arg1)
                sub_141eb8b10(&var_c08, *arg2)
                memset(&var_b98, 0, 0x88)
                int32_t var_b90_1 = 0x3f800000
                var_ca8.d = 1
                var_ca8:4.d = 0x41400000
                int32_t var_ca0_2 = 0x41400000
                int32_t var_c9c_2 = 0x41400000
                char var_cd0
                var_cd0.d = 4
                zmm9 = sub_141ecd380((*(*arg1 + 0x150))(arg1), &var_b98, &var_c80, &var_c98, 
                    &data_14399f720, var_cd0, &var_ca8, &var_c08, &data_143f3a660)
                uint64_t* rax_43 = &var_c98
                void var_b88
                
                if ((var_b98 & 1) != 0)
                    rax_43 = &var_b88
                int32_t rax_44 = rax_43[1].d
                arg2[2] = *rax_43
                arg2[3].d = rax_44
                *(arg2 + 0x1c) = var_c70
                *(arg2 + 0x24) = var_c68_1
                int64_t var_ba8
                
                if (var_ba8 != 0)
                    sub_140a74f90(var_ba8)
                
                int64_t var_bc8
                
                if (var_bc8 != 0)
                    sub_140a74f90(var_bc8)
                
                goto label_14228119f
            
            if (rax_20 == data_143f527d0)
                int64_t* rcx_14 = *arg2
                (*(*rcx_14 + 0x5f8))(rcx_14, &arg2[2], arg2 + 0x1c)
                goto label_14228119f
            
            zmm2.o = zmm9
            (*(*arg1 + 0x808))(arg1, arg2, zmm2)
            (*(*arg1 + 0x6b0))(arg1, zmm9, &arg2[2])
        else
            sub_14225b2c0(&arg2[2], &var_658)
        label_14228119f:
            
            if ((arg1[0x4e2].d & 0x2000) != 0)
                (*(*arg1 + 0x6b0))(arg1, zmm9, &arg2[2])
    else
        int64_t* rcx_11 = *(rsi_1 + 0x228)
        (*(*rcx_11 + 0x528))(rcx_11, zmm9, &arg2[2])
        (*(*arg1 + 0x6b0))(arg1, zmm9, &arg2[2])
    
    int32_t rax_47 = *(arg2 + 0x24)
    var_ca8 = *(arg2 + 0x1c)
    int32_t var_ca0_3 = rax_47
    int32_t rax_48 = arg2[3].d
    char var_cd0_1 = 0
    var_c98 = arg2[2]
    int32_t var_c90_3 = rax_48
    sub_141dd6920(arg1, &var_c98, &var_ca8, 0, nullptr, var_cd0_1)
    result = (*(*arg1 + 0x750))(arg1, arg2)
    char var_98_1 = 0
    int64_t var_e8
    
    if (var_e8 != 0)
        result = sub_140a74f90(var_e8)

__security_check_cookie(rax_1 ^ &var_cf8)
return result
