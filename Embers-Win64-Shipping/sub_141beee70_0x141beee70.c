// 函数: sub_141beee70
// 地址: 0x141beee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
int32_t var_630 = 0
int64_t* var_580
int32_t result = sub_141bab3c0(arg1, &var_580)
int64_t* r14 = var_580

if (r14 != 0)
    if ((*(arg1 + 0xb4) & 8) != 0)
        uint32_t var_350 = zx.d(*(arg1 + 0xc1))
        char var_34c_1 = 1
        char var_348_1 = 1
        int64_t var_340 = 0
        int32_t var_338_1 = 0
        sub_140e23ec0(r14, &var_350)
        sub_140745b20(&var_340)
    
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(arg1[7].d, 0) == 0
    int64_t* var_608
    int64_t var_568
    int16_t* rdx_6
    int32_t r15_2
    
    if ((*(arg1 + 0x3c) != 0 | rcx_2.b) == 0)
    label_141bef075:
        uint8_t var_570
        rdx_6 = &var_570
        r15_2 = 2
        char var_56f_1 = 1
        var_570 = *(arg1 + 0xb4) u>> 2 & 1
        var_568 = 0
        int32_t var_560_1 = 0
    else
        void* rax_4 = sub_140d3c6e0(&arg1[6])
        
        if (rax_4 == 0)
            goto label_141bef075
        
        int64_t rax_5
        rax_5.b = sub_140d1fd20(rax_4, arg1[7]) != 0
        
        if (rax_5.b == 0)
            goto label_141bef075
        
        int64_t rbx_1 = arg1[7]
        void* rax_6 = sub_140d3c6e0(&arg1[6])
        int16_t var_610 = 0x100
        var_608 = nullptr
        int32_t var_600_1 = 0
        void*** rax_7 = sub_140a84c80(0, 0x30, 0)
        void*** var_410_1 = rax_7
        
        if (rax_7 != 0)
            rax_7[2] = rbx_1
            *rax_7 = &data_143084e38
            sub_140d3a3a0(&rax_7[3], rax_6)
            rax_7[5] = sub_140a387b0()
            
            if (rax_6 != 0)
                rax_7[1] = sub_140d1fd30(sub_140d3c6e0(&rax_7[3]), rbx_1)
            
            (*rax_7)[8](rax_7, &var_608)
        else if (var_600_1 != 0)
            int64_t* rcx_10 = var_608
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x38))(rcx_10, 0)
                int64_t* rcx_11 = var_608
                
                if (rcx_11 != 0)
                    var_608 = sub_140a84c80(rcx_11, 0, 0)
        
        if (rax_7 != 0)
            (*rax_7)[7](rax_7, 0)
            int64_t rax_15 = sub_140a84c80(rax_7, 0, 0)
            int64_t var_410_2 = rax_15
            
            if (rax_15 != 0)
                sub_140a74f90(rax_15)
        
        rdx_6 = &var_610
        r15_2 = 1
    
    sub_1406a4f10(r14, rdx_6)
    
    if ((r15_2.b & 2) != 0)
        r15_2 &= 0xfffffffd
        sub_140745b20(&var_568)
    
    if ((r15_2.b & 1) != 0)
        r15_2 &= 0xfffffffe
        sub_140745b20(&var_608)
    
    int32_t r12_1 = 0x40
    int32_t rcx_18
    rcx_18.b = sub_140b5b8a0(arg1[0x11].d, 0) == 0
    int64_t var_5c0
    int64_t var_520
    char rax_33
    char rcx_36
    int64_t* rdx_16
    void*** rbx_3
    int32_t rdi_3
    int32_t r13_1
    
    if ((*(arg1 + 0x8c) != 0 | rcx_18.b) == 0)
    label_141bef339:
        char var_4d8 = *(arg1 + 0xc3)
        char var_4d7_1 = 1
        int64_t var_4d0_1 = 0
        int32_t var_4c8_1 = 0
        void var_637
        char* rax_38 = sub_141b9ecd0(arg1, &var_637, &var_4d8)
        void*** var_5b0
        rbx_3 = var_5b0
        rdx_16 = &var_520
        var_520 = 0
        rdi_3 = 0x10
        int32_t var_518_1 = 0
        rcx_36 = 1
        rax_33 = *rax_38
        int32_t var_5a8
        r13_1 = var_5a8
        char var_528_1 = rax_33
        char var_527_1 = 1
    else
        void* rax_18 = sub_140d3c6e0(&arg1[0x10])
        
        if (rax_18 == 0)
            goto label_141bef339
        
        int64_t rax_19
        rax_19.b = sub_140d1fd20(rax_18, arg1[0x11]) != 0
        
        if (rax_19.b == 0)
            goto label_141bef339
        
        int64_t rbx_2 = arg1[0x11]
        var_630.q = sub_140d3c6e0(&arg1[0x10])
        int16_t var_628_1 = 0x100
        int64_t* var_620 = nullptr
        int32_t var_618_1 = 0
        void*** rax_21 = sub_140a84c80(0, 0x30, 0)
        void*** var_400_1 = rax_21
        int64_t* rcx_26
        
        if (rax_21 != 0)
            void* rdx_8 = var_630.q
            *rax_21 = &data_143084e38
            rax_21[2] = rbx_2
            sub_140d3a3a0(&rax_21[3], rdx_8)
            rax_21[5] = sub_140a387b0()
            
            if (var_630.q != 0)
                rax_21[1] = sub_140d1fd30(sub_140d3c6e0(&rax_21[3]), rbx_2)
            
            (*rax_21)[8](rax_21, &var_620)
            rcx_26 = var_620
        else if (var_618_1 == 0)
            rcx_26 = var_620
        else
            rcx_26 = var_620
            
            if (rcx_26 != 0)
                (*(*rcx_26 + 0x38))(rcx_26, 0)
                rcx_26 = var_620
                
                if (rcx_26 != 0)
                    int64_t* rax_36 = sub_140a84c80(rcx_26, 0, 0)
                    rcx_26 = rax_36
                    var_620 = rax_36
        
        if (rax_21 != 0)
            (*rax_21)[7](rax_21, 0)
            int64_t rax_27 = sub_140a84c80(rax_21, 0, 0)
            int64_t var_400_2 = rax_27
            
            if (rax_27 != 0)
                sub_140a74f90(rax_27)
            
            rcx_26 = var_620
        
        int64_t* var_5f0 = nullptr
        int32_t var_5e8_1 = 0
        
        if (var_618_1 != 0 && rcx_26 != 0)
            (*(*rcx_26 + 0x40))(rcx_26, &var_5f0)
        
        void*** rax_31 = sub_140a84c80(0, 0x40, 0)
        void*** var_5b0_1 = rax_31
        r13_1 = 4
        rbx_3 = rax_31
        int32_t var_5a8_1 = 4
        
        if (rax_31 != 0)
            char var_558 = var_628_1.b
            char var_557_1 = var_628_1:1.b
            int64_t var_550 = 0
            int32_t var_548_1 = 0
            
            if (var_5e8_1 != 0)
                int64_t* rcx_32 = var_5f0
                
                if (rcx_32 != 0)
                    (*(*rcx_32 + 0x40))(rcx_32, &var_550)
            
            sub_141b797f0(rbx_3, arg1, sub_141b9ecd0, &var_558)
        
        sub_140745b20(&var_5f0)
        sub_140745b20(&var_620)
        int16_t var_5c8_1 = 0x119
        rax_33 = 0x19
        var_5c0 = 0
        rcx_36 = 1
        int32_t var_5b8_1 = 0
        
        if (rbx_3 != 0)
            (*rbx_3)[8](rbx_3, &var_5c0)
            rcx_36 = var_5c8_1:1.b
            rax_33 = var_5c8_1.b
        
        rdx_16 = &var_5c0
        rdi_3 = 0xc
    
    char var_540 = rax_33
    int32_t rdi_4 = rdi_3 | r15_2
    char var_53f_1 = rcx_36
    int64_t var_538 = 0
    int32_t var_530_1 = 0
    sub_1407473e0(&var_538, rdx_16)
    (*(*r14 + 0x1d8))(r14, &var_540)
    
    if ((rdi_4.b & 0x10) != 0)
        rdi_4 &= 0xffffffef
        sub_140745b20(&var_520)
    
    if ((rdi_4.b & 8) != 0)
        rdi_4 &= 0xfffffff7
        sub_140745b20(&var_5c0)
    
    if ((rdi_4.b & 4) != 0)
        rdi_4 &= 0xfffffffb
        
        if (r13_1 == 0)
            goto label_141bef402
        
        if (rbx_3 != 0)
            (*rbx_3)[7](rbx_3, 0)
            void*** rax_41 = sub_140a84c80(rbx_3, 0, 0)
            rbx_3 = rax_41
            void*** var_5b0_2 = rax_41
        label_141bef402:
            
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
    
    char rax_42 = *(arg1 + 0xc2)
    
    if (*(r14 + 0x2c) != rax_42)
        *(r14 + 0x2c) = rax_42
        (*(*r14 + 0x228))(r14)
        sub_140e19ef0(r14, 1)
    
    char rax_44 = arg1[0x1a].b
    
    if (*(r14 + 0x2d) != rax_44)
        *(r14 + 0x2d) = rax_44
        sub_140e19ef0(r14, 2)
    
    uint8_t rdx_20 = r14[5].b
    char rcx_49 = arg1[0x18].b & 1
    
    if ((rdx_20 u>> 5 & 1) != rcx_49)
        r14[5].b = (rdx_20 & 0xdf) | rcx_49 << 5
        sub_140e19ef0(r14, 4)
    
    int32_t zmm0_1 = *(arg1 + 0xc4)
    
    if (not(zmm0_1 f== r14[0x38].d))
        r14[0x38].d = zmm0_1
        sub_140e19ef0(r14, 2)
    
    int128_t zmm6_1 = sub_141bf52c0(arg1)
    int32_t zmm1_1 = arg1[0x16].d
    int32_t var_4f8 = *(arg1 + 0xac)
    int32_t var_4f4_1 = zmm1_1
    char var_4f0_1 = 1
    int64_t var_4e8 = 0
    int32_t var_4e0_1 = 0
    sub_141b78250(r14, &r14[0x3f], &var_4f8, 0x11)
    sub_140745b20(&var_4e8)
    int32_t rcx_55
    rcx_55.b = sub_140b5b8a0(arg1[0xf].d, 0) == 0
    void*** rbx_5
    
    if ((*(arg1 + 0x7c) != 0 | rcx_55.b) != 0)
        void* rax_47 = sub_140d3c6e0(&arg1[0xe])
        
        if (rax_47 == 0)
            goto label_141bef671
        
        int64_t rax_48
        rax_48.b = sub_140d1fd20(rax_47, arg1[0xf]) != 0
        
        if (rax_48.b == 0)
            goto label_141bef671
        
        void*** rax_49 = j_sub_140a82f30(0x28)
        void*** rdi_5 = rax_49
        
        if (rax_49 == 0)
            rdi_5 = nullptr
        else
            __builtin_memset(&rax_49[1], 0, 0x20)
            *rdi_5 = &data_143080098
            sub_140d3a3a0(&rdi_5[1], nullptr)
            __builtin_memset(&rdi_5[2], 0, 0x18)
        
        void*** rax_50 = j_sub_140a82f30(0x18)
        
        if (rax_50 == 0)
            rax_50 = nullptr
        else
            rax_50[1].d = 1
            *rax_50 = &data_142fe2318
            *(rax_50 + 0xc) = 1
            rax_50[2] = rdi_5
        
        rdi_5[1] = arg1[0xe]
        rdi_5[2] = arg1[0xf]
        uint128_t zmm0_3 = rdi_5.o
        uint128_t var_4b8 = zmm0_3
        void* rax_53 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (rax_53 != 0)
            *(rax_53 + 8) += 1
        
        result = sub_140e25070(r14, &var_4b8, rdi_5)
        int64_t* rbx_4 = var_4b8:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                result = (**rbx_4)(rbx_4)
                int32_t temp12_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    result = (*(*rbx_4 + 8))(rbx_4, 1)
        
        rbx_5 = rax_50
        goto label_141bef64d
    
label_141bef671:
    int64_t* rcx_64 = arg1[0xd]
    bool cond:5_1
    
    if (rcx_64 == 0)
        char rax_65 = sub_140ab3dc0(&arg1[8])
        
        if (rax_65 != 0)
            result = sub_141b28ce0(&arg1[0xb])
        
        if (rax_65 == 0 || result.b != 0)
            int64_t* var_460
            int64_t var_448
            int64_t* rax_69
            
            if (sub_141b28ce0(&arg1[0xb]) == 0)
                int64_t var_468 = arg1[8]
                int64_t* rax_71 = arg1[9]
                var_460 = rax_71
                
                if (rax_71 != 0)
                    rax_71[1].d += 1
                    r14 = var_580
                
                int32_t var_458_1 = arg1[0xa].d
                var_448 = 0
                int32_t var_440_1 = 0
                rax_69 = &var_468
                char var_450_1 = 1
            else
                var_630.q = arg1[0xc]
                void var_3e0
                rax_69 = sub_141b70480(&var_3e0, sub_140d3c6e0(&arg1[0xb]), &var_630)
                r12_1 = 0x20
            
            int32_t r12_2 = r12_1 | rdi_4
            result = sub_140e250f0(r14, rax_69)
            
            if ((r12_2.b & 0x40) != 0)
                r12_2 &= 0xffffffbf
                result = sub_140745b20(&var_448)
                
                if (var_460 != 0)
                    result = var_460[1].d
                    var_460[1].d -= 1
                    
                    if (result == 1)
                        (**var_460)(var_460)
                        result = *(var_460 + 0xc)
                        *(var_460 + 0xc) -= 1
                        
                        if (result == 1)
                            result = (*(*var_460 + 8))(var_460, 1)
            
            if ((r12_2.b & 0x20) != 0)
                void var_3c0
                result = sub_140745b20(&var_3c0)
                void*** var_3d8
                rbx_5 = var_3d8
                
                if (rbx_5 != 0)
                    result = rbx_5[1].d
                    rbx_5[1].d -= 1
                    
                    if (result == 1)
                        (**rbx_5)(rbx_5)
                        result = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        cond:5_1 = result != 1
                    label_141bef9b6:
                        
                        if (not(cond:5_1))
                            result = (*rbx_5)[1](rbx_5, 1)
    else
        char var_638
        char* var_4a0_1 = &var_638
        int64_t var_488_1 = 0
        void** (* var_4a8)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
        char var_480_1 = 1
        int64_t var_478 = 0
        int32_t var_470_1 = 0
        int128_t var_438_1 = zx.o(0)
        char var_428_1 = 1
        int64_t var_420 = 0
        int32_t var_418_1 = 0
        var_638 = 0
        void var_3f0
        sub_141befea0(rcx_64, &var_3f0, &var_4a8)
        void var_330
        int64_t* rax_57
        int128_t zmm6_2
        rax_57, zmm6_2 = sub_140e50320(&var_330)
        rax_57[0x53].b = 1
        *(rax_57 + 0x288) = zmm6_2
        sub_140692f90(&rax_57[0x54], &var_420)
        rax_57[0x56] = 0
        rax_57[0x57].b = 1
        sub_140692f90(&rax_57[0x58], &var_478)
        void*** rax_58 = sub_140e49080()
        void* var_510 = &rax_58[2]
        sub_140918950(&var_510, &rax_58[2])
        int64_t var_648_1 = 0x4f0
        void var_636
        void* var_500_1 = &var_636
        int128_t zmm1_2
        int512_t zmm6_3
        zmm1_2, zmm6_3 = sub_140e23ed0(&rax_58[2], "SToolTip")
        void* rax_59
        int128_t zmm1_3
        rax_59, zmm1_3 = sub_141b86160(rax_57, &var_3f0, zmm1_2)
        void* var_498
        sub_140e579a0(&var_510, &var_498, rax_59, zmm1_3)
        zmm6_3.o = zmm6_1
        
        if (rax_58 != 0)
            rax_58[1].d -= 1
            
            if (rax_58[1].d == 1)
                (**rax_58)(rax_58)
                int32_t temp4_1 = *(rax_58 + 0xc)
                *(rax_58 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rax_58)[1](rax_58, 1)
        
        sub_140e53770(&var_330)
        sub_140745b20(&var_420)
        sub_140745b20(&var_478)
        void* rax_62 = var_498
        
        if (rax_62 != 0)
            rax_62 += 0x390
        
        void*** var_490
        rbx_5 = var_490
        void* var_5a0 = rax_62
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        result = sub_140e25070(r14, &var_5a0)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                result = (**rbx_5)(rbx_5)
                int32_t temp8_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*rbx_5)[1](rbx_5, 1)
        
    label_141bef64d:
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                result = (**rbx_5)(rbx_5)
                int32_t temp10_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                cond:5_1 = temp10_1 != 1
                goto label_141bef9b6
    
    if (arg1[0x17] != 0)
        void* var_590
        result = (*(*arg1 + 0x2b8))(arg1, &var_590)
        void* rbx_9 = var_590
        
        if (rbx_9 != 0)
            void var_3b0
            int64_t* rax_78 = sub_141b9fb70(arg1[0x17], &var_3b0)
            sub_140e23520(rbx_9, *(arg1[0x17] + 0x29), rax_78, 0)
            void var_390
            sub_140745b20(&var_390)
            int64_t* var_3a8
            
            if (var_3a8 != 0)
                var_3a8[1].d -= 1
                
                if (var_3a8[1].d == 1)
                    (**var_3a8)(var_3a8)
                    int32_t rax_82 = *(var_3a8 + 0xc)
                    *(var_3a8 + 0xc) -= 1
                    
                    if (rax_82 == 1)
                        (*(*var_3a8 + 8))(var_3a8, 1)
            
            void* rbx_11 = var_590
            void var_380
            int64_t* rax_84 = sub_141b9f9b0(arg1[0x17], &var_380)
            sub_140e23520(rbx_11, *(arg1[0x17] + 0x2a), rax_84, 1)
            void var_360
            sub_140745b20(&var_360)
            int64_t* var_378
            
            if (var_378 != 0)
                var_378[1].d -= 1
                
                if (var_378[1].d == 1)
                    (**var_378)(var_378)
                    int32_t r15_3 = *(var_378 + 0xc)
                    *(var_378 + 0xc) -= 1
                    
                    if (r15_3 == 1)
                        (*(*var_378 + 8))(var_378, zx.q(r15_3))
            
            result = sub_140e23a60(var_590, zx.q(*(arg1[0x17] + 0x28)))
        
        int64_t* var_588
        
        if (var_588 != 0)
            var_588[1].d -= 1
            
            if (var_588[1].d == 1)
                result = (**var_588)(var_588)
                int32_t temp9_1 = *(var_588 + 0xc)
                *(var_588 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    result = (*(*var_588 + 8))(var_588, 1)

int64_t* var_578

if (var_578 != 0)
    var_578[1].d -= 1
    
    if (var_578[1].d == 1)
        result = (**var_578)(var_578)
        int32_t temp2_1 = *(var_578 + 0xc)
        *(var_578 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_578 + 8))(var_578, 1)

__security_check_cookie(rax_1 ^ &var_668)
return result
