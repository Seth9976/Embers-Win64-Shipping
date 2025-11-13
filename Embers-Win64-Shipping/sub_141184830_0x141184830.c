// 函数: sub_141184830
// 地址: 0x141184830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0
__builtin_memset(&var_d0, 0, 0x48)
int128_t var_d8
int128_t zmm6 = sub_14142a030(arg1, &var_d8)
void* r13 = *arg3
int64_t rdx_1 = *(*arg4 + 0x44)
void* result = sx.q(arg3[1].d) * 0xe0 + r13
void* result_1 = result

if (r13 != result)
    void* rdi_1 = &arg3[0x19]
    uint128_t zmm8 = _mm_cvtepi32_ps(zx.o((rdx_1 u>> 0x20).d))
    void* var_1b0_1 = rdi_1
    int32_t var_18c_1 = 0x1c
    uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rdx_1.d))
    int512_t zmm6_3
    
    do
        void* rbx_1 = arg3[0x1a]
        int32_t var_1f8
        sub_140865c40(&arg1[0x22], &var_1f8, rbx_1)
        int64_t rax_4 = sx.q(var_1f8)
        int64_t rcx_3
        
        if (rax_4.d == 0xffffffff)
            rcx_3 = 0
        else
            rcx_3 = arg1[0x22] + rax_4 * 0x18
        
        int64_t rax_6 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rax_6 = 0
        
        int64_t var_208
        
        if (rax_6 == 0)
            void*** rax_7 = sub_14081d830((rax_6 + 0x48).d, arg1[1], 1, 0)
            void*** rcx_5 = rax_7
            
            if (rax_7 == 0)
                rcx_5 = rax_7
            else
                rcx_5[1] = u"HairVoxelPageIndexBuffer"
                rcx_5[2] = 0
                rcx_5[3].b = 0
                *(rcx_5 + 0x1c) = 0
                rcx_5[4] = 0
                rcx_5[5].w = 0x200
                *rcx_5 = &data_142f285d0
                int128_t zmm0_1 = *(rbx_1 + 0xb8)
                rcx_5[8] = 0
                *(rcx_5 + 0x30) = zmm0_1
            
            int64_t rax_8 = arg3[0x1a]
            void*** var_1e8 = rcx_5
            rcx_5[8] = rax_8
            void*** rdx_5 = var_1e8
            int32_t rcx_6 = *(rdx_5 + 0x3c)
            
            if (rcx_6 == 0)
                rdx_5[2] = *arg3[0x1a]
            else if (rcx_6 == 1)
                rdx_5[2] = *(arg3[0x1a] + 8)
            else if (rcx_6 == 2)
                rdx_5[2] = *(arg3[0x1a] + 0x10)
            
            void* var_170_1 = &arg3[0x1a]
            void**** var_178 = &var_1e8
            void var_1d8
            sub_1411610a0(&arg1[0xe], &var_1d8, &var_178, nullptr)
            var_208 = arg3[0x1a]
            int64_t* var_168 = &var_208
            void** var_160_1 = &var_1e8
            void var_1d4
            sub_14107baa0(&arg1[0x22], &var_1d4, &var_168, nullptr)
        
        int64_t* rbx_2 = *rdi_1
        int32_t var_1f4
        sub_140865c40(&arg1[0x18], &var_1f4, rbx_2)
        int64_t rax_13 = sx.q(var_1f4)
        int64_t rcx_12
        
        if (rax_13.d == 0xffffffff)
            rcx_12 = 0
        else
            rcx_12 = arg1[0x18] + rax_13 * 0x18
        
        int64_t rax_15 = rcx_12 + 8
        
        if (rcx_12 == 0)
            rax_15 = 0
        
        if (rax_15 == 0)
            int128_t* rax_17 = (*(*rbx_2 + 0x10))(rbx_2)
            void*** rax_18 = sub_14081d830(0x88, arg1[1], 1, 0)
            void*** rcx_14 = rax_18
            
            if (rax_18 == 0)
                rcx_14 = rax_18
            else
                rcx_14[1] = u"HairVoxelPageTexture"
                rcx_14[2] = 0
                rcx_14[3].b = 0
                *(rcx_14 + 0x1c) = 0
                rcx_14[4] = 0
                rcx_14[5].w = 0x200
                *rcx_14 = &data_142f11960
                *(rcx_14 + 0x30) = *rax_17
                *(rcx_14 + 0x40) = rax_17[1]
                *(rcx_14 + 0x50) = rax_17[2]
                *(rcx_14 + 0x60) = rax_17[3]
                int128_t zmm0_2 = rax_17[4]
                rcx_14[0x10] = 0
                *(rcx_14 + 0x70) = zmm0_2
            
            int64_t rax_19 = *rdi_1
            void*** var_1e0 = rcx_14
            rcx_14[0x10] = rax_19
            void* var_150_1 = rdi_1
            var_1e0[2] = *(*rdi_1 + 0x10)
            void**** var_158 = &var_1e0
            void var_1d0
            sub_14107bc20(&arg1[4], &var_1d0, &var_158, nullptr)
            var_208 = *rdi_1
            int64_t* var_148 = &var_208
            void** var_140_1 = &var_1e0
            void var_1cc
            sub_14107baa0(&arg1[0x18], &var_1cc, &var_148, nullptr)
        
        void* rbx_4 = arg3[0x21]
        int32_t var_1f0
        sub_140865c40(&arg1[0x22], &var_1f0, rbx_4)
        int64_t rax_23 = sx.q(var_1f0)
        void* const rcx_19
        
        if (rax_23.d == 0xffffffff)
            rcx_19 = nullptr
        else
            rcx_19 = arg1[0x22] + rax_23 * 0x18
        
        int64_t* rax_25 = rcx_19 + 8
        
        if (rcx_19 == 0)
            rax_25 = nullptr
        
        void*** rdi_2
        
        if (rax_25 == 0)
            void*** rax_26 = sub_14081d830(0x48, arg1[1], 1, 0)
            void*** rcx_20 = rax_26
            
            if (rax_26 == 0)
                rcx_20 = nullptr
            else
                rcx_20[2] = 0
                rcx_20[1] = u"HairVoxelValidPageCountBuffer"
                rcx_20[3].b = 0
                *(rcx_20 + 0x1c) = 0
                rcx_20[4] = 0
                rcx_20[5].w = 0x200
                *rcx_20 = &data_142f285d0
                int128_t zmm0_3 = *(rbx_4 + 0xb8)
                rcx_20[8] = 0
                *(rcx_20 + 0x30) = zmm0_3
            
            int64_t rax_27 = arg3[0x21]
            void*** var_210 = rcx_20
            rcx_20[8] = rax_27
            void*** rdx_16 = var_210
            int32_t rcx_21 = *(rdx_16 + 0x3c)
            
            if (rcx_21 == 0)
                rdx_16[2] = *arg3[0x21]
            else if (rcx_21 == 1)
                rdx_16[2] = *(arg3[0x21] + 8)
            else if (rcx_21 == 2)
                rdx_16[2] = *(arg3[0x21] + 0x10)
            
            void* var_130_1 = &arg3[0x21]
            void** var_138 = &var_210
            void var_1c8
            sub_1411610a0(&arg1[0xe], &var_1c8, &var_138, nullptr)
            var_208 = arg3[0x21]
            int64_t* var_128 = &var_208
            void** var_120_1 = &var_210
            void var_1c4
            sub_14107baa0(&arg1[0x22], &var_1c4, &var_128, nullptr)
            rdi_2 = var_210
        else
            rdi_2 = *rax_25
        
        int128_t* rax_32 = sub_14081d830(0xc0, arg1[1], 1, 0)
        int128_t* rbx_5 = rax_32
        
        if (rax_32 == 0)
            rbx_5 = rax_32
        else
            __builtin_memset(rbx_5 + 8, 0, 0x48)
            __builtin_memset(&rbx_5[6], 0, 0x20)
            __builtin_memset(rbx_5 + 0x98, 0, 0x20)
        
        memset(rbx_5, 0, 0xc0)
        sub_1405d16e0(&rbx_5[0xa], *(arg2 + 0x10))
        rbx_5[8].d = zmm7.d
        *(rbx_5 + 0x84) = zmm8.d
        *rbx_5 = var_d8
        __builtin_memset(&rbx_5[1], 0, 0x40)
        int32_t rax_33
        rax_33.b = data_143e6a6c4 != 0
        *(rbx_5 + 0x88) = rax_33
        *(rbx_5 + 0x8c) = *(r13 + 0xcc)
        rbx_5[9].d = arg3[1].d
        *(rbx_5 + 0x94) = *(arg3 + 0x64)
        sub_1405d16e0(rbx_5 + 0x98, arg3[0x18])
        int32_t var_190_1 = data_1439c8a54
        void*** rax_38 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_38 != 0)
            rax_38[1] = rdi_2[1]
            rax_38[2] = 0
            *rax_38 = &data_142f285c0
            *(rax_38 + 0x18) = rdi_2.o
        
        *(rbx_5 + 0xa8) = rax_38
        sub_14119c160(arg1, arg2 + 0x51b0, &rbx_5[5])
        sub_1414610e0(arg2, &rbx_5[7])
        int16_t var_180_1 = 0
        void* rdi_4 = *arg4
        void*** rax_39
        int512_t zmm6_1
        rax_39, zmm6_1 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_39 != 0)
            rax_39[1] = *(rdi_4 + 8)
            rax_39[2] = 0
            *rax_39 = &data_142f285c0
            *(rax_39 + 0x18) = rdi_4.o
        
        rbx_5[0xb].q = rax_39
        int32_t r9
        r9.b = data_143e6a6c8 s> 0
        int128_t var_88
        sub_1419a2ec0(*(arg2 + 0x5150), &var_88, &data_143e6c360, r9)
        zmm6_1.o = var_88
        void* rax_42 = *arg4
        int32_t rcx_34 = *(rax_42 + 0x44)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_34 + 7)
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(*(rax_42 + 0x48) + 7)
        int32_t var_1a4_1 = (temp5_1 + (temp4_1 & 7)) s>> 3
        int128_t zmm6_2 = sub_141190130(rcx_34.b)
        var_208.o = zx.o(0)
        sub_141998c50(zmm6_2.q, &data_143e73620, rbx_5)
        int32_t var_e8_1 = 1
        int64_t var_f0_1 = ((temp3_1 + (temp2_1 & 7)) s>> 3).q
        void*** rax_51
        char rcx_36
        rax_51, rcx_36 = sub_14081d830(0x60, arg1[1], 1, 0)
        void*** rdi_5 = rax_51
        
        if (rax_51 == 0)
            rdi_5 = rax_51
        else
            sub_141190130(rcx_36)
            void* var_110_1 = &data_143e73650
            var_208.o = rbx_5.o
            void var_218
            sub_141992bd0(rdi_5, &var_218, &var_208, 2)
            *rdi_5 = &data_142f2ca68
            *(rdi_5 + 0x38) = rbx_5.o
            *(rdi_5 + 0x48) = zmm6_2
            rdi_5[0xb] = var_e8_1.q
        
        result, zmm6_3 = sub_1419968d0(arg1, rdi_5)
        rdi_1 = var_1b0_1
        r13 += 0xe0
    while (r13 != result_1)
    
    zmm6_3.o = zmm6

return result
