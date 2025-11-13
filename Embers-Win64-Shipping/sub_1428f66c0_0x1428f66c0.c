// 函数: sub_1428f66c0
// 地址: 0x1428f66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rsi = 0
int64_t* rbx = nullptr
int32_t r13 = 0
char* var_a0
__builtin_memset(&var_a0, 0, 0x18)
void* const var_98
char* _Str1_1
int32_t* result

if (arg2 != 0)
    result = arg2
label_1428f6756:
    int64_t* rax_2 = sub_1428f6670()
    rbx = rax_2
    
    if (rax_2 != 0)
        int32_t var_b8
        int32_t var_a8
        var_b8.q = &var_a8
        
        if (sub_1428ba240(arg1, &_Str1_1, &var_a0, &var_98, var_b8) != 0)
            while (true)
                char* _Str1 = _Str1_1
                int32_t rax_4 = strcmp(_Str1, "CERTIFICATE")
                int32_t rax_5
                
                if (rax_4 != 0)
                    rax_5 = strcmp(_Str1, "X509 CERTIFICATE")
                
                int32_t rcx_8
                void* const (* rdi_1)(int64_t* arg1, int64_t* arg2, int32_t arg3)
                void* r14_1
                
                if (rax_4 == 0 || rax_5 == 0)
                    rdi_1 = sub_1428a2d00
                label_1428f67ec:
                    
                    if (*rbx == 0)
                        r14_1 = rbx
                    label_1428f6982:
                        rcx_8 = 0
                    label_1428f6986:
                        char* rcx_13 = var_a0
                        
                        if (rcx_8 != 0)
                            rsi = 0
                            
                            if (sub_1428b9f10(rcx_13, &rbx[3]) == 0)
                                goto label_1428f6b20
                            
                            rbx[7] = var_98
                            rbx[6].d = var_a8
                            var_98 = nullptr
                        else
                            void var_68
                            
                            if (sub_1428b9f10(rcx_13, &var_68) == 0)
                                goto label_1428f6b20
                            
                            var_b8.q = arg4
                            int32_t rax_21
                            rax_21, arg5 =
                                sub_1428b9c50(&var_68, var_98, &var_a8, arg3, arg5, var_b8)
                            
                            if (rax_21 == 0)
                                goto label_1428f6b20
                            
                            void* const var_88 = var_98
                            
                            if (rsi == 0)
                                if (rdi_1(r14_1, &var_88, zx.q(var_a8)) == 0)
                                    sub_1428a5670(9, 0x74, 0xd, "crypto\pem\pem_info.c", 0xc4)
                                    goto label_1428f6b20
                                
                                rsi = 0
                            else
                                int32_t* rax_23
                                rax_23, arg5 = sub_1428c7580(rsi, r14_1, &var_88, var_a8)
                                
                                if (rax_23 == 0)
                                    sub_1428a5670(9, 0x74, 0xd, "crypto\pem\pem_info.c", 0xc0)
                                    goto label_1428f6b20
                                
                                rsi = 0
                        
                        _Str1 = _Str1_1
                    else
                    label_1428f67fb:
                        
                        if (sub_142898d50(result, rbx) == 0)
                            goto label_1428f6b20
                        
                        int64_t* rax_8 = sub_1428f6670()
                        rbx = rax_8
                        
                        if (rax_8 == 0)
                            goto label_1428f6b20
                        
                        continue
                else
                    if (strcmp(_Str1, "TRUSTED CERTIFICATE") == 0)
                        rdi_1 = sub_1428a2d20
                        goto label_1428f67ec
                    
                    if (strcmp(_Str1, "X509 CRL") == 0)
                        rdi_1 = sub_1428e46d0
                        
                        if (rbx[1] != 0)
                            goto label_1428f67fb
                        
                        r14_1 = &rbx[1]
                        goto label_1428f6982
                    
                    if (strcmp(_Str1, "RSA PRIVATE KEY") == 0)
                        rdi_1 = sub_142897a20
                        
                        if (rbx[2] != 0)
                            goto label_1428f67fb
                        
                        rbx[7] = 0
                        rbx[6].d = 0
                        void* rax_11 = sub_142934220()
                        rbx[2] = rax_11
                        
                        if (rax_11 == 0)
                            goto label_1428f6b20
                        
                        r14_1 = rax_11 + 0x18
                        int64_t rax_12 = -1
                        rsi = 6
                        
                        do
                            rax_12 += 1
                        while (var_a0[rax_12] != 0)
                        
                        rcx_8.b = rax_12.d s> 0xa
                        goto label_1428f6986
                    
                    if (strcmp(_Str1, "DSA PRIVATE KEY") == 0)
                        rdi_1 = sub_1428f0930
                        
                        if (rbx[2] != 0)
                            goto label_1428f67fb
                        
                        rbx[7] = 0
                        rbx[6].d = 0
                        void* rax_14 = sub_142934220()
                        rbx[2] = rax_14
                        
                        if (rax_14 == 0)
                            goto label_1428f6b20
                        
                        r14_1 = rax_14 + 0x18
                        int64_t rax_15 = -1
                        rsi = 0x74
                        
                        do
                            rax_15 += 1
                        while (var_a0[rax_15] != 0)
                        
                        rcx_8.b = rax_15.d s> 0xa
                        goto label_1428f6986
                    
                    if (strcmp(_Str1, "EC PRIVATE KEY") == 0)
                        rdi_1 = sub_1428ef870
                        
                        if (rbx[2] != 0)
                            goto label_1428f67fb
                        
                        rbx[7] = 0
                        rbx[6].d = 0
                        void* rax_17 = sub_142934220()
                        rbx[2] = rax_17
                        
                        if (rax_17 == 0)
                            goto label_1428f6b20
                        
                        r14_1 = rax_17 + 0x18
                        int64_t rax_18 = -1
                        rsi = 0x198
                        
                        do
                            rax_18 += 1
                        while (var_a0[rax_18] != 0)
                        
                        rcx_8.b = rax_18.d s> 0xa
                        goto label_1428f6986
                sub_1428a6780(_Str1)
                char* rcx_18 = var_a0
                _Str1_1 = nullptr
                sub_1428a6780(rcx_18)
                void* const rcx_19 = var_98
                var_a0 = nullptr
                sub_1428a6780(rcx_19)
                var_b8.q = &var_a8
                var_98 = nullptr
                
                if (sub_1428ba240(arg1, &_Str1_1, &var_a0, &var_98, var_b8) == 0)
                    break
        
        if ((sub_1428a5510() & 0xfff) == 0x6c)
            sub_1428a49e0()
            
            if (*rbx != 0 || rbx[1] != 0 || rbx[2] != 0 || rbx[7] != 0)
                if (sub_142898d50(result, rbx) != 0)
                    rbx = nullptr
                    r13 = 1
            else
                r13 = 1
else
    int32_t* result_1 = sub_142898ba0()
    result = result_1
    
    if (result_1 != 0)
        goto label_1428f6756
    
    sub_1428a5670(9, 0x74, (arg2 + 0x41).d, "crypto\pem\pem_info.c", 0x36)

label_1428f6b20:
sub_1428f6600(rbx)

if (r13 == 0)
    int32_t rbx_1 = 0
    
    if (sub_142898c70(result) s> 0)
        int32_t rax_34
        
        do
            sub_1428f6600(sub_142898ea0(result, rbx_1))
            rbx_1 += 1
            rax_34 = sub_142898c70(result)
        while (rbx_1 s< rax_34)
    
    if (result != arg2)
        sub_142898a10(result)
    
    result = nullptr

sub_1428a6780(_Str1_1)
sub_1428a6780(var_a0)
sub_1428a6780(var_98)
__security_check_cookie(rax_1 ^ &var_d8)
return result
