// 函数: sub_141b91010
// 地址: 0x141b91010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_548
int64_t rax_1 = __security_cookie ^ &var_548
bool cond:0 = arg1[0x41] == 0
int32_t var_514 = arg3
int64_t var_4f8 = arg2
void* rax_2

if (not(cond:0))
    rax_2 = arg1[0x42]

void** result

if (cond:0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
    void* rax_23 = arg1[5]
    char* var_4d0
    int128_t* (* var_4c0)(void* arg1, int128_t* arg2)
    
    if (rax_23 == 0 || *(rax_23 + 0x28) == 0)
        void*** rax_63 = j_sub_140a82f30(0x2e0)
        void*** rdi_8 = rax_63
        
        if (rax_63 == 0)
            rdi_8 = nullptr
        else
            rax_63[1].d = 1
            *(rax_63 + 0xc) = 1
            *rdi_8 = &data_142ed9ec8
            
            if (rdi_8 != -0x10)
                sub_140f20930(&rdi_8[2])
        
        void* var_488 = &rdi_8[2]
        sub_140918950(&var_488, &rdi_8[2])
        int64_t var_528_1 = 0x2d0
        void var_517
        void* var_478_1 = &var_517
        sub_140e23ed0(&rdi_8[2], "SConstraintCanvas")
        void var_1f0
        int64_t* rax_64
        int128_t zmm1_2
        rax_64, zmm1_2 = sub_140e50640(&var_1f0)
        int64_t* var_4a8
        sub_141b89300(&var_488, &var_4a8, rax_64, zmm1_2)
        
        if (rdi_8 != 0)
            rdi_8[1].d -= 1
            
            if (rdi_8[1].d == 1)
                (**rdi_8)(rdi_8)
                int32_t temp2_1 = *(rdi_8 + 0xc)
                *(rdi_8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rdi_8)[1](rdi_8, 1)
        
        int64_t var_50
        
        if (var_50 != 0)
            sub_140a74f90(var_50)
        
        sub_140ddea30(&var_1f0)
        int64_t* rbx_6 = var_4a8
        arg1[0x41] = rbx_6
        int64_t* rcx_68 = arg1[0x42]
        int64_t* var_4a0
        
        if (var_4a0 != rcx_68)
            if (var_4a0 != 0)
                *(var_4a0 + 0xc) += 1
                rcx_68 = arg1[0x42]
            
            if (rcx_68 != 0)
                int32_t temp3_1 = *(rcx_68 + 0xc)
                *(rcx_68 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_68 + 8))(rcx_68, 1)
            
            arg1[0x42] = var_4a0
        
        char var_518 = 0
        char* var_500_1 = &var_518
        void** (* var_508)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
        void var_440
        sub_141befea0(arg1, &var_440, &var_508)
        var_500_1.d = 0
        var_508 = sub_141baa460
        int32_t var_4b8_1 = 0
        var_4c0 = sub_141baaa70
        int64_t var_4c8
        var_4c8.d = 0
        var_4d0 = sub_141bad9f0
        void*** rax_68 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_68 != 0)
            *rax_68 = &data_143084050
            sub_140d3a3a0(&rax_68[1], arg1)
            *(rax_68 + 0x10) = var_508.o
            rax_68[5] = sub_140a387b0()
        
        char var_408_1 = 1
        int64_t var_400 = 0
        int32_t var_3f8_1 = 0
        
        if (rax_68 != 0)
            (*rax_68)[8](rax_68, &var_400)
        
        void*** rax_71 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_71 != 0)
            *rax_71 = &data_143084000
            sub_140d3a3a0(&rax_71[1], arg1)
            *(rax_71 + 0x10) = var_4c0.o
            rax_71[5] = sub_140a387b0()
        
        char var_3b8_1 = 1
        int64_t var_3b0 = 0
        int32_t var_3a8_1 = 0
        int128_t var_3c8 = zx.o(0)
        
        if (rax_71 != 0)
            (*rax_71)[8](rax_71, &var_3b0)
        
        void*** rax_74 = sub_140a84c80(0, 0x30, 0)
        
        if (rax_74 != 0)
            *rax_74 = &data_143084000
            sub_140d3a3a0(&rax_74[1], arg1)
            *(rax_74 + 0x10) = var_4d0.o
            rax_74[5] = sub_140a387b0()
        
        char var_3e0_1 = 1
        int64_t var_3d8 = 0
        int32_t var_3d0_1 = 0
        int128_t var_3f0 = zx.o(0)
        
        if (rax_74 != 0)
            (*rax_74)[8](rax_74, &var_3d8)
        
        void*** rax_77 = sub_141b90c50(rbx_6)
        sub_141b780e0(rax_77, &rax_77[4], &var_3f0, 1)
        sub_141b77f70(rax_77, &rax_77[9], &var_3c8, 1)
        void var_410
        sub_140e99b50(sub_141b91c60(rax_77, &var_410), &var_440)
        sub_140745b20(&var_3d8)
        
        if (rax_74 != 0)
            (*rax_74)[7](rax_74, 0)
            int64_t rax_80 = sub_140a84c80(rax_74, 0, 0)
            
            if (rax_80 != 0)
                sub_140a74f90(rax_80)
        
        sub_140745b20(&var_3b0)
        
        if (rax_71 != 0)
            (*rax_71)[7](rax_71, 0)
            int64_t rax_82 = sub_140a84c80(rax_71, 0, 0)
            
            if (rax_82 != 0)
                sub_140a74f90(rax_82)
        
        sub_140745b20(&var_400)
        
        if (rax_68 != 0)
            (*rax_68)[7](rax_68, 0)
            int64_t rax_84 = sub_140a84c80(rax_68, 0, 0)
            
            if (rax_84 != 0)
                sub_140a74f90(rax_84)
        
        result = (*(*arg1 + 0x150))(arg1)
        void** result_1 = result
        
        if (result != 0)
            result = sub_14243ade0(result)
            
            if (result.b != 0)
                result = sub_142436920(result_1)
                
                if (result != 0)
                    int64_t rdx_27 = var_4f8
                    int128_t zmm0_6 = var_4a8.o
                    
                    if (rdx_27 == 0)
                        int128_t var_368 = zmm0_6
                        
                        if (var_4a0 != 0)
                            var_4a0[1].d += 1
                        
                        (*(*result + 0x288))(result, &var_368, zx.q(var_514 + 0xa))
                    else
                        int128_t var_378 = zmm0_6
                        
                        if (var_4a0 != 0)
                            var_4a0[1].d += 1
                        
                        (*(*result + 0x298))(result, rdx_27, &var_378, zx.q(var_514), var_528_1)
                    
                    sub_1405a46b0(&data_143a30728, arg1)
                    var_500_1.d = 0
                    var_508 = sub_141b8bb1c
                    result = sub_140a84c80(0, 0x30, 0)
                    void** result_2 = result
                    
                    if (result != 0)
                        *result_2 = &data_143084628
                        sub_140d3a3a0(&result_2[1], arg1)
                        *(result_2 + 0x10) = var_508.o
                        result_2[5] = sub_140a387b0()
                        result = &data_143084680
                        *result_2 = &data_143084680
                    
                    if (result_2 != 0)
                        sub_140599630(&data_143a30728, 1)
                        void var_358
                        (*(*result_2 + 0x30))(result_2, &var_358)
                        int64_t rsi_3 = sx.q(data_143a30730)
                        int32_t rax_90 = (rsi_3 + 1).d
                        bool cond:1_1 = rax_90 s<= data_143a30734
                        data_143a30730 = rax_90
                        
                        if (not(cond:1_1))
                            sub_1405a4f90(&data_143a30728)
                        
                        result = (rsi_3 << 4) + data_143a30728
                        *result = result_2
                        result[1].d = 3
        
        int64_t* var_438
        
        if (var_438 != 0)
            var_438[1].d -= 1
            
            if (var_438[1].d == 1)
                result = (**var_438)(var_438)
                int32_t temp10_1 = *(var_438 + 0xc)
                *(var_438 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*var_438 + 8))(var_438, 1)
        
        if (var_4a0 != 0)
            var_4a0[1].d -= 1
            
            if (var_4a0[1].d == 1)
                result = (**var_4a0)(var_4a0)
                int32_t temp11_1 = *(var_4a0 + 0xc)
                *(var_4a0 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    result = (*(*var_4a0 + 8))(var_4a0, 1)
    else
        sub_140b58170(&var_4f8, "PIE", 1)
        int64_t var_490 = *(arg1[2] + 0x18)
        sub_140b63b70(&var_490, &var_4c0)
        void var_268
        int64_t* rax_25 = sub_140aae2f0(&var_268, &var_4c0)
        void var_320
        char* var_2f0
        char** rax_27 = sub_140a96390(&var_2f0, 
            _vfprintf_p_l(&var_320, 
                The widget '{0}' already has a parent widget.  It can't also be added to the vi", 
            &data_14306d0f0))
        int64_t rcx_34 = *rax_25
        int64_t* rax_28 = rax_25[1]
        int32_t var_250_1 = 4
        
        if (rax_28 != 0)
            rax_28[1].d += 1
        
        int32_t rax_29 = rax_25[2].d
        char var_228_1 = 1
        int32_t* var_4e0 = nullptr
        int32_t var_4d8_1 = 1
        sub_1405a4b40(&var_4e0, 1, 0)
        int32_t* rcx_36 = var_4e0
        *rcx_36 = var_250_1
        int64_t var_248
        *(rcx_36 + 8) = var_248
        *(rcx_36 + 8) = var_248
        rcx_36[2] = var_248.d
        *(rcx_36 + 8) = var_248
        rcx_36[0xa].b = 0
        
        if (var_228_1 != 0)
            *(rcx_36 + 0x10) = rcx_34
            *(rcx_36 + 0x18) = rax_28
            
            if (rax_28 != 0)
                rax_28[1].d += 1
            
            rcx_36[8] = rax_29
            rcx_36[0xa].b = 1
        
        var_4d0 = *rax_27
        void* rax_37 = rax_27[1]
        void* var_4c8_1 = rax_37
        
        if (rax_37 != 0)
            *(rax_37 + 8) += 1
        
        void var_338
        int64_t* rax_38 = sub_140aac870(&var_338, &var_4d0, &var_4e0)
        int64_t var_458 = *rax_38
        int64_t* rcx_39 = rax_38[1]
        
        if (rcx_39 != 0)
            rcx_39[1].d += 1
        
        int32_t var_448_1 = rax_38[2].d
        int64_t* var_330
        
        if (var_330 != 0)
            var_330[1].d -= 1
            
            if (var_330[1].d == 1)
                (**var_330)(var_330)
                int32_t rax_42 = *(var_330 + 0xc)
                *(var_330 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*var_330 + 8))(var_330, 1)
        
        sub_140596f50(&var_4e0)
        
        if (var_228_1 != 0)
            char var_228_2 = 0
            
            if (rax_28 != 0)
                rax_28[1].d -= 1
                
                if (rax_28[1].d == 1)
                    (**rax_28)(rax_28)
                    int32_t rax_46 = *(rax_28 + 0xc)
                    *(rax_28 + 0xc) -= 1
                    
                    if (rax_46 == 1)
                        (*(*rax_28 + 8))(rax_28, 1)
        
        int64_t* rdi_3 = rax_27[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_50 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_25[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_54 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_54 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        void var_390
        void var_2a8
        sub_140ad3d20(sub_140accdf0(&var_2a8, &var_4f8), &var_390, &var_458)
        int64_t* var_388
        
        if (var_388 != 0)
            var_388[1].d -= 1
            
            if (var_388[1].d == 1)
                (**var_388)(var_388)
                int32_t temp7_1 = *(var_388 + 0xc)
                *(var_388 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_388 + 8))(var_388, 1)
        
        result = sub_140acd9c0(&var_2a8)
        
        if (rcx_39 != 0)
            result = zx.q(rcx_39[1].d)
            rcx_39[1].d -= 1
            
            if (result.d == 1)
                (**rcx_39)(rcx_39)
                result = zx.q(*(rcx_39 + 0xc))
                *(rcx_39 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rcx_39 + 8))(rcx_39, 1)
        
        int64_t* var_318
        
        if (var_318 != 0)
            result = zx.q(var_318[1].d)
            var_318[1].d -= 1
            
            if (result.d == 1)
                result = (**var_318)(var_318)
                int32_t rbx_3 = *(var_318 + 0xc)
                *(var_318 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    result = (*(*var_318 + 8))(var_318, zx.q(rbx_3))
        
        int128_t* (* rcx_58)(void* arg1, int128_t* arg2) = var_4c0
        
        if (rcx_58 != 0)
            result = sub_140a74f90(rcx_58)
else
    void var_498
    sub_140b58170(&var_498, "PIE", 1)
    var_514.q = *(arg1[2] + 0x18)
    int64_t var_420
    sub_140b63b70(&var_514, &var_420)
    void var_280
    int64_t* rax_4 = sub_140aae2f0(&var_280, &var_420)
    void var_350
    char* var_2e0
    char** rax_6 = sub_140a96390(&var_2e0, 
        _vfprintf_p_l(&var_350, The widget '{0}' was already added to the screen.", 
        &data_14306d0f0))
    int64_t var_210 = *rax_4
    void* rcx_7 = rax_4[1]
    int32_t var_220_1 = 4
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    int32_t rcx_8 = rax_4[2].d
    char var_1f8_1 = 1
    int32_t* var_4f0 = nullptr
    int32_t var_4e8_1 = 1
    sub_1405a4b40(&var_4f0, 1, 0)
    int32_t* rcx_10 = var_4f0
    *rcx_10 = var_220_1
    int64_t var_218
    *(rcx_10 + 8) = var_218
    *(rcx_10 + 8) = var_218
    rcx_10[2] = var_218.d
    *(rcx_10 + 8) = var_218
    rcx_10[0xa].b = 0
    
    if (var_1f8_1 != 0)
        *(rcx_10 + 0x10) = var_210
        *(rcx_10 + 0x18) = rcx_7
        
        if (rcx_7 != 0)
            *(rcx_7 + 8) += 1
        
        rcx_10[8] = rcx_8
        rcx_10[0xa].b = 1
    
    char* var_430 = *rax_6
    void* rax_14 = rax_6[1]
    void* var_428_1 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    void var_308
    int64_t* rax_15 = sub_140aac870(&var_308, &var_430, &var_4f0)
    int64_t var_470 = *rax_15
    void* rcx_13 = rax_15[1]
    void* var_468_1 = rcx_13
    
    if (rcx_13 != 0)
        *(rcx_13 + 8) += 1
    
    int32_t var_460_1 = rax_15[2].d
    int64_t* var_300
    
    if (var_300 != 0)
        var_300[1].d -= 1
        
        if (var_300[1].d == 1)
            (**var_300)(var_300)
            int32_t rbx_1 = *(var_300 + 0xc)
            *(var_300 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*var_300 + 8))(var_300, zx.q(rbx_1))
    
    sub_140596f50(&var_4f0)
    sub_1405d57e0(&var_210)
    sub_1405970a0(rax_6)
    sub_1405970a0(rax_4)
    void var_3a0
    void var_2d0
    sub_140ae44d0(sub_140accdf0(&var_2d0, &var_498), &var_3a0, &var_470)
    int64_t* var_398
    
    if (var_398 != 0)
        var_398[1].d -= 1
        
        if (var_398[1].d == 1)
            (**var_398)(var_398)
            int32_t temp5_1 = *(var_398 + 0xc)
            *(var_398 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_398 + 8))(var_398, 1)
    
    sub_140acd9c0(&var_2d0)
    sub_1405970a0(&var_470)
    result = sub_1405970a0(&var_350)
    int64_t rcx_27 = var_420
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)

__security_check_cookie(rax_1 ^ &var_548)
return result
