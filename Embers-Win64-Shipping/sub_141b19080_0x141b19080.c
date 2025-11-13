// 函数: sub_141b19080
// 地址: 0x141b19080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
uint64_t result = arg5
int64_t* result_1 = result

if (*(arg3 + 0x48) != 0 && (*(arg3 + 0x54) & 2) == 0)
    result = zx.q(*(arg1 + 0x30))
    int32_t r12_1 = *(arg3 + 0x20)
    bool cond:1_1
    
    if (r12_1 == 1)
        cond:1_1 = (result.b & 2) == 0
    else
        cond:1_1 = (result.b & 1) == 0
    
    if (not(cond:1_1))
        int64_t* r13_1 = *(arg1 + 0x50)
        int32_t i_2 = 0
        int32_t* r14_1 = *(arg1 + 0x40)
        uint64_t i_3 = zx.q(*(arg1 + 0x48))
        void* var_210_1 = nullptr
        void* var_200 = nullptr
        int32_t var_1f4_1 = 0
        int64_t var_208 = *(arg3 + 0x18)
        int64_t var_1f0
        sub_141a56f70(arg3 + 0x28, &var_1f0)
        int32_t rax_3 = *(arg3 + 0x24)
        int32_t var_218
        int32_t var_214
        int64_t rdx_1
        
        if (rax_3 == 0x80000000)
            int64_t* rdx_2 = 0x10
            
            if (*(arg3 + 0x20) != 0)
                rdx_2 = 4
            
            rdx_1 = *(rdx_2 + arg3)
        else
            var_218 = rax_3
            var_214 = 0
            rdx_1 = var_218.q
        
        uint32_t rbx_2 = (var_208 u>> 0x20).d
        void var_1d0
        int32_t* rax_4 = sub_141a352a0(&var_1d0, rdx_1, &var_1f0)
        uint64_t zmm1_1 = zx.q(var_208.d)
        double zmm2_1[0x2] = zx.o(0)
        int64_t rcx_2 = *rax_4
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_2))
        result = sx.q(rcx_2.d)
        var_218.q = rcx_2
        zmm0_1.d = zmm0_1.d f* var_214
        uint64_t temp0_2 = _mm_cvtepi32_pd(zmm1_1)
        zmm2_1[0] = float.d(sx.q(rbx_2) * result)
        zmm0_1 = _mm_cvtps_pd(zmm0_1.q)
        zmm2_1[0] = zmm2_1[0] f+ zmm0_1.q
        zmm2_1[0] = zmm2_1[0] f/ temp0_2
        int32_t temp0_4 = _mm_cvtpd_ps(zmm2_1)
        void* r14_5
        void*** var_1c8
        int64_t var_1c0
        int64_t var_1b8
        int32_t var_1b0
        int32_t var_1ac
        int64_t var_1a8
        int32_t var_1a0
        int32_t result_2
        
        if (r12_1 != 1)
            if (i_3.d s> 0)
                uint64_t i
                
                do
                    char rcx_10 = *arg4
                    result = zx.q(*r14_1)
                    var_208.b = 1
                    var_208:4.d = result.d
                    
                    if (rcx_10 == 2)
                    label_141b1936b:
                        char rdx_10 = arg4[8]
                        void* rcx_12 = &arg4[8]
                        var_218.b = 1
                        int32_t var_214_2 = result.d
                        
                        if (rdx_10 == 2)
                            result.b = 1
                        else
                            int32_t temp1_1 = *(rcx_12 + 4)
                            
                            if (temp1_1 s> result.d || (temp1_1 s>= result.d && rdx_10 == 1))
                                goto label_141b1939a
                            
                            if (rdx_10 != 1)
                                result.b = 0
                            else
                                rcx_12 = &var_218
                            label_141b1939a:
                                
                                if (*(rcx_12 + 4) == *(arg4 + 0xc))
                                    result.b = 1
                                else
                                    result.b = 0
                    else
                        int32_t rdx_9 = *(arg4 + 4)
                        char* rcx_11
                        
                        if (rdx_9 s< result.d)
                            rcx_11 = arg4
                        label_141b19366:
                            
                            if (*(rcx_11 + 4) == rdx_9)
                                goto label_141b1936b
                            
                            result.b = 0
                        else if (rdx_9 s> result.d)
                            if (rcx_10 == 1)
                                rcx_11 = &var_208
                                goto label_141b19366
                            
                            result.b = 0
                        else
                            if (rcx_10 == 1)
                                rcx_11 = arg4
                                goto label_141b19366
                            
                            result.b = 0
                    
                    if (result.b != 0)
                        sub_141af6140(&var_1c8, r13_1)
                        int64_t i_6 = sx.q(i_2)
                        i_2 = (i_6 + 1).d
                        
                        if (i_2 s> var_1f4_1)
                            sub_1407c3b60(&var_200)
                            var_210_1 = var_200
                        
                        void**** rcx_16 = i_6 * 0x38 + var_210_1
                        *rcx_16 = var_1c8
                        rcx_16[1] = var_1c0
                        rcx_16[2] = var_1b8
                        rcx_16[3].d = var_1b0
                        *(rcx_16 + 0x1c) = var_1ac
                        rcx_16[4] = var_1a8
                        rcx_16[5].d = var_1a0
                        result = zx.q(result_2)
                        *(rcx_16 + 0x2c) = result.d
                        rcx_16[6].d = temp0_4
                    
                    r13_1 = &r13_1[6]
                    r14_1 = &r14_1[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                goto label_141b19436
            
            r14_5 = var_210_1
        else
            int32_t r15_1 = i_3.d - r12_1
            
            if (i_3.d - r12_1 s< 0)
                r14_5 = var_210_1
            else
                int64_t rax_5 = sx.q(r15_1)
                int32_t* r12_2 = &r14_1[rax_5]
                void* r14_4 = &r13_1[rax_5 * 6]
                void* r13_2 = var_210_1
                int32_t temp5_1
                
                do
                    char rcx_3 = *arg4
                    result = zx.q(*r12_2)
                    var_208.b = 1
                    var_208:4.d = result.d
                    
                    if (rcx_3 == 2)
                    label_141b1924c:
                        char rdx_6 = arg4[8]
                        void* rcx_5 = &arg4[8]
                        var_218.b = 1
                        int32_t var_214_1 = result.d
                        
                        if (rdx_6 == 2)
                            result.b = 1
                        else
                            int32_t temp2_1 = *(rcx_5 + 4)
                            
                            if (temp2_1 s> result.d || (temp2_1 s>= result.d && rdx_6 == 1))
                                goto label_141b1927b
                            
                            if (rdx_6 != 1)
                                result.b = 0
                            else
                                rcx_5 = &var_218
                            label_141b1927b:
                                
                                if (*(rcx_5 + 4) == *(arg4 + 0xc))
                                    result.b = 1
                                else
                                    result.b = 0
                    else
                        int32_t rdx_5 = *(arg4 + 4)
                        char* rcx_4
                        
                        if (rdx_5 s< result.d)
                            rcx_4 = arg4
                        label_141b19247:
                            
                            if (*(rcx_4 + 4) == rdx_5)
                                goto label_141b1924c
                            
                            result.b = 0
                        else if (rdx_5 s> result.d)
                            if (rcx_3 == 1)
                                rcx_4 = &var_208
                                goto label_141b19247
                            
                            result.b = 0
                        else
                            if (rcx_3 == 1)
                                rcx_4 = arg4
                                goto label_141b19247
                            
                            result.b = 0
                    
                    if (result.b != 0)
                        sub_141af6140(&var_1c8, r14_4)
                        int64_t i_5 = sx.q(i_2)
                        i_2 = (i_5 + 1).d
                        
                        if (i_2 s> var_1f4_1)
                            sub_1407c3b60(&var_200)
                            void* rax_6 = var_200
                            r13_2 = rax_6
                            var_210_1 = rax_6
                        
                        int64_t* rcx_9 = i_5 * 0x38 + r13_2
                        *rcx_9 = var_1c8
                        rcx_9[1] = var_1c0
                        rcx_9[2] = var_1b8
                        rcx_9[3].d = var_1b0
                        *(rcx_9 + 0x1c) = var_1ac
                        rcx_9[4] = var_1a8
                        rcx_9[5].d = var_1a0
                        result = zx.q(result_2)
                        *(rcx_9 + 0x2c) = result.d
                        rcx_9[6].d = temp0_4
                    
                    r14_4 -= 0x30
                    r12_2 -= 4
                    temp5_1 = r15_1
                    r15_1 -= 1
                while (temp5_1 - 1 s>= 0)
            label_141b19436:
                
                if (i_2 == 0)
                    r14_5 = var_210_1
                else
                    int32_t i_4 = i_2
                    void* var_170 = var_210_1
                    r14_5 = nullptr
                    int64_t rbx_3 = sx.q(*(arg1 + 0x28))
                    i_2 = 0
                    int64_t rsi_2 = *(arg1 + 0x20)
                    void** const var_178_1 = &data_143054f78
                    var_1f0 = 0
                    int64_t var_1e8_1 = 0
                    void* var_130_1 = nullptr
                    int32_t var_128_1 = rbx_3.d
                    void var_160
                    int32_t var_124
                    
                    if (rbx_3.d != 0)
                        sub_141b30220(&var_160, rbx_3.d, 0)
                        void* rcx_18 = &var_160
                        
                        if (var_130_1 != 0)
                            rcx_18 = var_130_1
                        
                        memcpy(rcx_18, rsi_2, (rbx_3 * 0x18).d)
                    else
                        var_124 = 2
                    
                    sub_141afc300(&var_1f0)
                    char var_188
                    char var_188_1 = var_188 & 0xfc
                    void*** rax_25 = sub_140a82f30(0x58, 8)
                    var_1c8 = rax_25
                    char rcx_20 = var_188_1 | 1
                    void*** rcx_21 = &var_1c8
                    
                    if ((rcx_20 & 2) == 0)
                        rcx_21 = rax_25
                    
                    *rcx_21 = &data_143054f78
                    rcx_21[1] = 0
                    rcx_21[1] = var_170
                    var_170 = nullptr
                    rcx_21[2].d = i_4
                    *(rcx_21 + 0x14) = var_1f4_1
                    int32_t var_168_1
                    var_168_1.q = 0
                    rcx_21[9] = 0
                    
                    if (var_130_1 == 0)
                        memmove(&rcx_21[3], &var_160, 0x30)
                    
                    int64_t rcx_23 = rcx_21[9]
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    rcx_21[9] = var_130_1
                    int64_t var_130_2 = 0
                    rcx_21[0xa].d = var_128_1
                    *(rcx_21 + 0x54) = var_124
                    int32_t var_128_2 = 0
                    int32_t var_124_1 = 2
                    void var_118
                    int128_t* rax_32 = sub_1405ab790(&var_118, &result_1[0x22], result_1 + 0x124, 
                        &result_1[0x27], &var_1c8)
                    int64_t rbx_5 = sx.q(result_1[1].d)
                    int32_t rcx_25 = (rbx_5 + 1).d
                    result_1[1].d = rcx_25
                    
                    if (rcx_25 s> *(result_1 + 0xc))
                        sub_1405c5190(result_1)
                    
                    sub_1405ab620(rbx_5 * 0xc8 + *result_1, rax_32)
                    char var_58
                    
                    if ((var_58 & 1) != 0)
                        int64_t* var_98
                        int64_t* rcx_29 = &var_98
                        
                        if ((var_58 & 2) == 0)
                            rcx_29 = var_98
                        
                        (**rcx_29)(rcx_29, 0)
                        
                        if ((var_58 & 2) == 0)
                            sub_140a74f90(var_98)
                    
                    int64_t var_b8
                    
                    if (var_b8 != 0)
                        sub_140a74f90(var_b8)
                    
                    if ((rcx_20 & 1) != 0)
                        void*** rcx_32 = &var_1c8
                        
                        if ((rcx_20 & 2) == 0)
                            rcx_32 = var_1c8
                        
                        (**rcx_32)(rcx_32, 0)
                        
                        if ((rcx_20 & 2) == 0)
                            sub_140a74f90(var_1c8)
                    
                    if (var_130_2 != 0)
                        sub_140a74f90(var_130_2)
                    
                    result = sub_141afc300(&var_170)
        
        if (i_2 != 0)
            void* rbx_6 = r14_5 + 0x10
            int32_t i_1
            
            do
                int64_t rcx_36 = *(rbx_6 + 0x10)
                
                if (rcx_36 != 0)
                    result = sub_140a74f90(rcx_36)
                
                int64_t rcx_37 = *rbx_6
                
                if (rcx_37 != 0)
                    result = sub_140a74f90(rcx_37)
                
                rbx_6 += 0x38
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (r14_5 != 0)
            result = sub_140a74f90(r14_5)

__security_check_cookie(rax_1 ^ &var_248)
return result
