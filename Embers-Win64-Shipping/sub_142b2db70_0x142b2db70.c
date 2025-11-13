// 函数: sub_142b2db70
// 地址: 0x142b2db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_148 = -2
int128_t zmm7
int128_t var_68 = zmm7
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rbx = sx.q(arg2)
uint128_t zmm6 = zx.o(arg5)
uint64_t result

if (*arg6 s<= 0)
    int32_t rax_3 = *(arg1 + 0x60)
    int32_t* rdx_2 = (rbx << 4) + *(arg1 + 0x58)
    
    if (*rdx_2 - 0xc u> 1)
        zmm7 = zx.o(0)
    else
        zmm7 = sub_142b752d0(arg1, rdx_2)
        rbx = zx.q(rbx.d + 1)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_130_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
    sub_142a47a60(&var_f8, 0, u"other", 5)
    int64_t r15
    r15.b = 0
    int32_t result_2 = 0
    int16_t r9 = var_130_1
    int16_t var_f0
    int16_t r8 = var_f0
    int32_t result_1
    
    while (true)
        int64_t rcx_1 = *(arg1 + 0x58)
        int32_t* rdi_3 = (sx.q(rbx.d) << 4) + rcx_1
        result_1 = rbx.d + 1
        
        if (*rdi_3 != 6)
            int32_t* rdx_5 = (sx.q(result_1) << 4) + rcx_1
            
            if (*rdx_5 - 0xc u<= 1)
                result_1 += 1
                double zmm0_2 = sub_142b752d0(arg1, rdx_5)
                zmm6.q f- zmm0_2
                
                if (not(is_unordered.q(zmm6.q, zmm0_2)) && zmm6.q f== zmm0_2)
                    break
                
                r9 = var_130_1
                r8 = var_f0
            else if (r15.b == 0)
                int32_t var_ec
                int32_t rcx_4
                
                if (r8 s< 0)
                    rcx_4 = var_ec
                else
                    rcx_4 = sx.d(r8) s>> 5
                
                int32_t* var_178
                int32_t var_170
                void var_ee
                void* var_e0
                char rax_8
                
                if ((r8.b & 1) == 0)
                    int32_t rax_10
                    
                    if (r8 s< 0)
                        rax_10 = var_ec
                    else
                        rax_10 = sx.d(r8) s>> 5
                    
                    int32_t rdx_6 = 0
                    
                    if (rax_10 s< 0)
                        rdx_6 = rax_10
                    
                    if (rcx_4 s>= 0)
                        int32_t rax_11 = rax_10 - rdx_6
                        
                        if (rcx_4 s> rax_11)
                            rcx_4 = rax_11
                    else
                        rcx_4 = 0
                    
                    void* r9_1 = &var_ee
                    
                    if ((r8.b & 2) == 0)
                        r9_1 = var_e0
                    
                    var_170 = rcx_4
                    var_178.d = rdx_6
                    rax_8 = sub_142a48fb0(arg1 + 0x10, rdi_3[1], zx.d(rdi_3[2].w), r9_1, var_178.d, 
                        var_170)
                    r9 = var_130_1
                    r8 = var_f0
                else
                    rax_8 = not.b(*(arg1 + 0x18)) & 1
                
                int32_t var_12c
                
                if (rax_8 != 0)
                    if ((r9 & 0xffe0) != 0)
                        goto label_142b2dede
                    
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
                    sub_142a48050(&var_138, 
                        (*(*arg3 + 8))(arg3, &var_b8, arg4, zmm6.q f- zmm7.q, arg6, var_170, rax_3, 
                            arg6, arg4))
                    sub_142a47ff0(&var_b8)
                    r8 = var_f0
                    
                    if (result_2 == 0)
                        r9 = var_130_1
                    label_142b2dede:
                        int32_t rcx_17
                        
                        if (r9 s< 0)
                            rcx_17 = var_12c
                        else
                            rcx_17 = sx.d(r9) s>> 5
                        
                        char rax_22
                        
                        if ((var_130_1.b & 1) == 0)
                            int32_t rax_24
                            
                            if (r9 s< 0)
                                rax_24 = var_12c
                            else
                                rax_24 = sx.d(r9) s>> 5
                            
                            int32_t rdx_13 = 0
                            
                            if (rax_24 s< 0)
                                rdx_13 = rax_24
                            
                            if (rcx_17 s>= 0)
                                int32_t rax_25 = rax_24 - rdx_13
                                
                                if (rcx_17 s> rax_25)
                                    rcx_17 = rax_25
                            else
                                rcx_17 = 0
                            
                            void var_12e
                            void* r9_4 = &var_12e
                            void* var_120
                            
                            if ((var_130_1.b & 2) == 0)
                                r9_4 = var_120
                            var_170 = rcx_17
                            var_178.d = rdx_13
                            rax_22 = sub_142a48fb0(arg1 + 0x10, rdi_3[1], zx.d(rdi_3[2].w), r9_4, 
                                var_178.d, var_170)
                            r9 = var_130_1
                            r8 = var_f0
                        else
                            rax_22 = not.b(*(arg1 + 0x18)) & 1
                        
                        if (rax_22 == 0)
                            result_2 = result_1
                            r15.b = 1
                    else
                        int32_t rcx_14
                        
                        if (r8 s< 0)
                            rcx_14 = var_ec
                        else
                            rcx_14 = sx.d(r8) s>> 5
                        
                        r9 = var_130_1
                        int32_t r10_4
                        
                        if (r9 s< 0)
                            r10_4 = var_12c
                        else
                            r10_4 = sx.d(r9) s>> 5
                        
                        char rax_18
                        
                        if ((r8.b & 1) == 0)
                            int32_t rax_20
                            
                            if (r8 s< 0)
                                rax_20 = var_ec
                            else
                                rax_20 = sx.d(r8) s>> 5
                            
                            int32_t rdx_12 = 0
                            
                            if (rax_20 s< 0)
                                rdx_12 = rax_20
                            
                            if (rcx_14 s>= 0)
                                int32_t rax_21 = rax_20 - rdx_12
                                
                                if (rcx_14 s> rax_21)
                                    rcx_14 = rax_21
                            else
                                rcx_14 = 0
                            
                            void* r9_3 = &var_ee
                            
                            if ((r8.b & 2) == 0)
                                r9_3 = var_e0
                            
                            var_170 = rcx_14
                            var_178.d = rdx_12
                            rax_18 = sub_142a48fb0(&var_138, 0, r10_4, r9_3, var_178.d, var_170)
                            r9 = var_130_1
                            r8 = var_f0
                        else
                            rax_18 = not.b(var_130_1.b) & 1
                        
                        if (rax_18 != 0)
                            goto label_142b2dede
                        
                        r15.b = 1
                else if (result_2 == 0)
                    result_2 = result_1
                    int32_t rcx_7
                    
                    if (r8 s< 0)
                        rcx_7 = var_ec
                    else
                        rcx_7 = sx.d(r8) s>> 5
                    
                    int32_t rdx_9
                    
                    if (r9 s< 0)
                        rdx_9 = var_12c
                    else
                        rdx_9 = sx.d(r9) s>> 5
                    
                    char rax_12
                    
                    if ((r8.b & 1) == 0)
                        int32_t rax_14
                        
                        if (r8 s< 0)
                            rax_14 = var_ec
                        else
                            rax_14 = sx.d(r8) s>> 5
                        
                        int32_t r10_2 = 0
                        
                        if (rax_14 s< 0)
                            r10_2 = rax_14
                        
                        if (rcx_7 s>= 0)
                            int32_t rax_15 = rax_14 - r10_2
                            
                            if (rcx_7 s> rax_15)
                                rcx_7 = rax_15
                        else
                            rcx_7 = 0
                        
                        void* r9_2 = &var_ee
                        
                        if ((r8.b & 2) == 0)
                            r9_2 = var_e0
                        
                        var_170 = rcx_7
                        var_178.d = r10_2
                        rax_12 = sub_142a48fb0(&var_138, 0, rdx_9, r9_2, var_178.d, var_170)
                        r9 = var_130_1
                        r8 = var_f0
                    else
                        rax_12 = not.b(var_130_1.b) & 1
                    
                    if (rax_12 == 0)
                        r15.b = 1
            
            int64_t rcx_20 = sx.q(result_1) * 2
            int64_t rax_26 = *(arg1 + 0x58)
            
            if (*(rax_26 + (rcx_20 << 3) + 0xc) s>= result_1)
                result_1 = *(rax_26 + (rcx_20 << 3) + 0xc)
            
            rbx = zx.q(result_1 + 1)
            
            if (rbx.d s< rax_3)
                continue
        
        result_1 = result_2
        break
    
    sub_142a47ff0(&var_f8)
    sub_142a47ff0(&var_138)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_198)
return result
