// 函数: sub_140ac3dc0
// 地址: 0x140ac3dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t* r12 = *(*arg1 + 8)
(*(*r12 + 0x1d8))(r12, &data_1439a93f8)

if ((r12[5].b & 1) != 0 && r12[8].d s< 0x170)
    void* rcx_1 = *arg1
    int64_t var_2f8 = 0
    int64_t var_2f0_1 = 0
    int512_t zmm1 = sub_140a1d9d0(*(rcx_1 + 8), &var_2f8, arg3)
    bool cond:2_1 = r12[8].d s< 0xe2
    int64_t* var_308 = nullptr
    int64_t var_310_1
    
    if (cond:2_1)
        void*** rax_16 = j_sub_140a82f30(0x20)
        
        if (rax_16 == 0)
            rax_16 = nullptr
        else
            rax_16[1].d = 1
            *rax_16 = &data_142df7bd8
            *(rax_16 + 0xc) = 1
            rax_16[2] = 0
            rax_16[3] = 0
        
        uint128_t zmm0_1 = (&rax_16[2]).o
        uint128_t var_298 = zmm0_1
        void* rax_17 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        var_310_1 = var_298.q
        var_298.q = 0
        sub_1405aeff0(&var_308, &var_298:8)
        void* rcx_20 = var_298:8.q
        
        if (rcx_20 != 0)
            int32_t rax_19 = *(rcx_20 + 8)
            *(rcx_20 + 8) -= 1
            
            if (rax_19 == 1)
                int64_t* rdi_3 = var_298:8.q
                (**rdi_3)(rdi_3)
                int32_t rax_21 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_21 == 1)
                    int64_t* rcx_22 = var_298:8.q
                    (*(*rcx_22 + 8))(rcx_22, 1)
        
        if (rax_16 != 0)
            rax_16[1].d -= 1
            
            if (rax_16[1].d == 1)
                (**rax_16)(rax_16)
                int32_t rax_25 = *(rax_16 + 0xc)
                *(rax_16 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*rax_16)[1](rax_16, 1)
    else
        void* rcx_3 = *arg1
        int64_t var_2a8 = 0
        int32_t var_2a0_1 = 0
        int64_t var_2b8 = 0
        int32_t var_2b0_1 = 0
        int512_t zmm1_1 = sub_140a1d9d0(*(rcx_3 + 8), &var_2a8, zmm1)
        sub_140a1d9d0(*(*arg1 + 8), &var_2b8, zmm1_1)
        int16_t* const var_178
        int32_t var_170
        
        if (var_2b0_1 s> 1)
            sub_140aab440(sub_140ab2000(), &var_2b8, &var_178, &var_170)
        else
            var_178 = &data_142d40450
            var_170 = 0
        int16_t* const var_168
        int32_t var_160
        
        if (var_2a0_1 s> 1)
            sub_140aab440(sub_140ab2000(), &var_2a8, &var_168, &var_160)
        else
            var_168 = &data_142d40450
            var_160 = 0
        void var_68
        int64_t* rax_7 = sub_140aaef90(sub_140aae970(), &var_68, &var_168, &var_178, &var_2f8)
        int64_t* rcx_10 = rax_7[1]
        int64_t rdx_6 = *rax_7
        int64_t* var_238 = rcx_10
        
        if (rcx_10 != 0)
            rcx_10[1].d += 1
        
        var_310_1 = rdx_6
        int64_t var_240_1 = 0
        sub_1405aeff0(&var_308, &var_238)
        int64_t* rcx_12 = var_238
        
        if (rcx_12 != 0)
            rcx_12[1].d -= 1
            
            if (rcx_12[1].d == 1)
                int64_t* rdi_1 = var_238
                (**rdi_1)(rdi_1)
                int32_t rax_10 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_10 == 1)
                    int64_t* rcx_14 = var_238
                    (*(*rcx_14 + 8))(rcx_14, 1)
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_14 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        int64_t rcx_17 = var_2b8
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t rcx_18 = var_2a8
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    void* rax_27
    rax_27, arg3 = sub_140aae970()
    int64_t* rdi_5 = var_308
    int16_t r12_1 = *(rax_27 + 0x120)
    int64_t var_2d0_1 = var_2f8
    var_2f8 = 0
    int64_t var_2f0_2 = 0
    
    if (rdi_5 != 0)
        rdi_5[1].d += 1
        rdi_5 = var_308
    
    void*** rax_30 = j_sub_140a82f30(0x48)
    void*** r15_1 = rax_30
    
    if (rax_30 == 0)
        r15_1 = nullptr
    else
        rax_30[1].d = 1
        *(rax_30 + 0xc) = 1
        *r15_1 = &data_142e66698
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
            rdi_5[1].d += 1
            rdi_5 = var_308
        
        r15_1[3] = var_310_1
        r15_1[4] = rdi_5
        r15_1[5] = &data_142e63708
        r15_1[6].w = r12_1
        r15_1[7] = var_2d0_1
        *(r15_1 + 0x44) = var_2f0_1:4.d
        r15_1[8].d = var_2f0_1.d
        r15_1[2] = &data_142e63d78
        var_2d0_1 = 0
        
        if (rdi_5 != 0)
            int32_t rax_34 = rdi_5[1].d
            rdi_5[1].d -= 1
            int32_t rax_36
            
            if (rax_34 == 1)
                int64_t* rdi_6 = var_308
                (**rdi_6)(rdi_6)
                rax_36 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
            
            if (rax_34 != 1 || rax_36 != 1)
                rdi_5 = var_308
            else
                rdi_5 = var_308
                (*(*rdi_5 + 8))(rdi_5, 1)
    
    uint128_t zmm0_2 = (&r15_1[2]).o
    void*** r15_2 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (r15_2 != 0)
        r15_2[1].d += 1
        rdi_5 = var_308
        r15_2 = r15_1
    
    int64_t rcx_27 = *arg2
    *arg2 = zmm0_2.q
    int64_t* r12_2 = arg2[1]
    uint128_t var_148_1
    var_148_1.q = rcx_27
    arg2[1] = zmm0_2:8.q
    var_148_1:8.q = r12_2
    
    if (r12_2 != 0)
        r12_2[1].d -= 1
        
        if (r12_2[1].d == 1)
            (**r12_2)(r12_2)
            int32_t rax_42 = *(r12_2 + 0xc)
            *(r12_2 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*r12_2 + 8))(r12_2, 1)
        
        r15_2 = r15_1
        rdi_5 = var_308
    
    if (r15_2 != 0)
        r15_2[1].d -= 1
        
        if (r15_2[1].d == 1)
            (**r15_2)(r15_2)
            int32_t rax_46 = *(r15_2 + 0xc)
            *(r15_2 + 0xc) -= 1
            
            if (rax_46 == 1)
                (*r15_2)[1](r15_2, 1)
        
        rdi_5 = var_308
    
    if (rdi_5 != 0)
        int32_t rax_48 = rdi_5[1].d
        rdi_5[1].d -= 1
        int32_t rax_50
        
        if (rax_48 == 1)
            int64_t* rdi_7 = var_308
            (**rdi_7)(rdi_7)
            rax_50 = *(rdi_7 + 0xc)
            *(rdi_7 + 0xc) -= 1
        
        if (rax_48 != 1 || rax_50 != 1)
            rdi_5 = var_308
        else
            rdi_5 = var_308
            (*(*rdi_5 + 8))(rdi_5, 1)
    
    if (var_2d0_1 != 0)
        arg3 = sub_140a74f90(var_2d0_1)
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            int64_t* rdi_8 = var_308
            (**rdi_8)(rdi_8)
            int32_t rax_55 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (rax_55 == 1)
                int64_t* rcx_36 = var_308
                (*(*rcx_36 + 8))(rcx_36, 1)
    
    int64_t rcx_37 = var_2f8
    
    if (rcx_37 != 0)
        arg3 = sub_140a74f90(rcx_37)

int32_t r15_3 = arg2[2].d

if ((r12[5].b & 2) != 0)
    int64_t* rcx_38 = *arg2
    (*(*rcx_38 + 0x38))(rcx_38)
    
    if (r12[5].b s< 0)
        arg2[2].d &= 0xffffffeb

int64_t* r9_4 = *(*arg1 + 8)
int64_t* rcx_39 = r9_4[1]
int32_t* rdx_11 = *rcx_39

if (&rdx_11[1] u<= rcx_39[1])
    arg2[2].d = *rdx_11
    int64_t* rax_61 = r9_4[1]
    *rax_61 += 4
else if ((*(r9_4 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_4, &arg2[2], arg3)
else
    (*(*r9_4 + 0x150))(r9_4, &arg2[2], 4)

char rcx_41 = r12[5].b
char rax_63 = rcx_41

if ((rcx_41 & 1) != 0 && rcx_41 s< 0)
    arg2[2].d &= 0xffffffeb
    rax_63 = r12[5].b

if ((rax_63 & 2) != 0)
    arg2[2].d = r15_3
    rax_63 = r12[5].b

if (r12[8].d s>= 0x170)
    if ((rax_63 & 2) != 0)
        int64_t* rcx_42 = *arg2
        
        if (*((*(*rcx_42 + 0x10))(rcx_42) + 8) s> 1 && ((arg2[2].d u>> 1).b & 1) == 0)
            goto label_140ac46fa
        
        void* rax_68 = *arg1
        char var_316 = 0xff
        int64_t* r9_5 = *(rax_68 + 8)
        int64_t* rcx_43 = r9_5[1]
        char* rdx_13 = *rcx_43
        
        if (&rdx_13[1] u> rcx_43[1])
            (*(*r9_5 + 0x150))(r9_5, &var_316, 1)
        else
            var_316 = *rdx_13
            int64_t* rax_71 = r9_5[1]
            *rax_71 += 1
        
        int64_t* rcx_45 = *arg2
        char rdx_15
        
        if (*((*(*rcx_45 + 0x10))(rcx_45) + 8) s<= 1 || ((arg2[2].d u>> 1).b & 1) == 0)
            rdx_15 = 0
        else
            rdx_15 = 1
        
        char var_318_1 = rdx_15
        int64_t* r9_6 = *(*arg1 + 8)
        int64_t* rcx_46 = r9_6[1]
        int64_t r8_5 = *rcx_46
        bool rax_80
        
        if (r8_5 + 4 u> rcx_46[1])
            uint32_t var_300 = zx.d(rdx_15)
            (*(*r9_6 + 0x150))(r9_6, &var_300, 4)
            rax_80 = var_300 != 0
            bool var_318_3 = rax_80
        else
            bool var_318_2 = *r8_5 != 0
            int64_t* rax_79 = r9_6[1]
            *rax_79 += 4
            rax_80 = var_318_2
        
        if (rax_80 != 0)
            int64_t* rax_83 = sub_140ab1d50(arg2)
            uint64_t var_278 = 0
            int32_t rdi_9 = rax_83[1].d
            int64_t r14_1 = *rax_83
            int32_t var_270_1 = rdi_9
            
            if (rdi_9 != 0)
                sub_1405a4c70(&var_278, rdi_9, 0)
                memcpy(var_278, r14_1, rdi_9 * 2)
            else
                int32_t var_26c_1 = 0
            
            sub_140a1d9d0(*(*arg1 + 8), &var_278, arg3)
            uint64_t rcx_53 = var_278
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
    else if ((rax_63 & 1) == 0)
    label_140ac46fa:
        int64_t* rcx_63 = *arg2
        int64_t* rax_101 = (*(*rcx_63 + 0x30))(rcx_63)
        int64_t r8_8 = *rax_101
        (*(r8_8 + 0x20))(rax_101, arg1, r8_8)
        int64_t* rcx_65 = *arg2
        int64_t rdx_25 = *rcx_65
        
        if ((*(rdx_25 + 8))(rcx_65, rdx_25) != 0)
            int64_t* rcx_66 = *arg2
            (*(*rax_101 + 0x28))(rax_101, arg1, (*(*rcx_66 + 0x20))(rcx_66))
    else
        void* rax_84 = *arg1
        char var_317 = 0xff
        int64_t* r9_7 = *(rax_84 + 8)
        int64_t* rcx_54 = r9_7[1]
        char* rdx_20 = *rcx_54
        
        if (&rdx_20[1] u> rcx_54[1])
            (*(*r9_7 + 0x150))(r9_7, &var_317, 1)
        else
            var_317 = *rdx_20
            int64_t* rax_87 = r9_7[1]
            *rax_87 += 1
        
        int64_t rax_89 = sx.q(var_317)
        
        if (rax_89.d u<= 0xc)
            void*** rdi_10
            
            switch (rax_89)
                case 0
                    void*** rax_90 = sub_140a93d50()
                    uint128_t zmm0_3 = (&rax_90[2]).o
                    rdi_10 = _mm_bsrli_si128(zmm0_3, 8).q
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 1
                        rdi_10 = rax_90
                    
                    int64_t rcx_58 = *arg2
                    *arg2 = zmm0_3.q
                    int64_t* r15_4 = arg2[1]
                    uint128_t var_138_1
                    var_138_1.q = rcx_58
                    arg2[1] = zmm0_3:8.q
                    var_138_1:8.q = r15_4
                    
                    if (r15_4 != 0)
                        r15_4[1].d -= 1
                        
                        if (r15_4[1].d == 1)
                            (**r15_4)(r15_4)
                            int32_t rax_95 = *(r15_4 + 0xc)
                            *(r15_4 + 0xc) -= 1
                            
                            if (rax_95 == 1)
                                (*(*r15_4 + 8))(r15_4, 1)
                        
                        rdi_10 = rax_90
                    
                label_140ac46c8:
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d -= 1
                        
                        if (rdi_10[1].d == 1)
                            (**rdi_10)(rdi_10)
                            int32_t r14_2 = *(rdi_10 + 0xc)
                            *(rdi_10 + 0xc) -= 1
                            
                            if (r14_2 == 1)
                                (*rdi_10)[1](rdi_10, zx.q(r14_2))
                case 1
                    void*** rax_105 = sub_140a93df0()
                    uint128_t zmm0_4 = (&rax_105[2]).o
                    rdi_10 = _mm_bsrli_si128(zmm0_4, 8).q
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 1
                        rdi_10 = rax_105
                    
                    int64_t rcx_72 = *arg2
                    *arg2 = zmm0_4.q
                    int64_t* r15_5 = arg2[1]
                    uint128_t var_128_1
                    var_128_1.q = rcx_72
                    arg2[1] = zmm0_4:8.q
                    var_128_1:8.q = r15_5
                    
                    if (r15_5 != 0)
                        r15_5[1].d -= 1
                        
                        if (r15_5[1].d == 1)
                            (**r15_5)(r15_5)
                            int32_t rax_110 = *(r15_5 + 0xc)
                            *(r15_5 + 0xc) -= 1
                            
                            if (rax_110 == 1)
                                (*(*r15_5 + 8))(r15_5, 1)
                        
                        rdi_10 = rax_105
                    
                    goto label_140ac46c8
                case 2
                    void*** rax_112 = sub_140a93ee0()
                    uint128_t zmm0_5 = (&rax_112[2]).o
                    rdi_10 = _mm_bsrli_si128(zmm0_5, 8).q
                    
                    if (rdi_10 != 0)
                        rdi_10[1].d += 1
                        rdi_10 = rax_112
                    
                    int64_t rcx_75 = *arg2
                    *arg2 = zmm0_5.q
                    int64_t* r15_6 = arg2[1]
                    uint128_t var_118_1
                    var_118_1.q = rcx_75
                    arg2[1] = zmm0_5:8.q
                    var_118_1:8.q = r15_6
                    
                    if (r15_6 != 0)
                        r15_6[1].d -= 1
                        
                        if (r15_6[1].d == 1)
                            (**r15_6)(r15_6)
                            int32_t rax_117 = *(r15_6 + 0xc)
                            *(r15_6 + 0xc) -= 1
                            
                            if (rax_117 == 1)
                                (*(*r15_6 + 8))(r15_6, 1)
                        
                        rdi_10 = rax_112
                    
                    goto label_140ac46c8
                case 3
                    void*** rax_119 = sub_140a938d0()
                    void*** var_100_1 = rax_119
                    void* var_108 = &rax_119[2]
                    uint128_t zmm0_6 = var_108.o
                    uint128_t var_228 = zmm0_6
                    void* rax_120 = _mm_bsrli_si128(zmm0_6, 8).q
                    
                    if (rax_120 != 0)
                        *(rax_120 + 8) += 1
                    
                    int64_t rcx_78 = *arg2
                    *arg2 = var_228.q
                    var_228.q = rcx_78
                    var_228:8.q = arg2[1]
                    arg2[1] = var_228:8.q
                    sub_1405970a0(&var_228)
                    sub_1405970a0(&var_108)
                case 4
                    void*** rax_123 = sub_140a93b80()
                    void*** var_f0_1 = rax_123
                    void* var_f8 = &rax_123[2]
                    uint128_t zmm0_7 = var_f8.o
                    uint128_t var_218 = zmm0_7
                    void* rax_124 = _mm_bsrli_si128(zmm0_7, 8).q
                    
                    if (rax_124 != 0)
                        *(rax_124 + 8) += 1
                    
                    int64_t rcx_82 = *arg2
                    *arg2 = var_218.q
                    var_218.q = rcx_82
                    var_218:8.q = arg2[1]
                    arg2[1] = var_218:8.q
                    sub_1405970a0(&var_218)
                    sub_1405970a0(&var_f8)
                case 5
                    void*** rax_127 = sub_140a93c10()
                    void*** var_e0_1 = rax_127
                    void* var_e8 = &rax_127[2]
                    uint128_t zmm0_8 = var_e8.o
                    uint128_t var_208 = zmm0_8
                    void* rax_128 = _mm_bsrli_si128(zmm0_8, 8).q
                    
                    if (rax_128 != 0)
                        *(rax_128 + 8) += 1
                    
                    int64_t rcx_86 = *arg2
                    *arg2 = var_208.q
                    var_208.q = rcx_86
                    var_208:8.q = arg2[1]
                    arg2[1] = var_208:8.q
                    sub_1405970a0(&var_208)
                    sub_1405970a0(&var_e8)
                case 6
                    void*** rax_131 = sub_140a93980()
                    void*** var_d0_1 = rax_131
                    void* var_d8 = &rax_131[2]
                    uint128_t zmm0_9 = var_d8.o
                    uint128_t var_1f8 = zmm0_9
                    void* rax_132 = _mm_bsrli_si128(zmm0_9, 8).q
                    
                    if (rax_132 != 0)
                        *(rax_132 + 8) += 1
                    
                    int64_t rcx_90 = *arg2
                    *arg2 = var_1f8.q
                    var_1f8.q = rcx_90
                    var_1f8:8.q = arg2[1]
                    arg2[1] = var_1f8:8.q
                    sub_1405970a0(&var_1f8)
                    sub_1405970a0(&var_d8)
                case 7
                    void*** rax_135 = sub_140a93a20()
                    void*** var_c0_1 = rax_135
                    void* var_c8 = &rax_135[2]
                    uint128_t zmm0_10 = var_c8.o
                    uint128_t var_1e8 = zmm0_10
                    void* rax_136 = _mm_bsrli_si128(zmm0_10, 8).q
                    
                    if (rax_136 != 0)
                        *(rax_136 + 8) += 1
                    
                    int64_t rcx_94 = *arg2
                    *arg2 = var_1e8.q
                    var_1e8.q = rcx_94
                    var_1e8:8.q = arg2[1]
                    arg2[1] = var_1e8:8.q
                    sub_1405970a0(&var_1e8)
                    sub_1405970a0(&var_c8)
                case 8
                    void*** rax_139 = sub_140a93ca0()
                    void*** var_b0_1 = rax_139
                    void* var_b8 = &rax_139[2]
                    uint128_t zmm0_11 = var_b8.o
                    uint128_t var_1d8 = zmm0_11
                    void* rax_140 = _mm_bsrli_si128(zmm0_11, 8).q
                    
                    if (rax_140 != 0)
                        *(rax_140 + 8) += 1
                    
                    int64_t rcx_98 = *arg2
                    *arg2 = var_1d8.q
                    var_1d8.q = rcx_98
                    var_1d8:8.q = arg2[1]
                    arg2[1] = var_1d8:8.q
                    sub_1405970a0(&var_1d8)
                    sub_1405970a0(&var_b8)
                case 9
                    void*** rax_143 = sub_140a93ad0()
                    void*** var_a0_1 = rax_143
                    void* var_a8 = &rax_143[2]
                    uint128_t zmm0_12 = var_a8.o
                    uint128_t var_1c8 = zmm0_12
                    void* rax_144 = _mm_bsrli_si128(zmm0_12, 8).q
                    
                    if (rax_144 != 0)
                        *(rax_144 + 8) += 1
                    
                    int64_t rcx_102 = *arg2
                    *arg2 = var_1c8.q
                    var_1c8.q = rcx_102
                    var_1c8:8.q = arg2[1]
                    arg2[1] = var_1c8:8.q
                    sub_1405970a0(&var_1c8)
                    sub_1405970a0(&var_a8)
                case 0xa
                    void*** rax_147 = sub_140a94030()
                    void*** var_90_1 = rax_147
                    void* var_98 = &rax_147[2]
                    uint128_t zmm0_13 = var_98.o
                    uint128_t var_1b8 = zmm0_13
                    void* rax_148 = _mm_bsrli_si128(zmm0_13, 8).q
                    
                    if (rax_148 != 0)
                        *(rax_148 + 8) += 1
                    
                    int64_t rcx_106 = *arg2
                    *arg2 = var_1b8.q
                    var_1b8.q = rcx_106
                    var_1b8:8.q = arg2[1]
                    arg2[1] = var_1b8:8.q
                    sub_1405970a0(&var_1b8)
                    sub_1405970a0(&var_98)
                case 0xb
                    void*** rax_151 = sub_140a93850()
                    void*** var_80_1 = rax_151
                    void* var_88 = &rax_151[2]
                    uint128_t zmm0_14 = var_88.o
                    uint128_t var_1a8 = zmm0_14
                    void* rax_152 = _mm_bsrli_si128(zmm0_14, 8).q
                    
                    if (rax_152 != 0)
                        *(rax_152 + 8) += 1
                    
                    int64_t rcx_110 = *arg2
                    *arg2 = var_1a8.q
                    var_1a8.q = rcx_110
                    var_1a8:8.q = arg2[1]
                    arg2[1] = var_1a8:8.q
                    sub_1405970a0(&var_1a8)
                    sub_1405970a0(&var_88)
                case 0xc
                    void*** rax_155 = sub_140a93f90()
                    void*** var_70_1 = rax_155
                    void* var_78 = &rax_155[2]
                    uint128_t zmm0_15 = var_78.o
                    uint128_t var_198 = zmm0_15
                    void* rax_156 = _mm_bsrli_si128(zmm0_15, 8).q
                    
                    if (rax_156 != 0)
                        *(rax_156 + 8) += 1
                    
                    int64_t rcx_114 = *arg2
                    *arg2 = var_198.q
                    var_198.q = rcx_114
                    var_198:8.q = arg2[1]
                    arg2[1] = var_198:8.q
                    sub_1405970a0(&var_198)
                    sub_1405970a0(&var_78)
            
            goto label_140ac46fa
        
        sub_1405d9400()
        int64_t var_2e8 = data_143cd6fd8
        int64_t* rcx_119 = data_143cd6fe0
        int64_t* var_2e0_1 = rcx_119
        
        if (rcx_119 != 0)
            rcx_119[1].d += 1
            rcx_119 = var_2e0_1
        
        if (&var_2e8 != arg2)
            int128_t zmm1_2 = var_2e8.o
            int128_t var_40_1 = zmm1_2
            var_2e8.o = *arg2
            rcx_119 = var_2e0_1
            *arg2 = zmm1_2
        
        if (rcx_119 != 0)
            rcx_119[1].d -= 1
            
            if (rcx_119[1].d == 1)
                (**var_2e0_1)(var_2e0_1)
                int32_t r14_4 = *(var_2e0_1 + 0xc)
                *(var_2e0_1 + 0xc) -= 1
                
                if (r14_4 == 1)
                    (*(*var_2e0_1 + 8))(var_2e0_1, zx.q(r14_4))
        
        int32_t rax_162
        int512_t zmm1_3
        rax_162, zmm1_3 = sub_140b4e7c0(r12, &data_1439a93f8)
        
        if (rax_162 s>= 0x20)
            void* rcx_123 = *arg1
            char var_315 = 0
            sub_140a8a9d0(rcx_123, &var_315)
            
            if (var_315 != 0)
                void* rcx_124 = *arg1
                int64_t var_188 = 0
                int64_t var_180_1 = 0
                sub_140a1d9d0(*(rcx_124 + 8), &var_188, zmm1_3)
                void var_58
                int64_t* rax_163 = sub_140a95a30(&var_58, &var_188)
                int64_t rdx_43 = *arg2
                *arg2 = *rax_163
                *rax_163 = rdx_43
                int64_t rdx_44 = arg2[1]
                arg2[1] = rax_163[1]
                rax_163[1] = rdx_44
                sub_1405970a0(&var_58)
                int64_t rcx_130 = var_188
                
                if (rcx_130 != 0)
                    sub_140a74f90(rcx_130)

if ((r12[5].b & 1) != 0)
    sub_140abd990(arg2)

char result = sub_140ac5370(arg2)

if (result != 0)
    *(r12 + 0x29) |= 0x10

__security_check_cookie(rax_1 ^ &var_348)
return result
