// 函数: sub_1411d6880
// 地址: 0x1411d6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* arg_18 = arg3

if (*(arg3 + 0xc0) != 0)
    int64_t* rcx = *(arg3 + 0xc8)
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint32_t r13_1 = zx.d(*((*(*rcx + 0x10))(rcx) + 0x26))
    void*** rax_2 = sub_1410fccd0(arg1, arg3 + 0xc8, u"HairVirtualVoxelDensityTexture", 0)
    void*** r14_1 = rax_2
    void*** rax_3 = sub_141193740(arg1, arg3 + 0xd0, u"HairVirtualVoxelDensityTexturePageIndex", 0)
    int32_t rax_4 = r13_1 - 1
    void* const var_f8 = nullptr
    int32_t var_ec_1 = 0
    int32_t r15_1 = 0
    int32_t r13_2 = 0
    int32_t var_148
    int64_t var_140
    char var_128
    int128_t var_108
    
    if (rax_4 != 0)
        int32_t r14_2 = 0
        var_140 = 0x309
        int32_t var_144_1 = 1
        int32_t var_c4_1 = 1
        
        do
            void*** rax_5 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
            void*** rbx_1 = rax_5
            
            if (rax_5 == 0)
                rbx_1 = nullptr
            else
                rbx_1[2] = 0
                rbx_1[1] = u"VirtualVoxelMipIndirectArgsBuffer"
                rbx_1[3].b = 0
                *(rbx_1 + 0x1c) = 0
                rbx_1[4] = 0
                rbx_1[5].w = 0x200
                *rbx_1 = &data_142f285d0
                *(rbx_1 + 0x30) = 0xc.o
                rbx_1[8] = 0
            
            int64_t rdi_1 = sx.q(r15_1)
            r15_1 = (rdi_1 + 1).d
            
            if (r15_1 s> r14_2)
                sub_1405a4d70(&var_f8)
                r14_2 = var_ec_1
            
            *(var_f8 + (rdi_1 << 3)) = rbx_1
            int32_t* rax_6 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
            int32_t* rdi_2 = rax_6
            
            if (rax_6 == 0)
                rdi_2 = nullptr
            else
                *(rdi_2 + 0x10) = 0
                *(rdi_2 + 0x18) = 0
            
            int64_t var_d0_1 = 1
            __builtin_memset(rdi_2, 0, 0x20)
            r13_2 += 1
            *rdi_2 = *(arg_18 + 0x60)
            rdi_2[1] = r13_2
            rdi_2[2] = 0x40
            
            if ((*(arg4 + 0x38) & 0x100) != 0)
                var_d0_1.d = 4
                var_d0_1:4.d = 0x1c
            
            void*** rax_9 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
            
            if (rax_9 != 0)
                rax_9[1] = *(arg4 + 8)
                *rax_9 = &data_142f285c0
                rax_9[2] = 0
                *(rax_9 + 0x18) = arg4.o
            
            *(rdi_2 + 0x10) = rax_9
            int32_t rax_10 = 0
            
            if ((rbx_1[7].d & 0x100) != 0)
                rax_10 = 0x1c
            
            var_148.q = rbx_1
            var_140:4.w = 0
            var_140.d = rax_10
            void*** rax_11
            int512_t zmm6_1
            rax_11, zmm6_1 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
            
            if (rax_11 != 0)
                rax_11[1] = rbx_1[1]
                *rax_11 = &data_142f285c0
                rax_11[2] = 0
                *(rax_11 + 0x18) = var_148.o
            
            *(rdi_2 + 0x18) = rax_11
            char rcx_8 = sub_1419a2ec0(*(arg2 + 0x5150), &var_128, &data_143e791c0, 0)
            zmm6_1.o = var_128.o
            int128_t zmm6_2 = sub_1411e3ca0(rcx_8)
            var_108 = zx.o(0)
            sub_141998c50(zmm6_2.q, &data_143e7ead0, rdi_2)
            int32_t var_88_1 = 1
            uint64_t var_90_1 = 1.q
            void*** rax_13
            char rcx_10
            rax_13, rcx_10 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
            void*** rbx_2 = rax_13
            
            if (rax_13 == 0)
                rbx_2 = nullptr
            else
                int32_t var_c8_1
                var_c8_1.q = rdi_2
                sub_1411e3ca0(rcx_10)
                void* var_c0_1 = &data_143e7eb00
                var_108 = var_c8_1.o
                void var_138
                sub_141992bd0(rbx_2, &var_138, &var_108, 2)
                *rbx_2 = &data_142f38b68
                *(rbx_2 + 0x38) = rdi_2.o
                *(rbx_2 + 0x48) = zmm6_2
                rbx_2[0xb] = var_88_1.q
            
            sub_1419968d0(arg1, rbx_2)
            rax_4 = r13_1 - 1
        while (r13_2 u< rax_4)
        
        r14_1 = rax_2
    
    void* const r12_1 = var_f8
    void* r13_3 = arg_18
    int32_t i_1 = 0
    int64_t var_124
    void*** var_118
    
    if (rax_4 != 0)
        int32_t i
        
        do
            void* rax_15 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
            void* const rbx_3 = rax_15
            
            if (rax_15 == 0)
                rbx_3 = nullptr
            else
                __builtin_memset(rax_15 + 8, 0, 0x48)
                __builtin_memset(rax_15 + 0x68, 0, 0x18)
            
            memset(rbx_3, 0, 0x80)
            bool cond:1_1 = *(r14_1 + 0x54) == 0
            var_128 = 0
            var_124 = 0
            int32_t var_11c_1 = 0
            char var_110_1 = 0
            var_118 = r14_1
            char var_127_1 = i_1.b
            char var_126_1 = 1
            
            if (not(cond:1_1))
                int32_t var_11c_2 = *(r14_1 + 0x4c)
            
            void*** rax_17 = sub_14081d830(0x38, *(arg1 + 8), 1, 0)
            
            if (rax_17 == 0)
                rax_17 = nullptr
            else
                int128_t zmm0_5 = var_128.o
                rax_17[1] = r14_1[1]
                *rax_17 = &data_142f34e88
                *(rax_17 + 0x18) = zmm0_5
                rax_17[2] = 0
                *(rax_17 + 0x28) = var_118.o
            
            *(rbx_3 + 0x70) = rax_17
            var_148.q = r14_1
            var_140.b = i_1.b + 1
            var_140:1.b = 0
            void*** rax_19
            int512_t zmm6_3
            rax_19, zmm6_3 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
            
            if (rax_19 == 0)
                rax_19 = nullptr
            else
                rax_19[1] = r14_1[1]
                *rax_19 = &data_142f285c0
                rax_19[2] = 0
                *(rax_19 + 0x18) = var_148.o
            
            *(rbx_3 + 0x78) = rax_19
            i = i_1 + 1
            *(rbx_3 + 0x5c) = *(r13_3 + 0x60)
            *(rbx_3 + 0x50) = *(r13_3 + 0x40)
            *(rbx_3 + 0x54) = *(r13_3 + 0x44)
            *(rbx_3 + 0x58) = *(r13_3 + 0x48)
            *(rbx_3 + 0x60) = i_1
            *(rbx_3 + 0x64) = i
            *(rbx_3 + 0x68) = *(r12_1 + (sx.q(i_1) << 3))
            char rcx_18 = sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e790c0, 0)
            zmm6_3.o = var_108
            int128_t zmm6_4 = sub_1411e3b30(rcx_18)
            var_128.o = zx.o(0)
            sub_141998c50(zmm6_4.q, &data_143e7ea30, rbx_3)
            int64_t* rdx_15 = *(arg1 + 8)
            var_f8 = rbx_3
            int32_t var_f0
            var_f0.o = zmm6_4
            void*** rax_26
            char rcx_20
            rax_26, rcx_20 = sub_14081d830(0x50, rdx_15, 1, 0)
            void*** rdi_3 = rax_26
            
            if (rax_26 == 0)
                rdi_3 = nullptr
            else
                sub_1411e3b30(rcx_20)
                void* var_d0_2 = &data_143e7ea60
                var_128.o = rbx_3.o
                sub_141992bd0(rdi_3, &arg_18, &var_128, 0xa)
                *(rdi_3 + 0x38) = var_f8.o
                *rdi_3 = &data_142f38998
                int64_t var_e8
                rdi_3[9] = var_e8
            
            sub_1419968d0(arg1, rdi_3)
            i_1 = i
        while (i u< r13_1 - 1)
    
    void*** rax_30 = sub_141188b30(arg1, sub_141193740(arg1, arg5, PageToPageIndexBuffer", 0), 0x1c)
    var_148.q = rax_3
    var_140.d = 0x1c
    var_140:4.w = 0
    result = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
    void* const* result_1 = result
    
    if (result == 0)
        result_1 = nullptr
    else
        result[1] = rax_3[1]
        result[2] = 0
        result = &data_142f285c0
        *result_1 = &data_142f285c0
        *(result_1 + 0x18) = var_148.o
    
    if (data_1439b6164 s> 0)
        int32_t* rax_31
        int512_t zmm6_5
        rax_31, zmm6_5 = sub_14081d830(0x40, *(arg1 + 8), 1, 0)
        int32_t* rbx_5 = rax_31
        
        if (rax_31 == 0)
            rbx_5 = nullptr
        else
            *(rbx_5 + 0x18) = 0
            __builtin_memset(&rbx_5[8], 0, 0x18)
        
        int64_t rcx_26 = sx.q(r13_1)
        __builtin_memset(rbx_5, 0, 0x40)
        rbx_5[5] = (rcx_26 - 1).d
        rbx_5[3] = *(r13_3 + 0x60)
        *rbx_5 = *(r13_3 + 0x40)
        rbx_5[1] = *(r13_3 + 0x44)
        rbx_5[2] = *(r13_3 + 0x48)
        *(rbx_5 + 0x18) = r14_1
        *(rbx_5 + 0x28) = rax_30
        *(rbx_5 + 0x30) = result_1
        *(rbx_5 + 0x20) = *(r12_1 + (rcx_26 << 3) - 0x10)
        char rcx_29 = sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e792c0, 0)
        zmm7 = var_108
        zmm6_5.o = zx.o(0)
        var_128.o = sub_1411e3f80(rcx_29)
        sub_141998c50(zmm7.q, &data_143e7eb70, rbx_5)
        var_128.q = rbx_5
        var_124:4.o = zmm7
        void*** rax_38
        char rcx_31
        rax_38, rcx_31 = sub_14081d830(0x50, *(arg1 + 8), 1, 0)
        void*** rdi_4 = rax_38
        
        if (rax_38 == 0)
            rdi_4 = nullptr
        else
            var_148.q = rbx_5
            sub_1411e3f80(rcx_31)
            void* var_140_1 = &data_143e7eba0
            var_108 = var_148.o
            sub_141992bd0(rdi_4, &arg_18, &var_108, 2)
            *(rdi_4 + 0x38) = var_128.o
            *rdi_4 = &data_142f389a8
            rdi_4[9] = var_118
        
        result = sub_1419968d0(arg1, rdi_4)
    
    if (r12_1 != 0)
        return sub_140a74f90(r12_1)

return result
