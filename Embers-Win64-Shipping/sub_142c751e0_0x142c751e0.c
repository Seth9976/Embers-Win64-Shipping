// 函数: sub_142c751e0
// 地址: 0x142c751e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t result = __security_cookie ^ &var_498
int64_t result_1 = result

if (arg7 != 0)
    void* rsi_1 = *arg7
    
    if (rsi_1 != 0 && *(rsi_1 + 0x310) != 0 && arg1 u<= 1)
        char const* const r10_1
        
        if (arg2 s<= 0x301)
            if (arg2 == 0x301)
                r10_1 = "TLSv1.0"
                goto label_142c752cd
            
            if (arg2 != 0)
                if (arg2 == 2)
                    r10_1 = "SSLv2"
                    goto label_142c752cd
                
                if (arg2 != 0x300)
                    goto label_142c752a0
                
                r10_1 = "SSLv3"
                goto label_142c752cd
        else if (arg2 == 0x302)
            r10_1 = "TLSv1.1"
        label_142c752cd:
            int32_t rdi_1 = arg2 s>> 8
            char const* const r9_1
            
            if (rdi_1 != 3 || arg3 == 0)
                r9_1 = &data_1434cce10
            else if (arg3 == 0x14)
                r9_1 = "TLS change cipher"
            else if (arg3 == 0x15)
                r9_1 = "TLS alert"
            else if (arg3 == 0x16)
                r9_1 = "TLS handshake"
            else if (arg3 == 0x17)
                r9_1 = "TLS app data"
            else if (arg3 == 0x100)
                r9_1 = "TLS header"
            else
                r9_1 = "TLS Unknown"
            
            int32_t r8 = sx.d(*arg4)
            int32_t var_460_1 = r8
            int64_t var_468_1 = sub_142c750f0(rdi_1, r8)
            void* const rcx_5 = &data_143612cbc
            char const* const var_470_1 = r9_1
            
            if (arg1 != 0)
                rcx_5 = &data_1436b6138
            
            void* const var_478_1 = rcx_5
            void var_438
            int32_t rax_2
            int512_t zmm2
            rax_2, zmm2 = sub_142c564b0(&var_438, 0x400, "%s (%s), %s, %s (%d):\n", r10_1, arg5)
            arg5 = sub_142c64600(rsi_1, 0, &var_438, sx.q(rax_2), zmm2, nullptr)
        else
            if (arg2 == 0x303)
                r10_1 = "TLSv1.2"
                goto label_142c752cd
            
            if (arg2 == 0x304)
                r10_1 = "TLSv1.3"
                goto label_142c752cd
            
        label_142c752a0:
            void var_458
            arg5 = sub_142c564b0(&var_458, 0x20, "(%x)", zx.q(arg2), arg5)
            r10_1 = &var_458
            
            if (arg2 != 0)
                goto label_142c752cd
        int32_t rdx_1
        rdx_1.b = arg1 == 1
        result = sub_142c64600(rsi_1, rdx_1 + 5, arg4, arg6, arg5, nullptr)

__security_check_cookie(result_1 ^ &var_498)
return result
