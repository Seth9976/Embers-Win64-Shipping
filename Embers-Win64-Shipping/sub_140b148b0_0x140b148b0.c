// 函数: sub_140b148b0
// 地址: 0x140b148b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
int32_t rdx = arg2[1].d
int32_t rbx = 0
int64_t* r9 = arg3
int32_t* var_518
__builtin_memset(&var_518, 0, 0x24)
int32_t* rdi = nullptr
int32_t r14 = 0
void* var_508
int64_t var_500_1

if (rdx s<= 0)
label_140b15582:
    void var_380
    int64_t* var_4b8 = _vfprintf_p_l(&var_380, Could not evaluate expression", ExpressionParser")
    sub_140aca4f0(arg1, &var_4b8)
    int64_t* var_378
    
    if (var_378 != 0)
        var_378[1].d -= 1
        
        if (var_378[1].d == 1)
            (**var_378)(var_378)
            int32_t rbx_29 = *(var_378 + 0xc)
            *(var_378 + 0xc) -= 1
            
            if (rbx_29 == 1)
                (*(*var_378 + 8))(var_378, zx.q(rbx_29))
        
        rdi = var_518
    
    if (rdi != 0)
        sub_140a74f90(rdi)
    
    int32_t i_7 = var_500_1.d
    
    if (i_7 != 0)
        void* rbx_31 = var_508 + 8
        int32_t i
        
        do
            void* rcx_104 = rbx_31 + 8
            
            if ((*(rbx_31 - 8) | *(rbx_31 - 4) | *(rbx_31 + 4) | *rbx_31) == 0)
                rcx_104 = nullptr
            
            if (rcx_104 != 0)
                (**rcx_104)(rcx_104, 0)
            
            rbx_31 += 0x58
            i = i_7
            i_7 -= 1
        while (i != 1)
else
    while (true)
        int64_t r8 = *arg2
        void* rsi_2 = sx.q(r14) * 0x68 + r8
        int64_t rax_3 = sx.q(*(rsi_2 + 0x58))
        void* var_528
        int32_t var_50c
        int64_t zmm1
        
        if (rax_3.d u<= 5)
            switch (rax_3)
                case 0
                    int64_t rsi_3 = sx.q(rbx)
                    rbx = (rsi_3 + 1).d
                    
                    if (rbx s> var_50c)
                        sub_1405a4cf0(&var_518)
                        rdi = var_518
                    
                    rdi[rsi_3] = r14
                case 1, 2
                    if (rbx s< 1)
                        int64_t var_4e0 = 0
                        int32_t var_4d8_1 = 0
                        int64_t var_420
                        void var_3c8
                        int64_t* rax_88 =
                            sub_140aae2f0(&var_3c8, sub_140b1b350(rsi_2 + 0x40, &var_420))
                        int64_t* rsi_12 = rax_88[1]
                        int64_t r15_2 = *rax_88
                        
                        if (rsi_12 != 0)
                            rsi_12[1].d += 1
                            rdi = var_518
                        
                        int64_t rbx_23 = sx.q(var_4d8_1)
                        int32_t r14_2 = rax_88[2].d
                        int32_t rax_89 = (rbx_23 + 1).d
                        var_4d8_1 = rax_89
                        
                        if (rax_89 s> 0)
                            sub_1405c4f50(&var_4e0)
                        
                        int32_t* rcx_74 = rbx_23 * 0x30 + var_4e0
                        int64_t var_138
                        *(rcx_74 + 8) = var_138
                        *rcx_74 = 4
                        rcx_74[0xa].b = 0
                        *(rcx_74 + 0x10) = r15_2
                        *(rcx_74 + 0x18) = rsi_12
                        
                        if (rsi_12 != 0)
                            rsi_12[1].d += 1
                            rdi = var_518
                        
                        rcx_74[8] = r14_2
                        rcx_74[0xa].b = 1
                        
                        if (rsi_12 != 0)
                            rsi_12[1].d -= 1
                            
                            if (rsi_12[1].d == 1)
                                (**rsi_12)(rsi_12)
                                int32_t rax_92 = *(rsi_12 + 0xc)
                                *(rsi_12 + 0xc) -= 1
                                
                                if (rax_92 == 1)
                                    (*(*rsi_12 + 8))(rsi_12, 1)
                            
                            rdi = var_518
                        
                        int64_t* var_3c0
                        
                        if (var_3c0 != 0)
                            var_3c0[1].d -= 1
                            
                            if (var_3c0[1].d == 1)
                                (**var_3c0)(var_3c0)
                                int32_t rax_96 = *(var_3c0 + 0xc)
                                *(var_3c0 + 0xc) -= 1
                                
                                if (rax_96 == 1)
                                    (*(*var_3c0 + 8))(var_3c0, 1)
                            
                            rdi = var_518
                        
                        int64_t rcx_79 = var_420
                        
                        if (rcx_79 != 0)
                            sub_140a74f90(rcx_79)
                        
                        void var_3b0
                        void var_398
                        char* var_358
                        int64_t* var_4c0 = sub_140aac8f0(&var_3b0, 
                            sub_140a96390(&var_358, 
                                _vfprintf_p_l(&var_398, No operand for unary operator {0}", 
                                ExpressionParser")), &var_4e0)
                        sub_140aca4f0(arg1, &var_4c0)
                        int64_t* var_3a8
                        
                        if (var_3a8 != 0)
                            var_3a8[1].d -= 1
                            
                            if (var_3a8[1].d == 1)
                                (**var_3a8)(var_3a8)
                                int32_t rax_103 = *(var_3a8 + 0xc)
                                *(var_3a8 + 0xc) -= 1
                                
                                if (rax_103 == 1)
                                    (*(*var_3a8 + 8))(var_3a8, 1)
                            
                            rdi = var_518
                        
                        int64_t* var_390
                        
                        if (var_390 != 0)
                            var_390[1].d -= 1
                            
                            if (var_390[1].d == 1)
                                (**var_390)(var_390)
                                int32_t rbx_24 = *(var_390 + 0xc)
                                *(var_390 + 0xc) -= 1
                                
                                if (rbx_24 == 1)
                                    (*(*var_390 + 8))(var_390, zx.q(rbx_24))
                            
                            rdi = var_518
                        
                        sub_140596f50(&var_4e0)
                        
                        if (rdi != 0)
                            sub_140a74f90(rdi)
                        
                        int32_t i_5 = var_500_1.d
                        
                        if (i_5 != 0)
                            void* rbx_26 = var_508 + 8
                            int32_t i_1
                            
                            do
                                void* rcx_90 = rbx_26 + 8
                                
                                if ((*(rbx_26 - 8) | *(rbx_26 - 4) | *(rbx_26 + 4) | *rbx_26) == 0)
                                    rcx_90 = nullptr
                                
                                if (rcx_90 != 0)
                                    (**rcx_90)(rcx_90, 0)
                                
                                rbx_26 += 0x58
                                i_1 = i_5
                                i_5 -= 1
                            while (i_1 != 1)
                        
                        break
                    
                    int32_t r9_4 = rbx - 1
                    int32_t rbx_11 = rbx - r9_4
                    int64_t r13_4 = sx.q(rdi[sx.q(r9_4)])
                    
                    if (rbx_11 != 1)
                        memmove(&rdi[sx.q(r9_4)], &rdi[sx.q(r9_4 + 1)], (rbx_11 - 1) << 2)
                    
                    sub_1405dac90(&var_518)
                    int32_t rax_37 = arg2[1].d
                    void* rbx_14
                    
                    if (r13_4.d s>= rax_37)
                        rbx_14 = sx.q(r13_4.d - rax_37) * 0x58 + var_508
                    else
                        rbx_14 = r13_4 * 0x68 + *arg2
                    
                    int64_t rax_39 = *arg3
                    int32_t var_4f8_1
                    void var_110
                    void var_a8
                    int64_t* rax_40
                    int32_t r13_7
                    
                    if (*(rsi_2 + 0x58) != 1)
                        r13_7 = var_4f8_1 | 2
                        var_4f8_1 = r13_7
                        rax_40 = (*(rax_39 + 8))(arg3, &var_110, rsi_2, rbx_14, var_528)
                    else
                        r13_7 = var_4f8_1 | 1
                        var_4f8_1 = r13_7
                        rax_40 = (*rax_39)(arg3, &var_a8, rsi_2, rbx_14, var_528)
                    
                    char var_330_1 = 0
                    int64_t var_348
                    void* var_340
                    int32_t var_338
                    
                    if (rax_40[3].b != 0)
                        var_348 = *rax_40
                        void* rax_42 = rax_40[1]
                        var_340 = rax_42
                        
                        if (rax_42 != 0)
                            *(rax_42 + 8) += 1
                        
                        var_338 = rax_40[2].d
                        var_330_1 = 1
                    
                    char var_2e8_1 = 0
                    int64_t var_328
                    
                    if (rax_40[0xc].b != 0)
                        var_328 = 0
                        int64_t var_320_1 = 0
                        sub_140b0c1e0(&var_328, &rax_40[4])
                        var_2e8_1 = 1
                    
                    if ((r13_7.b & 2) != 0)
                        r13_7 &= 0xfffffffd
                        var_4f8_1 = r13_7
                        sub_140acd850(&var_110)
                    
                    if ((r13_7.b & 1) != 0)
                        var_4f8_1 = r13_7 & 0xfffffffe
                        sub_140acd850(&var_a8)
                    
                    if (var_2e8_1 == 0 || var_330_1 != 0)
                        rax_40.b = 0
                    else
                        rax_40.b = 1
                    
                    if (rax_40.b == 0)
                        *arg1 = var_348
                        arg1[1] = var_340
                        
                        if (var_340 != 0)
                            *(var_340 + 8) += 1
                        
                        arg1[2].d = var_338
                        arg1[3].b = 1
                        arg1[0xc].b = 0
                        sub_140acd850(&var_348)
                        int32_t* rcx_67 = var_518
                        
                        if (rcx_67 != 0)
                            sub_140a74f90(rcx_67)
                        
                        sub_140b0b5e0(&var_508)
                        goto label_140b15634
                    
                    int64_t var_470 = 0
                    int64_t var_468_1 = 0
                    sub_140b0c1e0(&var_470, &var_328)
                    int64_t var_238 = 0
                    int64_t var_230_1 = 0
                    sub_140b0c1e0(&var_238, &var_470)
                    void var_460
                    void* rcx_36 = &var_460
                    int128_t zmm0_3 = *(rbx_14 + 0x40)
                    
                    if ((var_468_1:4.d | var_468_1.d | var_470:4.d | var_470.d) == 0)
                        rcx_36 = nullptr
                    
                    zmm1 = *(rbx_14 + 0x50)
                    
                    if (rcx_36 != 0)
                        (**rcx_36)(rcx_36, 0)
                    
                    int64_t rbx_16 = sx.q(var_500_1.d)
                    int32_t rsi_7 = arg2[1].d + rbx_16.d
                    int32_t rax_48 = (rbx_16 + 1).d
                    var_500_1.d = rax_48
                    
                    if (rax_48 s> var_500_1:4.d)
                        sub_1407755b0(&var_508)
                    
                    int32_t* rbx_18 = rbx_16 * 0x58 + var_508
                    *rbx_18 = 0
                    *(rbx_18 + 8) = 0
                    sub_140b0c1e0(rbx_18, &var_238)
                    int64_t rdi_5 = sx.q(r9_4)
                    *(rbx_18 + 0x40) = zmm0_3
                    *(rbx_18 + 0x50) = zmm1
                    rbx = (rdi_5 + 1).d
                    
                    if (rbx s> var_50c)
                        sub_1405a4cf0(&var_518)
                    
                    void var_228
                    void* rcx_40 = &var_228
                    rdi = var_518
                    rdi[rdi_5] = rsi_7
                    
                    if ((var_230_1:4.d | var_230_1.d | var_238:4.d | var_238.d) == 0)
                        rcx_40 = nullptr
                    
                    if (rcx_40 != 0)
                        (**rcx_40)(rcx_40, 0)
                    
                    sub_140acd850(&var_348)
                case 3
                    if (rbx s< 2)
                        int64_t var_4f0 = 0
                        int32_t var_4e8_1 = 0
                        int64_t var_430
                        void var_410
                        int64_t* rax_59 =
                            sub_140aae2f0(&var_410, sub_140b1b350(rsi_2 + 0x40, &var_430))
                        int64_t* rsi_8 = rax_59[1]
                        int64_t r15_1 = *rax_59
                        
                        if (rsi_8 != 0)
                            rsi_8[1].d += 1
                            rdi = var_518
                        
                        int64_t rbx_19 = sx.q(var_4e8_1)
                        int32_t r14_1 = rax_59[2].d
                        int32_t rax_60 = (rbx_19 + 1).d
                        var_4e8_1 = rax_60
                        
                        if (rax_60 s> 0)
                            sub_1405c4f50(&var_4f0)
                        
                        int32_t* rcx_49 = rbx_19 * 0x30 + var_4f0
                        int64_t var_168
                        *(rcx_49 + 8) = var_168
                        *rcx_49 = 4
                        rcx_49[0xa].b = 0
                        *(rcx_49 + 0x10) = r15_1
                        *(rcx_49 + 0x18) = rsi_8
                        
                        if (rsi_8 != 0)
                            rsi_8[1].d += 1
                            rdi = var_518
                        
                        rcx_49[8] = r14_1
                        rcx_49[0xa].b = 1
                        
                        if (rsi_8 != 0)
                            rsi_8[1].d -= 1
                            
                            if (rsi_8[1].d == 1)
                                (**rsi_8)(rsi_8)
                                int32_t rax_63 = *(rsi_8 + 0xc)
                                *(rsi_8 + 0xc) -= 1
                                
                                if (rax_63 == 1)
                                    (*(*rsi_8 + 8))(rsi_8, 1)
                            
                            rdi = var_518
                        
                        int64_t* var_408
                        
                        if (var_408 != 0)
                            var_408[1].d -= 1
                            
                            if (var_408[1].d == 1)
                                (**var_408)(var_408)
                                int32_t rax_67 = *(var_408 + 0xc)
                                *(var_408 + 0xc) -= 1
                                
                                if (rax_67 == 1)
                                    (*(*var_408 + 8))(var_408, 1)
                            
                            rdi = var_518
                        
                        int64_t rcx_54 = var_430
                        
                        if (rcx_54 != 0)
                            sub_140a74f90(rcx_54)
                        
                        void var_3f8
                        void var_3e0
                        char* var_368
                        int64_t* var_4c8 = sub_140aac8f0(&var_3f8, 
                            sub_140a96390(&var_368, 
                                _vfprintf_p_l(&var_3e0, 
                                    Not enough operands for binary operator {0}", 
                                ExpressionParser")), &var_4f0)
                        sub_140aca4f0(arg1, &var_4c8)
                        int64_t* var_3f0
                        
                        if (var_3f0 != 0)
                            var_3f0[1].d -= 1
                            
                            if (var_3f0[1].d == 1)
                                (**var_3f0)(var_3f0)
                                int32_t rax_74 = *(var_3f0 + 0xc)
                                *(var_3f0 + 0xc) -= 1
                                
                                if (rax_74 == 1)
                                    (*(*var_3f0 + 8))(var_3f0, 1)
                            
                            rdi = var_518
                        
                        int64_t* var_3d8
                        
                        if (var_3d8 != 0)
                            var_3d8[1].d -= 1
                            
                            if (var_3d8[1].d == 1)
                                (**var_3d8)(var_3d8)
                                int32_t rbx_20 = *(var_3d8 + 0xc)
                                *(var_3d8 + 0xc) -= 1
                                
                                if (rbx_20 == 1)
                                    (*(*var_3d8 + 8))(var_3d8, zx.q(rbx_20))
                            
                            rdi = var_518
                        
                        sub_140596f50(&var_4f0)
                        
                        if (rdi != 0)
                            sub_140a74f90(rdi)
                        
                        int32_t i_4 = var_500_1.d
                        
                        if (i_4 != 0)
                            void* rbx_22 = var_508 + 8
                            int32_t i_2
                            
                            do
                                void* rcx_65 = rbx_22 + 8
                                
                                if ((*(rbx_22 - 8) | *(rbx_22 - 4) | *(rbx_22 + 4) | *rbx_22) == 0)
                                    rcx_65 = nullptr
                                
                                if (rcx_65 != 0)
                                    (**rcx_65)(rcx_65, 0)
                                
                                rbx_22 += 0x58
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                        
                        break
                    
                    int32_t r9_1 = rbx - 1
                    int32_t rbx_1 = rbx - r9_1
                    int64_t r13_1 = sx.q(rdi[sx.q(r9_1)])
                    
                    if (rbx_1 != 1)
                        memmove(&rdi[sx.q(r9_1)], &rdi[sx.q(r9_1 + 1)], (rbx_1 - 1) << 2)
                    
                    sub_1405dac90(&var_518)
                    int32_t rax_13 = arg2[1].d
                    void* rdi_2
                    
                    if (r13_1.d s>= rax_13)
                        rdi_2 = sx.q(r13_1.d - rax_13) * 0x58 + var_508
                    else
                        rdi_2 = r13_1 * 0x68 + *arg2
                    
                    int32_t* r9_2 = var_518
                    int64_t rbx_3 = sx.q(r9_2[sx.q(r9_1 - 1)])
                    
                    if (0 != 0)
                        memmove(&r9_2[sx.q(r9_1 - 1)], &r9_2[sx.q(r9_1)], 0 << 2)
                    
                    sub_1405dac90(&var_518)
                    int32_t rax_18 = arg2[1].d
                    void* rbx_5
                    
                    if (rbx_3.d s>= rax_18)
                        rbx_5 = sx.q(rbx_3.d - rax_18) * 0x58 + var_508
                    else
                        rbx_5 = rbx_3 * 0x68 + *arg2
                    
                    var_528 = rdi_2
                    int64_t var_1d8
                    (*(*arg3 + 0x10))(arg3, &var_1d8, rsi_2, rbx_5, var_528)
                    char var_1c0
                    char var_178
                    char rax_21
                    
                    if (var_178 == 0 || var_1c0 != 0)
                        rax_21 = 0
                    else
                        rax_21 = 1
                    
                    if (rax_21 == 0)
                        *arg1 = var_1d8
                        void* var_1d0
                        arg1[1] = var_1d0
                        
                        if (var_1d0 != 0)
                            *(var_1d0 + 8) += 1
                        
                        int32_t var_1c8
                        arg1[2].d = var_1c8
                        arg1[3].b = 1
                        arg1[0xc].b = 0
                        sub_140acd850(&var_1d8)
                        int32_t* rcx_42 = var_518
                        
                        if (rcx_42 != 0)
                            sub_140a74f90(rcx_42)
                        
                        sub_140b0b5e0(&var_508)
                        goto label_140b15634
                    
                    int64_t var_4b0 = 0
                    int64_t var_4a8_1 = 0
                    void var_1b8
                    sub_140b0c1e0(&var_4b0, &var_1b8)
                    int64_t var_298 = 0
                    int64_t var_290_1 = 0
                    sub_140b0c1e0(&var_298, &var_4b0)
                    void var_4a0
                    void* rcx_20 = &var_4a0
                    int128_t zmm0_1 = *(rbx_5 + 0x40)
                    
                    if ((var_4a8_1:4.d | var_4a8_1.d | var_4b0:4.d | var_4b0.d) == 0)
                        rcx_20 = nullptr
                    
                    zmm1 = *(rbx_5 + 0x50)
                    
                    if (rcx_20 != 0)
                        (**rcx_20)(rcx_20, 0)
                    
                    int64_t rbx_8 = sx.q(var_500_1.d)
                    int32_t rsi_5 = arg2[1].d + rbx_8.d
                    int32_t rax_27 = (rbx_8 + 1).d
                    var_500_1.d = rax_27
                    
                    if (rax_27 s> var_500_1:4.d)
                        sub_1407755b0(&var_508)
                    
                    void* rbx_10 = rbx_8 * 0x58 + var_508
                    *rbx_10 = 0
                    *(rbx_10 + 8) = 0
                    sub_140b0c1e0(rbx_10, &var_298)
                    int64_t rdi_4 = sx.q(r9_1 - 1)
                    *(rbx_10 + 0x40) = zmm0_1
                    *(rbx_10 + 0x50) = zmm1
                    rbx = (rdi_4 + 1).d
                    
                    if (rbx s> var_50c)
                        sub_1405a4cf0(&var_518)
                    
                    void var_288
                    void* rcx_24 = &var_288
                    rdi = var_518
                    rdi[rdi_4] = rsi_5
                    
                    if ((var_290_1:4.d | var_290_1.d | var_298:4.d | var_298.d) == 0)
                        rcx_24 = nullptr
                    
                    if (rcx_24 != 0)
                        (**rcx_24)(rcx_24, 0)
                    
                    sub_140acd850(&var_1d8)
                case 4
                    if (rbx s>= 1 && *(rsi_2 + 0x60) != 0)
                        int64_t rax_5 = sx.q(rdi[sx.q(rbx - 1)])
                        void* rcx_5
                        
                        if (rax_5.d s>= rdx)
                            rcx_5 = sx.q(rax_5.d - rdx) * 0x58 + var_508
                        else
                            rcx_5 = rax_5 * 0x68 + r8
                        
                        if ((*(*r9 + 0x18))(r9, rsi_2, rcx_5) != 0)
                            r14 = *(rsi_2 + 0x5c)
        rdx = arg2[1].d
        r14 += 1
        
        if (r14 s>= rdx)
            if (rbx != 1)
                goto label_140b15582
            
            int64_t rax_113 = sx.q(*rdi)
            void* rcx_92
            
            if (rax_113.d s>= rdx)
                rcx_92 = sx.q(rax_113.d - rdx) * 0x58 + var_508
            else
                rcx_92 = rax_113 * 0x68 + *arg2
            
            void* rcx_94 = rcx_92 + 0x10
            
            if ((*(rcx_92 + 0xc) | *(rcx_92 + 8) | *(rcx_92 + 4) | *rcx_92) == 0)
                rcx_94 = nullptr
            
            int64_t var_2d8
            int64_t var_2d0
            
            if (rcx_94 == 0)
                var_2d8 = 0
                var_2d0 = 0
            else
                (*(*rcx_94 + 0x18))(rcx_94, &var_2d8)
            
            arg1[3].b = 0
            arg1[4] = 0
            arg1[5] = 0
            sub_140b0c1e0(&arg1[4], &var_2d8)
            void var_2c8
            void* rcx_96 = &var_2c8
            arg1[0xc].b = 1
            
            if ((var_2d0:4.d | var_2d0.d | var_2d8:4.d | var_2d8.d) == 0)
                rcx_96 = nullptr
            
            if (rcx_96 != 0)
                (**rcx_96)(rcx_96, 0)
            
            sub_140a74f90(rdi)
            int32_t i_6 = var_500_1.d
            
            if (i_6 != 0)
                void* rbx_28 = var_508 + 8
                int32_t i_3
                
                do
                    void* rcx_98 = rbx_28 + 8
                    
                    if ((*(rbx_28 - 8) | *(rbx_28 - 4) | *(rbx_28 + 4) | *rbx_28) == 0)
                        rcx_98 = nullptr
                    
                    if (rcx_98 != 0)
                        (**rcx_98)(rcx_98, 0)
                    
                    rbx_28 += 0x58
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
            
            break
        
        r9 = arg3
void* rcx_105 = var_508

if (rcx_105 != 0)
    sub_140a74f90(rcx_105)

label_140b15634:
__security_check_cookie(rax_1 ^ &var_548)
return arg1
