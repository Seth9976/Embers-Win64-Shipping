// 函数: sub_142b5ff60
// 地址: 0x142b5ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4e8 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
int64_t rdi = sx.q(arg2)
void* rdx = arg1
int64_t* rbx = arg7
int64_t* var_4f8 = rbx
uint64_t result = arg8
uint64_t result_1 = result

if (*arg9 s<= 0)
    void* r10_1 = rdx + 0x238
    void* var_4f0_1 = r10_1
    void* rax_5 = (rdi << 4) + *(rdx + 0x280)
    int32_t rcx_2 = zx.d(*(rax_5 + 8)) + *(rax_5 + 4)
    uint64_t rdi_1 = zx.q(rdi.d + 1)
    zmm6 = zx.o(0)
    
    while (true)
        int64_t rax_7 = sx.q(rdi_1.d) << 4
        int64_t rdx_1 = *(rdx + 0x280)
        int32_t result_2 = *(rax_7 + rdx_1)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_4d8
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
            sub_142a4ad20(r10_1, &var_4d8, rcx_2, *(rax_7 + rdx_1 + 4) - rcx_2)
        int16_t rcx_4 = rax_8[1].w
        void* rdx_3
        
        if ((rcx_4.b & 0x11) == 0)
            rdx_3 = rax_8 + 0xa
            
            if ((rcx_4.b & 2) == 0)
                rdx_3 = rax_8[3]
        else
            rdx_3 = nullptr
        
        int64_t* rcx_5 = *rbx
        (*(*rcx_5 + 0x20))(rcx_5, rdx_3)
        int16_t rcx_6 = rax_8[1].w
        int32_t rax_12
        
        if (rcx_6 s< 0)
            rax_12 = *(rax_8 + 0xc)
        else
            rax_12 = sx.d(rcx_6) s>> 5
        
        rbx[1].d += rax_12
        sub_142a47ff0(&var_4d8)
        result = zx.q(result_2)
        
        if (result.d == 1)
            break
        
        rcx_2 = zx.d(*(rax_7 + rdx_1 + 8)) + *(rax_7 + rdx_1 + 4)
        int32_t var_558 = rcx_2
        
        if (result.d == 4)
            result = arg3
            
            if (*(result + 0xd8) == 0)
                result = sub_142b607c0(rbx, sub_142b60e50(arg1, arg9), arg3 + 0x10, arg9)
                rcx_2 = var_558
            else if ((*(result + 0xa0) & 0xffe0) == 0)
                result = sub_142b607c0(rbx, *(result + 0x90), result + 0x10, arg9)
                rcx_2 = var_558
            else if (*arg9 s<= 0)
                result = sub_142b5ed00(rbx, result + 0x98)
                rcx_2 = var_558
        else if (result.d == 5)
            int64_t r10_2 = *(arg1 + 0x280)
            int32_t rax_14 = *(rax_7 + r10_2 + 0xc)
            
            if (rax_14 s< rdi_1.d)
                rax_14 = rdi_1.d
            
            int64_t var_510_1
            var_510_1.d = rax_14
            int32_t rcx_13
            
            if (*(rax_7 + rdx_1) - 5 u<= 1)
                rcx_13 = sx.d(*(rax_7 + rdx_1 + 0xa))
            else
                rcx_13 = 0
            
            var_558 = rdi_1.d + 1
            void* rdi_5 = (sx.q(rdi_1.d + 1) << 4) + r10_2
            char var_528_1 = 0
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_498
            sub_142b61450(arg1 + 0x228, &var_498, rdi_5)
            int64_t rax_19
            void* rdi_7
            
            if (arg5 != 0)
                rdi_7 = sub_142b60c30(arg1, arg4, arg5, arg6, &var_498)
                rax_19 = zx.q(var_528_1)
                
                if (rdi_7 == 0)
                    rax_19 = 1
            else
                rax_19 = sx.q(*(rdi_5 + 0xa))
                
                if (rax_19.d s< 0 || rax_19.d s>= arg6)
                    rdi_7 = nullptr
                    rax_19.b = 1
                else
                    rdi_7 = rax_19 * 0x70 + arg4
                    rax_19 = zx.q(var_528_1.d)
            
            int32_t rcx_17 = var_558 + 1
            var_558 = rcx_17
            
            if (rax_19.b != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_22 =
                    sub_142a47fc0(&var_4d8, 0x7b)
                int16_t var_490
                int32_t r9_7
                int32_t var_48c
                
                if (var_490 s< 0)
                    r9_7 = var_48c
                else
                    r9_7 = sx.d(var_490) s>> 5
                void* rax_23 = sub_142a48d00(rax_22, &var_498, 0, r9_7)
                var_558.w = 0x7d
                sub_142b5ed00(rbx, sub_142a48d70(rax_23, &var_558, 0, 1))
                sub_142a47ff0(&var_4d8)
            else if (rdi_7 == 0)
                int64_t* rcx_24 = *rbx
                (*(*rcx_24 + 0x20))(rcx_24, u"null", zx.q((rdi_7 + 4).d))
                rbx[1].d += 4
            else if (arg3 == 0 || *(arg3 + 0x88) != rcx_17 - 2)
                int64_t* inptr = sub_142b60d70(arg1, rcx_17 - 2)
                
                if (inptr == 0)
                    int32_t rcx_38 = rcx_13
                    
                    if (rcx_38 == 0)
                    label_142b60652:
                        int64_t* rax_47
                        
                        if (sub_142aa7fe0(rdi_7) == 0)
                            int32_t* rdx_32 = arg9
                            
                            if (sub_1405f78c0(rdi_7) == 0)
                                rax_47 = sub_142b60de0(arg1, rdx_32)
                                goto label_142b60683
                            
                            sub_142b5ed00(rbx, sub_142aa7fb0(rdi_7, rdx_32))
                        else
                            rax_47 = sub_142b60e50(arg1, arg9)
                        label_142b60683:
                            sub_142b607c0(rbx, rax_47, rdi_7, arg9)
                    else
                        int64_t* r8_11 = *(arg1 + 0x2e0)
                        
                        if (r8_11 != 0)
                            if (sub_142a86d40(r8_11, rcx_17 - 2) != 0)
                                goto label_142b60652
                            
                            rcx_38 = rcx_13
                        
                        if (rcx_38 == 2)
                            if (sub_142aa7fe0(rdi_7) == 0)
                            label_142b60702:
                                *arg9 = 1
                                result = sub_142a47ff0(&var_498)
                                break
                            
                            int128_t zmm0_2 = sub_142aa7d40(rdi_7, arg9)
                            zmm6 = sub_142b60890(arg1, 
                                sub_142b8b070(arg1 + 0x228, var_558, zmm0_2), 0, arg4, arg5, arg6, 
                                rbx, arg9)
                        else if (((rcx_38 - 3) & 0xfffffffd) == 0)
                            if (sub_142aa7fe0(rdi_7) == 0)
                                goto label_142b60702
                            
                            void* const rbx_1 = 0x310
                            
                            if (rcx_13 == 3)
                                rbx_1 = 0x2f0
                            
                            uint64_t zmm0_3 = sub_142b75310(arg1 + 0x228, var_558)
                            int32_t var_580
                            var_580.q = arg9
                            void var_458
                            sub_142b5e2b0(&var_458, var_558, &var_498, rdi_7, zmm0_3, var_580)
                            int64_t zmm0_4 = sub_142aa7d40(rdi_7, arg9)
                            var_580.q = arg9
                            rbx = var_4f8
                            zmm6 = sub_142b60890(arg1, 
                                sub_142b2db70(arg1 + 0x228, var_558, rbx_1 + arg1, &var_458, 
                                    zmm0_4, var_580), 
                                &var_458, arg4, arg5, arg6, rbx, arg9)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_3c0
                            sub_142a47ff0(&var_3c0)
                            struct icu_64::UObject::icu_64::Formattable::VTable* var_448
                            sub_142aa7840(&var_448)
                        else
                            if (rcx_38 != 4)
                                *arg9 = 5
                                result = sub_142a47ff0(&var_498)
                                break
                            
                            void* rax_43 = sub_142aa7fb0(rdi_7, arg9)
                            zmm6 = sub_142b60890(arg1, 
                                sub_142b8b360(arg1 + 0x228, var_558, rax_43, arg9), 0, arg4, arg5, 
                                arg6, rbx, arg9)
                else
                    void*** var_588
                    var_588.d = 0
                    int64_t rax_28 = __RTDynamicCast(inptr, 0, 
                        &class icu_64::Format `RTTI Type Descriptor', &data_143cd2958, var_588.d)
                    
                    if (rax_28 != 0)
                    label_142b603aa:
                        var_4d8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_4d0_1 = 2
                        sub_142aa8370(inptr, rdi_7, &var_4d8, arg9)
                        int32_t var_4cc
                        int32_t r9_10
                        
                        if (var_4d0_1 s< 0)
                            r9_10 = var_4cc
                        else
                            r9_10 = sx.d(var_4d0_1) s>> 5
                        
                        void* rax_35
                        
                        if (sub_142a491f0(&var_4d8, 0x7b, 0, r9_10) s>= 0)
                            rax_35 = arg1
                        label_142b60459:
                            void var_378
                            sub_142b5e170(&var_378, &var_4d8, rax_35 + 0x148, arg9)
                            sub_142b5ff60(&var_378, 0, 0, arg4, arg5, arg6, rbx, result_1, arg9)
                            sub_142b5e3d0(&var_378)
                        else
                            int32_t r9_12
                            
                            if (var_4d0_1 s< 0)
                                r9_12 = var_4cc
                            else
                                r9_12 = sx.d(var_4d0_1) s>> 5
                            
                            int32_t rax_34 = sub_142a491f0(&var_4d8, 0x27, 0, r9_12)
                            
                            if (rax_34 s>= 0)
                                rax_35 = arg1
                            
                            if (rax_34 s>= 0 && *(rax_35 + 0x230) != 1)
                                goto label_142b60459
                            
                            sub_142b5ed00(rbx, &var_4d8)
                        sub_142a47ff0(&var_4d8)
                    else
                        var_588.d = rax_28.d
                        int64_t rax_29 = __RTDynamicCast(inptr, 0, 
                            &class icu_64::Format `RTTI Type Descriptor', 
                            &class icu_64::PluralFormat `RTTI Type Descriptor', var_588.d)
                        
                        if (rax_29 != 0)
                            goto label_142b603aa
                        
                        var_588.d = rax_29.d
                        
                        if (__RTDynamicCast(inptr, 0, &class icu_64::Format `RTTI Type Descriptor', 
                                &data_143cd2988, var_588.d) != 0)
                            goto label_142b603aa
                        
                        sub_142b607c0(rbx, inptr, rdi_7, arg9)
            else
                double zmm0_1 = *(arg3 + 0x80)
                zmm0_1 f- zmm6.q
                
                if (is_unordered.q(zmm0_1, zmm6.q) || zmm0_1 f!= zmm6.q)
                    sub_142b607c0(rbx, *(arg3 + 0x90), rdi_7, arg9)
                else
                    void* rdx_14 = arg3 + 0x98
                    
                    if ((*(rdx_14 + 8) & 0xffe0) == 0)
                        sub_142b607c0(rbx, *(arg3 + 0x90), arg3 + 0x10, arg9)
                    else if (*arg9 s<= 0)
                        sub_142b5ed00(rbx, rdx_14)
            
            result_1 = 0
            rdi_1 = sx.q(var_510_1.d)
            void* rax_52 = (rdi_1 << 4) + *(arg1 + 0x280)
            var_558 = zx.d(*(rax_52 + 8)) + *(rax_52 + 4)
            result = sub_142a47ff0(&var_498)
            rcx_2 = var_558
        
        rdi_1 = zx.q(rdi_1.d + 1)
        
        if (*arg9 s> 0)
            break
        
        rdx = arg1
        r10_1 = var_4f0_1

__security_check_cookie(rax_1 ^ &var_5a8)
return result
