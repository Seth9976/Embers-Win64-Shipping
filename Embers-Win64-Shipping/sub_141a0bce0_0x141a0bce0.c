// 函数: sub_141a0bce0
// 地址: 0x141a0bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
uint64_t result = __security_cookie ^ &var_328
uint64_t result_2 = result

if (*(arg1 + 0x1a2) != 0)
    result = data_143f28238
    
    if (*(result + 4) != 0)
        int64_t* rbx_1 = arg2[1]
        int32_t r15_1 = sx.d(*(arg1 + 0x1a0))
        int32_t rax_1 = sub_1405bd500()
        uint64_t r13_1 = 0
        float zmm1 = *(arg1 + 0xc4)
        void* r8 = arg2[1]
        bool cond:1_1 = (*(*rbx_1 + 0x2c) & 0x10) == 0
        float var_248 = *(arg1 + 0xc0)
        
        if (cond:1_1)
            rax_1 = 0
        
        float var_244_1 = zmm1
        
        if (rax_1 s>= 0)
            r15_1 = rax_1
        
        float var_240_1 = *(arg1 + 0xc8)
        int32_t var_2f8_1 = r15_1
        int32_t var_23c_1 = 0x3f800000
        float zmm0_1 = sub_1422dff00(&var_248, *(arg1 + 0xd8), r8)
        
        if (r15_1 s< 0)
            r15_1 = sx.d(sub_141a0dfa0(arg1, zmm0_1, *(arg2[1] + 0xd5c)))
            var_2f8_1 = r15_1
        
        void*** rax_4 = sub_1419f4660(arg2[4])
        int32_t rdx = *(arg1 + 0x49c)
        result = sub_141a004d0(&rax_4[1], rdx * rdx)
        
        if (*(arg1 + 0x5b8) != 0)
            result = zx.q(sx.d(r15_1.b))
            
            if (r15_1.b s>= 0 && result.d s< *(arg1 + 0x5f0))
                result = *(arg1 + 0x5e8)
                char rdx_2 = *(sx.q(r15_1.b) + result)
                
                if (rdx_2 != 0xff)
                    result = *(arg1 + 0x5b0)
                    int64_t* rbx_2 = *(result + (sx.q(rdx_2) << 3))
                    
                    if (rbx_2 != 0)
                        void var_e0
                        sub_14081a190(&var_e0)
                        int64_t rax_6 = *(arg1 + 0x5a0)
                        int64_t* rax_8 = (*(*rbx_2 + 0x280))(rbx_2)
                        int32_t var_44
                        int32_t var_44_1 = var_44 | 0x400000c
                        int64_t rax_9 = *(arg1 + 0x5e0)
                        char var_45_1 = 0
                        int32_t var_70_1 = 0
                        int32_t var_6c
                        
                        if (var_6c != 0)
                            sub_141a14950(&var_e0, 0)
                        
                        int32_t result_1
                        sub_141a0a410(&data_1439cc030, &result_1, arg1 + 0x160)
                        result = sx.q(result_1)
                        
                        if (result.d != 0xffffffff)
                            uint64_t rdx_4 = result * 5
                            result = data_1439cc030
                            r13_1 = result + (rdx_4 << 3)
                        
                        void* r13_2 = *(r13_1 + 0x18)
                        int32_t i = 0
                        uint32_t result_3 = *(arg1 + 0x49c)
                        void* var_1b8_1 = r13_2
                        int32_t i_1 = 0
                        void* var_78
                        
                        if (result_3 s> 0)
                            do
                                int32_t j = 0
                                result = zx.q(result_3)
                                int32_t j_1 = 0
                                
                                if (result_3 s> 0)
                                    void* r12_1 = arg1 + 0x628
                                    
                                    do
                                        void* var_118_1 = nullptr
                                        char rbx_4 = i.b * result_3.b + j.b
                                        void var_180
                                        int32_t var_10c
                                        
                                        if (var_70_1 != 0)
                                            sub_14083a160(&var_180, var_70_1, 0)
                                            void* rdx_6 = &var_e0
                                            void* rcx_11 = &var_180
                                            
                                            if (var_78 != 0)
                                                rdx_6 = var_78
                                            
                                            if (var_118_1 != 0)
                                                rcx_11 = var_118_1
                                            
                                            memcpy(rcx_11, rdx_6, var_70_1 * 0x68)
                                        else
                                            var_10c = 1
                                        
                                        int32_t var_1fc = var_1fc & 0xf8000000
                                        int32_t var_1d4 = var_1d4 & 0xfffff800
                                        int64_t var_108_1 = rax_6
                                        int64_t var_f8_1 = rax_9
                                        int32_t var_50
                                        int32_t var_f0_1 = var_50
                                        int16_t var_48
                                        int16_t var_e8_1 = var_48
                                        char var_46
                                        char var_e6_1 = var_46
                                        char var_e5_1 = var_45_1
                                        int32_t var_4c
                                        int32_t var_ec_1 = var_4c.d
                                        int32_t var_e4 = var_e4 ^ ((var_e4 ^ var_44_1) & 0x7ffffff)
                                        int64_t* rdi_4 = &rax_4[1][sx.q(rbx_4) * 4]
                                        int64_t var_230_1 = 0
                                        int64_t var_220_1 = 0
                                        int64_t var_210
                                        __builtin_memset(&var_210, 0, 0x14)
                                        rdi_4[1] = r12_1
                                        rdi_4[2] = arg1
                                        int32_t r12_2 = sx.d(r15_1.b)
                                        rdi_4[3].d = r12_2
                                        int64_t rax_23 = *(arg1 + 0x140)
                                        int64_t r14_2 = sx.q(var_70_1)
                                        int32_t rax_25 = *(arg1 + 0x4a4) s>> r12_2.b
                                        int64_t var_1f0_1 = 1
                                        int32_t var_1e0_1 = 0xffffffff
                                        int32_t var_1dc_1 = 0
                                        int32_t var_1d8_1 = 0x3f800000
                                        int32_t var_1f8_1 = 0
                                        void* rax_27 =
                                            *(*(*(arg1 + 0x598) + 0x70) + (sx.q(r15_1.b) << 3))
                                        void* var_2e0 = rax_27
                                        int64_t var_1e8_1 = 0
                                        int32_t var_1f4_1 = (rax_25 - 1) * (rax_25 - 1) * 2
                                        int32_t rax_31 = (r14_2 + 1).d
                                        int32_t var_110_2 = rax_31
                                        
                                        if (rax_31 s> var_10c)
                                            sub_14083a750(&var_180, r14_2.d)
                                        
                                        void* r8_4 = &var_180
                                        void* rdx_9 = var_2e0
                                        
                                        if (var_118_1 != 0)
                                            r8_4 = var_118_1
                                        
                                        int64_t rcx_17 = r14_2 * 0x68
                                        *(r8_4 + rcx_17) = rax_23.o
                                        *(r8_4 + rcx_17 + 0x10) = rax_27.o
                                        *(r8_4 + rcx_17 + 0x20) = rdi_4.o
                                        int64_t var_208
                                        *(r8_4 + rcx_17 + 0x30) = var_208.o
                                        *(r8_4 + rcx_17 + 0x40) = var_1f8_1.o
                                        *(r8_4 + rcx_17 + 0x50) = var_1e8_1.o
                                        *(r8_4 + rcx_17 + 0x60) = var_1d8_1.q
                                        int64_t r15_2 = zx.q(sx.d(rbx_4)) * 0xa8
                                        sub_14081d930(arg1 + 0x1f0 + r15_2, *(rdx_9 + 0x10))
                                        int64_t* rcx_21 = data_143f0f180
                                        int32_t j_2 = j_1
                                        int32_t i_2 = i_1
                                        void* var_298
                                        (*(*rcx_21 + 0xf8))(rcx_21, &var_298, &j_2, 
                                            &data_143f28460, 1, 1, var_2f8_1, rax_25, j_1)
                                        void* rax_36 = var_298
                                        var_2e0 = rax_36
                                        
                                        if (rax_36 != 0)
                                            *(rax_36 + 8) += 1
                                        
                                        sub_1405d1550(&var_298)
                                        sub_1405d1600(rdi_4, &var_2e0)
                                        sub_1405d1550(&var_2e0)
                                        char rax_37 = var_2f8_1.b
                                        rdi_4.b = r12_2 s<= data_143f23d48
                                        
                                        if (*(r15_2 + arg1 + 0x1a8) != rax_37)
                                            *(r15_2 + arg1 + 0x1a8) = rax_37
                                            rdi_4.b = 1
                                            sub_1408081b0(arg1 + 0x228 + r15_2)
                                        
                                        void* r9_2 = *(r13_2 + 0x60)
                                        int64_t rax_38 = *(arg1 + 0x178)
                                        int64_t rdx_14 = r9_2 s>> 1
                                        char r8_6 = *(r13_2 + 0x60) & 1
                                        void* r10_2
                                        
                                        if (r8_6 == 0)
                                            r10_2 = r9_2
                                        else
                                            r10_2 = r13_2 + 0x60 + rdx_14
                                        
                                        int32_t r11_1 = *(r13_2 + 0xc)
                                        int32_t rbx_5 = *(r13_2 + 0x10)
                                        int32_t r14_3 = *(r13_2 + 8)
                                        
                                        if (not(*(r10_2 + (sx.q(
                                                ((rax_38 u>> 0x20).d - r11_1) * rbx_5 - r14_3
                                                + rax_38.d) << 2)) f== *(r15_2 + arg1 + 0x1b0)))
                                            rdi_4.b = 1
                                            
                                            if (r8_6 != 0)
                                                r9_2 = r13_2 + 0x60 + rdx_14
                                            
                                            *(r15_2 + arg1 + 0x1b0) = *(r9_2 + (sx.q(rax_38.d
                                                + ((rax_38 u>> 0x20).d - r11_1) * rbx_5 - r14_3) << 2))
                                            rax_38 = *(arg1 + 0x178)
                                            r11_1 = *(r13_2 + 0xc)
                                            rbx_5 = *(r13_2 + 0x10)
                                            r14_3 = *(r13_2 + 8)
                                        
                                        void* r8_7 = *(r13_2 + 0x40)
                                        int64_t rdx_16 = r8_7 s>> 1
                                        char r9_3 = *(r13_2 + 0x40) & 1
                                        void* r10_4
                                        
                                        if (r9_3 == 0)
                                            r10_4 = r8_7
                                        else
                                            r10_4 = r13_2 + 0x40 + rdx_16
                                        
                                        int64_t rax_42 = sx.q(rax_38.d
                                            + ((rax_38 u>> 0x20).d - r11_1) * rbx_5 - r14_3)
                                        
                                        if (not(*(r10_4 + (rax_42 << 2)) f==
                                                *(r15_2 + arg1 + 0x1ac)))
                                            rdi_4.b = 1
                                            
                                            if (r9_3 != 0)
                                                r8_7 = r13_2 + 0x40 + rdx_16
                                            
                                            *(r15_2 + arg1 + 0x1ac) = *(r8_7 + (rax_42 << 2))
                                        
                                        int32_t r12_3 = 0
                                        
                                        if (data_1439cbf6c s> 0)
                                            int64_t* var_290 = nullptr
                                            int64_t r9_4 = *rax_8
                                            int64_t* rax_45 = (*(r9_4 + 0x40))(rax_8, 
                                                zx.q(*(*arg2 + 8)), &var_290, r9_4)
                                            int64_t rdx_18 = *rax_45
                                            
                                            if ((*(rdx_18 + 0x2a0))(rax_45, rdx_18) != 0)
                                                int64_t* rcx_47 = var_290
                                                int64_t* rdx_19 = rax_8
                                                arg2[1]
                                                
                                                if (rcx_47 != 0)
                                                    rdx_19 = rcx_47
                                                
                                                void var_198
                                                sub_142118c60(&var_198, rdx_19, rax_45)
                                                int32_t rax_48 = sub_142149bf0(
                                                    *(sub_1405948b0(rax_45) + 0x28) + 0x70, 
                                                    &var_198)
                                                
                                                if (*(r15_2 + arg1 + 0x1b4) != rax_48)
                                                    rdi_4.b = 1
                                                    *(r15_2 + arg1 + 0x1b4) = rax_48
                                        
                                        void* var_2c8 = nullptr
                                        void* rax_50 = arg1 + 0x1b8 + r15_2
                                        int32_t var_2c0_1 = 0
                                        var_2e0 = rax_50
                                        void* var_2d0 = rax_50
                                        char var_2b7_1 = 0xff
                                        int32_t var_2b4_1 = 0
                                        int128_t* var_2b0 = nullptr
                                        int64_t var_2a8_1 = 1
                                        int64_t var_2a0 = 0
                                        sub_1405c4fe0(&var_2b0)
                                        int128_t* rax_51 = var_2b0
                                        *rax_51 = data_14399f6e0
                                        rax_51[1] = data_14399f6f0
                                        rax_51[2] = data_14399f700
                                        rax_51[3] = data_14399f710
                                        int64_t rbx_7 = sx.q(var_2c0_1)
                                        int32_t k_3 = (rbx_7 + 1).d
                                        
                                        if (k_3 s> 0)
                                            sub_140775640(&var_2c8)
                                        
                                        sub_140819f30(rbx_7 * 0xa0 + var_2c8, &var_180)
                                        sub_1422926f0(&var_2d0)
                                        int64_t rbx_8 = sx.q(arg3[1].d)
                                        int32_t rax_52 = (rbx_8 + 1).d
                                        arg3[1].d = rax_52
                                        
                                        if (rax_52 s> *(arg3 + 0xc))
                                            sub_1407c3b60(arg3)
                                        
                                        sub_14081b0c0(rbx_8 * 0x38 + *arg3, &var_2d0)
                                        
                                        if (rdi_4.b != 0)
                                            int32_t k_1 = k_3
                                            int64_t r13_3 = 0
                                            void* rbx_9 = var_2c8
                                            int64_t var_280 = 0
                                            int32_t k_2 = k_1
                                            
                                            if (k_1 != 0)
                                                sub_14083a0c0(&var_280, k_1, 0)
                                                r13_3 = var_280
                                                void* r14_7 = r13_3 - rbx_9
                                                int32_t k
                                                
                                                do
                                                    sub_140819f30(r14_7 + rbx_9, rbx_9)
                                                    rbx_9 += 0xa0
                                                    k = k_1
                                                    k_1 -= 1
                                                while (k != 1)
                                                int32_t var_274
                                                r12_3 = var_274
                                                k_1 = k_2
                                            
                                            uint64_t rax_54 = zx.q(rax_25 * rax_25)
                                            char var_270_1 = 0
                                            int32_t var_2f0_2 = rax_54.d
                                            int32_t var_26c_1 = rax_54.d
                                            uint32_t r14_9 = (rax_54 * 3).d << 2
                                            uint32_t var_268_1 = r14_9
                                            int32_t rax_57 = (rax_25 - 1) * (rax_25 - 1) * 2
                                            int32_t var_264_1 = rax_57
                                            void* var_260_1 = arg1 + 0x1b8 + r15_2
                                            int64_t r15_3 = sx.q(arg2[6].d)
                                            int32_t rax_62 = (r15_3 + 1).d
                                            arg2[6].d = rax_62
                                            
                                            if (rax_62 s> *(arg2 + 0x34))
                                                sub_1405c4f50(&arg2[5])
                                            
                                            int64_t* rcx_66 = r15_3 * 0x30 + arg2[5]
                                            *rcx_66 = r13_3
                                            rcx_66[1].d = k_1
                                            *(rcx_66 + 0xc) = r12_3
                                            *(rcx_66 + 0x14) = var_2f0_2
                                            rcx_66[4] = var_2e0
                                            rcx_66[5] = arg1 + 0x228 + r15_2
                                            rcx_66[2].b = 0
                                            rcx_66[3].d = r14_9
                                            *(rcx_66 + 0x1c) = rax_57
                                            var_280 = 0
                                            k_2.q = 0
                                            sub_14081c7d0(&var_280)
                                            r13_2 = var_1b8_1
                                        
                                        sub_1405ec8a0(&var_2a0)
                                        int128_t* rcx_69 = var_2b0
                                        
                                        if (rcx_69 != 0)
                                            sub_140a74f90(rcx_69)
                                        
                                        sub_14081c7d0(&var_2c8)
                                        
                                        if (var_118_1 != 0)
                                            sub_140a74f90(var_118_1)
                                        
                                        r12_1 = arg1 + 0x628
                                        result = zx.q(*(arg1 + 0x49c))
                                        j = j_1 + 1
                                        r15_1 = var_2f8_1
                                        result_3 = zx.d(result.b)
                                        i = i_1
                                        j_1 = j
                                    while (j s< result.d)
                                
                                i += 1
                                result_3 = result.d
                                i_1 = i
                            while (i s< result.d)
                        
                        if (var_78 != 0)
                            result = sub_140a74f90(var_78)

__security_check_cookie(result_2 ^ &var_328)
return result
