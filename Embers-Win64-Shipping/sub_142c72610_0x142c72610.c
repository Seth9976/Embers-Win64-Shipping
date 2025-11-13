// 函数: sub_142c72610
// 地址: 0x142c72610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rdi = *arg1
int64_t rbp = arg7
int32_t rax_2
int64_t r8
rax_2, r8 = sub_142c728c0(arg4)
int64_t result

if (arg3 != 0 || rax_2 == 0x2a)
    if (arg9 != 0)
        sub_14284e7e0(arg2, arg9)
        Concurrency::details::WorkQueue::SetOwningContext(arg2, sub_142c746b0)
    
    char var_158[0x100]
    int512_t zmm1
    int512_t zmm2
    
    if (rax_2 == 1)
        int32_t rax_5
        rax_5, zmm1, zmm2 = sub_14288d810(arg2, arg3, arg5)
        
        if (rax_5 == 1)
        label_142c72775:
            int32_t rax_7
            int64_t r8_4
            rax_7, r8_4 = sub_142c728c0(arg8)
            
            if (rax_7 == 1)
                if (rbp == 0)
                    rbp = arg3
                
                goto label_142c727dc
            
            if (rax_7 == 2)
            label_142c727dc:
                int32_t rax_8
                int512_t zmm2_3
                rax_8, zmm2_3 = sub_14288d630(arg2, rbp, rax_7, zmm1)
                
                if (rax_8 == 1)
                    void* rax_9
                    int64_t r8_7
                    rax_9, r8_7 = sub_14284fdd0(arg2)
                    
                    if (rax_9 != 0)
                        int64_t* rax_10 = sub_14284f9e0(rax_9)
                        
                        if (rax_10 != 0)
                            int32_t* rax_11 = sub_1428a3900(rax_10)
                            sub_142896470(rax_11, sub_14284fca0(rax_9))
                            sub_1428965a0(rax_11)
                        
                        sub_14284f4d0(rax_9)
                        int32_t rax_13
                        int64_t r8_8
                        rax_13, r8_8 = sub_14284dbb0(arg2)
                        
                        if (rax_13 != 0)
                            result = 1
                        else
                            sub_142c64760(rdi, 
                                "Private key does not match the certificate public key", r8_8, 
                                zmm2_3)
                            result = 0
                    else
                        sub_142c64760(rdi, "unable to create an SSL structure", r8_7, zmm2_3)
                        result = 0
                else
                    sub_142c64760(rdi, "unable to set private key file: '%s' type %s", rbp, zmm2_3)
                    result = 0
            else if (rax_7 == 0x2a)
                sub_142c64760(rdi, "file type ENG for private key not supported", r8_4, zmm2)
                result = 0
            else if (rax_7 == 0x2b)
                sub_142c64760(rdi, "file type P12 for private key not supported", r8_4, zmm2)
                result = 0
            else
                sub_142c64760(rdi, "not supported file type for private key", r8_4, zmm2)
                result = 0
        else
            sub_142c64760(rdi, 
                "could not load PEM client certificate, OpenSSL error %s, (no key found, wrong pass "
            "phrase, or wrong file format?)", 
                &var_158, sub_1428a4aa0(sub_1428a4e50(), &var_158, 0x100))
            result = 0
    else if (rax_2 == 2)
        int32_t rax_3
        rax_3, zmm1, zmm2 = sub_14288d830(arg2, arg3, 2, arg5)
        
        if (rax_3 == 1)
            goto label_142c72775
        
        sub_142c64760(rdi, 
            "could not load ASN1 client certificate, OpenSSL error %s, (no key found, wrong pass phrase, "
        "or wrong file format?)", 
            &var_158, sub_1428a4aa0(sub_1428a4e50(), &var_158, 0x100))
        result = 0
    else if (rax_2 == 0x2a)
        sub_142c64760(rdi, "file type ENG for certificate not implemented", r8, arg6)
        result = 0
    else if (rax_2 == 0x2b)
        sub_142c64760(rdi, "file type P12 for certificate not supported", r8, arg6)
        result = 0
    else
        sub_142c64760(rdi, "not supported file type '%s' for certificate", arg4, arg6)
        result = 0
else
    result = 1

__security_check_cookie(rax_1 ^ &var_178)
return result
