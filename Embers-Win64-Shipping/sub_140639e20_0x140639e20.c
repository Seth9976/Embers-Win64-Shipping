// 函数: sub_140639e20
// 地址: 0x140639e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_168
int64_t rax_2 = __security_cookie ^ &var_168
uint64_t* r14_1 = arg2
uint64_t rax
float zmm6_1[0x4]
rax, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 0)

if (rax != 0)
    float var_58_1[0x4] = zmm6_1
    r14_1[1].d = 0
    
    if (*(r14_1 + 0xc) != 0)
        sub_140638c50(r14_1, 0)
    
    char var_148
    int32_t var_140
    int32_t zmm0_1
    int32_t zmm1_1
    int32_t zmm3
    int32_t zmm4_1
    
    if (var_148 == 0)
        zmm1_1 = arg4.d
        zmm0_1 = arg4:4.d
        zmm3 = zmm1_1
        zmm4_1 = zmm0_1
    else
        zmm3 = var_140
        zmm0_1 = arg4.d
        
        if (not(zmm3 f<= zmm0_1))
            zmm3 = zmm0_1
        
        zmm4_1 = var_140
        int32_t zmm2_1 = arg4:4.d
        
        if (not(zmm4_1 f<= zmm2_1))
            zmm4_1 = zmm2_1
        
        zmm1_1 = var_140
        
        if (not(zmm1_1 f>= zmm0_1))
            zmm1_1 = zmm0_1
        
        zmm0_1 = var_140
        
        if (not(zmm0_1 f>= zmm2_1))
            zmm0_1 = zmm2_1
    
    float zmm7[0x4] = arg3.d
    zmm6_1 = arg3:4.d
    float temp0_1[0x4] = _mm_min_ss(zmm7[0], zmm3)
    float temp0_2[0x4] = _mm_min_ss(zmm6_1[0], zmm4_1)
    float temp0_3[0x4] = _mm_max_ss(zmm7[0], zmm1_1)
    _mm_max_ss(zmm6_1[0], zmm0_1)
    void* rax_3 = sub_142452380()
    int32_t var_f0 = 5
    char var_98_1 = 0
    void* var_e8
    sub_1405ab0f0(&var_e8, rax, rax_3)
    char var_98_2 = 1
    sub_1406277a0(&var_f0)
    void** var_e0
    char var_cc
    int64_t var_b8
    
    if (var_cc == 0)
        int64_t r15
        int64_t var_40_1 = r15
        
        while (true)
            void* const rax_7
            
            if (arg5 == 0)
                rax_7 = nullptr
            else
                void* rax_4 = sub_142452380()
                
                if (rax_4 == 0)
                    rax_7 = nullptr
                else
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s> *(arg5 + 0x38)
                            || *(*(arg5 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        rax_7 = nullptr
                    else
                        rax_7 = arg5
            
            void* var_c0
            void* rdx_3 = *(var_c0 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                void* rcx_6 = *(var_c0 + 0x130)
                int32_t* rax_11
                
                if (rcx_6 == 0)
                    int32_t var_108_1 = data_143dbb200
                    uint64_t var_110
                    rax_11 = &var_110
                    var_110 = data_143dbb1f8.q
                else
                    float zmm1_2[0x4] = *(rcx_6 + 0x1d0)
                    float var_128
                    rax_11 = &var_128
                    var_128 = zmm1_2[0]
                    uint128_t zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                    float var_120_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                    int32_t var_124_1 = zmm0_2.d
                
                int32_t rax_13 = rax_11[2]
                uint64_t var_104 = *rax_11
                int32_t var_fc_1 = rax_13
                int64_t var_f8
                int64_t* rax_14
                rax_14, zmm6_1 = sub_140636400(&var_f8, &var_104)
                int32_t zmm0_3 = *rax_14
                
                if (not(zmm0_3 f<= temp0_1[0]) && not(zmm0_3 f>= temp0_3[0]))
                    zmm0_3 = *(rax_14 + 4)
                    
                    if (not(zmm0_3 f<= temp0_2[0]) && not(zmm0_3 f>= zmm6_1[0]))
                        int64_t rdi_2 = sx.q(r14_1[1].d)
                        int32_t rax_15 = (rdi_2 + 1).d
                        r14_1[1].d = rax_15
                        
                        if (rax_15 s> *(r14_1 + 0xc))
                            sub_1405a4d70(r14_1)
                        
                        *(*r14_1 + (rdi_2 << 3)) = var_c0
            
            int32_t var_b0
            int32_t r8_2 = var_b0
            int32_t var_d8
            int32_t rdx_6 = var_d8
            var_140.q = var_e8
            int32_t var_d0
            int32_t r12_2 = var_d0 + 1
            
            if (r12_2 s>= r8_2 + rdx_6)
            label_14063a27a:
                int64_t var_c0_1 = 0
                char var_cc_1 = 1
                break
            
            int64_t r13_1 = sx.q(r12_2) << 3
            void* r14_2
            
            while (true)
                if (r12_2 s>= rdx_6)
                    r14_2 = *(var_b8 + (sx.q(r12_2 - rdx_6) << 3))
                else
                    r14_2 = *(var_e0 + r13_1)
                
                int32_t var_c8 = var_c8 + 1
                
                if (r14_2 != 0)
                    void* rax_23 = sub_141dc9840(r14_2)
                    
                    if (rax_23 != 0)
                        void* const rax_30
                        
                        if ((var_f0.b & 1) != 0)
                            int32_t rax_24 = *(r14_2 + 0xc)
                            
                            if (rax_24 s>= data_143e1d9b4)
                                rax_30 = nullptr
                            else
                                int16_t temp0_7
                                int32_t temp1_1
                                temp0_7:temp1_1 = sx.q(rax_24)
                                uint32_t rdx_8 = zx.d(temp0_7)
                                int32_t rax_26 = temp1_1 + rdx_8
                                rax_30 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_26.w) - rdx_8) * 0x18
                        
                        if ((var_f0.b & 1) == 0 || ((*(rax_30 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_f0
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_14063a19f
                            
                            uint64_t rax_34 = sub_1405949a0()
                            
                            if (rax_34.b != 0)
                                rcx_16 = var_f0
                            label_14063a19f:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                label_14063a21b:
                                    void* r9 = var_140.q
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_23) == r9)
                                        if (rax_23 == *(r9 + 0x30))
                                            break
                                        
                                        void* rax_35 = sub_1425bd0d0()
                                        void* rdx_10 = *(r14_2 + 0x10)
                                        rax = sx.q(*(rax_35 + 0x38))
                                        
                                        if (rax.d s> *(rdx_10 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_10 + 0x30) + (rax << 3)) != rax_35 + 0x30)
                                            break
                                else
                                    if ((*(rax_23 + 0x1f4) & 0x20) == 0
                                            || (*(rax_23 + 0x1f6) & 8) != 0)
                                        rax_34 = zx.q(*(rax_23 + 0x1f5))
                                    
                                    if (((*(rax_23 + 0x1f4) & 0x20) != 0
                                            && (*(rax_23 + 0x1f6) & 8) == 0) || (rax_34.b & 0x40) != 0
                                            || rax_34.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_18 = *(rax_23 + 0xb8)
                                    char* rsi_2 = *(rax_23 + 0x248)
                                    
                                    if (rcx_18 != 0)
                                        rax_34 = sub_1424359b0(rcx_18)
                                    
                                    if (rcx_18 == 0 || rax_34 == 0 || rsi_2 == rax_34)
                                        rcx_18.b = 1
                                    else
                                        rcx_18.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_34.b = 1
                                    else
                                        rax_34.b = 0
                                    
                                    if (rcx_18.b != 0 || rax_34.b != 0)
                                        rax_34.b = 1
                                    
                                    if (r15.b != 0 && rax_34.b != 0)
                                        goto label_14063a21b
                    
                    r8_2 = var_b0
                    rdx_6 = var_d8
                
                r12_2 += 1
                r13_1 += 8
                
                if (r12_2 s>= r8_2 + rdx_6)
                    goto label_14063a27a
            
            var_c0 = r14_2
            var_d0 = r12_2
            
            if (var_cc != 0)
                break
            
            r14_1 = arg2
    
    if (var_98_2 != 0)
        char var_98_3 = 0
        int64_t var_a0
        sub_142441560(var_e8, var_a0)
        
        if (var_b8 != 0)
            sub_140a74f90(var_b8)
        
        if (var_e0 != 0)
            sub_140a74f90(var_e0)

__security_check_cookie(rax_2 ^ &var_168)
