// 函数: sub_142c74980
// 地址: 0x142c74980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_878
int64_t rax_1 = __security_cookie ^ &var_878
void* rdi = *arg1
int64_t rbp = 0x314
int32_t result_1 = 0
int64_t rax_2
void* rax_3

if (*(arg1 + 0x164) == 2)
    rax_2 = 0x314
    
    if (arg1[0x48] != -1)
        rax_2 = 0x33c
    
    rax_3 = 0x534

if (*(arg1 + 0x164) != 2 || *(rax_2 + arg1) == 2)
    rax_3 = 0x494

int64_t* rax_5 = sub_14289a500(&data_1434ea7b0)

if (*(rdi + 0x4b8) != 0)
    arg4 = sub_142c72950(arg1, arg2)

void* rax_6 = sub_14284fc50(*(arg2 + 0x18))
*(arg2 + 0x20) = rax_6
uint64_t result

if (rax_6 != 0)
    int32_t* rax_7
    char const* const r8_1
    
    if (*(arg1 + 0x164) == 2)
        r8_1 = "Proxy"
        rax_7 = 0x314
        
        if (arg1[0x48] != -1)
            rax_7 = 0x33c
    
    if (*(arg1 + 0x164) != 2 || *(rax_7 + arg1) == 2)
        r8_1 = "Server"
    
    sub_142c64850(rdi, "%s certificate:\n", r8_1, arg4)
    void var_848
    int32_t rax_9
    int512_t zmm2
    rax_9, zmm2 = sub_142c75ab0(sub_1428a3930(*(arg2 + 0x20)), &var_848, 0x800)
    void* r8_2 = &var_848
    
    if (rax_9 != 0)
        r8_2 = "[NONE]"
    
    sub_142c64850(rdi, " subject: %s\n", r8_2, zmm2)
    int512_t zmm2_1 = sub_1428e5890(rax_5, sub_14289a060(*(arg2 + 0x20)))
    char* var_858
    sub_142c64850(rdi, " start date: %.*s\n", zx.q(sub_142899cf0(rax_5, 3, 0, &var_858)), zmm2_1)
    sub_142899cf0(rax_5, 1, 0, 0)
    int512_t zmm2_2 = sub_1428e5890(rax_5, sub_1406bc560(*(arg2 + 0x20)))
    sub_142c64850(rdi, " expire date: %.*s\n", zx.q(sub_142899cf0(rax_5, 3, 0, &var_858)), zmm2_2)
    sub_142899cf0(rax_5, 1, 0, 0)
    sub_142899e70(rax_5)
    int32_t* rax_14
    
    if (*(arg1 + 0x164) == 2)
        rax_14 = 0x314
        
        if (arg1[0x48] != -1)
            rax_14 = 0x33c
    
    char rax_15
    
    if (*(arg1 + 0x164) != 2 || *(rax_14 + arg1) == 2)
        rax_15 = *(arg1 + 0x369)
    else
        rax_15 = *(arg1 + 0x3b1)
    
    int32_t result_3
    
    if (rax_15 != 0)
        result_3 = sub_142c753f0(arg1, *(arg2 + 0x20))
        result_1 = result_3
    
    if (rax_15 == 0 || result_3 == 0)
        int32_t rax_17
        int64_t r8_5
        int512_t zmm1_1
        int512_t zmm2_3
        rax_17, r8_5, zmm1_1, zmm2_3 = sub_142c75ab0(sub_1428a38f0(*(arg2 + 0x20)), &var_848, 0x800)
        
        if (rax_17 != 0)
            if (arg3 != 0)
                zmm2_3 = sub_142c64760(rdi, "SSL: couldn't get X509-issuer name!", r8_5, zmm2_3)
            
            result_1 = 0x23
            goto label_142c74ed8
        
        int64_t r8_7
        r8_7, zmm2_3 = sub_142c64850(rdi, " issuer: %s\n", &var_848, zmm2_3)
        int32_t rcx_25 = *(arg1 + 0x164)
        int32_t* rax_18
        
        if (rcx_25 == 2)
            rax_18 = 0x314
            
            if (arg1[0x48] != -1)
                rax_18 = 0x33c
        
        int64_t rax_19
        
        if (rcx_25 != 2 || *(rax_18 + arg1) == rcx_25)
            rax_19 = *(rdi + 0x4a0)
        else
            rax_19 = *(rdi + 0x540)
        
        if (rax_19 == 0)
        label_142c74e32:
            int32_t rax_24 = sub_14284fcd0(*(arg2 + 0x18))
            *(rax_3 + rdi) = rax_24
            
            if (rax_24 == 0)
                zmm2_3 = sub_142c64850(rdi, " SSL certificate verify ok.\n", r8_7, zmm2_3)
            else
                int32_t* rax_26
                
                if (*(arg1 + 0x164) == 2)
                    rax_26 = 0x314
                    
                    if (arg1[0x48] != -1)
                        rax_26 = 0x33c
                
                char rax_27
                
                if (*(arg1 + 0x164) != 2 || *(rax_26 + arg1) == 2)
                    rax_27 = arg1[0x6d].b
                else
                    rax_27 = arg1[0x76].b
                
                if (rax_27 == 0)
                    zmm2_3 = sub_142c64850(rdi, 
                        " SSL certificate verify result: %s (%ld), continuing anyway.\n", 
                        sub_1428b85a0(rax_24), zmm2_3)
                else
                    if (arg3 != 0)
                        zmm2_3 = sub_142c64760(rdi, "SSL certificate verify result: %s (%ld)", 
                            sub_1428b85a0(rax_24), zmm2_3)
                    
                    result_1 = 0x33
            
        label_142c74ed8:
            int32_t* rax_30
            
            if (*(arg1 + 0x164) == 2)
                rax_30 = 0x314
                
                if (arg1[0x48] != -1)
                    rax_30 = 0x33c
            
            char rax_31
            
            if (*(arg1 + 0x164) != 2 || *(rax_30 + arg1) == 2)
                rax_31 = *(arg1 + 0x36a)
            else
                rax_31 = *(arg1 + 0x3b2)
            
            int32_t result_4
            
            if (rax_31 != 0)
                result_4 = sub_142c75880(arg1, arg2, zmm2_3)
                result_1 = result_4
            
            if (rax_31 != 0 && result_4 != 0)
                goto label_142c74bbf
            
            int32_t result_2 = 0
            
            if (arg3 != 0)
                result_2 = result_1
            
            if (*(arg1 + 0x164) == 2 && arg1[0x48] != -1)
                rbp = 0x33c
            
            char* r8_14
            
            if (*(arg1 + 0x164) != 2 || *(arg1 + rbp) == 2)
                r8_14 = *(rdi + 0x710)
            else
                r8_14 = *(rdi + 0x718)
            
            var_858 = r8_14
            
            if (result_2 == 0 && r8_14 != 0)
                int32_t result_5
                int64_t r8_15
                int512_t zmm2_6
                result_5, r8_15, zmm2_6 = sub_142c74720(rdi, *(arg2 + 0x20), r8_14)
                result_2 = result_5
                
                if (result_5 != 0)
                    sub_142c64760(rdi, "SSL: public key does not match pinned public key!", r8_15, 
                        zmm2_6)
            
            sub_1428a2c50(*(arg2 + 0x20))
            result = zx.q(result_2)
            *(arg2 + 8) = 5
            *(arg2 + 0x20) = 0
        else
            int32_t* rax_20
            
            if (rcx_25 == 2)
                rax_20 = 0x314
                
                if (arg1[0x48] != -1)
                    rax_20 = 0x33c
            
            char* _FileName
            
            if (rcx_25 != 2 || *(rax_20 + arg1) == rcx_25)
                _FileName = *(rdi + 0x4a0)
            else
                _FileName = *(rdi + 0x540)
            
            FILE* _Stream = fopen(_FileName, "rt")
            
            if (_Stream != 0)
                int64_t* rax_21
                int512_t zmm2_4
                rax_21, zmm2_4 = sub_1428a3cc0(_Stream, 0, 0, nullptr, zmm1_1)
                
                if (rax_21 != 0)
                    fclose(_Stream)
                    int32_t rax_22
                    int512_t zmm2_5
                    rax_22, zmm2_5 = sub_1428ae7f0(rax_21, *(arg2 + 0x20))
                    
                    if (rax_22 == 0)
                        int32_t* rax_23
                        
                        if (*(arg1 + 0x164) == 2)
                            rax_23 = 0x314
                            
                            if (arg1[0x48] != -1)
                                rax_23 = 0x33c
                        
                        int64_t r8_11
                        
                        if (*(arg1 + 0x164) != 2 || *(rax_23 + arg1) == 2)
                            r8_11 = *(rdi + 0x4a0)
                        else
                            r8_11 = *(rdi + 0x540)
                        
                        zmm2_3 = sub_142c64850(rdi, " SSL certificate issuer check ok (%s)\n", 
                            r8_11, zmm2_5)
                        r8_7 = sub_1428a2c50(rax_21)
                        goto label_142c74e32
                    
                    if (arg3 != 0)
                        if (*(arg1 + 0x164) == 2 && arg1[0x48] != -1)
                            rbp = 0x33c
                        
                        int64_t r8_10
                        
                        if (*(arg1 + 0x164) != 2 || *(arg1 + rbp) == 2)
                            r8_10 = *(rdi + 0x4a0)
                        else
                            r8_10 = *(rdi + 0x540)
                        
                        sub_142c64760(rdi, "SSL: Certificate issuer check failed (%s)", r8_10, 
                            zmm2_5)
                    
                    sub_1428a2c50(*(arg2 + 0x20))
                    sub_1428a2c50(rax_21)
                    result = 0x53
                    *(arg2 + 0x20) = 0
                else
                    if (arg3 != 0)
                        if (*(arg1 + 0x164) == 2 && arg1[0x48] != -1)
                            rbp = 0x33c
                        
                        int64_t r8_9
                        
                        if (*(arg1 + 0x164) != 2 || *(arg1 + rbp) == 2)
                            r8_9 = *(rdi + 0x4a0)
                        else
                            r8_9 = *(rdi + 0x540)
                        
                        sub_142c64760(rdi, "SSL: Unable to read issuer cert (%s)", r8_9, zmm2_4)
                    
                    sub_1428a2c50(*(arg2 + 0x20))
                    sub_1428a2c50(0)
                    fclose(_Stream)
                    result = 0x53
            else
                if (arg3 != 0)
                    if (*(arg1 + 0x164) == 2 && arg1[0x48] != -1)
                        rbp = 0x33c
                    
                    int64_t r8_8
                    
                    if (*(arg1 + 0x164) != 2 || *(arg1 + rbp) == 2)
                        r8_8 = *(rdi + 0x4a0)
                    else
                        r8_8 = *(rdi + 0x540)
                    
                    sub_142c64760(rdi, "SSL: Unable to open issuer cert (%s)", r8_8, zmm2_3)
                
                sub_1428a2c50(*(arg2 + 0x20))
                result = 0x53
                *(arg2 + 0x20) = 0
    else
    label_142c74bbf:
        sub_1428a2c50(*(arg2 + 0x20))
        result = zx.q(result_1)
        *(arg2 + 0x20) = 0
else
    int64_t r8 = sub_142899e70(rax_5)
    
    if (arg3 != 0)
        sub_142c64760(rdi, "SSL: couldn't get peer certificate!", r8, arg4)
        result = 0x33
    else
        result = 0

__security_check_cookie(rax_1 ^ &var_878)
return result
