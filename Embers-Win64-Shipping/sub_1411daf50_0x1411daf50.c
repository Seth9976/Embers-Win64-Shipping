// 函数: sub_1411daf50
// 地址: 0x1411daf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
uint64_t result = zx.q(*(arg1 + 0x30) - *(arg1 + 0x5c))
void* rdx = arg1

if (result.d s> 0 && data_143e75b5c != 0)
    int32_t r8 = 0
    int32_t var_c8 = 0
    int32_t r10_1 = *(arg1 + 0x50)
    void* r9 = arg1 + 0x38
    int32_t rcx = 0
    int32_t var_c4_1 = 1
    void* var_c0_1 = r9
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9 + 0x10)
        
        if (rax_1 != 0)
            r9 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9
        
        if (rdx_3 != 0)
        label_1411db018:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_c4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_b4_1.d = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> r10_1)
                var_b4_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(r8)
                rcx += 0x20
                r8 += 1
                var_b4_1:4.d = rcx
                var_c8 = r8
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9 + (rdx_4 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1411db018
            
            var_b4_1.d = r10_1
        
        rdx = arg1
    
    uint128_t zmm2 = var_b8_1.o
    uint128_t var_60_1 = zmm2
    uint128_t var_70_1 = var_c8.o
    uint128_t var_a0 = (arg1 + 0x28).o
    result = zmm2.q u>> 0x20
    uint64_t var_80_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
    uint128_t var_90_1 = var_70_1
    
    if (result.d s< r10_1)
        int32_t i = var_90_1:0xc.d
        uint128_t zmm6 = 0x3f800000
        
        do
            void** rdi_1 = var_a0.q
            int64_t* rbx_3 = sx.q(i) * 0x30
            void* r14_2 = *rdi_1 + rbx_3
            
            if (*(r14_2 + 0x20) s> 0)
                zmm2.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(*(rdx + 0x10))).d
                sub_1411fc2d0(r14_2 + 0x18, _mm_unpacklo_ps(zmm6, zmm6.q).q, zmm2)
                void* r12_1 = *(rbx_3 + *rdi_1)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r15[0x2b4].d - r15[0x2b3].d)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(((temp3_1 - temp2_1) s>> 1) + 7)
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(*(r15 + 0x15a4) - *(r15 + 0x159c))
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(((temp7_1 - temp6_1) s>> 1) + 7)
                sub_1419a2ec0(r15[0xa2a], &var_c8, &data_143e7a250, 0)
                void* r15_1 = var_c8.q
                void* rdi_2 = nullptr
                
                if (r15_1 != 0)
                    int64_t rdx_14 = sx.q(*(r15_1 + 0x10c))
                    int64_t* rbx_4 = *(var_c0_1 + 0x10)
                    int64_t rax_30 = rbx_4[3]
                    
                    if (*(rax_30 + (rdx_14 << 3)) == 0)
                        sub_1419ccf30(rbx_4, rdx_14.d)
                        rax_30 = rbx_4[3]
                    
                    rdi_2 = *(rax_30 + (rdx_14 << 3))
                
                *(arg3 + 0x1b0) = rdi_2
                sub_14198aa60(rdi_2)
                void*** rcx_9 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_31 = &rcx_9[3]
                
                if (rax_31 u> *(arg3 + 0x38))
                    sub_140b0e3d0(arg3 + 0x30, 0x20)
                    rcx_9 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_31 = &rcx_9[3]
                
                *(arg3 + 0x30) = rax_31
                void**** rax_32 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                *rax_32 = rcx_9
                *(arg3 + 8) = &rcx_9[1]
                rcx_9[1] = 0
                *rcx_9 = &data_142dd5b40
                rcx_9[2] = rdi_2
                sub_1411f2090(r15_1, arg3, arg2, r12_1, *(r14_2 + 0x20), arg4, arg5, arg6)
                sub_1419cd1c0(arg3, r15_1, ((temp4_1 & 7) + temp5_1) s>> 3, 
                    (temp9_1 + (temp8_1 & 7)) s>> 3, 1)
                zmm6 = sub_14077cfd0(r15_1 + 0x172, arg3, *(arg3 + 0x1b0))
                int64_t rax_37 = *(arg5 + 0x20)
                int32_t var_a8_1
                var_a8_1.q = rax_37
                int64_t* rdi_7 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_16 = &rdi_7[1]
                
                if (rcx_16 u> *(arg3 + 0x38))
                    zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x10)
                    rax_37 = var_a8_1.q
                    rdi_7 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_16 = &rdi_7[1]
                
                *(arg3 + 0x30) = rcx_16
                *rdi_7 = rax_37
                void*** rcx_20 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_38 = &rcx_20[6]
                
                if (rax_38 u> *(arg3 + 0x38))
                    zmm6 = sub_140b0e3d0(arg3 + 0x30, 0x38)
                    rcx_20 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_38 = &rcx_20[6]
                
                *(arg3 + 0x30) = rax_38
                void**** rax_39 = *(arg3 + 8)
                *(arg3 + 0x14) += 1
                r15 = arg2
                *rax_39 = rcx_20
                *(arg3 + 8) = &rcx_20[1]
                rcx_20[1] = 0
                *rcx_20 = &data_142da7798
                rcx_20[2].d = 1
                rcx_20[3] = rdi_7
                rcx_20[4].d = 0
                *(rcx_20 + 0x24) = 3
                rcx_20[5] = 0
            
            var_90_1:8.d &= not.d(var_a0:0xc.d)
            sub_14059bdd0(&var_a0:8)
            result = var_90_1.q
            i = var_90_1:0xc.d
            rdx = arg1
        while (i s< *(result + 0x18))

return result
