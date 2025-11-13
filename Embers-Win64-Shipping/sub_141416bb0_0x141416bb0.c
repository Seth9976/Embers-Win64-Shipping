// 函数: sub_141416bb0
// 地址: 0x141416bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
void* r12 = arg1
uint64_t result = sub_14139bee0()
int64_t* var_3b0 = &data_143ec4c60
char var_404_1

if (data_143ec5004 == 0)
    var_404_1 = 0
else
    int64_t rdx = data_143ec4cc8
    
    if (rdx == 0)
        var_404_1 = 0
    else
        var_404_1 = 1
        
        if (*(rdx + 8) == 0)
            var_404_1 = 0

if (arg3 != 0)
    int32_t i_9 = *(r12 + 0xa8)
    int32_t r15_1 = 3
    int32_t i_10 = i_9
    
    if (data_1439c7a38 s<= 3)
        r15_1 = data_1439c7a38
    
    int64_t rsi
    rsi.b = 0
    int32_t var_400_1 = r15_1
    int64_t* var_3f0_1 = nullptr
    int64_t* r14_1 = nullptr
    int64_t* var_3a8 = nullptr
    int32_t var_39c_1 = 0
    
    if (i_9 s> 0)
        result = sub_1408888d0(&var_3a8)
        r14_1 = var_3a8
        var_3f0_1 = r14_1
    
    int64_t* rcx_2 = r14_1
    
    if (i_9 != 0)
        result = r14_1 + 0x1c
        int32_t i
        
        do
            *rcx_2 = 0
            rcx_2 = &rcx_2[0x10]
            __builtin_memset(result - 0x14, 0, 0x18)
            __builtin_memset(result + 4, 0, 0x60)
            result += 0x80
            i = i_9
            i_9 -= 1
        while (i != 1)
    
    int32_t i_1 = 0
    int32_t i_6 = 0
    
    if (*(r12 + 0xa8) s> 0)
        void* rcx_3 = nullptr
        int64_t* var_3e0 = nullptr
        int64_t* rbx_1 = r14_1
        int32_t var_418
        int32_t k_2
        double zmm1[0x2]
        uint128_t zmm6
        uint128_t zmm7
        uint128_t zmm8
        uint128_t zmm9
        
        do
            void* r14_3 = *(r12 + 0xa0) + rcx_3
            void* rcx_4 = *(r14_3 + 8)
            
            if (rcx_4 != 0 && (*(r14_3 + 0x497c) & 0x20) == 0)
                void* r8 = rcx_4 + 0x30
                zmm1 = *(r12 + 0x48)
                void* rdi_1 = *(r8 + 0xf0)
                zmm1[0].d = zmm1[0].d f- *(data_143f5b298 + 0x8f0)
                
                if (rdi_1 != 0)
                    r8 = rdi_1
                
                void* r13_3 = sx.q(mods.dp.d(sx.q(*(rcx_4 + 0x19c)), r15_1)) * 0x50 + r8
                zmm6, zmm7, zmm8 = sub_141430310(rcx_4, zmm1, zmm1, zmm1, *(rcx_4 + 0x214))
                *(r13_3 + 0x34)
                uint64_t rax_8
                
                if (*(r13_3 + 8) != *(r13_3 + 0x34))
                    zmm6 = sub_141427770(r13_3)
                    int64_t rcx_6 = sx.q(*(r13_3 + 0x48))
                    void* rdi_2 = r13_3 + 0x38
                    rax_8 = *(rdi_2 + 8)
                    
                    if (rcx_6 s> 0)
                        if (rax_8 != 0)
                            rdi_2 = rax_8
                        
                        __builtin_memset(rdi_2, 0xffffffff, rcx_6 << 2)
                
                if (*(r12 + 0x3b0) s> 1)
                    void* var_320
                    sub_1407453e0(&var_320, *(r12 + 8) + 0xee8)
                    int32_t j_3
                    int32_t j = j_3
                    uint64_t var_310
                    
                    while (j s< *(var_310 + 0x18))
                        void* r13_5 = sx.q(j) * 0x70 + *(r12 + 0x2f0)
                        int32_t k = 0
                        k_2 = 0
                        
                        if (*(r13_5 + 0x18) s> 0)
                            int64_t* r12_1 = nullptr
                            
                            do
                                void* rdi_3 = *(r12_1 + *(r13_5 + 0x10))
                                int64_t rax_11 = *(rdi_3 + 0x48)
                                
                                if ((rax_11 == 0 || rax_11 == r14_3) && *(rdi_3 + 0x40) != 1)
                                    int32_t rax_12 = *(rdi_3 + 0x570)
                                    int64_t rax_17
                                    int64_t rcx_19
                                    
                                    if ((rax_12.b & 0x20) == 0)
                                        if ((rax_12.b & 0x40) == 0)
                                            goto label_141416f8e
                                        
                                        int32_t rcx_11 = *(rdi_3 + 0x534)
                                        
                                        if (rcx_11 s< 0 || (rax_12.b & 0x10) == 0)
                                            k = k_2
                                        label_141416f8e:
                                            
                                            if (not(test_bit(rax_12, 0xb)))
                                                if (sub_1414b3210(rdi_3, r14_3) != 0)
                                                    k = k_2
                                                else
                                                    int64_t var_360
                                                    var_418.q = &var_360
                                                    char rax_23
                                                    rax_23, zmm6, zmm7 = sub_141416410(r14_3, 
                                                        rdi_3, r15_1, 2, var_418)
                                                    
                                                    if (rax_23 == 0)
                                                        k = k_2
                                                    else
                                                        int64_t r15_3 = sx.q(rbx_1[5].d)
                                                        int32_t rax_24 = (r15_3 + 1).d
                                                        rbx_1[5].d = rax_24
                                                        
                                                        if (rax_24 s> *(rbx_1 + 0x2c))
                                                            sub_1405a4d70(&rbx_1[4])
                                                        
                                                        *(rbx_1[4] + (r15_3 << 3)) = rdi_3
                                                        rsi = sx.q(rbx_1[0xd].d)
                                                        int32_t rax_26 = (rsi + 1).d
                                                        rbx_1[0xd].d = rax_26
                                                        
                                                        if (rax_26 s> *(rbx_1 + 0x6c))
                                                            sub_1405a4d70(&rbx_1[0xc])
                                                        
                                                        rcx_19 = rbx_1[0xc]
                                                        rax_17 = var_360
                                                    label_14141700e:
                                                        r15_1 = var_400_1
                                                    label_141417013:
                                                        *(rcx_19 + (rsi << 3)) = rax_17
                                                        rsi.b = 1
                                                        k = k_2
                                        else if (data_143eceb44 == 0 || rcx_11 s<= 0)
                                            k = k_2
                                        else
                                            int64_t var_368
                                            var_418.q = &var_368
                                            char rax_18
                                            rax_18, zmm6, zmm7 =
                                                sub_141416410(r14_3, rdi_3, r15_1, 0, var_418)
                                            
                                            if (rax_18 != 0)
                                                int64_t r15_2 = sx.q(rbx_1[3].d)
                                                int32_t rax_19 = (r15_2 + 1).d
                                                rbx_1[3].d = rax_19
                                                
                                                if (rax_19 s> *(rbx_1 + 0x1c))
                                                    sub_1405a4d70(&rbx_1[2])
                                                
                                                *(rbx_1[2] + (r15_2 << 3)) = rdi_3
                                                rsi = sx.q(rbx_1[0xb].d)
                                                int32_t rax_21 = (rsi + 1).d
                                                rbx_1[0xb].d = rax_21
                                                
                                                if (rax_21 s> *(rbx_1 + 0x5c))
                                                    sub_1405a4d70(&rbx_1[0xa])
                                                
                                                rcx_19 = rbx_1[0xa]
                                                rax_17 = var_368
                                                goto label_14141700e
                                            
                                            k = k_2
                                    else
                                        int64_t var_370
                                        var_418.q = &var_370
                                        char rax_13
                                        rax_13, zmm6, zmm7 =
                                            sub_141416410(r14_3, rdi_3, r15_1, 1, var_418)
                                        
                                        if (rax_13 != 0)
                                            int64_t rsi_1 = sx.q(rbx_1[1].d)
                                            int32_t rax_14 = (rsi_1 + 1).d
                                            rbx_1[1].d = rax_14
                                            
                                            if (rax_14 s> *(rbx_1 + 0xc))
                                                sub_1405a4d70(rbx_1)
                                            
                                            *(*rbx_1 + (rsi_1 << 3)) = rdi_3
                                            rsi = sx.q(rbx_1[9].d)
                                            int32_t rax_16 = (rsi + 1).d
                                            rbx_1[9].d = rax_16
                                            
                                            if (rax_16 s> *(rbx_1 + 0x4c))
                                                sub_1405a4d70(&rbx_1[8])
                                            
                                            rcx_19 = rbx_1[8]
                                            rax_17 = var_370
                                            goto label_141417013
                                        
                                        k = k_2
                                
                                k += 1
                                r12_1 = &r12_1[1]
                                k_2 = k
                            while (k s< *(r13_5 + 0x18))
                        
                        int32_t k_1 = 0
                        
                        if (*(r13_5 + 0x68) s> 0)
                            int64_t* r12_2 = nullptr
                            
                            do
                                int64_t var_358
                                var_418.q = &var_358
                                void* rax_28 = *(r12_2 + *(r13_5 + 0x60))
                                char rax_29
                                rax_29, zmm6, zmm7 =
                                    sub_141416410(r14_3, rax_28, var_400_1, 2, var_418)
                                
                                if (rax_29 != 0)
                                    int64_t rsi_2 = sx.q(rbx_1[5].d)
                                    int32_t rax_30 = (rsi_2 + 1).d
                                    rbx_1[5].d = rax_30
                                    
                                    if (rax_30 s> *(rbx_1 + 0x2c))
                                        sub_1405a4d70(&rbx_1[4])
                                    
                                    *(rbx_1[4] + (rsi_2 << 3)) = rax_28
                                    rsi = sx.q(rbx_1[0xd].d)
                                    int32_t rax_32 = (rsi + 1).d
                                    rbx_1[0xd].d = rax_32
                                    
                                    if (rax_32 s> *(rbx_1 + 0x6c))
                                        sub_1405a4d70(&rbx_1[0xc])
                                    
                                    *(rbx_1[0xc] + (rsi << 3)) = var_358
                                    rsi.b = 1
                                
                                k_1 += 1
                                r12_2 = &r12_2[1]
                            while (k_1 s< *(r13_5 + 0x68))
                        
                        int32_t var_314
                        int32_t var_308 = var_308 & not.d(var_314)
                        void var_318
                        sub_14059bdd0(&var_318)
                        j = j_3
                        r15_1 = var_400_1
                        r12 = arg1
                    
                    if (*(r12 + 0x3b0) s> 1 && *(r14_3 + 0xd75) == 0 && *(r14_3 + 0xd72) == 0
                            && *(r14_3 + 0xd74) == 0)
                        int32_t j_1 = 0
                        k_2 = r15_1 + 1
                        rax_8 = *(arg1 + 8)
                        
                        if (*(rax_8 + 0x1018) s<= 0)
                            r12 = arg1
                        else
                            int32_t k_5 = k_2
                            int64_t r13_6 = 0
                            
                            do
                                int32_t* rax_39 = *(*(rax_8 + 0x1010) + r13_6)
                                int64_t var_350
                                char rax_40
                                rax_40, zmm6, zmm7, zmm8, zmm9 =
                                    sub_141416040(r14_3, rax_39, k_5, &var_350)
                                
                                if (rax_40 != 0)
                                    int64_t rsi_3 = sx.q(rbx_1[7].d)
                                    int32_t rax_41 = (rsi_3 + 1).d
                                    rbx_1[7].d = rax_41
                                    
                                    if (rax_41 s> *(rbx_1 + 0x3c))
                                        sub_1405a4d70(&rbx_1[6])
                                    
                                    *(rbx_1[6] + (rsi_3 << 3)) = rax_39
                                    rsi = sx.q(rbx_1[0xf].d)
                                    int32_t rax_43 = (rsi + 1).d
                                    rbx_1[0xf].d = rax_43
                                    
                                    if (rax_43 s> *(rbx_1 + 0x7c))
                                        sub_1405a4d70(&rbx_1[0xe])
                                    
                                    *(rbx_1[0xe] + (rsi << 3)) = var_350
                                    rsi.b = 1
                                
                                j_1 += 1
                                r13_6 += 8
                                rax_8 = *(arg1 + 8)
                            while (j_1 s< *(rax_8 + 0x1018))
                            
                            r15_1 = var_400_1
                            r12 = arg1
                
                if (*(r14_3 + 0x4ffc) u> 0 || *(r14_3 + 0x5024) u> 0)
                    rax_8.b = 1
                else
                    rax_8.b = 0
                
                i_1 = i_6
                rsi.b |= rax_8.b
            
            i_1 += 1
            result = sx.q(*(r12 + 0xa8))
            rcx_3 = &var_3e0[0xa48]
            rbx_1 -= -0x80
            i_6 = i_1
            var_3e0 = rcx_3
        while (i_1 s< result.d)
        
        if (rsi.b != 0)
            int64_t* r13_7 = var_3f0_1
            int32_t r8_6 = 0
            uint64_t rdi_4 = result
            
            if (result.d s> 0)
                void* rcx_30 = &r13_7[0xd]
                void* rdx_25 = *(r12 + 0xa0) + 0x4fe8
                uint64_t i_2
                
                do
                    int32_t rax_46 = *(rdx_25 + 0x28)
                    rdx_25 += 0x5240
                    int32_t rax_49 = rax_46 + *(rcx_30 - 0x20) + *(rcx_30 - 0x10) + *(rcx_30 + 0x10)
                    rcx_30 += 0x80
                    r8_6 += rax_49 + *(rdx_25 - 0x5240) + *(rcx_30 - 0x80)
                    i_2 = rdi_4
                    rdi_4 -= 1
                while (i_2 != 1)
            
            uint64_t r14_4
            
            if (*(r12 + 0x3b0) s<= 1)
                r14_4 = arg2
            else
                void* rax_53
                
                if (var_404_1 == 0)
                    rax_53 = var_3b0[8]
                else
                    rax_53 = var_3b0[0xd]
                
                int64_t rax_54 = *(rax_53 + 8)
                zmm1 = data_142d3f5a0
                int32_t var_98_1 = r8_6
                int32_t var_d0_1 = 0
                int32_t var_cc
                __builtin_memset(&var_cc, 0xff, 0x14)
                double var_b8_1[0x2] = zmm1
                int64_t var_a8_1 = 0
                int64_t var_a0 = 0
                int32_t var_94_1 = 1
                char var_90_1 = 0
                int64_t var_e8_1 = rax_54
                int64_t var_e0_1 = 0
                char var_d8_1 = 0x45
                int32_t var_d4_1 = 0x21
                bool var_8f_1 = *(rax_54 + 0x38) u> 1
                void var_1a8
                memset(&var_1a8, 0, 0xc0)
                r14_4 = arg2
                int64_t rdi_7 = (*(r14_4 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_55 = rdi_7 + 0x22
                
                if (rax_55 u> *(r14_4 + 0x38))
                    sub_140b0e3d0(r14_4 + 0x30, 0x24)
                    rdi_7 = (*(r14_4 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_55 = rdi_7 + 0x22
                
                wchar16 const* const rcx_33 = u"OcclusionQueries"
                *(r14_4 + 0x30) = rax_55
                wchar16 const i_3
                
                do
                    i_3 = *rcx_33
                    *(rdi_7 - u"OcclusionQueries" + rcx_33) = i_3
                    rcx_33 = &rcx_33[1]
                while (i_3 != 0)
                void*** rcx_36 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_56 = &rcx_36[0x27]
                
                if (rax_56 u> *(r14_4 + 0x38))
                    sub_140b0e3d0(r14_4 + 0x30, 0x140)
                    rcx_36 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_56 = &rcx_36[0x27]
                
                *(r14_4 + 0x30) = rax_56
                void**** rax_57 = *(r14_4 + 8)
                *(r14_4 + 0x14) += 1
                *rax_57 = rcx_36
                *(r14_4 + 8) = &rcx_36[1]
                sub_1405d11b0(rcx_36, &var_1a8, rdi_7)
                *(r14_4 + 0x1c4) = 1
                sub_1405d19b0(r14_4, &var_1a8)
                *(r14_4 + 0x178) = var_94_1:3.b
                *(r14_4 + 0x179) = 0
                *(r14_4 + 0x1c4) = 1
                zmm6 = sub_1405d1550(&var_a0)
            
            int64_t var_23c
            __builtin_memset(&var_23c, 0, 0x43)
            int128_t var_298
            __builtin_memset(&var_298, 0, 0x30)
            double var_250_1[0x2] = zx.o(0)
            int16_t var_1f8_1 = 0
            sub_140fdc870(r14_4, &var_298)
            void** rbx_2 = nullptr
            int64_t var_268_1 = data_1439b59c0
            int64_t var_258_1 = data_1439b53d0
            int32_t var_240_1 = 0
            result = sub_1419a3d00()
            int32_t i_7 = 0
            var_298.q = data_1439c9428
            
            if (*(r12 + 0xa8) s> 0)
                uint128_t var_48_1 = zmm6
                void** rsi_4 = r14_4 + 0x30
                uint128_t var_58_1 = zmm7
                result = 0
                uint128_t var_68_1 = zmm8
                uint128_t var_78_1 = zmm9
                uint64_t result_1 = 0
                int32_t i_4
                
                do
                    int32_t rdi_11 = *(r14_4 + 0x8c)
                    void* r15_5 = result * 0x5240 + *(r12 + 0xa0)
                    int64_t* r12_5 = &r13_7[result * 0x10]
                    int32_t rax_62 = *(r15_5 + 0xad8)
                    
                    if (rdi_11 != rax_62)
                        bool cond:8_1 = *(r14_4 + 0x14) u> 0
                        *(r14_4 + 0x8c) = rax_62
                        
                        if (cond:8_1)
                            void* rdx_33 = (*rsi_4 + 7) & 0xfffffffffffffff8
                            void* rax_63 = rdx_33 + 0x18
                            
                            if (rax_63 u> rsi_4[1])
                                sub_140b0e3d0(rsi_4, 0x20)
                                rdx_33 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                rax_63 = rdx_33 + 0x18
                            
                            *rsi_4 = rax_63
                            void** rax_64 = *(r14_4 + 8)
                            *(r14_4 + 0x14) += 1
                            *rax_64 = rdx_33
                            int32_t rax_65 = *(r14_4 + 0x8c)
                            *(r14_4 + 8) = rdx_33 + 8
                            *(rdx_33 + 8) = 0
                            *rdx_33 = &data_142f11588
                            *(rdx_33 + 0x10) = rax_65
                        else
                            *(r14_4 + 0x90) = rax_62
                    
                    int64_t rax_66 = data_1439b54e8
                    
                    if (*(r15_5 + 0xd34) != 0)
                        rax_66 = data_1439b5500
                    
                    int64_t var_260_1 = rax_66
                    void*** rcx_52
                    
                    if (var_404_1 == 0)
                        zmm7 = zx.o(*(r15_5 + 0x15a0))
                        rcx_52 = (*rsi_4 + 7) & 0xfffffffffffffff8
                        zmm8 = zx.o(*(r15_5 + 0x159c))
                        zmm9 = zx.o(*(r15_5 + 0x1598))
                        zmm6 = _mm_cvtepi32_ps(zx.o(*(r15_5 + 0x15a4)))
                        void* rax_85 = &rcx_52[5]
                        zmm7 = _mm_cvtepi32_ps(zmm7)
                        zmm8 = _mm_cvtepi32_ps(zmm8)
                        zmm9 = _mm_cvtepi32_ps(zmm9)
                        
                        if (rax_85 u> rsi_4[1])
                            zmm6 = sub_140b0e3d0(rsi_4, 0x30)
                            rcx_52 = (*rsi_4 + 7) & 0xfffffffffffffff8
                            rax_85 = &rcx_52[5]
                        
                        *rsi_4 = rax_85
                        *(r14_4 + 0x14) += 1
                    else
                        int32_t r10_1 = *(r15_5 + 0x1598)
                        int32_t r8_8 = *(r15_5 + 0x159c)
                        int32_t r11_1 = var_3b0[0x74].d
                        int128_t zmm0
                        zmm0.d = float.s(zx.q(divu.dp.d(0:r10_1, r11_1)))
                        int32_t rbx_3 = int.d(zmm0.d)
                        zmm0.d = float.s(zx.q(divu.dp.d(0:r8_8, r11_1)))
                        int32_t r9_2 = int.d(zmm0.d)
                        zmm0.d = float.s(zx.q(divu.dp.d(0:(*(r15_5 + 0x15a4) - r8_8), r11_1)))
                        zmm6.d = float.s(zx.q(int.d(zmm0.d) + r9_2))
                        zmm0.d = float.s(zx.q(divu.dp.d(0:(*(r15_5 + 0x15a0) - r10_1), r11_1)))
                        rcx_52 = (*rsi_4 + 7) & 0xfffffffffffffff8
                        zmm7.d = float.s(zx.q(int.d(zmm0.d) + rbx_3))
                        zmm8.d = float.s(zx.q(r9_2))
                        zmm9.d = float.s(zx.q(rbx_3))
                        void* rax_84 = &rcx_52[5]
                        
                        if (rax_84 u> rsi_4[1])
                            zmm6 = sub_140b0e3d0(rsi_4, 0x30)
                            rcx_52 = (*rsi_4 + 7) & 0xfffffffffffffff8
                            rax_84 = &rcx_52[5]
                        
                        *rsi_4 = rax_84
                        *(r14_4 + 0x14) += 1
                        rbx_2 = nullptr
                    
                    **(r14_4 + 8) = rcx_52
                    *(r14_4 + 8) = &rcx_52[1]
                    rcx_52[1] = 0
                    *(rcx_52 + 0x24) = 0x3f800000
                    rcx_52[4].d = zmm6.d
                    *(rcx_52 + 0x1c) = zmm7.d
                    rcx_52[3].d = 0
                    *(rcx_52 + 0x14) = zmm8.d
                    rcx_52[2].d = zmm9.d
                    *rcx_52 = &data_142d54998
                    int128_t var_2f8
                    sub_1419a2ec0(*(r15_5 + 0x5150), &var_2f8, &data_143ed2920, 0)
                    int128_t zmm0_1 = var_2f8
                    int64_t rax_88 = 0
                    void* rcx_62 = zmm0_1.q
                    int128_t var_2e8 = zmm0_1
                    void* var_388 = rcx_62
                    
                    if (rcx_62 != 0)
                        int64_t rdx_38 = sx.q(*(rcx_62 + 0x10c))
                        int64_t* rbx_4 = *(var_2f8:8.q + 0x10)
                        int64_t rax_90 = rbx_4[3]
                        
                        if (*(rax_90 + (rdx_38 << 3)) == 0)
                            sub_1419ccf30(rbx_4, rdx_38.d)
                            rax_90 = rbx_4[3]
                        
                        rax_88 = *(rax_90 + (rdx_38 << 3))
                        rbx_2 = nullptr
                    
                    var_298:8.q = rax_88
                    sub_1419870b0(r14_4, &var_298, 2)
                    
                    if (*(arg1 + 0x3b0) s> 1)
                        int32_t j_2 = 0
                        
                        if (r12_5[9].d s> 0)
                            do
                                var_418.q = *(rbx_2 + r12_5[8])
                                sub_14141db50(r14_4, r15_5, *(rbx_2 + *r12_5), &var_2e8, var_418)
                                j_2 += 1
                                rbx_2 = &rbx_2[1]
                            while (j_2 s< r12_5[9].d)
                    
                    uint64_t r8_11 = zx.q(r12_5[0xb].d * 6 + ((r12_5[0xf].d + r12_5[0xd].d) << 3))
                    
                    if (r8_11.d != 0)
                        int128_t zmm1_1 = data_143dbb1e0
                        uint32_t rbx_6 = (r8_11 * 3).d << 2
                        char var_1c0_1 = 0
                        int64_t var_1b8_1 = 0
                        int32_t var_1b0_1 = 0
                        int64_t* rcx_69 = data_143f0f180
                        int32_t rax_96 = (1 << (data_1439c7a34).b) - 1
                        int32_t k_6 = 0
                        k_2 = 0
                        int128_t var_1e8
                        int128_t* var_410_1 = &var_1e8
                        var_1e8 = zx.o(0)
                        int32_t var_1d8_1 = 1
                        int128_t var_1d4_1 = zmm1_1
                        int32_t var_1c4_1 = rax_96
                        (*(*rcx_69 + 0x498))(rcx_69, &var_3e0, &data_143f02b98, zx.q(rbx_6), 4, 
                            var_410_1, k_2, k_6, i_7, var_3f0_1, arg1)
                        int64_t* rcx_70 = data_143f0f180
                        var_410_1.d = 1
                        int64_t rax_99 = (*(*rcx_70 + 0x130))(rcx_70, &data_143f02b98, var_3e0, 0, 
                            rbx_6, var_410_1)
                        void** r13_9 = r12_5[2]
                        uint64_t rax_101 = sx.q(r12_5[3].d) << 3 u>> 3
                        
                        if (r13_9 u> &r13_9[r12_5[3]])
                            rax_101 = 0
                        
                        int32_t k_4
                        
                        if (rax_101 == 0)
                            k_4 = k_6
                        else
                            int64_t rsi_5 = 0
                            
                            do
                                sub_1414225d0(&k_2, rax_99, r15_5, *r13_9)
                                rsi_5 += 1
                                r13_9 = &r13_9[1]
                            while (rsi_5 != rax_101)
                            
                            r14_4 = arg2
                            k_4 = k_2
                            rsi_4 = r14_4 + 0x30
                        
                        void** r13_10 = r12_5[4]
                        uint64_t rcx_75 = sx.q(r12_5[5].d) << 3 u>> 3
                        
                        if (r13_10 u> &r13_10[r12_5[5]])
                            rcx_75 = 0
                        
                        if (rcx_75 != 0)
                            int64_t rsi_6 = 0
                            
                            do
                                sub_141422870(&k_2, rax_99, r15_5, *r13_10)
                                rsi_6 += 1
                                r13_10 = &r13_10[1]
                            while (rsi_6 != rcx_75)
                            
                            r14_4 = arg2
                            k_4 = k_2
                            rsi_4 = r14_4 + 0x30
                        
                        int64_t r11_2 = 0
                        void** r9_7 = r12_5[6]
                        uint64_t r10_3 = sx.q(r12_5[7].d) << 3 u>> 3
                        
                        if (r9_7 u> &r9_7[r12_5[7]])
                            r10_3 = 0
                        
                        if (r10_3 != 0)
                            do
                                int128_t zmm5_1 = *(r15_5 + 0x600)
                                r11_2 += 1
                                int128_t zmm4_1 = *(r15_5 + 0x604)
                                double zmm3[0x2] = *(r15_5 + 0x608)
                                int32_t* rcx_77 = *r9_7
                                uint64_t k_7 = zx.q(k_4)
                                r9_7 = &r9_7[1]
                                k_4 += 8
                                int128_t zmm0_2
                                zmm0_2.d = zmm5_1.d f+ *rcx_77
                                uint64_t rdx_46 = k_7 * 3
                                zmm1_1.d = zmm4_1.d f+ rcx_77[1]
                                float zmm2_1 = zmm3[0].d f+ rcx_77[2]
                                zmm5_1.d = zmm5_1.d f+ rcx_77[3]
                                zmm4_1.d = zmm4_1.d f+ rcx_77[4]
                                zmm3[0].d = zmm3[0].d f+ rcx_77[5]
                                *(rax_99 + (rdx_46 << 2)) = zmm0_2.d
                                *(rax_99 + (rdx_46 << 2) + 4) = zmm1_1.d
                                *(rax_99 + (rdx_46 << 2) + 8) = zmm2_1
                                *(rax_99 + (rdx_46 << 2) + 0xc) = zmm0_2.d
                                *(rax_99 + (rdx_46 << 2) + 0x10) = zmm1_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x14) = zmm3[0].d
                                *(rax_99 + (rdx_46 << 2) + 0x18) = zmm0_2.d
                                *(rax_99 + (rdx_46 << 2) + 0x1c) = zmm4_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x20) = zmm2_1
                                *(rax_99 + (rdx_46 << 2) + 0x24) = zmm0_2.d
                                *(rax_99 + (rdx_46 << 2) + 0x28) = zmm4_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x2c) = zmm3[0].d
                                *(rax_99 + (rdx_46 << 2) + 0x30) = zmm5_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x34) = zmm1_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x38) = zmm2_1
                                *(rax_99 + (rdx_46 << 2) + 0x3c) = zmm5_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x40) = zmm1_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x44) = zmm3[0].d
                                *(rax_99 + (rdx_46 << 2) + 0x48) = zmm5_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x4c) = zmm4_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x50) = zmm2_1
                                *(rax_99 + (rdx_46 << 2) + 0x54) = zmm5_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x58) = zmm4_1.d
                                *(rax_99 + (rdx_46 << 2) + 0x5c) = zmm3[0].d
                            while (r11_2 != r10_3)
                        
                        int64_t* rcx_78 = data_143f0f180
                        (*(*rcx_78 + 0x138))(rcx_78, &data_143f02b98, var_3e0, r9_7)
                        void* r13_11 = var_388
                        sub_141080be0(r13_11, r14_4, *(r14_4 + 0x188), *(r15_5 + 0x10))
                        int128_t zmm0_3 = data_142d3f660
                        var_388 = *(r14_4 + 0x188)
                        int128_t var_2d8 = zmm0_3
                        sub_1405d0e10(r14_4, &var_388, r13_11 + 0x118, &var_2d8, 0)
                        int64_t var_3c0 = *(r14_4 + 0x188)
                        int128_t var_2c8 = zx.o(0)
                        sub_1405d0e10(r14_4, &var_3c0, r13_11 + 0x11e, &var_2c8, 0)
                        void* rcx_82 = data_143f5b298
                        
                        if (rcx_82 != 0)
                            int64_t* rcx_83 = *(rcx_82 + 0xaf8)
                            
                            if (rcx_83 != 0)
                                int32_t var_418_5 = 0
                                int32_t var_398 =
                                    (*(*rcx_83 + 0x30))(rcx_83, zx.q(*(r15_5 + 0xad0)))
                                int64_t var_348 = *(r14_4 + 0x188)
                                sub_1405eb490(r14_4, &var_348, r13_11 + 0x130, &var_398, var_418_5)
                        
                        int64_t* rbx_8 = var_3e0
                        void* rcx_87 = (*rsi_4 + 7) & 0xfffffffffffffff8
                        void* rax_112 = rcx_87 + 0x28
                        
                        if (rax_112 u> rsi_4[1])
                            sub_140b0e3d0(rsi_4, 0x30)
                            rcx_87 = (*rsi_4 + 7) & 0xfffffffffffffff8
                            rax_112 = rcx_87 + 0x28
                        
                        *rsi_4 = rax_112
                        *(r14_4 + 0x14) += 1
                        int64_t var_3d0_1 = 0
                        **(r14_4 + 8) = rcx_87
                        *(r14_4 + 8) = rcx_87 + 8
                        *(rcx_87 + 0x18) = rbx_8
                        int32_t k_3 = 0
                        *(rcx_87 + 0x10) = 0
                        *(rcx_87 + 0x20) = 0
                        *(rcx_87 + 8) = 0
                        *rcx_87 = &data_142d56618
                        int64_t rax_115 = sx.q(r12_5[0xb].d)
                        int64_t* r13_12 = r12_5[0xa]
                        k_2 = 0
                        uint64_t rcx_92 = rax_115 << 3 u>> 3
                        
                        if (r13_12 u> &r13_12[rax_115])
                            rcx_92 = 0
                        
                        if (rcx_92 != 0)
                            int64_t rdx_53
                            
                            do
                                k_6.q = *r13_12
                                void* rcx_95 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                void* rax_118 = rcx_95 + 0x18
                                
                                if (rax_118 u> rsi_4[1])
                                    sub_140b0e3d0(rsi_4, 0x20)
                                    rcx_95 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                    rax_118 = rcx_95 + 0x18
                                
                                *rsi_4 = rax_118
                                void** rax_119 = *(r14_4 + 8)
                                *(r14_4 + 0x14) += 1
                                *rax_119 = rcx_95
                                *(r14_4 + 8) = rcx_95 + 8
                                *(rcx_95 + 8) = 0
                                *(rcx_95 + 0x10) = k_6.q
                                *rcx_95 = &data_142f7e230
                                void* rcx_101 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                void* rax_122 = rcx_101 + 0x20
                                
                                if (rax_122 u> rsi_4[1])
                                    sub_140b0e3d0(rsi_4, 0x28)
                                    rcx_101 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                    rax_122 = rcx_101 + 0x20
                                
                                *rsi_4 = rax_122
                                void** rax_123 = *(r14_4 + 8)
                                *(r14_4 + 0x14) += 1
                                *rax_123 = rcx_101
                                *(r14_4 + 8) = rcx_101 + 8
                                *(rcx_101 + 0x10) = k_3
                                k_3 += 6
                                *(rcx_101 + 8) = 0
                                *rcx_101 = &data_142d54988
                                *(rcx_101 + 0x14) = 2
                                *(rcx_101 + 0x18) = 1
                                void* rcx_106 = *rsi_4 + 7
                                k_2 = k_3
                                void* rcx_107 = rcx_106 & 0xfffffffffffffff8
                                void* rax_125 = rcx_107 + 0x18
                                
                                if (rax_125 u> rsi_4[1])
                                    sub_140b0e3d0(rsi_4, 0x20)
                                    rcx_107 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                    rax_125 = rcx_107 + 0x18
                                
                                r13_12 = &r13_12[1]
                                *rsi_4 = rax_125
                                rdx_53 = var_3d0_1 + 1
                                void** rax_126 = *(r14_4 + 8)
                                *(r14_4 + 0x14) += 1
                                var_3d0_1 = rdx_53
                                *rax_126 = rcx_107
                                *(r14_4 + 8) = rcx_107 + 8
                                *(rcx_107 + 8) = 0
                                *(rcx_107 + 0x10) = k_6.q
                                *rcx_107 = &data_142f284f8
                            while (rdx_53 != rcx_92)
                        
                        int64_t r13_13 = 0
                        int64_t* rbx_9 = r12_5[0xc]
                        uint64_t rcx_112 = sx.q(r12_5[0xd].d) << 3 u>> 3
                        
                        if (rbx_9 u> &rbx_9[r12_5[0xd]])
                            rcx_112 = 0
                        
                        if (rcx_112 != 0)
                            do
                                sub_14141dda0(r14_4, &k_2, *rbx_9)
                                r13_13 += 1
                                rbx_9 = &rbx_9[1]
                            while (r13_13 != rcx_112)
                            
                            rsi_4 = r14_4 + 0x30
                        
                        if (*(arg1 + 0x3b0) s> 1)
                            int64_t* rbx_10 = r12_5[0xe]
                            int64_t r12_6 = 0
                            uint64_t r13_15 = sx.q(r12_5[0xf].d) << 3 u>> 3
                            
                            if (rbx_10 u> &rbx_10[r12_5[0xf]])
                                r13_15 = 0
                            
                            if (r13_15 != 0)
                                do
                                    sub_14141d9b0(r14_4, &k_2, *rbx_10)
                                    r12_6 += 1
                                    rbx_10 = &rbx_10[1]
                                while (r12_6 != r13_15)
                        
                        int64_t* rbx_11 = var_3e0
                        var_3e0 = nullptr
                        
                        if (rbx_11 != 0)
                            rbx_11[1].d -= 1
                            
                            if (rbx_11[1].d == 1)
                                char rax_135
                                
                                if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_135 = sub_1405949a0()
                                
                                if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_135 != 0))
                                    (**rbx_11)(rbx_11, 1)
                                else
                                    bool z_1
                                    
                                    if (0 == *(rbx_11 + 0xc))
                                        *(rbx_11 + 0xc) = 1
                                        z_1 = true
                                    else
                                        *(rbx_11 + 0xc)
                                        z_1 = false
                                    
                                    if (z_1)
                                        int32_t rax_137 = sub_140a20af0()
                                        uint64_t rdx_56 = zx.q(rax_137)
                                        void* const rax_138
                                        
                                        if (rax_137 != 0)
                                            rax_138 = *((rdx_56 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_56.d) & 0x3fff) * 0x18
                                        else
                                            rax_138 = nullptr
                                        
                                        *(rax_138 + 8) = rbx_11
                                        sub_1405a42f0(&data_143f02390, rdx_56.d)
                            
                            int64_t* rbx_12 = var_3e0
                            
                            if (rbx_12 == 0)
                                var_3f0_1 = var_3a8
                            else
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d != 1)
                                    var_3f0_1 = var_3a8
                                else
                                    char rax_144
                                    
                                    if (rbx_12[2].b == 0 && data_143f0f1d0 == 0)
                                        rax_144 = sub_1405949a0()
                                    
                                    if (rbx_12[2].b != 0 || (data_143f0f1d0 == 0 && rax_144 != 0))
                                        (**rbx_12)(rbx_12, 1)
                                        var_3f0_1 = var_3a8
                                    else
                                        bool z_2
                                        
                                        if (0 == *(rbx_12 + 0xc))
                                            *(rbx_12 + 0xc) = 1
                                            z_2 = true
                                        else
                                            *(rbx_12 + 0xc)
                                            z_2 = false
                                        
                                        if (not(z_2))
                                            var_3f0_1 = var_3a8
                                        else
                                            int32_t rax_146 = sub_140a20af0()
                                            uint64_t rdx_57 = zx.q(rax_146)
                                            void* const rax_147
                                            
                                            if (rax_146 != 0)
                                                rax_147 = *((rdx_57 u>> 0xe << 3) + &data_143cf0bf8)
                                                    + (zx.q(rdx_57.d) & 0x3fff) * 0x18
                                            else
                                                rax_147 = nullptr
                                            
                                            *(rax_147 + 8) = rbx_12
                                            sub_1405a42f0(&data_143f02390, rdx_57.d)
                                            var_3f0_1 = var_3a8
                    
                    void* r13_16 = var_2e8.q
                    sub_141080be0(r13_16, r14_4, *(r14_4 + 0x188), *(r15_5 + 0x10))
                    int128_t zmm0_4 = data_142d3f660
                    int64_t var_338 = *(r14_4 + 0x188)
                    int128_t var_2b8 = zmm0_4
                    sub_1405d0e10(r14_4, &var_338, r13_16 + 0x118, &var_2b8, 0)
                    int64_t var_330 = *(r14_4 + 0x188)
                    rbx_2 = nullptr
                    int128_t var_2a8 = zx.o(0)
                    sub_1405d0e10(r14_4, &var_330, r13_16 + 0x11e, &var_2a8, 0)
                    void* rcx_126 = data_143f5b298
                    
                    if (rcx_126 != 0)
                        int64_t* rcx_127 = *(rcx_126 + 0xaf8)
                        
                        if (rcx_127 != 0)
                            var_418 = 0
                            int32_t var_394 = (*(*rcx_127 + 0x30))(rcx_127, zx.q(*(r15_5 + 0xad0)))
                            int64_t var_328 = *(r14_4 + 0x188)
                            sub_1405eb490(r14_4, &var_328, r13_16 + 0x130, &var_394, var_418)
                    
                    sub_14141ebc0(r15_5 + 0x5008, r14_4)
                    sub_14141ebc0(r15_5 + 0x4fe0, r14_4)
                    
                    if (*(r14_4 + 0x8c) != rdi_11)
                        *(r14_4 + 0x8c) = rdi_11
                        
                        if (*(r14_4 + 0x14) u> 0)
                            void* rdx_67 = (*rsi_4 + 7) & 0xfffffffffffffff8
                            void* rax_158 = rdx_67 + 0x18
                            
                            if (rax_158 u> rsi_4[1])
                                sub_140b0e3d0(rsi_4, 0x20)
                                rdx_67 = (*rsi_4 + 7) & 0xfffffffffffffff8
                                rax_158 = rdx_67 + 0x18
                            
                            *rsi_4 = rax_158
                            void** rax_159 = *(r14_4 + 8)
                            *(r14_4 + 0x14) += 1
                            *rax_159 = rdx_67
                            int32_t rax_160 = *(r14_4 + 0x8c)
                            *(r14_4 + 8) = rdx_67 + 8
                            *(rdx_67 + 8) = 0
                            *rdx_67 = &data_142f11588
                            *(rdx_67 + 0x10) = rax_160
                        else
                            *(r14_4 + 0x90) = rdi_11
                    
                    i_4 = i_7 + 1
                    r12 = arg1
                    result = result_1 + 1
                    r13_7 = var_3f0_1
                    i_7 = i_4
                    result_1 = result
                while (i_4 s< *(r12 + 0xa8))
            
            if (*(r12 + 0x3b0) s> 1)
                result = sub_141096650(r14_4)
            
            if (var_404_1 != 0)
                var_418.b = 1
                sub_141394ae0(var_3b0, r14_4, 2, 0x21, var_418.b)
                result = sub_141096650(r14_4)
        
        r14_1 = var_3f0_1
    
    int32_t i_8 = i_10
    
    if (i_8 != 0)
        void* rdi_12 = &r14_1[0xc]
        int32_t i_5
        
        do
            int64_t rcx_137 = *(rdi_12 + 0x10)
            
            if (rcx_137 != 0)
                result = sub_140a74f90(rcx_137)
            
            int64_t rcx_138 = *rdi_12
            
            if (rcx_138 != 0)
                result = sub_140a74f90(rcx_138)
            
            int64_t rcx_139 = *(rdi_12 - 0x10)
            
            if (rcx_139 != 0)
                result = sub_140a74f90(rcx_139)
            
            int64_t rcx_140 = *(rdi_12 - 0x20)
            
            if (rcx_140 != 0)
                result = sub_140a74f90(rcx_140)
            
            int64_t rcx_141 = *(rdi_12 - 0x30)
            
            if (rcx_141 != 0)
                result = sub_140a74f90(rcx_141)
            
            int64_t rcx_142 = *(rdi_12 - 0x40)
            
            if (rcx_142 != 0)
                result = sub_140a74f90(rcx_142)
            
            int64_t rcx_143 = *(rdi_12 - 0x50)
            
            if (rcx_143 != 0)
                result = sub_140a74f90(rcx_143)
            
            int64_t rcx_144 = *(rdi_12 - 0x60)
            
            if (rcx_144 != 0)
                result = sub_140a74f90(rcx_144)
            
            rdi_12 -= -0x80
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)

__security_check_cookie(rax_1 ^ &var_438)
return result
