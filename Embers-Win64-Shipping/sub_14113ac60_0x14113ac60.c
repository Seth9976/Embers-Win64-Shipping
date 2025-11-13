// 函数: sub_14113ac60
// 地址: 0x14113ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
uint64_t result = *(arg1 + 8)

if (*(result + 0x1c20) s> 0)
    int32_t rcx = *(arg1 + 0x3b4)
    int32_t var_200_1 = rcx
    result = sub_1410a09e0(rcx)
    
    if (result.b == 0)
        int64_t* r14_2 = *arg3 + 8
        int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rax_2 = *r14_2
        void* rcx_1 = &rbx_3[1]
        int128_t zmm6
        
        if (rcx_1 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_1 = &rbx_3[1]
        
        *(arg2 + 0x30) = rcx_1
        *rbx_3 = rax_2
        void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_5[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_5[5]
        
        *(arg2 + 0x30) = rax_3
        int32_t* r15_1 = nullptr
        void**** rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        int128_t zmm1 = data_142d3f5a0
        *rax_4 = rcx_5
        *(arg2 + 8) = &rcx_5[1]
        rcx_5[1] = 0
        *rcx_5 = &data_142d549c8
        rcx_5[2].d = 1
        rcx_5[3] = rbx_3
        rcx_5[4].d = 1
        int64_t rax_6 = *r14_2
        int32_t var_a0_1 = 0
        int32_t var_9c
        __builtin_memset(&var_9c, 0xff, 0x14)
        int128_t var_88_1 = zmm1
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x19)
        int64_t var_178 = rax_6
        int64_t var_170_1 = 0
        int32_t var_168_1 = 0xffffffff
        int16_t var_164_1 = 0x500
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x11)
        int32_t var_a4_1 = 0
        bool var_5f_1 = *(rax_6 + 0x38) u> 1
        void var_160
        memset(&var_160, 0, 0xa8)
        int64_t rbx_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_7 = rbx_8 + 0x32
        
        if (rax_7 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x34)
            rbx_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_7 = rbx_8 + 0x32
        
        wchar16 const* const rcx_11 = u"BeginRenderingSceneColor"
        *(arg2 + 0x30) = rax_7
        wchar16 const i
        
        do
            i = *rcx_11
            *(rcx_11 + rbx_8 - u"BeginRenderingSceneColor") = i
            rcx_11 = &rcx_11[1]
        while (i != 0)
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_14[0x27]
        
        if (rax_8 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_14[0x27]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        sub_1405d11b0(rcx_14, &var_178, rbx_8)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_178)
        int64_t* r8_1 = arg3
        int64_t var_68
        *(arg2 + 0x178) = var_68:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        void* rax_12 = r8_1[1]
        int64_t* var_1f0 = nullptr
        void* rdx_4 = *(rax_12 + 0x10)
        void* var_1f8 = rdx_4
        void* rax_13 = rdx_4
        
        if (rdx_4 != 0)
            *(rdx_4 + 8) += 1
            rax_13 = var_1f8
        
        void* var_1a0 = rax_13
        int64_t* var_1a8 = &var_1f0
        
        if (rdx_4 != 0)
            *(rdx_4 + 8) += 1
        
        int32_t i_1 = 0
        int128_t var_198_1 = zx.o(0)
        int32_t var_188_1 = 0x42c80000
        
        if (*(arg1 + 0xa8) s> 0)
            int64_t r14_3 = 0
            int128_t var_48_1 = zmm6
            zmm6 = 0x3f800000
            var_200_1.q = 0
            
            do
                void* r14_4 = r14_3 + *(arg1 + 0xa0)
                
                if (not(zmm6.d f<= *(r14_4 + 0x2bc)))
                    int32_t rbx_11 = *(arg2 + 0x8c)
                    int32_t rax_14 = *(r14_4 + 0xad8)
                    
                    if (rbx_11 != rax_14)
                        bool cond:0_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rax_14
                        
                        if (cond:0_1)
                            void*** rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_15 = &rdx_7[3]
                            
                            if (rax_15 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                r8_1 = arg3
                                rdx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_15 = &rdx_7[3]
                            
                            *(arg2 + 0x30) = rax_15
                            int64_t* rax_16 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_16 = rdx_7
                            int32_t rax_17 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_7[1]
                            rdx_7[1] = 0
                            *rdx_7 = &data_142f11588
                            rdx_7[2].d = rax_17
                        else
                            *(arg2 + 0x90) = rax_14
                    
                    int64_t rcx_21 = r8_1[2]
                    var_198_1.d = *(r15_1 + rcx_21)
                    var_198_1:4.d = *(r15_1 + rcx_21 + 4)
                    var_198_1:8.d = *(r15_1 + rcx_21 + 8)
                    var_198_1:0xc.d = *(r15_1 + rcx_21 + 0xc)
                    zmm6 = sub_14113b300(arg1, arg2, r14_4, &var_1a8)
                    
                    if (*(arg2 + 0x8c) != rbx_11)
                        bool cond:1_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rbx_11
                        
                        if (cond:1_1)
                            void*** rdx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_22 = &rdx_13[3]
                            
                            if (rax_22 u> *(arg2 + 0x38))
                                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_22 = &rdx_13[3]
                            
                            *(arg2 + 0x30) = rax_22
                            int64_t* rax_23 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_23 = rdx_13
                            int32_t rax_24 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_13[1]
                            rdx_13[1] = 0
                            *rdx_13 = &data_142f11588
                            rdx_13[2].d = rax_24
                        else
                            *(arg2 + 0x90) = rbx_11
                    
                    r8_1 = arg3
                
                i_1 += 1
                r14_3 = var_200_1.q + 0x5240
                r15_1 = &r15_1[8]
                var_200_1.q = r14_3
            while (i_1 s< *(arg1 + 0xa8))
        
        sub_141096650(arg2)
        int64_t r15_2 = r14_2[1]
        void*** rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t* r14_6 = *r14_2
        int128_t var_1e8_1 = data_142d57d10
        void* rax_25 = &rbx_14[0xa]
        int128_t zmm0_1 = data_142d57920
        int128_t var_1d8_1 = data_142d3f800
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x58)
            rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rbx_14[0xa]
        
        *(arg2 + 0x30) = rax_25
        int64_t* rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rbx_14
        *(arg2 + 8) = &rbx_14[1]
        rbx_14[1] = 0
        *rbx_14 = &data_142d56628
        rbx_14[2].d = var_1e8_1.d
        __builtin_memset(rbx_14 + 0x14, 0xff, 0x20)
        *(rbx_14 + 0x34) = zmm0_1:4.d
        rbx_14[7].d = zmm0_1:8.d
        *(rbx_14 + 0x3c) = zmm0_1:0xc.d
        rbx_14[8] = r14_6
        rbx_14[9] = r15_2
        
        if ((*(*r14_6 + 8))(r14_6) == 0)
            int64_t* rcx_28 = rbx_14[8]
            
            if ((*(*rcx_28 + 0x18))(rcx_28) == 0)
                int64_t* rcx_29 = rbx_14[8]
                
                if ((*(*rcx_29 + 0x20))(rcx_29) == 0)
                    int64_t* rcx_30 = rbx_14[8]
                    (*(*rcx_30 + 0x10))(rcx_30)
        
        int64_t* rcx_31 = rbx_14[9]
        
        if ((*(*rcx_31 + 8))(rcx_31) == 0)
            int64_t* rcx_32 = rbx_14[9]
            
            if ((*(*rcx_32 + 0x18))(rcx_32) == 0)
                int64_t* rcx_33 = rbx_14[9]
                
                if ((*(*rcx_33 + 0x20))(rcx_33) == 0)
                    int64_t* rcx_34 = rbx_14[9]
                    (*(*rcx_34 + 0x10))(rcx_34)
        
        sub_1405d1550(&var_1a0)
        sub_1405d1550(&var_1f8)
        int64_t* rcx_37 = var_1f0
        
        if (rcx_37 != 0)
            (*(*rcx_37 + 0x38))(rcx_37)
        
        int64_t var_70
        result = sub_1405d1550(&var_70)

__security_check_cookie(rax_1 ^ &var_228)
return result
