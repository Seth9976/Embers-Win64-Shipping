// 函数: sub_1410aed60
// 地址: 0x1410aed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* result = *(arg1 + 8)

if (*(result + 8) s>= 3 && *(result + 0x1c28) != 0)
    int64_t* var_130_1 = &data_143ec4c60
    uint128_t zmm6_1 = sub_141394ae0(&data_143ec4c60, arg2, 0, 0x21, 1)
    int64_t var_cc
    __builtin_memset(&var_cc, 0, 0x43)
    int16_t var_88_1 = 0
    int128_t var_128
    __builtin_memset(&var_128, 0, 0x30)
    int128_t var_e0_1 = zx.o(0)
    sub_140fdc870(arg2, &var_128)
    int32_t i = 0
    int64_t var_f0_1 = data_14395da18
    int64_t var_f8_1 = data_1439b5250
    int64_t var_e8_1 = data_14395d9e8
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t r12_1 = 0
        uint128_t var_48_1 = zmm6_1
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        
        do
            int32_t rbx_1 = *(arg2 + 0x8c)
            void* r14_2 = *(arg1 + 0xa0) + r12_1
            int32_t rax_5 = *(r14_2 + 0xad8)
            
            if (rbx_1 != rax_5)
                bool cond:0_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_5
                
                if (cond:0_1)
                    void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_6 = &rdx_4[3]
                    
                    if (rax_6 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_6 = &rdx_4[3]
                    
                    *(arg2 + 0x30) = rax_6
                    int64_t* rax_7 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_7 = rdx_4
                    int32_t rax_8 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_4[1]
                    rdx_4[1] = 0
                    *rdx_4 = &data_142f11588
                    rdx_4[2].d = rax_8
                else
                    *(arg2 + 0x90) = rax_5
            
            zmm7 = zx.o(*(r14_2 + 0x15a0))
            void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            zmm8 = zx.o(*(r14_2 + 0x159c))
            zmm9 = zx.o(*(r14_2 + 0x1598))
            zmm6_1 = _mm_cvtepi32_ps(zx.o(*(r14_2 + 0x15a4)))
            void* rax_9 = &rcx_6[5]
            zmm7 = _mm_cvtepi32_ps(zmm7)
            zmm8 = _mm_cvtepi32_ps(zmm8)
            zmm9 = _mm_cvtepi32_ps(zmm9)
            
            if (rax_9 u> *(arg2 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_9 = &rcx_6[5]
            
            *(arg2 + 0x30) = rax_9
            void** rax_10 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_10 = rcx_6
            *(arg2 + 8) = &rcx_6[1]
            rcx_6[1] = 0
            *rcx_6 = &data_142d54998
            rcx_6[2].d = zmm9.d
            *(rcx_6 + 0x14) = zmm8.d
            *(rcx_6 + 0x1c) = zmm7.d
            rcx_6[4].d = zmm6_1.d
            rcx_6[3].d = 0
            *(rcx_6 + 0x24) = 0x3f800000
            char var_148_1
            var_148_1.q = arg3
            int64_t r9_2 = sub_1410b3bd0(arg2, &var_128, *(arg1 + 8), r14_2, var_148_1)
            int64_t r14_3 = data_1439c9180
            void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_13[5]
            
            if (rax_13 u> *(arg2 + 0x38))
                r9_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_13[5]
            
            *(arg2 + 0x30) = rax_13
            int64_t* rax_14 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_14 = rcx_13
            *(arg2 + 8) = &rcx_13[1]
            rcx_13[1] = 0
            *rcx_13 = &data_142d56618
            rcx_13[2].d = 0
            rcx_13[3] = r14_3
            rcx_13[4].d = 0
            int64_t r14_4 = data_1439c9168
            
            if (r14_4 == 0)
                sub_140af98a0("Unknown", 0xbc8, 
                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_2)
                sub_140afbb40()
            
            void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_19[6]
            
            if (rax_16 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rcx_19[6]
            
            *(arg2 + 0x30) = rax_16
            int64_t* rax_17 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_17 = rcx_19
            *(arg2 + 8) = &rcx_19[1]
            rcx_19[1] = 0
            *rcx_19 = &data_142f11598
            rcx_19[2] = r14_4
            rcx_19[3] = 0
            rcx_19[4] = 4
            rcx_19[5].d = 2
            *(rcx_19 + 0x2c) = 1
            
            if (*(arg2 + 0x8c) != rbx_1)
                *(arg2 + 0x8c) = rbx_1
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_19 = &rdx_10[3]
                    
                    if (rax_19 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_19 = &rdx_10[3]
                    
                    *(arg2 + 0x30) = rax_19
                    int64_t* rax_20 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_20 = rdx_10
                    int32_t rax_21 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_10[1]
                    rdx_10[1] = 0
                    *rdx_10 = &data_142f11588
                    rdx_10[2].d = rax_21
                else
                    *(arg2 + 0x90) = rbx_1
            
            i += 1
            r12_1 += 0x5240
        while (i s< *(arg1 + 0xa8))
    
    result = sub_14139bc50(var_130_1, arg2)

__security_check_cookie(rax_1 ^ &var_168)
return result
