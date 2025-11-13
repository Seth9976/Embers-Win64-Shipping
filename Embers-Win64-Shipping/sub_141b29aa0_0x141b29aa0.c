// 函数: sub_141b29aa0
// 地址: 0x141b29aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
void* var_48 = __security_cookie ^ &var_828
void* result

if (arg4 != 0)
    int64_t* rdx = arg4[1]
    int64_t rcx = rdx[2]
    void arg_30
    int64_t* rbx_36
    
    if (((rcx u>> 0xc).b & 1) != 0)
        char rax_3 = sub_140be1130(*(arg3 + 0x10), arg4[0xf])
        void* rcx_2 = arg4[0xf]
        
        if (rax_3 == 0)
            int64_t var_758 = *(rcx_2 + 0x18)
            void var_120
            int64_t* rax_5 = sub_140aae2b0(&var_120, &var_758)
            void var_340
            char* var_1d0
            char** rax_7 = sub_140a96390(&var_1d0, 
                _vfprintf_p_l(&var_340, 
                    Failed to trigger event because it does not implement the necessary interface. Function "
            "expects a '{0}'.", 
                MovieSceneEventTemplate"))
            int64_t rcx_8 = *rax_5
            int64_t* rcx_9 = rax_5[1]
            int32_t var_d8_1 = 4
            
            if (rcx_9 != 0)
                rcx_9[1].d += 1
            
            int32_t rax_8 = rax_5[2].d
            void* i_2 = nullptr
            char var_b0_1 = 1
            int32_t* var_808 = nullptr
            int32_t var_800_1 = 1
            sub_1405a4b40(&var_808, 1, 0)
            int32_t* rcx_11 = var_808
            *rcx_11 = var_d8_1
            int64_t var_d0
            *(rcx_11 + 8) = var_d0
            *(rcx_11 + 8) = var_d0
            rcx_11[2] = var_d0.d
            *(rcx_11 + 8) = var_d0
            rcx_11[0xa].b = 0
            
            if (var_b0_1 != 0)
                *(rcx_11 + 0x10) = rcx_8
                *(rcx_11 + 0x18) = rcx_9
                
                if (rcx_9 != 0)
                    rcx_9[1].d += 1
                
                rcx_11[8] = rax_8
                rcx_11[0xa].b = 1
            
            char* var_618 = *rax_7
            void* rax_16 = rax_7[1]
            void* var_610_1 = rax_16
            
            if (rax_16 != 0)
                *(rax_16 + 8) += 1
            
            void var_3a0
            int64_t* rax_17 = sub_140aac870(&var_3a0, &var_618, &var_808)
            int64_t var_798 = *rax_17
            int64_t* rcx_14 = rax_17[1]
            
            if (rcx_14 != 0)
                rcx_14[1].d += 1
            
            int32_t var_788_1 = rax_17[2].d
            int64_t* var_398
            
            if (var_398 != 0)
                var_398[1].d -= 1
                
                if (var_398[1].d == 1)
                    (**var_398)(var_398)
                    int32_t rax_21 = *(var_398 + 0xc)
                    *(var_398 + 0xc) -= 1
                    
                    if (rax_21 == 1)
                        (*(*var_398 + 8))(var_398, 1)
            
            sub_140596f50(&var_808)
            
            if (var_b0_1 != 0)
                char var_b0_2 = 0
                
                if (rcx_9 != 0)
                    rcx_9[1].d -= 1
                    
                    if (rcx_9[1].d == 1)
                        (**rcx_9)(rcx_9)
                        int32_t rax_25 = *(rcx_9 + 0xc)
                        *(rcx_9 + 0xc) -= 1
                        
                        if (rax_25 == 1)
                            (*(*rcx_9 + 8))(rcx_9, 1)
            
            int64_t* rbx_3 = rax_7[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_29 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_29 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* rbx_4 = rax_5[1]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_33 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_33 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            void*** var_5d8
            void**** rax_35 = sub_140a005b0(&var_5d8, &var_798)
            void*** var_730 = *rax_35
            int64_t* rcx_26 = rax_35[1]
            
            if (rcx_26 != 0)
                rcx_26[1].d += 1
            
            void var_358
            int64_t* rax_36 = sub_140a96170(&var_358)
            int64_t rdx_7 = *arg5
            void*** var_5e8
            void**** rax_39 =
                sub_140b9e470(&var_5e8, sub_141a528b0((*(rdx_7 + 8))(arg5, rdx_7), &arg_30), rax_36)
            void*** var_740 = *rax_39
            int64_t* rcx_32 = rax_39[1]
            
            if (rcx_32 != 0)
                rcx_32[1].d += 1
            
            uint128_t zmm0_2 = *(arg4 + 0x10)
            void* i = zmm0_2.q
            char rcx_33 = _mm_bsrli_si128(zmm0_2, 8).b
            
            if (rcx_33 != 0)
            label_141b29e77:
                i_2 = i
            else
                while (i != 0)
                    zmm0_2 = *(i + 0x10)
                    i = zmm0_2.q
                    char rax_40 = _mm_bsrli_si128(zmm0_2, 8).b
                    rcx_33 = rax_40
                    
                    if (rax_40 != 0)
                        goto label_141b29e77
                
                if (rcx_33 != 0)
                    i_2 = i
            
            void*** var_5f8
            void var_370
            void**** rax_43 = sub_140b9e470(&var_5f8, i_2, sub_140a96170(&var_370))
            void*** var_750 = *rax_43
            int64_t* rcx_37 = rax_43[1]
            
            if (rcx_37 != 0)
                rcx_37[1].d += 1
            
            void var_670
            sub_140b58170(&var_670, "PIE", 1)
            void var_388
            int64_t* rax_44 = sub_140a96170(&var_388)
            void var_608
            void var_418
            void var_408
            void var_3f8
            void var_1c0
            sub_140aced10(
                *sub_140aced10(
                    *sub_140aced10(
                        *sub_140ae44d0(sub_140accdf0(&var_1c0, &var_670), &var_608, rax_44), 
                        &var_3f8, &var_750), 
                    &var_408, &var_740), 
                &var_418, &var_730)
            int64_t* var_410
            
            if (var_410 != 0)
                var_410[1].d -= 1
                
                if (var_410[1].d == 1)
                    (**var_410)(var_410)
                    int32_t temp33_1 = *(var_410 + 0xc)
                    *(var_410 + 0xc) -= 1
                    
                    if (temp33_1 == 1)
                        (*(*var_410 + 8))(var_410, 1)
            
            int64_t* var_400
            
            if (var_400 != 0)
                var_400[1].d -= 1
                
                if (var_400[1].d == 1)
                    (**var_400)(var_400)
                    int32_t temp39_1 = *(var_400 + 0xc)
                    *(var_400 + 0xc) -= 1
                    
                    if (temp39_1 == 1)
                        (*(*var_400 + 8))(var_400, 1)
            
            int64_t* var_3f0
            
            if (var_3f0 != 0)
                var_3f0[1].d -= 1
                
                if (var_3f0[1].d == 1)
                    (**var_3f0)(var_3f0)
                    int32_t temp46_1 = *(var_3f0 + 0xc)
                    *(var_3f0 + 0xc) -= 1
                    
                    if (temp46_1 == 1)
                        (*(*var_3f0 + 8))(var_3f0, 1)
            
            int64_t* var_600
            
            if (var_600 != 0)
                var_600[1].d -= 1
                
                if (var_600[1].d == 1)
                    (**var_600)(var_600)
                    int32_t temp54_1 = *(var_600 + 0xc)
                    *(var_600 + 0xc) -= 1
                    
                    if (temp54_1 == 1)
                        (*(*var_600 + 8))(var_600, 1)
            
            sub_140acd9c0(&var_1c0)
            int64_t* var_380
            
            if (var_380 != 0)
                var_380[1].d -= 1
                
                if (var_380[1].d == 1)
                    (**var_380)(var_380)
                    int32_t rax_59 = *(var_380 + 0xc)
                    *(var_380 + 0xc) -= 1
                    
                    if (rax_59 == 1)
                        (*(*var_380 + 8))(var_380, 1)
            
            if (rcx_37 != 0)
                rcx_37[1].d -= 1
                
                if (rcx_37[1].d == 1)
                    (**rcx_37)(rcx_37)
                    int32_t temp69_1 = *(rcx_37 + 0xc)
                    *(rcx_37 + 0xc) -= 1
                    
                    if (temp69_1 == 1)
                        (*(*rcx_37 + 8))(rcx_37, 1)
            
            int64_t* var_5f0
            
            if (var_5f0 != 0)
                var_5f0[1].d -= 1
                
                if (var_5f0[1].d == 1)
                    (**var_5f0)(var_5f0)
                    int32_t temp76_1 = *(var_5f0 + 0xc)
                    *(var_5f0 + 0xc) -= 1
                    
                    if (temp76_1 == 1)
                        (*(*var_5f0 + 8))(var_5f0, 1)
            
            int64_t* var_368
            
            if (var_368 != 0)
                var_368[1].d -= 1
                
                if (var_368[1].d == 1)
                    (**var_368)(var_368)
                    int32_t rax_67 = *(var_368 + 0xc)
                    *(var_368 + 0xc) -= 1
                    
                    if (rax_67 == 1)
                        (*(*var_368 + 8))(var_368, 1)
            
            if (rcx_32 != 0)
                rcx_32[1].d -= 1
                
                if (rcx_32[1].d == 1)
                    (**rcx_32)(rcx_32)
                    int32_t temp85_1 = *(rcx_32 + 0xc)
                    *(rcx_32 + 0xc) -= 1
                    
                    if (temp85_1 == 1)
                        (*(*rcx_32 + 8))(rcx_32, 1)
            
            int64_t* var_5e0
            
            if (var_5e0 != 0)
                var_5e0[1].d -= 1
                
                if (var_5e0[1].d == 1)
                    (**var_5e0)(var_5e0)
                    int32_t temp89_1 = *(var_5e0 + 0xc)
                    *(var_5e0 + 0xc) -= 1
                    
                    if (temp89_1 == 1)
                        (*(*var_5e0 + 8))(var_5e0, 1)
            
            int64_t* var_350
            
            if (var_350 != 0)
                var_350[1].d -= 1
                
                if (var_350[1].d == 1)
                    (**var_350)(var_350)
                    int32_t rax_75 = *(var_350 + 0xc)
                    *(var_350 + 0xc) -= 1
                    
                    if (rax_75 == 1)
                        (*(*var_350 + 8))(var_350, 1)
            
            if (rcx_26 != 0)
                rcx_26[1].d -= 1
                
                if (rcx_26[1].d == 1)
                    (**rcx_26)(rcx_26)
                    int32_t temp97_1 = *(rcx_26 + 0xc)
                    *(rcx_26 + 0xc) -= 1
                    
                    if (temp97_1 == 1)
                        (*(*rcx_26 + 8))(rcx_26, 1)
            
            int64_t* var_5d0
            
            if (var_5d0 != 0)
                var_5d0[1].d -= 1
                
                if (var_5d0[1].d == 1)
                    (**var_5d0)(var_5d0)
                    int32_t temp101_1 = *(var_5d0 + 0xc)
                    *(var_5d0 + 0xc) -= 1
                    
                    if (temp101_1 == 1)
                        (*(*var_5d0 + 8))(var_5d0, 1)
            
            if (rcx_14 != 0)
                rcx_14[1].d -= 1
                
                if (rcx_14[1].d == 1)
                    (**rcx_14)(rcx_14)
                    int32_t rax_83 = *(rcx_14 + 0xc)
                    *(rcx_14 + 0xc) -= 1
                    
                    if (rax_83 == 1)
                        (*(*rcx_14 + 8))(rcx_14, 1)
            
            int64_t* var_338
            rbx_36 = var_338
        label_141b2a662:
            
            if (rbx_36 == 0)
                result.b = 0
            else
                rbx_36[1].d -= 1
                
                if (rbx_36[1].d == 1)
                    (**rbx_36)(rbx_36)
                    int32_t rdi_1 = *(rbx_36 + 0xc)
                    *(rbx_36 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        (*(*rbx_36 + 8))(rbx_36, zx.q(rdi_1))
                
                result.b = 0
        else
            result = sub_140d21950(arg3, rcx_2)
            int64_t rcx_4 = sx.q(*(arg4 + 0x4c))
            *(rcx_4 + arg2 + 8) = result
            result.b = 1
            *(rcx_4 + arg2) = arg3
    else if (((rcx u>> 0x10).b & 1) == 0)
        int64_t var_768 = *rdx
        void var_f0
        int64_t* rax_214 = sub_140aae2b0(&var_f0, &var_768)
        void var_208
        char* var_1e0
        char** rax_216 = sub_140a96390(&var_1e0, 
            _vfprintf_p_l(&var_208, 
                Failed to trigger event: Unsupported property type for bound object: {0}.", 
            MovieSceneEventTemplate"))
        int64_t var_68 = *rax_214
        void* rcx_211 = rax_214[1]
        int32_t var_78 = 4
        void* var_60_1 = rcx_211
        
        if (rcx_211 != 0)
            *(rcx_211 + 8) += 1
        
        int32_t rcx_212 = rax_214[2].d
        void** var_7c0_1 = &var_48
        char* var_628 = *rax_216
        void* rax_218 = rax_216[1]
        int32_t var_58_1 = rcx_212
        char var_50_1 = 1
        int128_t var_4c8 = (&var_78).o
        void* var_620_1 = rax_218
        
        if (rax_218 != 0)
            *(rax_218 + 8) += 1
        
        void var_4b8
        void var_280
        int64_t* rax_220 = sub_140aac870(&var_280, &var_628, sub_1405d4de0(&var_4b8, &var_4c8))
        int64_t var_650 = *rax_220
        void* rcx_216 = rax_220[1]
        void* var_648_1 = rcx_216
        
        if (rcx_216 != 0)
            *(rcx_216 + 8) += 1
        
        int32_t var_640_1 = rax_220[2].d
        sub_1405970a0(&var_280)
        sub_140596f50(&var_4b8)
        sub_1405d57e0(&var_68)
        sub_1405970a0(rax_216)
        sub_1405970a0(rax_214)
        void*** var_428
        void**** rax_222 = sub_140a005b0(&var_428, &var_650)
        void*** var_680 = *rax_222
        int64_t* rcx_224 = rax_222[1]
        
        if (rcx_224 != 0)
            rcx_224[1].d += 1
        
        void*** var_438
        void var_220
        void**** rax_224 = sub_140b9e470(&var_438, arg3, sub_140a96170(&var_220))
        void*** var_690 = *rax_224
        int64_t* rcx_228 = rax_224[1]
        
        if (rcx_228 != 0)
            rcx_228[1].d += 1
        
        uint128_t zmm0_7 = *(arg4 + 0x10)
        void* var_7d8_1 = zmm0_7.q
        char rax_225 = _mm_bsrli_si128(zmm0_7, 8).b
        void* const rsi_2
        
        if (rax_225 != 0)
        label_141b2afc5:
            rsi_2 = var_7d8_1
        else
            while (true)
                rsi_2 = var_7d8_1
                
                if (rsi_2 == 0)
                    if (rax_225 == 0)
                        rsi_2 = nullptr
                    
                    break
                
                zmm0_7 = *(rsi_2 + 0x10)
                var_7d8_1 = zmm0_7.q
                rax_225 = _mm_bsrli_si128(zmm0_7, 8).b
                
                if (rax_225 != 0)
                    goto label_141b2afc5
        
        void*** var_448
        void var_238
        void**** rax_227 = sub_140b9e470(&var_448, rsi_2, sub_140a96170(&var_238))
        void*** var_6a0 = *rax_227
        int64_t* rcx_232 = rax_227[1]
        
        if (rcx_232 != 0)
            rcx_232[1].d += 1
        
        void var_250
        int64_t* rax_228 = sub_140a96170(&var_250)
        int64_t rdx_54 = *arg5
        void*** var_458
        void**** rax_231 =
            sub_140b9e470(&var_458, sub_141a528b0((*(rdx_54 + 8))(arg5, rdx_54), &arg_30), rax_228)
        void*** var_6b0 = *rax_231
        int64_t* rcx_238 = rax_231[1]
        
        if (rcx_238 != 0)
            rcx_238[1].d += 1
        
        void var_760
        sub_140b58170(&var_760, "PIE", 1)
        void var_268
        int64_t* rax_232 = sub_140a96170(&var_268)
        void var_498
        void var_488
        void var_478
        void var_468
        void var_148
        int64_t* rcx_246 = *sub_140aced10(
            *sub_140aced10(
                *sub_140aced10(
                    *sub_140ae44d0(sub_140accdf0(&var_148, &var_760), &var_468, rax_232), &var_478, 
                    &var_6b0), 
                &var_488, &var_6a0), 
            &var_498, &var_690)
        void var_4a8
        sub_140aced10(rcx_246, &var_4a8, &var_680)
        int64_t* var_4a0
        
        if (var_4a0 != 0)
            var_4a0[1].d -= 1
            
            if (var_4a0[1].d == 1)
                (**var_4a0)(var_4a0)
                int32_t temp8_1 = *(var_4a0 + 0xc)
                *(var_4a0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_4a0 + 8))(var_4a0, 1)
        
        int64_t* var_490
        
        if (var_490 != 0)
            var_490[1].d -= 1
            
            if (var_490[1].d == 1)
                (**var_490)(var_490)
                int32_t temp12_1 = *(var_490 + 0xc)
                *(var_490 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_490 + 8))(var_490, 1)
        
        int64_t* var_480
        
        if (var_480 != 0)
            var_480[1].d -= 1
            
            if (var_480[1].d == 1)
                (**var_480)(var_480)
                int32_t temp16_1 = *(var_480 + 0xc)
                *(var_480 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_480 + 8))(var_480, 1)
        
        int64_t* var_470
        
        if (var_470 != 0)
            var_470[1].d -= 1
            
            if (var_470[1].d == 1)
                (**var_470)(var_470)
                int32_t temp20_1 = *(var_470 + 0xc)
                *(var_470 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_470 + 8))(var_470, 1)
        
        int64_t* var_460
        
        if (var_460 != 0)
            var_460[1].d -= 1
            
            if (var_460[1].d == 1)
                (**var_460)(var_460)
                int32_t temp24_1 = *(var_460 + 0xc)
                *(var_460 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*(*var_460 + 8))(var_460, 1)
        
        sub_140acd9c0(&var_148)
        sub_1405970a0(&var_268)
        
        if (rcx_238 != 0)
            rcx_238[1].d -= 1
            
            if (rcx_238[1].d == 1)
                (**rcx_238)(rcx_238)
                int32_t temp29_1 = *(rcx_238 + 0xc)
                *(rcx_238 + 0xc) -= 1
                
                if (temp29_1 == 1)
                    (*(*rcx_238 + 8))(rcx_238, 1)
        
        int64_t* var_450
        
        if (var_450 != 0)
            var_450[1].d -= 1
            
            if (var_450[1].d == 1)
                (**var_450)(var_450)
                int32_t temp35_1 = *(var_450 + 0xc)
                *(var_450 + 0xc) -= 1
                
                if (temp35_1 == 1)
                    (*(*var_450 + 8))(var_450, 1)
        
        sub_1405970a0(&var_250)
        
        if (rcx_232 != 0)
            rcx_232[1].d -= 1
            
            if (rcx_232[1].d == 1)
                (**rcx_232)(rcx_232)
                int32_t temp41_1 = *(rcx_232 + 0xc)
                *(rcx_232 + 0xc) -= 1
                
                if (temp41_1 == 1)
                    (*(*rcx_232 + 8))(rcx_232, 1)
        
        int64_t* var_440
        
        if (var_440 != 0)
            var_440[1].d -= 1
            
            if (var_440[1].d == 1)
                (**var_440)(var_440)
                int32_t temp48_1 = *(var_440 + 0xc)
                *(var_440 + 0xc) -= 1
                
                if (temp48_1 == 1)
                    (*(*var_440 + 8))(var_440, 1)
        
        sub_1405970a0(&var_238)
        
        if (rcx_228 != 0)
            rcx_228[1].d -= 1
            
            if (rcx_228[1].d == 1)
                (**rcx_228)(rcx_228)
                int32_t temp56_1 = *(rcx_228 + 0xc)
                *(rcx_228 + 0xc) -= 1
                
                if (temp56_1 == 1)
                    (*(*rcx_228 + 8))(rcx_228, 1)
        
        int64_t* var_430
        
        if (var_430 != 0)
            var_430[1].d -= 1
            
            if (var_430[1].d == 1)
                (**var_430)(var_430)
                int32_t temp64_1 = *(var_430 + 0xc)
                *(var_430 + 0xc) -= 1
                
                if (temp64_1 == 1)
                    (*(*var_430 + 8))(var_430, 1)
        
        sub_1405970a0(&var_220)
        
        if (rcx_224 != 0)
            rcx_224[1].d -= 1
            
            if (rcx_224[1].d == 1)
                (**rcx_224)(rcx_224)
                int32_t temp71_1 = *(rcx_224 + 0xc)
                *(rcx_224 + 0xc) -= 1
                
                if (temp71_1 == 1)
                    (*(*rcx_224 + 8))(rcx_224, 1)
        
        int64_t* var_420
        
        if (var_420 != 0)
            var_420[1].d -= 1
            
            if (var_420[1].d == 1)
                (**var_420)(var_420)
                int32_t temp77_1 = *(var_420 + 0xc)
                *(var_420 + 0xc) -= 1
                
                if (temp77_1 == 1)
                    (*(*var_420 + 8))(var_420, 1)
        
        sub_1405970a0(&var_650)
        sub_1405970a0(&var_208)
        result.b = 0
    else
        void* rax_85 = sub_14252d950()
        void* r8_7 = *(arg3 + 0x10)
        int64_t rax_86 = sx.q(*(rax_85 + 0x38))
        int32_t r10_1 = *(r8_7 + 0x38)
        
        if (rax_86.d s<= r10_1 && *(*(r8_7 + 0x30) + (rax_86 << 3)) == rax_85 + 0x30)
            void*** var_568
            void var_2e0
            void**** rax_89 = sub_140a005b0(&var_568, 
                _vfprintf_p_l(&var_2e0, 
                    Failed to trigger event: only Interface pins are supported for master tracks within "
            "Level Sequences. Please remove the pin, or change it to an interface that i", 
                MovieSceneEventTemplate"))
            void*** var_700 = *rax_89
            int64_t* rcx_80 = rax_89[1]
            
            if (rcx_80 != 0)
                rcx_80[1].d += 1
            
            void var_2f8
            int64_t* rax_90 = sub_140a96170(&var_2f8)
            int64_t rdx_18 = *arg5
            void*** var_578
            void**** rax_93 = sub_140b9e470(&var_578, 
                sub_141a528b0((*(rdx_18 + 8))(arg5, rdx_18), &arg_30), rax_90)
            void*** var_710 = *rax_93
            int64_t* rcx_86 = rax_93[1]
            
            if (rcx_86 != 0)
                rcx_86[1].d += 1
            
            uint128_t zmm0_3 = *(arg4 + 0x10)
            void* var_7a8_1 = zmm0_3.q
            char rax_94 = _mm_bsrli_si128(zmm0_3, 8).b
            void* const rsi_1
            
            if (rax_94 != 0)
            label_141b2a322:
                rsi_1 = var_7a8_1
            else
                while (true)
                    rsi_1 = var_7a8_1
                    
                    if (rsi_1 == 0)
                        if (rax_94 == 0)
                            rsi_1 = nullptr
                        
                        break
                    
                    zmm0_3 = *(rsi_1 + 0x10)
                    var_7a8_1 = zmm0_3.q
                    rax_94 = _mm_bsrli_si128(zmm0_3, 8).b
                    
                    if (rax_94 != 0)
                        goto label_141b2a322
            
            void*** var_588
            void var_310
            void**** rax_96 = sub_140b9e470(&var_588, rsi_1, sub_140a96170(&var_310))
            void*** var_720 = *rax_96
            int64_t* rcx_90 = rax_96[1]
            
            if (rcx_90 != 0)
                rcx_90[1].d += 1
            
            void var_780
            sub_140b58170(&var_780, "PIE", 1)
            void var_328
            int64_t* rax_97 = sub_140a96170(&var_328)
            void var_5c8
            void var_5b8
            void var_5a8
            void var_598
            void var_198
            sub_140aced10(
                *sub_140aced10(
                    *sub_140aced10(
                        *sub_140ae44d0(sub_140accdf0(&var_198, &var_780), &var_598, rax_97), 
                        &var_5a8, &var_720), 
                    &var_5b8, &var_710), 
                &var_5c8, &var_700)
            int64_t* var_5c0
            
            if (var_5c0 != 0)
                var_5c0[1].d -= 1
                
                if (var_5c0[1].d == 1)
                    (**var_5c0)(var_5c0)
                    int32_t temp3_1 = *(var_5c0 + 0xc)
                    *(var_5c0 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_5c0 + 8))(var_5c0, 1)
            
            int64_t* var_5b0
            
            if (var_5b0 != 0)
                var_5b0[1].d -= 1
                
                if (var_5b0[1].d == 1)
                    (**var_5b0)(var_5b0)
                    int32_t temp6_1 = *(var_5b0 + 0xc)
                    *(var_5b0 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_5b0 + 8))(var_5b0, 1)
            
            int64_t* var_5a0
            
            if (var_5a0 != 0)
                var_5a0[1].d -= 1
                
                if (var_5a0[1].d == 1)
                    (**var_5a0)(var_5a0)
                    int32_t temp10_1 = *(var_5a0 + 0xc)
                    *(var_5a0 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_5a0 + 8))(var_5a0, 1)
            
            int64_t* var_590
            
            if (var_590 != 0)
                var_590[1].d -= 1
                
                if (var_590[1].d == 1)
                    (**var_590)(var_590)
                    int32_t temp14_1 = *(var_590 + 0xc)
                    *(var_590 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*var_590 + 8))(var_590, 1)
            
            sub_140acd9c0(&var_198)
            int64_t* var_320
            
            if (var_320 != 0)
                var_320[1].d -= 1
                
                if (var_320[1].d == 1)
                    (**var_320)(var_320)
                    int32_t rax_112 = *(var_320 + 0xc)
                    *(var_320 + 0xc) -= 1
                    
                    if (rax_112 == 1)
                        (*(*var_320 + 8))(var_320, 1)
            
            if (rcx_90 != 0)
                rcx_90[1].d -= 1
                
                if (rcx_90[1].d == 1)
                    (**rcx_90)(rcx_90)
                    int32_t temp22_1 = *(rcx_90 + 0xc)
                    *(rcx_90 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*rcx_90 + 8))(rcx_90, 1)
            
            int64_t* var_580
            
            if (var_580 != 0)
                var_580[1].d -= 1
                
                if (var_580[1].d == 1)
                    (**var_580)(var_580)
                    int32_t temp26_1 = *(var_580 + 0xc)
                    *(var_580 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*var_580 + 8))(var_580, 1)
            
            int64_t* var_308
            
            if (var_308 != 0)
                var_308[1].d -= 1
                
                if (var_308[1].d == 1)
                    (**var_308)(var_308)
                    int32_t rax_120 = *(var_308 + 0xc)
                    *(var_308 + 0xc) -= 1
                    
                    if (rax_120 == 1)
                        (*(*var_308 + 8))(var_308, 1)
            
            if (rcx_86 != 0)
                rcx_86[1].d -= 1
                
                if (rcx_86[1].d == 1)
                    (**rcx_86)(rcx_86)
                    int32_t temp37_1 = *(rcx_86 + 0xc)
                    *(rcx_86 + 0xc) -= 1
                    
                    if (temp37_1 == 1)
                        (*(*rcx_86 + 8))(rcx_86, 1)
            
            int64_t* var_570
            
            if (var_570 != 0)
                var_570[1].d -= 1
                
                if (var_570[1].d == 1)
                    (**var_570)(var_570)
                    int32_t temp44_1 = *(var_570 + 0xc)
                    *(var_570 + 0xc) -= 1
                    
                    if (temp44_1 == 1)
                        (*(*var_570 + 8))(var_570, 1)
            
            int64_t* var_2f0
            
            if (var_2f0 != 0)
                var_2f0[1].d -= 1
                
                if (var_2f0[1].d == 1)
                    (**var_2f0)(var_2f0)
                    int32_t rax_128 = *(var_2f0 + 0xc)
                    *(var_2f0 + 0xc) -= 1
                    
                    if (rax_128 == 1)
                        (*(*var_2f0 + 8))(var_2f0, 1)
            
            if (rcx_80 != 0)
                rcx_80[1].d -= 1
                
                if (rcx_80[1].d == 1)
                    (**rcx_80)(rcx_80)
                    int32_t temp60_1 = *(rcx_80 + 0xc)
                    *(rcx_80 + 0xc) -= 1
                    
                    if (temp60_1 == 1)
                        (*(*rcx_80 + 8))(rcx_80, 1)
            
            int64_t* var_560
            
            if (var_560 != 0)
                var_560[1].d -= 1
                
                if (var_560[1].d == 1)
                    (**var_560)(var_560)
                    int32_t temp67_1 = *(var_560 + 0xc)
                    *(var_560 + 0xc) -= 1
                    
                    if (temp67_1 == 1)
                        (*(*var_560 + 8))(var_560, 1)
            
            int64_t* var_2d8
            rbx_36 = var_2d8
            goto label_141b2a662
        
        void* rcx_127 = arg4[0xf]
        int64_t rax_137 = sx.q(*(rcx_127 + 0x38))
        
        if (rax_137.d s> r10_1 || *(*(r8_7 + 0x30) + (rax_137 << 3)) != rcx_127 + 0x30)
            int64_t var_778 = *(rcx_127 + 0x18)
            void var_108
            int64_t* rax_141 = sub_140aae2b0(&var_108, &var_778)
            void var_3e8
            char* var_1f0
            char** rax_143 = sub_140a96390(&var_1f0, 
                _vfprintf_p_l(&var_3e8, Failed to trigger event: Cast to {0} failed.", 
                MovieSceneEventTemplate"))
            int64_t rcx_132 = *rax_141
            int64_t* rcx_133 = rax_141[1]
            int32_t var_a8_1 = 4
            
            if (rcx_133 != 0)
                rcx_133[1].d += 1
            
            int32_t rax_144 = rax_141[2].d
            void* i_3 = nullptr
            char var_80_1 = 1
            int32_t* var_7f8 = nullptr
            int32_t var_7f0_1 = 1
            sub_1405a4b40(&var_7f8, 1, 0)
            int32_t* rcx_135 = var_7f8
            *rcx_135 = var_a8_1
            int64_t var_a0
            *(rcx_135 + 8) = var_a0
            *(rcx_135 + 8) = var_a0
            rcx_135[2] = var_a0.d
            *(rcx_135 + 8) = var_a0
            rcx_135[0xa].b = 0
            
            if (var_80_1 != 0)
                *(rcx_135 + 0x10) = rcx_132
                *(rcx_135 + 0x18) = rcx_133
                
                if (rcx_133 != 0)
                    rcx_133[1].d += 1
                
                rcx_135[8] = rax_144
                rcx_135[0xa].b = 1
            
            char* var_638 = *rax_143
            void* rax_152 = rax_143[1]
            void* var_630_1 = rax_152
            
            if (rax_152 != 0)
                *(rax_152 + 8) += 1
            
            void var_2c8
            int64_t* rax_153 = sub_140aac870(&var_2c8, &var_638, &var_7f8)
            int64_t var_668 = *rax_153
            void* rcx_138 = rax_153[1]
            void* var_660_1 = rcx_138
            
            if (rcx_138 != 0)
                *(rcx_138 + 8) += 1
            
            int32_t var_658_1 = rax_153[2].d
            int64_t* var_2c0
            
            if (var_2c0 != 0)
                var_2c0[1].d -= 1
                
                if (var_2c0[1].d == 1)
                    (**var_2c0)(var_2c0)
                    int32_t rax_157 = *(var_2c0 + 0xc)
                    *(var_2c0 + 0xc) -= 1
                    
                    if (rax_157 == 1)
                        (*(*var_2c0 + 8))(var_2c0, 1)
            
            sub_140596f50(&var_7f8)
            
            if (var_80_1 != 0)
                char var_80_2 = 0
                
                if (rcx_133 != 0)
                    rcx_133[1].d -= 1
                    
                    if (rcx_133[1].d == 1)
                        (**rcx_133)(rcx_133)
                        int32_t rax_161 = *(rcx_133 + 0xc)
                        *(rcx_133 + 0xc) -= 1
                        
                        if (rax_161 == 1)
                            (*(*rcx_133 + 8))(rcx_133, 1)
            
            int64_t* rbx_40 = rax_143[1]
            
            if (rbx_40 != 0)
                rbx_40[1].d -= 1
                
                if (rbx_40[1].d == 1)
                    (**rbx_40)(rbx_40)
                    int32_t rax_165 = *(rbx_40 + 0xc)
                    *(rbx_40 + 0xc) -= 1
                    
                    if (rax_165 == 1)
                        (*(*rbx_40 + 8))(rbx_40, 1)
            
            int64_t* rbx_42 = rax_141[1]
            
            if (rbx_42 != 0)
                rbx_42[1].d -= 1
                
                if (rbx_42[1].d == 1)
                    (**rbx_42)(rbx_42)
                    int32_t rdi_2 = *(rbx_42 + 0xc)
                    *(rbx_42 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        (*(*rbx_42 + 8))(rbx_42, zx.q(rdi_2))
            
            void*** var_4d8
            void**** rax_170 = sub_140a005b0(&var_4d8, &var_668)
            void*** var_6c0 = *rax_170
            int64_t* rcx_150 = rax_170[1]
            
            if (rcx_150 != 0)
                rcx_150[1].d += 1
            
            void*** var_4e8
            void var_3b8
            void**** rax_172 = sub_140b9e470(&var_4e8, arg3, sub_140a96170(&var_3b8))
            void*** var_6d0 = *rax_172
            int64_t* rcx_154 = rax_172[1]
            
            if (rcx_154 != 0)
                rcx_154[1].d += 1
            
            uint128_t zmm0_5 = *(arg4 + 0x10)
            void* i_1 = zmm0_5.q
            char rcx_155 = _mm_bsrli_si128(zmm0_5, 8).b
            
            if (rcx_155 != 0)
            label_141b2aa07:
                i_3 = i_1
            else
                while (i_1 != 0)
                    zmm0_5 = *(i_1 + 0x10)
                    i_1 = zmm0_5.q
                    char rax_173 = _mm_bsrli_si128(zmm0_5, 8).b
                    rcx_155 = rax_173
                    
                    if (rax_173 != 0)
                        goto label_141b2aa07
                
                if (rcx_155 != 0)
                    i_3 = i_1
            
            void*** var_4f8
            void var_3d0
            void**** rax_176 = sub_140b9e470(&var_4f8, i_3, sub_140a96170(&var_3d0))
            void*** var_6e0 = *rax_176
            int64_t* rcx_159 = rax_176[1]
            
            if (rcx_159 != 0)
                rcx_159[1].d += 1
            
            void var_298
            int64_t* rax_177 = sub_140a96170(&var_298)
            int64_t rdx_38 = *arg5
            void*** var_508
            void**** rax_180 = sub_140b9e470(&var_508, 
                sub_141a528b0((*(rdx_38 + 8))(arg5, rdx_38), &arg_30), rax_177)
            void*** var_6f0 = *rax_180
            int64_t* rcx_165 = rax_180[1]
            
            if (rcx_165 != 0)
                rcx_165[1].d += 1
            
            void var_770
            sub_140b58170(&var_770, "PIE", 1)
            void var_2b0
            int64_t* rax_181 = sub_140a96170(&var_2b0)
            void var_548
            void var_538
            void var_528
            void var_518
            void var_170
            int64_t* rcx_173 = *sub_140aced10(
                *sub_140aced10(
                    *sub_140aced10(
                        *sub_140ae44d0(sub_140accdf0(&var_170, &var_770), &var_518, rax_181), 
                        &var_528, &var_6f0), 
                    &var_538, &var_6e0), 
                &var_548, &var_6d0)
            void var_558
            sub_140aced10(rcx_173, &var_558, &var_6c0)
            int64_t* var_550
            
            if (var_550 != 0)
                var_550[1].d -= 1
                
                if (var_550[1].d == 1)
                    (**var_550)(var_550)
                    int32_t temp50_1 = *(var_550 + 0xc)
                    *(var_550 + 0xc) -= 1
                    
                    if (temp50_1 == 1)
                        (*(*var_550 + 8))(var_550, 1)
            
            int64_t* var_540
            
            if (var_540 != 0)
                var_540[1].d -= 1
                
                if (var_540[1].d == 1)
                    (**var_540)(var_540)
                    int32_t temp58_1 = *(var_540 + 0xc)
                    *(var_540 + 0xc) -= 1
                    
                    if (temp58_1 == 1)
                        (*(*var_540 + 8))(var_540, 1)
            
            int64_t* var_530
            
            if (var_530 != 0)
                var_530[1].d -= 1
                
                if (var_530[1].d == 1)
                    (**var_530)(var_530)
                    int32_t temp66_1 = *(var_530 + 0xc)
                    *(var_530 + 0xc) -= 1
                    
                    if (temp66_1 == 1)
                        (*(*var_530 + 8))(var_530, 1)
            
            int64_t* var_520
            
            if (var_520 != 0)
                var_520[1].d -= 1
                
                if (var_520[1].d == 1)
                    (**var_520)(var_520)
                    int32_t temp73_1 = *(var_520 + 0xc)
                    *(var_520 + 0xc) -= 1
                    
                    if (temp73_1 == 1)
                        (*(*var_520 + 8))(var_520, 1)
            
            int64_t* var_510
            
            if (var_510 != 0)
                var_510[1].d -= 1
                
                if (var_510[1].d == 1)
                    (**var_510)(var_510)
                    int32_t temp79_1 = *(var_510 + 0xc)
                    *(var_510 + 0xc) -= 1
                    
                    if (temp79_1 == 1)
                        (*(*var_510 + 8))(var_510, 1)
            
            sub_140acd9c0(&var_170)
            sub_1405970a0(&var_2b0)
            
            if (rcx_165 != 0)
                rcx_165[1].d -= 1
                
                if (rcx_165[1].d == 1)
                    (**rcx_165)(rcx_165)
                    int32_t temp83_1 = *(rcx_165 + 0xc)
                    *(rcx_165 + 0xc) -= 1
                    
                    if (temp83_1 == 1)
                        (*(*rcx_165 + 8))(rcx_165, 1)
            
            int64_t* var_500
            
            if (var_500 != 0)
                var_500[1].d -= 1
                
                if (var_500[1].d == 1)
                    (**var_500)(var_500)
                    int32_t temp87_1 = *(var_500 + 0xc)
                    *(var_500 + 0xc) -= 1
                    
                    if (temp87_1 == 1)
                        (*(*var_500 + 8))(var_500, 1)
            
            sub_1405970a0(&var_298)
            
            if (rcx_159 != 0)
                rcx_159[1].d -= 1
                
                if (rcx_159[1].d == 1)
                    (**rcx_159)(rcx_159)
                    int32_t temp91_1 = *(rcx_159 + 0xc)
                    *(rcx_159 + 0xc) -= 1
                    
                    if (temp91_1 == 1)
                        (*(*rcx_159 + 8))(rcx_159, 1)
            
            int64_t* var_4f0
            
            if (var_4f0 != 0)
                var_4f0[1].d -= 1
                
                if (var_4f0[1].d == 1)
                    (**var_4f0)(var_4f0)
                    int32_t temp95_1 = *(var_4f0 + 0xc)
                    *(var_4f0 + 0xc) -= 1
                    
                    if (temp95_1 == 1)
                        (*(*var_4f0 + 8))(var_4f0, 1)
            
            sub_1405970a0(&var_3d0)
            
            if (rcx_154 != 0)
                rcx_154[1].d -= 1
                
                if (rcx_154[1].d == 1)
                    (**rcx_154)(rcx_154)
                    int32_t temp99_1 = *(rcx_154 + 0xc)
                    *(rcx_154 + 0xc) -= 1
                    
                    if (temp99_1 == 1)
                        (*(*rcx_154 + 8))(rcx_154, 1)
            
            int64_t* var_4e0
            
            if (var_4e0 != 0)
                var_4e0[1].d -= 1
                
                if (var_4e0[1].d == 1)
                    (**var_4e0)(var_4e0)
                    int32_t temp103_1 = *(var_4e0 + 0xc)
                    *(var_4e0 + 0xc) -= 1
                    
                    if (temp103_1 == 1)
                        (*(*var_4e0 + 8))(var_4e0, 1)
            
            sub_1405970a0(&var_3b8)
            
            if (rcx_150 != 0)
                rcx_150[1].d -= 1
                
                if (rcx_150[1].d == 1)
                    (**rcx_150)(rcx_150)
                    int32_t temp106_1 = *(rcx_150 + 0xc)
                    *(rcx_150 + 0xc) -= 1
                    
                    if (temp106_1 == 1)
                        (*(*rcx_150 + 8))(rcx_150, 1)
            
            int64_t* var_4d0
            
            if (var_4d0 != 0)
                var_4d0[1].d -= 1
                
                if (var_4d0[1].d == 1)
                    (**var_4d0)(var_4d0)
                    int32_t temp107_1 = *(var_4d0 + 0xc)
                    *(var_4d0 + 0xc) -= 1
                    
                    if (temp107_1 == 1)
                        (*(*var_4d0 + 8))(var_4d0, 1)
            
            sub_1405970a0(&var_668)
            sub_1405970a0(&var_3e8)
            result.b = 0
        else
            (*(*arg4 + 0x148))(arg4, sx.q(*(arg4 + 0x4c)) + arg2, arg3)
            result.b = 1
else
    result.b = 1

__security_check_cookie(var_48 ^ &var_828)
return result
