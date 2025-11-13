// 函数: sub_1428aa440
// 地址: 0x1428aa440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x230)
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int32_t result_1 = 0
void* r15 = arg1
int64_t* rsi = nullptr
uint64_t result

if (arg3 != 0)
    int32_t var_1e8 = arg2
    char* const var_208_1
    void var_1d8
    
    if (arg2 != 1)
        if (arg2 == 2)
            int64_t var_1c0_1 = arg3
            void* var_1e0_2 = &var_1d8
            var_208_1 = &data_142d948d8
            goto label_1428aa4f9
        
    label_1428aa81a:
        sub_1428a5670(0xb, 0x67, 0x70, "crypto\x509\by_dir.c", 0xef)
    else
        int64_t var_190_1 = arg3
        void* var_1e0_1 = &var_1d8
        var_208_1 = &data_1437020ab
    label_1428aa4f9:
        int64_t* rax_2 = sub_1428a7510()
        rsi = rax_2
        int32_t var_238_1
        int32_t r8
        
        if (rax_2 != 0)
            void* r13_1 = *(r15 + 0x10)
            void* var_200_1 = r13_1
            int32_t rax_3 = sub_1428a3330(arg3)
            int32_t rbx_1 = rax_3
            int32_t rdi_1 = 0
            int32_t var_214_1 = 0
            
            if (sub_142898c70(*(r13_1 + 8)) s> 0)
                while (true)
                    int64_t* rax_5 = sub_142898ea0(*(r13_1 + 8), rdi_1)
                    char* rcx_3 = *rax_5
                    int32_t i = 0
                    
                    if (*rcx_3 != 0)
                        while (i u< 0x80000000)
                            rcx_3 = &rcx_3[1]
                            i += 1
                            
                            if (*rcx_3 == 0)
                                break
                    
                    if (sub_1428a7260(rsi, sx.q((i & 0x7fffffff) + 0x11)) == 0)
                        var_238_1 = 0x103
                        r8 = 0x41
                        goto label_1428aa81a_1
                    
                    int32_t var_210
                    int32_t rbx_2
                    void* const r14_1
                    
                    if (arg2 != 2 || rax_5[2] == 0)
                        rbx_2 = 0
                        r14_1 = nullptr
                    else
                        CRITICAL_SECTION* rcx_5 = *(r13_1 + 0x10)
                        var_210 = rbx_1
                        sub_1428a5c40(rcx_5)
                        int32_t rax_9 = sub_1428989f0(rax_5[2], &var_210)
                        
                        if (rax_9 s< 0)
                            r14_1 = nullptr
                            rbx_2 = 0
                            sub_1428a5d00(*(r13_1 + 0x10))
                        else
                            void* rax_10 = sub_142898ea0(rax_5[2], rax_9)
                            r14_1 = rax_10
                            rbx_2 = *(rax_10 + 4)
                            sub_1428a5d00(*(r13_1 + 0x10))
                    
                    while (true)
                        int32_t var_220_1 = rbx_2
                        char* const var_228_1 = var_208_1
                        int32_t var_230_1 = rax_3
                        int32_t var_238_2 = 0x2f
                        int512_t zmm1_1 = sub_1428b7080(rsi[1], rsi[2], "%s%c%08lx.%s%d", *rax_5)
                        struct _stat64i32 _Stat
                        
                        if (_stat64i32(rsi[1], &_Stat) s< 0)
                            break
                        
                        int32_t rax_12
                        
                        if (arg2 == 1)
                            rax_12 = sub_1428aadd0(r15, rsi[1], rax_5[1].d, zmm1_1)
                        label_1428aa67f:
                            
                            if (rax_12 == 0)
                                break
                        else if (arg2 == 2)
                            rax_12 = sub_1428aaf80(r15, rsi[1], rax_5[1].d, zmm1_1)
                            goto label_1428aa67f
                        rbx_2 += 1
                    
                    r13_1 = var_200_1
                    sub_1428a5c40(*(r13_1 + 0x10))
                    int32_t rax_14 = sub_1428989f0(*(*(r15 + 0x18) + 8), &var_1e8)
                    int32_t* rax_16 = sub_142898ea0(*(*(r15 + 0x18) + 8), rax_14)
                    sub_1428a5d00(*(r13_1 + 0x10))
                    result_1 = 0
                    
                    if (arg2 == 2)
                        sub_1428a5c40(*(r13_1 + 0x10))
                        
                        if (r14_1 != 0)
                        label_1428aa778:
                            
                            if (*(r14_1 + 4) s< rbx_2)
                                *(r14_1 + 4) = rbx_2
                        else
                            var_210 = rax_3
                            int32_t rax_18 = sub_1428989f0(rax_5[2], &var_210)
                            void* rax_19 = sub_142898ea0(rax_5[2], rax_18)
                            r14_1 = rax_19
                            
                            if (rax_19 != 0)
                                goto label_1428aa778
                            
                            int32_t* rax_20 = sub_1428a6730(zx.q((rax_19 + 8).d))
                            
                            if (rax_20 == 0)
                                sub_1428a5d00(*(r13_1 + 0x10))
                                r8 = 0x41
                                var_238_1 = 0x160
                                goto label_1428aa81a_1
                            
                            *rax_20 = rax_3
                            rax_20[1] = rbx_2
                            
                            if (sub_142898d50(rax_5[2], rax_20) == 0)
                                sub_1428a5d00(*(r13_1 + 0x10))
                                sub_1428a6780(rax_20)
                                r8 = 0x41
                                var_238_1 = 0x169
                                goto label_1428aa81a_1
                        
                        sub_1428a5d00(*(r13_1 + 0x10))
                    
                    if (rax_16 != 0)
                        result_1 = 1
                        *arg4 = *rax_16
                        *(arg4 + 8) = *(rax_16 + 8)
                        sub_1428a49e0()
                        break
                    
                    rdi_1 = var_214_1 + 1
                    var_214_1 = rdi_1
                    
                    if (rdi_1 s>= sub_142898c70(*(r13_1 + 8)))
                        break
                    
                    r15 = arg1
                    rbx_1 = rax_3
        else
            var_238_1 = 0xf4
            r8 = (rax_2 + 7).d
        label_1428aa81a_1:
            sub_1428a5670(0xb, 0x67, r8, "crypto\x509\by_dir.c", var_238_1)
    sub_1428a71f0(rsi)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_258)
return result
