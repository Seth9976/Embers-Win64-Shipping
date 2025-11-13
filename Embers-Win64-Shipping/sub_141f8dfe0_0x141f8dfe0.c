// 函数: sub_141f8dfe0
// 地址: 0x141f8dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t var_48 = __security_cookie ^ &var_128
uint64_t result

if (arg2 != 0)
    if (0f f!= *arg3 || 0f f!= arg3[1] || 0f f!= arg3[2])
        result.b = 0
    else
        result.b = 1
    
    void var_e0
    
    if (result.b != 0)
        (*(*arg1 + 0x5f8))(arg1, arg3, &var_e0)
    TEB* gsbase
    float zmm6[0x4]
    
    if (data_143f3ca60
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3ca60)
        
        if (data_143f3ca60 == 0xffffffff)
            zmm6 = sub_140b58170(&data_143f3ca58, "LineOfSight", 1)
            _Init_thread_footer(&data_143f3ca60)
    
    float var_38_1[0x4] = zmm6
    void var_ec
    void var_b8
    sub_141eb54c0(&var_b8, data_143f3ca58, &var_ec, 1, arg2)
    sub_141eb8b10(&var_b8, arg1[0x4a])
    void var_c8
    (*(*arg2 + 0x600))(arg2, &var_c8, arg1[0x4a])
    int64_t* rbx
    
    if (sub_141ec6cd0((*(*arg1 + 0x150))(arg1), arg3, &var_c8, 3, &var_b8, &data_143f3a660) != 0)
        void* rax_8 = sub_14255d000()
        void* rdx_5 = arg2[2]
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
            void* r14_1 = arg2[0x26]
            
            if (r14_1 == 0)
                rbx.b = 0
            else
                void* rax_11 = sub_142488170()
                void* rdx_6 = *(r14_1 + 0x10)
                int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                
                if (rax_12.d s<= *(rdx_6 + 0x38)
                        && *(*(rdx_6 + 0x30) + (rax_12 << 3)) == rax_11 + 0x30)
                    goto label_141f8e16d
                
                rbx.b = 0
        else
        label_141f8e16d:
            void* rax_14 = arg2[0x26]
            int64_t var_f8
            float var_f0_1
            float zmm1_1[0x4]
            
            if (rax_14 == 0)
                float rax_15 = data_143dbb200
                var_f8 = data_143dbb1f8.q
                var_f0_1 = rax_15
            else
                zmm1_1 = *(rax_14 + 0x1d0)
                var_f8.d = zmm1_1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                var_f0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                var_f8:4.d = temp0_1[0]
            
            float zmm0_1[0x4] = zx.o(var_f8)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            temp0_3[0] = temp0_3[0] f- arg3[1]
            var_f8 = zmm0_1.q
            zmm0_1[0] = zmm0_1[0] f- *arg3
            zmm1_1 = var_f0_1
            zmm1_1[0] = zmm1_1[0] f- arg3[2]
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
            temp0_3[0] = temp0_3[0] + zmm0_1[0]
            temp0_3[0] = temp0_3[0] + zmm1_1[0]
            
            if (temp0_3[0] > 64000000f)
                rbx.b = 0
            else
                void* rax_17 = sub_14255d000()
                void* rdx_7 = arg2[2]
                int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                
                if ((rax_18.d s> *(rdx_7 + 0x38)
                        || *(*(rdx_7 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30) && temp0_3[0] > 4000000f)
                    rbx.b = 0
                else
                    int32_t var_e8
                    void var_d0
                    (*(*arg2 + 0x560))(arg2, &var_d0, &var_e8)
                    void* rax_21 = arg2[0x26]
                    float var_f0_3
                    
                    if (rax_21 == 0)
                        float rax_22 = data_143dbb200
                        var_f8 = data_143dbb1f8.q
                        var_f0_3 = rax_22
                    else
                        zmm1_1 = *(rax_21 + 0x1d0)
                        var_f8.d = zmm1_1[0]
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        var_f0_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                        var_f8:4.d = temp0_4[0]
                    
                    zmm1_1 = zx.o(var_f8)
                    var_f8:4.d = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0]
                    float zmm0_2[0x4] = var_f0_3
                    zmm0_2[0] = zmm0_2[0] f+ var_e8
                    var_f8.d = zmm1_1[0]
                    float var_f0_4 = zmm0_2[0]
                    rbx.b = sub_141ec6cd0((*(*arg1 + 0x150))(arg1), arg3, &var_f8, 3, &var_b8, 
                        &data_143f3a660) == 0
    else
        rbx.b = 1
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    result = zx.q(rbx.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_128)
return result
