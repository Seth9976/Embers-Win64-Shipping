// 函数: sub_141104170
// 地址: 0x141104170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r14 = arg1
char result = sub_141421550()

if (result != 0)
    int64_t* var_150_1 = &data_143ec4c60
    uint128_t zmm6_1 = sub_1413948c0(&data_143ec4c60, arg2, 1, 1)
    int64_t var_dc
    __builtin_memset(&var_dc, 0, 0x43)
    int128_t var_138
    __builtin_memset(&var_138, 0, 0x30)
    int128_t var_f0_1 = zx.o(0)
    int16_t var_98_1 = 0
    sub_140fdc870(arg2, &var_138)
    int64_t var_108_1 = data_1439b59c0
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t var_f8_1 = data_1439b5400
    int64_t var_100_1 = data_14395da18
    void* rax_5 = &rcx_4[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_5
    int32_t i = 0
    int64_t* rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    int32_t i_1 = 0
    *rax_6 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142f18bc8
    rcx_4[2].b = 0
    *(rcx_4 + 0x14) = 0
    *(rcx_4 + 0x1c) = 0
    
    if (*(r14 + 0xa8) s> 0)
        int64_t r12_1 = 0
        uint128_t var_48_1 = zmm6_1
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int64_t var_160_1 = 0
        
        do
            void* r14_2 = *(r14 + 0xa0) + r12_1
            
            if (sub_142391f10(r14_2) != 0)
                int32_t rbx_1 = *(arg2 + 0x8c)
                int32_t rax_9 = *(r14_2 + 0xad8)
                
                if (rbx_1 != rax_9)
                    bool cond:0_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_9
                    
                    if (cond:0_1)
                        void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_10 = &rdx_4[3]
                        
                        if (rax_10 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_10 = &rdx_4[3]
                        
                        *(arg2 + 0x30) = rax_10
                        int64_t* rax_11 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_11 = rdx_4
                        int32_t rax_12 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_4[1]
                        rdx_4[1] = 0
                        *rdx_4 = &data_142f11588
                        rdx_4[2].d = rax_12
                    else
                        *(arg2 + 0x90) = rax_9
                
                zmm7 = zx.o(*(r14_2 + 0x15a0))
                void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                zmm8 = zx.o(*(r14_2 + 0x159c))
                zmm9 = zx.o(*(r14_2 + 0x1598))
                zmm6_1 = _mm_cvtepi32_ps(zx.o(*(r14_2 + 0x15a4)))
                void* rax_13 = &rcx_13[5]
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_13 u> *(arg2 + 0x38))
                    zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_13 = &rcx_13[5]
                
                *(arg2 + 0x30) = rax_13
                void**** rax_14 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_14 = rcx_13
                *(arg2 + 8) = &rcx_13[1]
                rcx_13[1] = 0
                *rcx_13 = &data_142d54998
                rcx_13[2].d = zmm9.d
                *(rcx_13 + 0x14) = zmm8.d
                *(rcx_13 + 0x1c) = zmm7.d
                rcx_13[4].d = zmm6_1.d
                rcx_13[3].d = 0
                *(rcx_13 + 0x24) = 0x3f800000
                void* var_148
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(data_1439c7a08)]), 
                    &var_148, &data_143f140e0, 0)
                var_138.q = data_1439c9210
                int64_t rax_19 = 0
                void* r13_1 = var_148
                
                if (r13_1 != 0)
                    int64_t rdx_8 = sx.q(*(r13_1 + 0x10c))
                    void* var_140
                    int64_t* r15_1 = *(var_140 + 0x10)
                    int64_t rax_21 = r15_1[3]
                    
                    if (*(rax_21 + (rdx_8 << 3)) == 0)
                        sub_1419ccf30(r15_1, rdx_8.d)
                        rax_21 = r15_1[3]
                    
                    rax_19 = *(rax_21 + (rdx_8 << 3))
                    r12_1 = var_160_1
                    i = i_1
                
                var_138:8.q = rax_19
                int32_t var_e0_1 = 0
                sub_1419870b0(arg2, &var_138, 2)
                sub_141105780(r13_1, arg2, 0x3f800000)
                int64_t* rcx_22 = *(data_143f5b298 + 0xb08)
                
                if ((*(*rcx_22 + 0x100))(rcx_22) != 0)
                    int64_t* rcx_23 = *(data_143f5b298 + 0xb08)
                    int64_t* rax_27 = (*(*rcx_23 + 0x100))(rcx_23)
                    int64_t r9_2 = *rax_27
                    (*(r9_2 + 0x120))(rax_27, arg2, zx.q(*(r14_2 + 0xad0)), r9_2, i_1, var_160_1, 
                        arg1, var_150_1)
                
                if (*(arg2 + 0x8c) != rbx_1)
                    bool cond:1_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (cond:1_1)
                        void*** rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_28 = &rdx_15[3]
                        
                        if (rax_28 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_28 = &rdx_15[3]
                        
                        *(arg2 + 0x30) = rax_28
                        int64_t* rax_29 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_29 = rdx_15
                        int32_t rax_30 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_15[1]
                        rdx_15[1] = 0
                        *rdx_15 = &data_142f11588
                        rdx_15[2].d = rax_30
                    else
                        *(arg2 + 0x90) = rbx_1
            
            r14 = arg1
            i += 1
            r12_1 += 0x5240
            i_1 = i
            var_160_1 = r12_1
        while (i s< *(r14 + 0xa8))
    
    sub_14139bc50(var_150_1, arg2)
    result = 1

__security_check_cookie(rax_1 ^ &var_188)
return result
