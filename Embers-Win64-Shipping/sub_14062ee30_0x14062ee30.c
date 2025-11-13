// 函数: sub_14062ee30
// 地址: 0x14062ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
*arg4 = 0
void* result
float zmm6_1
result, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 0)

if (result != 0)
    void* result_1 = nullptr
    zmm6_1 = zmm6_1 * zmm6_1
    char var_78_1 = 0
    int32_t var_d0 = 5
    void* var_c8
    sub_1405ab0f0(&var_c8, result, arg2)
    char var_78_2 = 1
    sub_1406277a0(&var_d0)
    void** var_c0
    char i
    int64_t var_98
    
    if (i == 0)
        int32_t var_b0
        int32_t r14_1 = var_b0
        int64_t r15
        int64_t var_28_1 = r15
        int128_t zmm7 = *arg3
        int128_t zmm8 = *(arg3 + 4)
        int128_t zmm9 = *(arg3 + 8)
        void* result_3
        void* result_2 = result_3
        
        do
            void* rax_2 = *(result_2 + 0x130)
            int32_t* rax_3
            uint128_t zmm0_1
            float zmm1_1[0x4]
            
            if (rax_2 == 0)
                int32_t var_e4_1 = data_143dbb200
                uint64_t var_ec
                rax_3 = &var_ec
                var_ec = data_143dbb1f8.q
            else
                zmm1_1 = *(rax_2 + 0x1d0)
                float var_f8
                rax_3 = &var_f8
                var_f8 = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_f0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                int32_t var_f4_1 = zmm0_1.d
            
            zmm0_1 = zx.o(*rax_3)
            int32_t rax_5 = rax_3[2]
            zmm1_1 = zmm0_1
            int32_t var_b8
            int32_t rdx_2 = var_b8
            int32_t var_90
            int32_t r8_1 = var_90
            float zmm2_1 = zmm0_1.d f- zmm7.d
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            temp0_3[0] = temp0_3[0] f- zmm8.d
            zmm0_1.d = rax_5.d f- zmm9.d
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            zmm2_1 = zmm2_1 * zmm2_1 + temp0_3[0] f+ zmm0_1.d
            bool cond:0_1 = zmm6_1 > zmm2_1
            zmm6_1 = _mm_min_ss(zmm6_1, zmm2_1)
            
            if (cond:0_1)
                result_1 = result_2
            
            r14_1 += 1
            void* r13_1 = var_c8
            
            if (r14_1 s>= rdx_2 + r8_1)
            label_14062f17b:
                int64_t var_a0 = 0
                char var_ac = 1
                break
            
            int64_t r12_1 = sx.q(r14_1) << 3
            
            while (true)
                if (r14_1 s>= rdx_2)
                    result_2 = *(var_98 + (sx.q(r14_1 - rdx_2) << 3))
                else
                    result_2 = *(var_c0 + r12_1)
                
                int32_t var_a8 = var_a8 + 1
                
                if (result_2 != 0)
                    void* rax_12 = sub_141dc9840(result_2)
                    
                    if (rax_12 != 0)
                        void* const rax_19
                        
                        if ((var_d0.b & 1) != 0)
                            int32_t rax_13 = *(result_2 + 0xc)
                            
                            if (rax_13 s>= data_143e1d9b4)
                                rax_19 = nullptr
                            else
                                int16_t temp0_5
                                int32_t temp1_1
                                temp0_5:temp1_1 = sx.q(rax_13)
                                uint32_t rdx_4 = zx.d(temp0_5)
                                int32_t rax_15 = temp1_1 + rdx_4
                                rax_19 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_15.w) - rdx_4) * 0x18
                        
                        if ((var_d0.b & 1) == 0 || ((*(rax_19 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_10 = var_d0
                            
                            if (((rcx_10 u>> 1).b & 1) == 0)
                                goto label_14062f09f
                            
                            uint64_t rax_23 = sub_1405949a0()
                            
                            if (rax_23.b != 0)
                                rcx_10 = var_d0
                            label_14062f09f:
                                
                                if (((rcx_10 u>> 2).b & 1) == 0)
                                label_14062f11b:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_12) == r13_1)
                                        if (rax_12 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_25 = sub_1425bd0d0()
                                        void* rdx_6 = *(result_2 + 0x10)
                                        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                                        
                                        if (rax_26.d s> *(rdx_6 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_6 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                                            break
                                else
                                    if ((*(rax_12 + 0x1f4) & 0x20) == 0
                                            || (*(rax_12 + 0x1f6) & 8) != 0)
                                        rax_23 = zx.q(*(rax_12 + 0x1f5))
                                    
                                    if (((*(rax_12 + 0x1f4) & 0x20) != 0
                                            && (*(rax_12 + 0x1f6) & 8) == 0) || (rax_23.b & 0x40) != 0
                                            || rax_23.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_12 = *(rax_12 + 0xb8)
                                    char* rsi_1 = *(rax_12 + 0x248)
                                    
                                    if (rcx_12 != 0)
                                        rax_23 = sub_1424359b0(rcx_12)
                                    
                                    if (rcx_12 == 0 || rax_23 == 0 || rsi_1 == rax_23)
                                        rcx_12.b = 1
                                    else
                                        rcx_12.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_23.b = 1
                                    else
                                        rax_23.b = 0
                                    
                                    if (rcx_12.b != 0 || rax_23.b != 0)
                                        rax_23.b = 1
                                    
                                    if (r15.b != 0 && rax_23.b != 0)
                                        goto label_14062f11b
                    
                    r8_1 = var_90
                    rdx_2 = var_b8
                
                r14_1 += 1
                r12_1 += 8
                
                if (r14_1 s>= rdx_2 + r8_1)
                    goto label_14062f17b
            
            void* result_4 = result_2
            int32_t var_b0_1 = r14_1
        while (i == 0)
    
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

__security_check_cookie(rax_1 ^ &var_128)
return result
