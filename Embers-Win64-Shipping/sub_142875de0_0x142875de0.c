// 函数: sub_142875de0
// 地址: 0x142875de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1d0)
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* rdi = nullptr
int64_t* var_188 = nullptr
int32_t rax_4 = sub_1428916c0(arg2)
int32_t rcx_1 = 0
int32_t var_198 = 0xffffffff
void var_118
void var_d8

if (rax_4 s>= 0)
    int64_t r14_1 = sx.q(rax_4)
    
    if (arg11 != 0 && *(arg1 + 0x84) == 2 && *(*(arg1 + 0x508) + 0x19c) == 0
            && *(arg9 + 0x19c) u> 0)
        rcx_1 = 1
    
    char const* const r12_1 = "ext binder"
    
    if (arg11 == 0)
        r12_1 = "res binder"
    
    void* rsi_1
    
    if (*(arg1 + 0x38) == 0 && arg11 != 0)
        rsi_1 = arg9 + 0x10
    
    if (*(arg1 + 0x38) != 0 || arg11 == 0 || rcx_1 != 0)
        rsi_1 = arg1 + 0x12c
    
    int32_t var_1d0
    var_1d0.q = rsi_1
    
    if (sub_1428625b0(arg1, arg2, 0, arg9 + 0x50, (*(arg9 + 8)).d, var_1d0) != 0)
        int64_t* rax_8 = sub_142891ee0()
        rdi = rax_8
        int32_t var_1d0_2
        
        if (rax_8 == 0)
        label_14287626e:
            var_1d0_2 = 0x5df
        label_142876276:
            sub_142856580(arg1, 0x50, 0x1fa, 0x44, "ssl\statem\extensions.c", var_1d0_2)
        else
            if (sub_1428919c0(rax_8, arg2, nullptr) s<= 0)
                goto label_14287626e
            
            void var_158
            
            if (sub_1428918e0(rdi, &var_158, nullptr) s<= 0)
                goto label_14287626e
            
            int64_t var_1b8_1 = r14_1
            var_1d0.q = &var_158
            
            if (sub_1428628c0(arg1, arg2, rsi_1, r12_1, 0xa, var_1d0, r14_1, &var_118) != 0
                    && sub_142862080(arg1, arg2, &var_118, &var_d8, r14_1) != 0)
                if (sub_1428919c0(rdi, arg2, nullptr) s<= 0)
                    var_1d0_2 = 0x5f2
                    goto label_142876276
                
                if (*(arg1 + 0x4d8) != 1)
                label_14287616b:
                    int32_t rax_25 = sub_142891c10(rdi, arg3, arg4)
                    int32_t rax_26
                    
                    if (rax_25 s> 0)
                        rax_26 = sub_1428918e0(rdi, &var_158, nullptr)
                    
                    if (rax_25 s<= 0 || rax_26 s<= 0)
                        var_1d0_2 = 0x624
                        goto label_142876276
                    
                    int64_t* rax_27 = sub_1428969b0(0x357, nullptr, &var_d8, r14_1)
                    var_188 = rax_27
                    
                    if (rax_27 == 0)
                        var_1d0_2 = 0x62c
                        goto label_142876276
                    
                    void var_98
                    void* rsi_2 = &var_98
                    int64_t var_190 = r14_1
                    
                    if (arg10 != 0)
                        rsi_2 = arg8
                    
                    if (sub_1428932d0(rdi, nullptr, arg2, nullptr, rax_27) s<= 0)
                        var_1d0_2 = 0x639
                        goto label_142876276
                    
                    if (sub_142891c10(rdi, &var_158, r14_1) s<= 0)
                        var_1d0_2 = 0x639
                        goto label_142876276
                    
                    if (sub_1428930f0(rdi, rsi_2, &var_190, arg5, arg6) s<= 0 || var_190 != r14_1)
                        var_1d0_2 = 0x639
                        goto label_142876276
                    
                    if (arg10 == 0)
                        int32_t rax_31 = sub_1428bc500(arg7, rsi_2, r14_1)
                        int32_t rcx_26
                        rcx_26.b = rax_31 == 0
                        var_198 = rcx_26
                        
                        if (rax_31 != 0)
                            sub_142856580(arg1, 0x2f, 0x1fa, 0xfd, "ssl\statem\extensions.c", 0x644)
                    else
                        var_198 = 1
                else
                    void* var_180
                    int32_t rax_14 = sub_142899cf0(*(*(arg1 + 0xa8) + 0xe0), 3, 0, &var_180)
                    int64_t r8_2 = sx.q(rax_14)
                    
                    if (rax_14 != 0)
                        void* r10_1 = var_180
                        
                        if (*(arg1 + 0x38) != 0)
                            if (r8_2 u> 0x7fffffffffffffff)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            void* var_1a8_1 = r10_1
                            int64_t var_1a0_1 = r8_2
                            
                            if (r8_2 u< 1)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            char* var_1a8_2
                            var_1a8_2.o = (r10_1 + 1).o
                            
                            if (r8_2 - 1 u< 3)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            int64_t var_1a0_3 = r8_2 - 4
                            uint64_t rcx_14 = (zx.q(*(r10_1 + 2)) | zx.q(*(r10_1 + 1)) << 8) << 8
                                | zx.q(*(r10_1 + 3))
                            
                            if (r8_2 - 4 u< rcx_14)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            int64_t r9_7 = r8_2 - 4 - rcx_14
                            void* var_1a8_3
                            var_1a8_3.o = (r10_1 + 4 + rcx_14).o
                            
                            if (r9_7 u< 1)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            void* r9_9 = r10_1 + 5 + rcx_14
                            void* var_1a8_4
                            var_1a8_4.o = r9_9.o
                            
                            if (r9_7 - 1 u< 3)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            uint64_t rcx_18 =
                                (zx.q(*(r9_9 + 1)) | zx.q(*r9_9) << 8) << 8 | zx.q(*(r9_9 + 2))
                            
                            if (r9_7 - 4 u< rcx_18)
                                var_1d0_2 = 0x614
                                goto label_142876276
                            
                            r8_2 = r8_2 - (r9_7 - 4) + rcx_18
                        
                        if (sub_142891c10(rdi, r10_1, r8_2) s> 0)
                            goto label_14287616b
                        
                        var_1d0_2 = 0x61c
                        goto label_142876276
                    
                    sub_142856580(arg1, 0x50, 0x1fa, 0x14c, "ssl\statem\extensions.c", 0x602)
else
    sub_142856580(arg1, 0x50, 0x1fa, 0x44, "ssl\statem\extensions.c", 0x5b0)

sub_1428b8960(&var_118, 0x40)
sub_1428b8960(&var_d8, 0x40)
sub_1428965a0(var_188)
sub_142891ea0(rdi)
__security_check_cookie(rax_1 ^ &var_1f8)
return zx.q(var_198)
