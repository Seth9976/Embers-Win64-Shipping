// 函数: sub_14115e170
// 地址: 0x14115e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t var_dc
__builtin_memset(&var_dc, 0, 0x43)
int64_t* rbx = arg2
int128_t var_138
__builtin_memset(&var_138, 0, 0x30)
char rdi = arg4
int128_t var_f0 = zx.o(0)
int16_t var_98 = 0
int32_t result = sub_140fdc870(arg1, &var_138)
int32_t i_1 = 0

if (rbx[1].d s> 0)
    int64_t rdx_1 = 0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int64_t var_180_1 = 0
    int32_t i
    
    do
        int32_t rbx_1 = *(arg1 + 0x8c)
        void* r12_2 = *rbx + rdx_1
        int32_t rax_2 = *(r12_2 + 0xad8)
        
        if (rbx_1 != rax_2)
            bool cond:0_1 = *(arg1 + 0x14) u> 0
            *(arg1 + 0x8c) = rax_2
            
            if (cond:0_1)
                void*** rdx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_3 = &rdx_4[3]
                
                if (rax_3 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x20)
                    rdx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_3 = &rdx_4[3]
                
                *(arg1 + 0x30) = rax_3
                int64_t* rax_4 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_4 = rdx_4
                int32_t rax_5 = *(arg1 + 0x8c)
                *(arg1 + 8) = &rdx_4[1]
                rdx_4[1] = 0
                *rdx_4 = &data_142f11588
                rdx_4[2].d = rax_5
            else
                *(arg1 + 0x90) = rax_2
        
        zmm7 = zx.o(*(r12_2 + 0x15a0))
        void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        zmm8 = zx.o(*(r12_2 + 0x159c))
        zmm9 = zx.o(*(r12_2 + 0x1598))
        zmm6 = _mm_cvtepi32_ps(zx.o(*(r12_2 + 0x15a4)))
        void* rax_6 = &rcx_4[5]
        zmm7 = _mm_cvtepi32_ps(zmm7)
        zmm8 = _mm_cvtepi32_ps(zmm8)
        zmm9 = _mm_cvtepi32_ps(zmm9)
        
        if (rax_6 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_4[5]
        
        *(arg1 + 0x30) = rax_6
        *(arg1 + 0x14) += 1
        **(arg1 + 8) = rcx_4
        *(arg1 + 8) = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142d54998
        rcx_4[2].d = zmm9.d
        *(rcx_4 + 0x14) = zmm8.d
        *(rcx_4 + 0x1c) = zmm7.d
        rcx_4[4].d = zmm6.d
        rcx_4[3].d = 0
        *(rcx_4 + 0x24) = 0x3f800000
        int64_t var_100_1 = data_14395da18
        int64_t var_f8_1 = data_14395d9e8
        int64_t rax_11 = data_14395da00
        
        if (rdi != 0)
            rax_11 = data_1439b5c68
        
        int64_t var_108_1 = rax_11
        int32_t var_e0_1 = 0
        void* var_178
        sub_1419a2ec0(*(r12_2 + 0x5150), &var_178, &data_143ed5e80, 0)
        int64_t* rcx_9 = *(r12_2 + 0x5150)
        int64_t var_1c8
        void* rdi_3
        int32_t* r9_5
        void* var_170
        int128_t var_118_1
        
        if (rdi == 0)
            void* var_150
            sub_1419a2ec0(rcx_9, &var_150, &data_143e59510, 0)
            void* rcx_22 = var_178
            var_138.q = data_1439c9210
            int64_t rax_23 = 0
            
            if (rcx_22 != 0)
                int64_t rdx_18 = sx.q(*(rcx_22 + 0x10c))
                int64_t* rdi_2 = *(var_170 + 0x10)
                int64_t rax_25 = rdi_2[3]
                
                if (*(rax_25 + (rdx_18 << 3)) == 0)
                    sub_1419ccf30(rdi_2, rdx_18.d)
                    rax_25 = rdi_2[3]
                
                rax_23 = *(rax_25 + (rdx_18 << 3))
            
            rdi_3 = var_150
            var_138:8.q = rax_23
            int64_t rax_26 = 0
            
            if (rdi_3 != 0)
                int64_t rdx_19 = sx.q(*(rdi_3 + 0x10c))
                void* var_148
                int64_t* rsi_4 = *(var_148 + 0x10)
                int64_t rax_28 = rsi_4[3]
                
                if (*(rax_28 + (rdx_19 << 3)) == 0)
                    sub_1419ccf30(rsi_4, rdx_19.d)
                    rax_28 = rsi_4[3]
                
                rax_26 = *(rax_28 + (rdx_19 << 3))
            
            var_118_1.q = rax_26
            sub_1419870b0(arg1, &var_138, 2)
            int64_t r13_4 = *(arg1 + 0x1a0)
            int64_t r9_6 = *(r12_2 + 0x10)
            var_1c8 = r13_4
            sub_141080ac0(rdi_3, arg1, r13_4, r9_6)
            int32_t r8_6 = *(r12_2 + 0x1548)
            
            if (*(rdi_3 + 0x118) != 0xffff)
                int64_t* rcx_29
                
                if (r8_6 s< 3)
                    int64_t var_198
                    sub_14137b7f0(&var_198, arg1)
                    sub_141083500(arg1, &var_1c8, rdi_3 + 0x118, var_198)
                    rcx_29 = &var_198
                else
                    int64_t var_1a0
                    sub_14137baa0(&var_1a0, arg1, 0xf, r8_6)
                    sub_141083500(arg1, &var_1c8, rdi_3 + 0x118, var_1a0)
                    rcx_29 = &var_1a0
                
                sub_1405d1550(rcx_29)
            
            sub_14113b950(rdi_3 + 0x11a, arg1, r13_4, r12_2, arg3)
            void* rax_31 = *(*(*r12_2 + 0x20) + 0xf80)
            int32_t zmm0_2
            
            if (rax_31 == 0)
                zmm0_2 = (zx.o(0)).d
            else
                zmm0_2 = *(rax_31 + 0xcc)
            
            int32_t var_1b4 = zmm0_2
            r9_5 = &var_1b4
        else
            void* var_160
            sub_1419a2ec0(rcx_9, &var_160, &data_143e59670, 0)
            void* rcx_10 = var_178
            var_138.q = data_1439c9210
            int64_t rax_13 = 0
            
            if (rcx_10 != 0)
                int64_t rdx_9 = sx.q(*(rcx_10 + 0x10c))
                int64_t* rdi_1 = *(var_170 + 0x10)
                int64_t rax_15 = rdi_1[3]
                
                if (*(rax_15 + (rdx_9 << 3)) == 0)
                    sub_1419ccf30(rdi_1, rdx_9.d)
                    rax_15 = rdi_1[3]
                
                rax_13 = *(rax_15 + (rdx_9 << 3))
            
            rdi_3 = var_160
            var_138:8.q = rax_13
            int64_t rax_16 = 0
            
            if (rdi_3 != 0)
                int64_t rdx_10 = sx.q(*(rdi_3 + 0x10c))
                void* var_158
                int64_t* rsi_2 = *(var_158 + 0x10)
                int64_t rax_18 = rsi_2[3]
                
                if (*(rax_18 + (rdx_10 << 3)) == 0)
                    sub_1419ccf30(rsi_2, rdx_10.d)
                    rax_18 = rsi_2[3]
                
                rax_16 = *(rax_18 + (rdx_10 << 3))
            
            var_118_1.q = rax_16
            sub_1419870b0(arg1, &var_138, 2)
            int64_t r13_2 = *(arg1 + 0x1a0)
            int64_t r9 = *(r12_2 + 0x10)
            var_1c8 = r13_2
            sub_141080ac0(rdi_3, arg1, r13_2, r9)
            int32_t r8_1 = *(r12_2 + 0x1548)
            
            if (*(rdi_3 + 0x118) != 0xffff)
                int64_t* rcx_17
                
                if (r8_1 s< 3)
                    int64_t var_1a8
                    sub_14137b7f0(&var_1a8, arg1)
                    sub_141083500(arg1, &var_1c8, rdi_3 + 0x118, var_1a8)
                    rcx_17 = &var_1a8
                else
                    int64_t var_1b0
                    sub_14137baa0(&var_1b0, arg1, 0xf, r8_1)
                    sub_141083500(arg1, &var_1c8, rdi_3 + 0x118, var_1b0)
                    rcx_17 = &var_1b0
                
                sub_1405d1550(rcx_17)
            
            sub_14113b950(rdi_3 + 0x11a, arg1, r13_2, r12_2, arg3)
            void* rax_21 = *(*(*r12_2 + 0x20) + 0xf80)
            int32_t var_1b8
            
            if (rax_21 == 0)
                r9_5 = &var_1b8
                var_1b8 = 0
            else
                r9_5 = &var_1b8
                var_1b8 = *(rax_21 + 0xcc)
        void* r9_11 = sub_1405eb490(arg1, &var_1c8, rdi_3 + 0x134, r9_5, 0)
        int32_t rsi_6 = *(r12_2 + 0x15a0) - *(r12_2 + 0x1598)
        int32_t rdi_5 = *(r12_2 + 0x15a4) - *(r12_2 + 0x159c)
        int32_t var_184_1 = rdi_5
        var_1c8.o = var_178.o
        int32_t var_140
        int32_t* rax_32 = sub_1410f8060(&var_140)
        int32_t var_1e0_1 = 1
        int32_t var_1e8_1 = 0
        int32_t temp0_5
        int32_t temp1_1
        temp0_5:temp1_1 = sx.q(rdi_5)
        int512_t zmm3
        zmm3.o = zx.o(rsi_6)
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdi_5))
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_6)
        uint128_t zmm5_1 = _mm_cvtepi32_ps(zx.o((temp1_1 - temp0_5) s>> 1))
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(*(r12_2 + 0x159c))
        uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o((temp3_1 - temp2_1) s>> 1))
        int512_t zmm2_1
        zmm2_1.o = zx.o((temp5_1 - temp4_1) s>> 1)
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(*(r12_2 + 0x1598))
        zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
        int64_t* var_1f0_1 = &var_1c8
        int64_t rax_49 = *rax_32
        int32_t var_208_1 = zmm5_1.d
        int32_t var_210_1 = zmm4_1.d
        int32_t var_218_1 = zmm2_1.d
        zmm2_1.o = zx.o(0)
        uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o((temp7_1 - temp6_1) s>> 1))
        zmm3.o = _mm_cvtepi32_ps(zmm3.o)
        result, zmm3 = sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_11, zmm3, zmm1_1.d, zmm0_3.d, 
            var_218_1, var_210_1, var_208_1, rsi_6.q, rax_49, var_1f0_1, var_1e8_1, var_1e0_1)
        
        if (*(arg1 + 0x8c) != rbx_1)
            *(arg1 + 0x8c) = rbx_1
            
            if (*(arg1 + 0x14) u> 0)
                void*** rdx_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_51 = &rdx_34[3]
                
                if (rax_51 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x20)
                    rdx_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_51 = &rdx_34[3]
                
                *(arg1 + 0x30) = rax_51
                int64_t* rax_52 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_52 = rdx_34
                result = *(arg1 + 0x8c)
                *(arg1 + 8) = &rdx_34[1]
                rdx_34[1] = 0
                *rdx_34 = &data_142f11588
                rdx_34[2].d = result
            else
                *(arg1 + 0x90) = rbx_1
        
        i = i_1 + 1
        rbx = arg2
        rdx_1 = var_180_1 + 0x5240
        rdi = arg4
        i_1 = i
        var_180_1 = rdx_1
    while (i s< rbx[1].d)

__security_check_cookie(rax_1 ^ &var_248)
return result
