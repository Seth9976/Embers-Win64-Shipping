// 函数: sub_1411da060
// 地址: 0x1411da060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x30) - *(arg1 + 0x5c))

if (result.d s> 0 && data_1439b6100 != 0 && arg2[1] != 0 && data_143e5102c != 0)
    int32_t rbx_1 = arg2[0x2a9].d
    result = sub_1422e5a30(arg2)
    
    if (rbx_1 s>= 3 && result.d == 0)
        int32_t rcx_1 = 0
        int32_t r10_1 = *(arg1 + 0x50)
        void* r9 = arg1 + 0x38
        int32_t rdi_1 = 0
        void* rax_2 = *(arg2[1] + 0xb10)
        void* r15_1 = nullptr
        int32_t r12_1 = 0
        int32_t r8 = 0
        int64_t rax_3 = *(rax_2 + 0x38)
        void* var_b8
        __builtin_memset(&var_b8, 0, 0x14)
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_3.d))
        int32_t var_a4_1 = 1
        void* var_a0 = r9
        int32_t var_98_1 = 0xffffffff
        int64_t var_94_1 = 0
        uint128_t zmm0
        zmm0.d = 1f f/ zmm1.d
        int32_t var_80_1 = zmm0.d
        zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o((rax_3 u>> 0x20).d)).d
        int32_t var_7c_1 = zmm1.d
        int32_t var_a8_1
        
        if (r10_1 != 0)
            void* rax_5 = *(r9 + 0x10)
            
            if (rax_5 != 0)
                r9 = rax_5
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r9
            
            if (rdx_2 != 0)
            label_1411da1c8:
                int32_t rax_12 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_4
                temp0_4, rflags_1 = _bit_scan_reverse(rax_12)
                int32_t var_a4_2 = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_4
                
                var_94_1.d = r8 - rax_13 + 0x1f
                
                if (r8 - rax_13 + 0x1f s> r10_1)
                    var_94_1.d = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_1)
                    r8 += 0x20
                    rcx_1 += 1
                    var_94_1:4.d = r8
                    var_a8_1 = rcx_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                    var_98_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_1411da1c8
                
                var_94_1.d = r10_1
        
        int512_t zmm2
        zmm2.o = 0xffffffff
        int128_t var_58_1 = 0xffffffff
        uint128_t var_68_1 = var_a8_1.o
        var_a8_1.o = (arg1 + 0x28).o
        result = 0
        uint64_t var_88_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_98_1.o = var_68_1
        
        if (0 s< r10_1)
            int32_t i_1
            int32_t i = i_1
            void* var_b0_1
            
            do
                int64_t rsi_3 = sx.q(i) * 6
                int64_t r14_1 = *var_a8_1.q
                int64_t rbx_2 = sx.q(*(r14_1 + (rsi_3 << 3) + 0x20))
                
                if (rbx_2.d != 0)
                    int32_t rdx_4 = rdi_1 + rbx_2.d
                    
                    if (rdx_4 s> r12_1)
                        sub_1407c4520(&var_b8, rdx_4)
                        r12_1 = var_b0_1:4.d
                        rdi_1 = var_b0_1.d
                        r15_1 = var_b8
                    
                    memcpy(sx.q(rdi_1) * 0xa0 + r15_1, *(r14_1 + (rsi_3 << 3) + 0x18), 
                        (rbx_2 * 0xa0).d)
                    rdi_1 += rbx_2.d
                    var_b0_1.d = rdi_1
                
                var_94_1:4.d &= not.d(var_a0:4.d)
                sub_14059bdd0(&var_a0)
                result = var_98_1.q
                i = i_1
            while (i s< *(result + 0x18))
            
            if (rdi_1 s> 0)
                int128_t zmm6
                zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10))).d
                zmm2.o = zmm6
                sub_1411fc2d0(&var_b8, var_80_1.q, zmm2)
                sub_1419a2ec0(arg2[0xa2a], &var_b8, &data_143e7a350, 0)
                void* r12_2 = var_b8
                void* rbx_3 = nullptr
                
                if (r12_2 != 0)
                    int64_t rdx_8 = sx.q(*(r12_2 + 0x10c))
                    int64_t* rbx_4 = *(var_b0_1 + 0x10)
                    int64_t rax_22 = rbx_4[3]
                    
                    if (*(rax_22 + (rdx_8 << 3)) == 0)
                        sub_1419ccf30(rbx_4, rdx_8.d)
                        rax_22 = rbx_4[3]
                    
                    rbx_3 = *(rax_22 + (rdx_8 << 3))
                
                *(arg3 + 0x1b0) = rbx_3
                sub_14198aa60(rbx_3)
                void*** rcx_14 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_23 = &rcx_14[3]
                
                if (rax_23 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x20)
                    rcx_14 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_23 = &rcx_14[3]
                
                *(arg3 + 0x30) = rax_23
                void**** rax_24 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_24 = rcx_14
                *(arg3 + 8) = &rcx_14[1]
                rcx_14[1] = 0
                *rcx_14 = &data_142dd5b40
                rcx_14[2] = rbx_3
                sub_1411f18e0(r12_2, arg3, arg2, rdi_1, arg4, arg5, arg6, rax_2)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(arg2 + 0x15a4) - *(arg2 + 0x159c))
                void** var_d8_1
                var_d8_1.d = 1
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(arg2[0x2b4].d - arg2[0x2b3].d)
                sub_1419cd1c0(arg3, r12_2, (temp5_1 - temp4_1) s>> 1, (temp3_1 - temp2_1) s>> 1, 
                    var_d8_1.d)
                sub_14077cfd0(r12_2 + 0x15a, arg3, *(arg3 + 0x1b0))
                void* rax_39 = *(arg5 + 0xa8)
                void** rbx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_21 = &rbx_8[1]
                
                if (rcx_21 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x10)
                    rbx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_21 = &rbx_8[1]
                
                *(arg3 + 0x30) = rcx_21
                *rbx_8 = rax_39
                void*** rcx_25 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_40 = &rcx_25[6]
                
                if (rax_40 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x38)
                    rcx_25 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_40 = &rcx_25[6]
                
                *(arg3 + 0x30) = rax_40
                void**** rax_41 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_41 = rcx_25
                *(arg3 + 8) = &rcx_25[1]
                rcx_25[1] = 0
                result = &data_142da7798
                *rcx_25 = &data_142da7798
                rcx_25[2].d = 1
                rcx_25[3] = rbx_8
                rcx_25[4].d = 0
                *(rcx_25 + 0x24) = 3
                rcx_25[5] = 0
            
            if (r15_1 != 0)
                return sub_140a74f90(r15_1)

return result
