// 函数: sub_14288dac0
// 地址: 0x14288dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rdi = 0
void* const var_90
__builtin_memset(&var_90, 0, 0x18)
int32_t* r15 = nullptr
uint32_t count = 0
void* r14 = nullptr
int64_t* r12 = nullptr
int64_t rsi = 0
int128_t _Str2_1
__builtin_strcpy(&_Str2_1, "SERVERINFO FOR ")
int128_t _Str2
__builtin_strcpy(&_Str2, "SERVERINFOV2 FOR ")
int32_t var_a8_1
char* _Str1_2
int64_t var_80
int32_t r8

if (arg1 == 0 || arg2 == 0)
    var_a8_1 = 0x39c
    r8 = 0x43
else
    int64_t* rax_2 = sub_14289a500(&data_143507b90)
    r12 = rax_2
    
    if (rax_2 != 0)
        if (sub_142899cf0(r12, 0x6c, 3, arg2) s> 0)
            int32_t var_a8
            var_a8.q = &count
            int64_t r13_1 = 0
            
            if (sub_1428ba240(r12, &_Str1_2, &var_80, &var_90, var_a8) != 0)
                while (true)
                    char* _Str1 = _Str1_2
                    int32_t i = 0
                    char* _Str1_3 = _Str1
                    
                    if (*_Str1 != 0)
                        while (i u< 0x80000000)
                            _Str1_3 = &_Str1_3[1]
                            i += 1
                            
                            if (*_Str1_3 == 0)
                                break
                    
                    char r8_2 = _Str2_1.b
                    int128_t* rdx_1 = &_Str2_1
                    int32_t i_1 = 0
                    
                    if (r8_2 != 0)
                        while (i_1 u< 0x80000000)
                            rdx_1 += 1
                            i_1 += 1
                            
                            if (*rdx_1 == 0)
                                break
                    
                    if ((i & 0x7fffffff) u< (i_1 & 0x7fffffff))
                        var_a8_1 = 0x3bb
                        r8 = 0x188
                        goto label_14288dea9
                    
                    int128_t* rcx_3 = &_Str2_1
                    int32_t i_2 = 0
                    
                    if (r8_2 != 0)
                        while (i_2 u< 0x80000000)
                            rcx_3 += 1
                            i_2 += 1
                            
                            if (*rcx_3 == 0)
                                break
                    
                    uint32_t count_1
                    
                    if (strncmp(_Str1, &_Str2_1, zx.q(i_2) & 0x7fffffff) == 0)
                        count_1 = count
                        void* const rax_12
                        
                        if (count_1 s>= 4)
                            rax_12 = var_90
                        
                        if (count_1 s< 4
                                || (zx.d(*(rax_12 + 2)) << 8) + zx.d(*(rax_12 + 3)) != count_1 - 4)
                            var_a8_1 = 0x3d5
                            r8 = 0x186
                            goto label_14288dea9
                        
                        rsi = 4
                    else
                        char* _Str1_1 = _Str1_2
                        int32_t i_3 = 0
                        char* _Str1_4 = _Str1_1
                        
                        if (*_Str1_1 != 0)
                            while (i_3 u< 0x80000000)
                                _Str1_4 = &_Str1_4[1]
                                i_3 += 1
                                
                                if (*_Str1_4 == 0)
                                    break
                        
                        char r8_5 = _Str2.b
                        int128_t* rdx_3 = &_Str2
                        int32_t i_4 = 0
                        
                        if (r8_5 != 0)
                            while (i_4 u< 0x80000000)
                                rdx_3 += 1
                                i_4 += 1
                                
                                if (*rdx_3 == 0)
                                    break
                        
                        if ((i_3 & 0x7fffffff) u< (i_4 & 0x7fffffff))
                            var_a8_1 = 0x3c3
                            r8 = 0x188
                            goto label_14288dea9
                        
                        int128_t* rcx_6 = &_Str2
                        int32_t i_5 = 0
                        
                        if (r8_5 != 0)
                            while (i_5 u< 0x80000000)
                                rcx_6 += 1
                                i_5 += 1
                                
                                if (*rcx_6 == 0)
                                    break
                        
                        if (strncmp(_Str1_1, &_Str2, zx.q(i_5) & 0x7fffffff) != 0)
                            var_a8_1 = 0x3c8
                            r8 = 0x187
                            goto label_14288dea9
                        
                        count_1 = count
                        void* const rax_9
                        
                        if (count_1 s>= 8)
                            rax_9 = var_90
                        
                        if (count_1 s< 8
                                || (zx.d(*(rax_9 + 6)) << 8) + zx.d(*(rax_9 + 7)) != count_1 - 8)
                            var_a8_1 = 0x3e2
                            r8 = 0x186
                            goto label_14288dea9
                    
                    int32_t* rax_15 =
                        sub_1428a67c0(r15, sx.q(count_1) + rsi + r14, "ssl\ssl_rsa.c", 0x3e8)
                    
                    if (rax_15 == 0)
                        var_a8_1 = 0x3ea
                        r8 = 0x41
                        goto label_14288dea9
                    
                    r15 = rax_15
                    
                    if (rsi != 0)
                        *(rax_15 + r14) = 0xd0010000
                    
                    memcpy(rax_15 + rsi + r14, var_90, count)
                    r14 += sx.q(count) + rsi
                    sub_1428a6780(_Str1_2)
                    int64_t rcx_18 = var_80
                    _Str1_2 = nullptr
                    sub_1428a6780(rcx_18)
                    void* const rcx_19 = var_90
                    var_80 = 0
                    sub_1428a6780(rcx_19)
                    var_90 = nullptr
                    var_a8.q = &count
                    r13_1 += 1
                    int32_t rax_18 = sub_1428ba240(r12, &_Str1_2, &var_80, &var_90, var_a8)
                    
                    if (rax_18 == 0)
                        if (r13_1 == 0)
                            break
                        
                        rdi = sub_14288d960(arg1, rax_18 + 2, rax_15, r14)
                        goto label_14288debf
            
            var_a8_1 = 0x3b4
            r8 = 0x185
        else
            var_a8_1 = 0x3a6
            r8 = 2
    else
        var_a8_1 = 0x3a2
        r8 = 7

label_14288dea9:
sub_1428a5670(0x14, 0x151, r8, "ssl\ssl_rsa.c", var_a8_1)
label_14288debf:
sub_1428a6780(_Str1_2)
sub_1428a6780(var_80)
sub_1428a6780(var_90)
sub_1428a6780(r15)
sub_142899e70(r12)
__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rdi)
