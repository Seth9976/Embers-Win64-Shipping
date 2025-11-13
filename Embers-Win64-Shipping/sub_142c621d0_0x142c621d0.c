// 函数: sub_142c621d0
// 地址: 0x142c621d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char* string_2 = *(arg1 + 0x4e38)
void* r14 = arg2
int64_t rdi
rdi.b = 0
int64_t rbp
rbp.b = 0
*arg3 = 0
char* _Str = *(arg1 + 0x880)
char* _EndPtr = arg4
char* rax_4
int64_t r8
rax_4, r8 = strpbrk(_Str, "\r\n")
int32_t result

if (rax_4 == 0)
    char* rdx_1 = *(arg1 + 0x880)
    char rcx_1 = *rdx_1
    
    if (rcx_1 != 0x3a)
        int64_t r12_1 = -1
        char const* const r13_1 = "file"
        char const* const rdx_4
        
        if ((rcx_1 - 0x61 u> 0x19 && rcx_1 - 0x41 u> 0x19) || rdx_1[1] != 0x3a)
        label_142c622c3:
            char* r9 = *(arg1 + 0x880)
            char* rcx_3 = r9
            
            while (true)
                char rax_7 = *rcx_3
                
                if (rax_7 == 0)
                    goto label_142c622f3
                
                if (rax_7 == 0x2f)
                    goto label_142c622f3
                
                if (rax_7 == 0x3a)
                    rdi.b = 1
                    
                    if (sub_142c704d0(r9, "file:", 5) == 0)
                        goto label_142c62426
                    
                    rdx_4 = "%*15[^\n/:]:%[^\n]"
                    break
                
                rcx_3 = &rcx_3[1]
                
                if (&rcx_3[neg.q(r9)] s>= 0x10)
                    goto label_142c622f3
            
            goto label_142c62324
        
        char* rcx_2 = *(arg1 + 0x658)
        
        if (rcx_2 == 0)
            goto label_142c622c3
        
        if (sub_142c70460(rcx_2, "file") == 0)
            goto label_142c622c3
        
    label_142c622f3:
        char* rcx_4 = *(arg1 + 0x658)
        int32_t rax_9
        
        if (rcx_4 != 0)
            rax_9 = sub_142c70460(rcx_4, "file")
        
        int64_t r8_2
        
        if (rcx_4 == 0 || rax_9 == 0)
        label_142c62426:
            *string_2 = 0
            char* string_3 = string_2
            int64_t var_a8_1 = *(r14 + 0xd0)
            void var_68
            int32_t rax_17
            rax_17, r8_2 =
                sub_1425f29b0(*(arg1 + 0x880), "%15[^\n/:]:%3[/]%[^\n/?#]%[^\n]", &var_68)
            
            if (rax_17 == 2)
            label_142c6245d:
                sub_142c64760(arg1, "Bad URL", r8_2, arg5)
                result = 3
            else if (rax_17 s>= 3)
                int64_t r8_11 = -1
                char var_98[0x8]
                
                do
                    r8_11 += 1
                while (var_98[r8_11] != 0)
                
                r13_1 = &var_68
                
                if (r8_11 == 2)
                    goto label_142c6265f
                
                int512_t zmm2 = sub_142c64850(arg1, 
                    "Unwillingly accepted illegal URL using %d slash%s!\n", r8_11, arg5)
                
                if (*(arg1 + 0x888) != 0)
                    data_143ccb8a0(*(arg1 + 0x880))
                
                *(r14 + 0xd0)
                int64_t rax_25
                rax_25, arg5 = sub_142c563e0("%s://%s%s", &var_68, zmm2)
                *(arg1 + 0x880) = rax_25
                
                if (rax_25 != 0)
                    *(arg1 + 0x888) = 1
                    goto label_142c6265f
                
                result = 0x1b
            else
                int32_t rax_18
                rax_18, r8_2 = sub_1425f29b0(*(arg1 + 0x880), "%[^\n/?#]%[^\n]", *(r14 + 0xd0))
                
                if (rax_18 s>= 1)
                    r13_1 = *(arg1 + 0x658)
                    
                    if (r13_1 != 0)
                        *arg3 = 1
                    else if (j_sub_142c704d0("FTP.", *(r14 + 0xd0), zx.q((&r13_1[4]).d)) == 0)
                        if (j_sub_142c704d0("DICT.", *(r14 + 0xd0), 5) == 0)
                            if (j_sub_142c704d0("LDAP.", *(r14 + 0xd0), 5) == 0)
                                if (j_sub_142c704d0("IMAP.", *(r14 + 0xd0), 5) == 0)
                                    if (j_sub_142c704d0("SMTP.", *(r14 + 0xd0), 5) == 0)
                                        r13_1 = "pop3"
                                        
                                        if (j_sub_142c704d0("POP3.", *(r14 + 0xd0), 5) == 0)
                                            r13_1 = "http"
                                        
                                        *arg3 = 1
                                    else
                                        r13_1 = "smtp"
                                        *arg3 = 1
                                else
                                    r13_1 = "IMAP"
                                    *arg3 = 1
                            else
                                r13_1 = "LDAP"
                                *arg3 = 1
                        else
                            r13_1 = "DICT"
                            *arg3 = 1
                    else
                        r13_1 = &data_1436b0f00
                        *arg3 = 1
                    
                    goto label_142c6265f
                
                sub_142c64760(arg1, "<url> malformed", r8_2, arg5)
                result = 3
        else
            rdx_4 = "%[^\n]"
        label_142c62324:
            int32_t rax_10
            rax_10, r8_2 = sub_1425f29b0(*(arg1 + 0x880), rdx_4, string_2)
            
            if (rax_10 != 1)
                goto label_142c6245d
            
            char rcx_6
            
            if (rdi.b == 0)
            label_142c62366:
                rcx_6 = *string_2
                
                if (rcx_6 != 0x2f)
                    goto label_142c62378
                
            label_142c6241a:
                rdi.b ^= 1
                *arg3 = rdi.b
            label_142c6265f:
                char* rax_26 = strchr(*(r14 + 0xd0), 0x40)
                void* string = &rax_26[1]
                
                if (rax_26 == 0)
                    string = *(r14 + 0xd0)
                
                char* rax_27 = strchr(string, 0x3f)
                
                if (rax_27 != 0)
                    int64_t rdi_1 = -1
                    
                    do
                        rdi_1 += 1
                    while (rax_27[rdi_1] != 0)
                    
                    int64_t r8_13 = -1
                    
                    do
                        r8_13 += 1
                    while (string_2[r8_13] != 0)
                    
                    memmove(&string_2[1 + rdi_1], string_2, r8_13.d + 1)
                    memcpy(&string_2[1], rax_27, rdi_1.d)
                    *string_2 = 0x2f
                    *rax_27 = 0
                    rbp.b = 1
                else if (*string_2 == 0)
                    *string_2 = 0x2f
                    rbp.b = 1
                
                void* const rdi_2 = 3
                
                if (*string_2 != 0x2f)
                    int64_t r8_16 = -1
                    
                    do
                        r8_16 += 1
                    while (string_2[r8_16] != 0)
                    
                    memmove(&string_2[1], string_2, r8_16.d + 1)
                    *string_2 = 0x2f
                    goto label_142c62789
                
                if (*(arg1 + 0x852) != 0)
                    goto label_142c62780
                
                void* string_5 = sub_142c88f90(string_2)
                void* string_4 = string_5
                
                if (string_5 == 0)
                    result = 0x1b
                else
                    void* r8_19 = string_2 - string_5
                    uint32_t rdx_21
                    uint32_t i
                    
                    do
                        uint32_t rdx_20 = zx.d(*string_5)
                        i = zx.d(*(string_5 + r8_19))
                        rdx_21 = rdx_20 - i
                        
                        if (rdx_20 != i)
                            break
                        
                        string_5 += 1
                    while (i != 0)
                    
                    if (rdx_21 == 0)
                        data_143ccb8a0(string_4, rdx_21)
                    label_142c62780:
                        
                        if (rbp.b != 0)
                            goto label_142c62789
                        
                    label_142c62900:
                        int512_t zmm2_1
                        result, zmm2_1 = sub_142c60d90(arg1, r14, r13_1, arg5)
                        
                        if (result == 0)
                            result = sub_142c61ff0(arg1, r14, _EndPtr, arg6, arg7)
                            
                            if (result == 0)
                                char* string_1 = *(r14 + 0xd0)
                                
                                if (*string_1 == 0x5b)
                                    char* _Str2 = strchr(string_1, result + 0x25)
                                    
                                    if (_Str2 != 0)
                                        int32_t rax_36
                                        int64_t r8_28
                                        rax_36, r8_28 = strncmp("%25", _Str2, 3)
                                        
                                        if (rax_36 != 0)
                                            zmm2_1 = sub_142c64850(arg1, 
                                                "Please URL encode %% as %%25, see RFC 6874.\n", 
                                                r8_28, zmm2_1)
                                            rdi_2 = 1
                                        
                                        uint32_t rax_37
                                        int64_t r8_29
                                        rax_37, r8_29 = strtoul(rdi_2 + _Str2, &_EndPtr, 0xa)
                                        char* _EndPtr_1 = _EndPtr
                                        
                                        if (*_EndPtr_1 != 0x5d)
                                            sub_142c64850(arg1, "Invalid IPv6 address format\n", 
                                                r8_29, zmm2_1)
                                        else
                                            bool cond:5_1
                                            
                                            do
                                                cond:5_1 = _EndPtr_1[r12_1 + 1] != 0
                                                r12_1 += 1
                                            while (cond:5_1)
                                            memmove(_Str2, _EndPtr_1, r12_1.d + 1)
                                            *(r14 + 0xb8) = rax_37
                                
                                int32_t rax_38 = *(arg1 + 0x7e8)
                                
                                if (rax_38 != 0)
                                    *(r14 + 0xb8) = rax_38
                                
                                char* rax_39 = strchr(string_2, 0x23)
                                
                                if (rax_39 != 0)
                                    *rax_39 = 0
                                    char* rax_40 = strchr(*(arg1 + 0x880), 0x23)
                                    
                                    if (rax_40 != 0)
                                        *rax_40 = 0
                                
                                result = 0
                    else
                        data_143ccb8a0(*(arg1 + 0x4e30), rdx_21)
                        *(arg1 + 0x4e30) = string_4
                        string_2 = string_4
                        *(arg1 + 0x4e38) = string_4
                    label_142c62789:
                        void* rbp_1 = -ffffffffffffffff
                        bool cond:4_1
                        
                        do
                            cond:4_1 = *(string_2 + rbp_1 + 1) != 0
                            rbp_1 += 1
                        while (cond:4_1)
                        void* rsi_2 = -ffffffffffffffff
                        
                        do
                            rsi_2 += 1
                        while (*(*(r14 + 0xd0) + rsi_2) != 0)
                        
                        if (*arg3 != 0)
                            goto label_142c6280e
                        
                        char* r14_1 = -ffffffffffffffff
                        
                        do
                            r14_1 = &r14_1[1]
                        while (*(r14_1 + r13_1) != 0)
                        
                        int32_t rax_30
                        int64_t r8_21
                        rax_30, r8_21 = j_sub_142c704d0(r13_1, *(arg1 + 0x880), r14_1)
                        
                        if (rax_30 == 0)
                            sub_142c64760(arg1, "<url> malformed", r8_21, arg5)
                            result = 3
                        else
                            void* rsi_3 = rsi_2 + r14_1
                            
                            if (j_sub_142c704d0("://", *(arg1 + 0x880) + r14_1, 3) == 0)
                                int32_t rax_33
                                int64_t r8_22
                                rax_33, r8_22 = j_sub_142c704d0("file:", *(arg1 + 0x880), 5)
                                
                                if (rax_33 != 0)
                                    int64_t rcx_26
                                    rcx_26.b = *(*(arg1 + 0x880) + 5) == 0x2f
                                    rsi_2 = rsi_3 + rcx_26 + 1
                                    goto label_142c6280e
                                
                                sub_142c64760(arg1, "<url> malformed", r8_22, arg5)
                                result = 3
                            else
                                rsi_2 = rsi_3 + 3
                            label_142c6280e:
                                void* rax_32 = data_143ccb898(rbp_1 + 1 + rsi_2)
                                
                                if (rax_32 != 0)
                                    memcpy(rax_32, *(arg1 + 0x880), rsi_2.d)
                                    memcpy(rax_32 + rsi_2, string_2, rbp_1.d + 1)
                                    
                                    if (*(arg1 + 0x888) != 0)
                                        data_143ccb8a0(*(arg1 + 0x880))
                                        *(arg1 + 0x880) = 0
                                        *(arg1 + 0x888) = 0
                                    
                                    arg5 = sub_142c64850(arg1, "Rebuilt URL to: %s\n", rax_32, arg5)
                                    *(arg1 + 0x880) = rax_32
                                    r14 = arg2
                                    *(arg1 + 0x888) = 1
                                    goto label_142c62900
                                
                                result = 0x1b
            else
                rcx_6 = *string_2
                
                if (rcx_6 == 0x2f)
                    if (string_2[1] == rcx_6)
                        int64_t r8_3 = -1
                        
                        do
                            r8_3 += 1
                        while (string_2[2 + r8_3] != 0)
                        
                        memmove(string_2, &string_2[2], r8_3.d + 1)
                    
                    goto label_142c62366
                
            label_142c62378:
                
                if (rcx_6 - 0x61 u<= 0x19)
                    if (string_2[1] == 0x3a)
                        goto label_142c6241a
                else if (rcx_6 - 0x41 u<= 0x19 && string_2[1] == 0x3a)
                    goto label_142c6241a
                
                int32_t rax_12 = j_sub_142c704d0("localhost/", string_2, 0xa)
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13, r8_2 = j_sub_142c704d0("127.0.0.1/", string_2, zx.q(rax_12 + 0xa))
                
                if (rax_12 != 0 || rax_13 != 0)
                    int64_t r8_6 = -1
                    void* rdx_9 = &string_2[0xa]
                    
                    if (string_2[0xa] != 0x2f)
                        rdx_9 = &string_2[9]
                    
                    do
                        r8_6 += 1
                    while (*(rdx_9 + r8_6) != 0)
                    
                    memmove(string_2, rdx_9, r8_6.d + 1)
                    goto label_142c6241a
                
                sub_142c64760(arg1, 
                    "Invalid file://hostname/, expected localhost or 127.0.0.1 or none", r8_2, arg5)
                result = 3
    else
        sub_142c64760(arg1, "Bad URL, colon is first character", r8, arg5)
        result = 3
else
    sub_142c64760(arg1, "Illegal characters found in URL", r8, arg5)
    result = 3

__security_check_cookie(rax_1 ^ &var_c8)
return result
