// 函数: sub_142b2f8b0
// 地址: 0x142b2f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t result = arg3
int64_t rsi = sx.q(arg2)

if (*arg5 s<= 0)
    int16_t rdx = *(arg3 + 8)
    int32_t rcx_1
    
    if (rdx s< 0)
        rcx_1 = *(arg3 + 0xc)
    else
        rcx_1 = sx.d(rdx) s>> 5
    
    void* rcx_2
    
    if (rcx_1 != 0)
        rcx_2 = arg3 + 0xa
        
        if ((rdx.b & 2) == 0)
            rcx_2 = *(arg3 + 0x18)
    
    if (rcx_1 == 0 || *rcx_2 != 0xfffe)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        sub_142af4330(*(arg1 + 8), &var_88, arg3)
        
        if (*arg5 s<= 0)
            int32_t rax_3 = sub_142b7fa60(*(arg1 + 0x48), &var_88, arg1 + 0x128, 0)
            *(arg1 + 0x220) = rax_3
            
            if (rax_3 s<= 0x1f)
                result = sub_142a47ff0(&var_88)
            label_142b2f9c6:
                
                if (rsi.d != 0xf)
                    result = sub_142b30490(arg1, rsi.d, arg4, arg5)
                    int64_t r9_3 = sx.q(result.d)
                    
                    if (*arg5 s<= 0)
                        int64_t rbx_1
                        
                        if (result.d s< 0 || r9_3.d s>= *(arg1 + 0x250))
                            rbx_1 = 0
                        else
                            rbx_1 = *(*(arg1 + 0x260) + (r9_3 << 3))
                        
                        while ((rbx_1.d & 3) s> rsi.d)
                            r9_3 = zx.q((rbx_1 s>> 0x1c).d) & 0xfffff
                            
                            if (r9_3.d s>= *(arg1 + 0x250))
                                rbx_1 = 0
                            else
                                rbx_1 = *(*(arg1 + 0x260) + (r9_3 << 3))
                        
                        int32_t i_1
                        
                        if ((rbx_1.d & 3) == rsi.d && (rbx_1.b u>> 3 & 1) != 0)
                            i_1 = (rbx_1 s>> 0x1c).d & 0xfffff
                        label_142b2fc86:
                            
                            if (*arg5 s<= 0)
                                result = sx.q(*(arg1 + 0x220) - 1)
                                *(arg1 + (result << 3) + 0x128) = (((zx.q(i_1) & 0x1fc0)
                                    + ((zx.q(i_1) & 0xfe000) << 1)) << 0x2a)
                                    + zx.q((i_1 & 0x3f) << 0x18) + 0x4040000006002000
                                    + sx.q(rsi.d << 8)
                            else
                                result = "inserting reset position for &[before n]"
                                *arg4 = "inserting reset position for &[before n]"
                        else if (rsi.d != 0)
                            int32_t rax_17 = sub_142b303c0(arg1, r9_3.d, 1)
                            int32_t rbp_1 = rax_17
                            
                            if (rsi.d s>= 2)
                                rbp_1 = sub_142b303c0(arg1, rax_17, 2)
                            
                            int64_t rbx_4
                            
                            if (rbp_1 s< 0 || rbp_1 s>= *(arg1 + 0x250))
                                rbx_4 = 0
                            else
                                rbx_4 = *(*(arg1 + 0x260) + (sx.q(rbp_1) << 3))
                            
                            int32_t i_2
                            
                            if ((rbx_4.d & 3) != rsi.d)
                                i_2 = sub_142b30740(arg1, rbp_1, 
                                    sub_142b30f90(arg1, zx.q(rbp_1), rbx_4, rsi.d), rsi.d, arg5)
                            label_142b2fc6a:
                                i_1 = i_2
                            label_142b2fc84:
                                rsi = zx.q(sub_142b30050(
                                    *(arg1 + (sx.q(*(arg1 + 0x220) - 1) << 3) + 0x128)))
                                goto label_142b2fc86
                            
                            if (zx.d((rbx_4 s>> 0x30).w) != 0)
                                uint64_t r8_8 = zx.q(sub_142b30f90(arg1, zx.q(rbp_1), rbx_4, rsi.d))
                                i_1 = (rbx_4 s>> 0x1c).d & 0xfffff
                                uint64_t i_3 = zx.q(i_1)
                                uint32_t rax_30
                                
                                while (true)
                                    int64_t rcx_18
                                    
                                    if (i_3.d s>= *(arg1 + 0x250))
                                        rcx_18 = 0
                                    else
                                        rcx_18 = *(*(arg1 + 0x260) + (i_3 << 3))
                                    
                                    int32_t rax_28 = rcx_18.d & 3
                                    
                                    if (rax_28 s< rsi.d)
                                        rax_30 = 0x500
                                        break
                                    
                                    if (rax_28 == rsi.d && (rcx_18.b u>> 3 & 1) == 0)
                                        rax_30 = zx.d((rcx_18 s>> 0x30).w)
                                        break
                                    
                                    i_3 = zx.q((rcx_18 s>> 0x1c).d) & 0xfffff
                                
                                if (rax_30 == r8_8.d)
                                    goto label_142b2fc84
                                
                                i_2 = sub_142b31100(arg1, i_1, rbp_1, r8_8 << 0x30 | rsi, arg5)
                                goto label_142b2fc6a
                            
                            *arg5 = 0x10
                            result = "reset secondary-before secondary ignorable not possible"
                            
                            if (rsi.d != 1)
                                result = "reset tertiary-before completely ignorable not possible"
                            
                            *arg4 = result
                        else
                            int32_t rbx_3 = (rbx_1 s>> 0x20).d
                            
                            if (rbx_3 != 0)
                                void* rcx_10 = *(arg1 + 0x30)
                                
                                if (rbx_3 u> *(rcx_10 + (zx.q(*(rcx_10 + 8)) << 2)))
                                    if (rbx_3 != 0xff020200)
                                        int32_t i = sub_142b305b0(arg1, 
                                            sub_142b79250(arg1 + 0x30, rbx_3, 
                                                *((zx.q(rbx_3) u>> 0x18)
                                                    + *(*(arg1 + 0x28) + 0x48))), 
                                            arg5)
                                        
                                        do
                                            i_1 = i
                                            int32_t rax_15
                                            
                                            if (i s< 0 || i s>= *(arg1 + 0x250))
                                                rax_15 = 0
                                            else
                                                rax_15 = (*(*(arg1 + 0x260) + (sx.q(i) << 3))).d
                                            
                                            i = rax_15 s>> 8 & 0xfffff
                                        while (i != 0)
                                        
                                        goto label_142b2fc86
                                    
                                    *arg5 = 0x10
                                    result = "reset primary-before [first trailing] not supported"
                                    *arg4 = "reset primary-before [first trailing] not supported"
                                else
                                    *arg5 = 0x10
                                    result =
                                        "reset primary-before first non-ignorable not supported"
                                    *arg4 = "reset primary-before first non-ignorable not supported"
                            else
                                *arg5 = 0x10
                                result = "reset primary-before ignorable not possible"
                                *arg4 = "reset primary-before ignorable not possible"
            else
                *arg5 = 1
                *arg4 = "reset position maps to too many collation elements (more than 31)"
                result = sub_142a47ff0(&var_88)
        else
            *arg4 = "normalizing the reset position"
            result = sub_142a47ff0(&var_88)
    else
        result = sub_142b30920(arg1, result, arg4, arg5)
        *(arg1 + 0x128) = result
        *(arg1 + 0x220) = 1
        
        if (*arg5 s<= 0)
            goto label_142b2f9c6

__security_check_cookie(rax_1 ^ &var_c8)
return result
