// 函数: sub_14062e9a0
// 地址: 0x14062e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r15 = arg3
*arg4 = 0
float var_110_1
int64_t var_108
int64_t rax_5
float zmm6_1

if (arg3 != 0)
    void* rax_2 = *(arg3 + 0x130)
    int64_t var_118
    
    if (rax_2 == 0)
        var_118 = data_143dbb1f8.q
        var_110_1 = data_143dbb200
    else
        float zmm1[0x4] = *(rax_2 + 0x1d0)
        var_118.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_110_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_118:4.d = temp0_1[0]
    
    int64_t rcx = data_143f5b298
    var_108 = var_118
    rax_5, zmm6_1 = sub_1423de540(rcx, arg1, 0)

void* const result

if (arg3 == 0 || rax_5 == 0)
    result = nullptr
else
    void* result_1 = nullptr
    zmm6_1 = zmm6_1 * zmm6_1
    void* result_2 = nullptr
    char var_78_1 = 0
    int32_t var_d0 = 5
    void* var_c8
    sub_1405ab0f0(&var_c8, rax_5, arg2)
    char var_78_2 = 1
    sub_1406277a0(&var_d0)
    void** var_c0
    char var_ac
    int64_t var_98
    
    if (var_ac == 0)
        void* result_4
        void* result_3 = result_4
        int32_t var_b0
        int32_t r14_1 = var_b0
        int128_t zmm8 = var_108:4.d
        int128_t zmm9 = var_108.d
        
        while (true)
            if (result_3 != r15)
                void* rax_6 = *(result_3 + 0x130)
                int64_t* rax_7
                uint128_t zmm0_1
                uint128_t zmm1_1
                
                if (rax_6 == 0)
                    int32_t var_e0_1 = data_143dbb200
                    uint64_t var_e8
                    rax_7 = &var_e8
                    var_e8 = data_143dbb1f8.q
                else
                    zmm1_1 = *(rax_6 + 0x1d0)
                    rax_7 = &var_108
                    var_108.d = zmm1_1.d
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    int32_t var_100_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
                    var_108:4.d = zmm0_1.d
                
                zmm0_1 = zx.o(*rax_7)
                int32_t rax_9 = rax_7[1].d
                float zmm2_1 = zmm0_1.d f- zmm9.d
                zmm1_1.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d f- zmm8.d
                zmm0_1.d = rax_9.d f- var_110_1.d
                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm2_1 = zmm2_1 * zmm2_1 f+ zmm1_1.d f+ zmm0_1.d
                
                if (not(zmm2_1 >= zmm6_1))
                    result_2 = result_3
                    zmm6_1 = zmm2_1
            
            int32_t var_b8
            int32_t rdx_2 = var_b8
            r14_1 += 1
            int32_t var_90
            int32_t r8_1 = var_90
            void* r13_1 = var_c8
            
            if (r14_1 s>= rdx_2 + r8_1)
            label_14062ed55:
                int64_t var_a0 = 0
                char var_ac_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_1) << 3
            
            while (true)
                if (r14_1 s>= rdx_2)
                    result_3 = *(var_98 + (sx.q(r14_1 - rdx_2) << 3))
                else
                    result_3 = *(var_c0 + r12_1)
                
                int32_t var_a8 = var_a8 + 1
                
                if (result_3 != 0)
                    void* rax_16 = sub_141dc9840(result_3)
                    
                    if (rax_16 != 0)
                        void* const rax_23
                        
                        if ((var_d0.b & 1) != 0)
                            int32_t rax_17 = *(result_3 + 0xc)
                            
                            if (rax_17 s>= data_143e1d9b4)
                                rax_23 = nullptr
                            else
                                int16_t temp0_6
                                int32_t temp1_1
                                temp0_6:temp1_1 = sx.q(rax_17)
                                uint32_t rdx_4 = zx.d(temp0_6)
                                int32_t rax_19 = temp1_1 + rdx_4
                                rax_23 = *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_19.w) - rdx_4) * 0x18
                        
                        if ((var_d0.b & 1) == 0 || ((*(rax_23 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_10 = var_d0
                            
                            if (((rcx_10 u>> 1).b & 1) == 0)
                                goto label_14062ec7f
                            
                            uint64_t rax_27 = sub_1405949a0()
                            
                            if (rax_27.b != 0)
                                rcx_10 = var_d0
                            label_14062ec7f:
                                
                                if (((rcx_10 u>> 2).b & 1) == 0)
                                label_14062ecfb:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_16) == r13_1)
                                        if (rax_16 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_29 = sub_1425bd0d0()
                                        void* rdx_6 = *(result_3 + 0x10)
                                        int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                                        
                                        if (rax_30.d s> *(rdx_6 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_6 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30)
                                            break
                                else
                                    if ((*(rax_16 + 0x1f4) & 0x20) == 0
                                            || (*(rax_16 + 0x1f6) & 8) != 0)
                                        rax_27 = zx.q(*(rax_16 + 0x1f5))
                                    
                                    if (((*(rax_16 + 0x1f4) & 0x20) != 0
                                            && (*(rax_16 + 0x1f6) & 8) == 0) || (rax_27.b & 0x40) != 0
                                            || rax_27.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_12 = *(rax_16 + 0xb8)
                                    char* rsi_1 = *(rax_16 + 0x248)
                                    
                                    if (rcx_12 != 0)
                                        rax_27 = sub_1424359b0(rcx_12)
                                    
                                    if (rcx_12 == 0 || rax_27 == 0 || rsi_1 == rax_27)
                                        rcx_12.b = 1
                                    else
                                        rcx_12.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_27.b = 1
                                    else
                                        rax_27.b = 0
                                    
                                    if (rcx_12.b != 0 || rax_27.b != 0)
                                        rax_27.b = 1
                                    
                                    if (r15.b != 0 && rax_27.b != 0)
                                        goto label_14062ecfb
                    
                    r8_1 = var_90
                    rdx_2 = var_b8
                
                r14_1 += 1
                r12_1 += 8
                
                if (r14_1 s>= rdx_2 + r8_1)
                    goto label_14062ed55
            
            void* result_5 = result_3
            int32_t var_b0_1 = r14_1
            
            if (var_ac != 0)
                break
            
            r15 = arg3
        
        result_1 = result_2
    
    if (var_78_2 != 0)
        char var_78_3 = 0
        int64_t var_80
        sub_142441560(var_c8, var_80)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
    
    if (result_1 != 0)
        *arg4 = 1
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
