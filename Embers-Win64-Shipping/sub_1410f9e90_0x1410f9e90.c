// 函数: sub_1410f9e90
// 地址: 0x1410f9e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t rdi = *(arg3 + 0x37c)
uint64_t result = zx.q(*(arg1 + 0x3e0) - 1)
void* r13 = arg1
int64_t var_198
void* var_168

if (result.d u<= 1)
    int32_t var_1a8 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int32_t rax_33 = rdi:4.d
        int64_t rcx_31 = 0
        int64_t var_190_2 = 0
        
        do
            void* r13_4 = *(r13 + 0xa0) + rcx_31
            sub_1419a2ec0(*(r13_4 + 0x5150), &var_168, &data_143e528c0, 0)
            void* r14_1 = var_168
            void* r12_5 = nullptr
            
            if (r14_1 != 0)
                int64_t rdx_22 = sx.q(*(r14_1 + 0x10c))
                var_198 = rdx_22
                void* var_160
                int64_t* r13_5 = *(var_160 + 0x10)
                int64_t rax_35 = rdx_22
                int64_t r12_6 = r13_5[3]
                
                if (*(r12_6 + (rdx_22 << 3)) == 0)
                    sub_1419ccf30(r13_5, rdx_22.d)
                    rax_35 = var_198
                    r12_6 = r13_5[3]
                
                r12_5 = *(r12_6 + (rax_35 << 3))
            
            *(arg2 + 0x1b0) = r12_5
            sub_14198aa60(r12_5)
            void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_36 = &rcx_37[3]
            
            if (rax_36 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_36 = &rcx_37[3]
            
            *(arg2 + 0x30) = rax_36
            void**** rax_37 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            char var_1e8_2 = 1
            *rax_37 = rcx_37
            *(arg2 + 8) = &rcx_37[1]
            rcx_37[1] = 0
            *rcx_37 = &data_142dd5b40
            rcx_37[2] = r12_5
            sub_1410e8cf0(r14_1, arg2, r13_4, arg4, rdi.d, (*(r13_4 + 0x1598)).d, var_1e8_2)
            int32_t rcx_43 = *(r13_4 + 0x15a0) - *(r13_4 + 0x1598)
            int32_t rax_41 = *(r13_4 + 0x15a4) - *(r13_4 + 0x159c)
            
            if (rax_33 s<= rax_41)
                rax_41 = rax_33
            
            int32_t temp0_11
            int32_t temp1_1
            temp0_11:temp1_1 = sx.q(rax_41 + 7)
            
            if (rdi.d s<= rcx_43)
                rcx_43 = rdi.d
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rcx_43 + 7)
            sub_1419cd1c0(arg2, r14_1, ((temp2_1 & 7) + temp3_1) s>> 3, 
                ((temp0_11 & 7) + temp1_1) s>> 3, 1)
            int64_t r12_7 = *(arg2 + 0x1b0)
            
            if (*(r14_1 + 0x126) u> 0)
                uint32_t r14_2 = zx.d(*(r14_1 + 0x124))
                void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_46 = &rcx_47[5]
                
                if (rax_46 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_46 = &rcx_47[5]
                
                *(arg2 + 0x30) = rax_46
                void**** rax_47 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_47 = rcx_47
                *(arg2 + 8) = &rcx_47[1]
                rcx_47[1] = 0
                *rcx_47 = &data_142da77d8
                rcx_47[2] = r12_7
                rcx_47[3].d = r14_2
                rcx_47[4] = 0
            
            result = zx.q(var_1a8 + 1)
            r13 = arg1
            rcx_31 = var_190_2 + 0x5240
            var_1a8 = result.d
            var_190_2 = rcx_31
        while (result.d s< *(r13 + 0xa8))
else
    int64_t var_dc
    __builtin_memset(&var_dc, 0, 0x43)
    int128_t var_138
    __builtin_memset(&var_138, 0, 0x30)
    int128_t var_f0_1 = zx.o(0)
    int16_t var_98_1 = 0
    sub_140fdc870(arg2, &var_138)
    int64_t var_100_1 = data_14395da18
    int64_t var_108_1 = data_14395da00
    result = data_1439b59f0
    uint64_t result_1 = result
    int32_t i_1 = 0
    
    if (*(r13 + 0xa8) s> 0)
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        int64_t rdx_1 = 0
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int64_t var_190_1 = 0
        int32_t i
        
        do
            int32_t rbx_1 = *(arg2 + 0x8c)
            void* r13_2 = *(r13 + 0xa0) + rdx_1
            int32_t rax_6 = *(r13_2 + 0xad8)
            
            if (rbx_1 != rax_6)
                *(arg2 + 0x8c) = rax_6
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_7 = &rdx_4[3]
                    
                    if (rax_7 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_7 = &rdx_4[3]
                    
                    *(arg2 + 0x30) = rax_7
                    int64_t* rax_8 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_8 = rdx_4
                    int32_t rax_9 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_4[1]
                    rdx_4[1] = 0
                    *rdx_4 = &data_142f11588
                    rdx_4[2].d = rax_9
                else
                    *(arg2 + 0x90) = rax_6
            
            zmm7 = zx.o(*(r13_2 + 0x15a0))
            void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            zmm8 = zx.o(*(r13_2 + 0x159c))
            zmm9 = zx.o(*(r13_2 + 0x1598))
            zmm6 = _mm_cvtepi32_ps(zx.o(*(r13_2 + 0x15a4)))
            void* rax_10 = &rcx_5[5]
            zmm7 = _mm_cvtepi32_ps(zmm7)
            zmm8 = _mm_cvtepi32_ps(zmm8)
            zmm9 = _mm_cvtepi32_ps(zmm9)
            
            if (rax_10 u> *(arg2 + 0x38))
                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_10 = &rcx_5[5]
            
            *(arg2 + 0x30) = rax_10
            void** rax_11 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_11 = rcx_5
            *(arg2 + 8) = &rcx_5[1]
            rcx_5[1] = 0
            *rcx_5 = &data_142d54998
            rcx_5[2].d = zmm9.d
            *(rcx_5 + 0x14) = zmm8.d
            *(rcx_5 + 0x1c) = zmm7.d
            rcx_5[4].d = zmm6.d
            rcx_5[3].d = 0
            *(rcx_5 + 0x24) = 0x3f800000
            void* var_158
            sub_1419a2ec0(*(r13_2 + 0x5150), &var_158, &data_143f55f90, 0)
            void* rax_13 = var_158
            void* var_148
            sub_1419a2ec0(*(r13_2 + 0x5150), &var_148, &data_143e527c0, 0)
            void* r12_1 = var_148
            var_138.q = data_1439c9210
            int64_t rax_16 = 0
            void* var_178_1 = r12_1
            void* var_150
            
            if (rax_13 != 0)
                int64_t rdx_9 = sx.q(*(rax_13 + 0x10c))
                int64_t rcx_12 = rdx_9
                var_198 = rdx_9
                int64_t* r12_3 = *(var_150 + 0x10)
                int64_t rax_17 = r12_3[3]
                
                if (*(rax_17 + (rdx_9 << 3)) == 0)
                    sub_1419ccf30(r12_3, rdx_9.d)
                    rax_17 = r12_3[3]
                    rcx_12 = var_198
                
                rax_16 = *(rax_17 + (rcx_12 << 3))
                r12_1 = var_178_1
            
            var_138:8.q = rax_16
            int64_t rax_18 = 0
            
            if (r12_1 != 0)
                int64_t rdx_10 = sx.q(*(r12_1 + 0x10c))
                int64_t rcx_14 = rdx_10
                var_198 = rdx_10
                void* var_140
                int64_t* r12_4 = *(var_140 + 0x10)
                int64_t rax_20 = r12_4[3]
                
                if (*(rax_20 + (rdx_10 << 3)) == 0)
                    sub_1419ccf30(r12_4, rdx_10.d)
                    rax_20 = r12_4[3]
                    rcx_14 = var_198
                
                rax_18 = *(rax_20 + (rcx_14 << 3))
                r12_1 = var_178_1
            
            int128_t var_118_1
            var_118_1.q = rax_18
            int32_t var_e0_1 = 0
            sub_1419870b0(arg2, &var_138, 2)
            void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_21 = &rcx_19[3]
            
            if (rax_21 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_21 = &rcx_19[3]
            
            *(arg2 + 0x30) = rax_21
            int64_t* rax_22 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_22 = rcx_19
            *(arg2 + 8) = &rcx_19[1]
            rcx_19[1] = 0
            *rcx_19 = &data_142f18bb8
            rcx_19[2].d = 1
            sub_141080ac0(r12_1, arg2, *(arg2 + 0x1a0), *(r13_2 + 0x10))
            int32_t zmm0_1 = sub_1422e5e20(r13_2)
            var_198 = *(arg2 + 0x1a0)
            int32_t var_180 = zmm0_1
            void* r9_2 = sub_1405eb490(arg2, &var_198, r12_1 + 0x118, &var_180, 0)
            int32_t rcx_26 = *(r13_2 + 0x159c)
            int32_t rdx_14 = *(r13_2 + 0x1598)
            int32_t var_1b0_1 = 1
            int32_t var_1b8_1 = 1
            var_168 = rax_13
            void* var_160_1 = var_150
            int32_t rax_28 = *(r13_2 + 0x15a4) - rcx_26
            uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_26))
            int512_t zmm2_1
            zmm2_1.o = zx.o(rdx_14)
            int32_t rax_30 = *(r13_2 + 0x15a0) - rdx_14
            int512_t zmm3
            zmm3.o = zx.o(rdi.d)
            zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
            void** var_1c0_1 = &var_168
            int32_t var_1d8_1 = _mm_cvtepi32_ps(zx.o(rax_28)).d
            int32_t var_1e0_1 = _mm_cvtepi32_ps(zx.o(rax_30)).d
            int32_t var_1e8_1 = zmm1_1.d
            int32_t var_1f0 = zmm2_1.d
            zmm2_1.o = zx.o(0)
            uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rdi:4.d))
            zmm3.o = _mm_cvtepi32_ps(zmm3.o)
            result, zmm3 = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_2, zmm3, zmm4_1.d, var_1f0, 
                var_1e8_1, var_1e0_1, var_1d8_1, rdi, rdi, var_1c0_1, var_1b8_1, var_1b0_1)
            
            if (*(arg2 + 0x8c) != rbx_1)
                *(arg2 + 0x8c) = rbx_1
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_31 = &rdx_18[3]
                    
                    if (rax_31 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_31 = &rdx_18[3]
                    
                    *(arg2 + 0x30) = rax_31
                    void** rax_32 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_32 = rdx_18
                    result = zx.q(*(arg2 + 0x8c))
                    *(arg2 + 8) = &rdx_18[1]
                    rdx_18[1] = 0
                    *rdx_18 = &data_142f11588
                    rdx_18[2].d = result.d
                else
                    *(arg2 + 0x90) = rbx_1
            
            i = i_1 + 1
            r13 = arg1
            rdx_1 = var_190_1 + 0x5240
            i_1 = i
            var_190_1 = rdx_1
        while (i s< *(r13 + 0xa8))
__security_check_cookie(rax_1 ^ &var_218)
return result
