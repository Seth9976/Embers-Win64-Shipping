// 函数: sub_142c6a6e0
// 地址: 0x142c6a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rdi = *arg1
char var_ac = 0
int64_t* rsi = arg1
void* const var_a0 = &data_1434cce10
char* str1_1 = *(rdi + 0x4e38)
int64_t var_57 = 0
char* rax_2 = arg1[0x1a]
char var_58 = 0
int32_t r13 = *(rdi + 0x438)
*arg2 = 1
int32_t var_b0 = r13
int64_t var_80 = 0
int64_t var_b8 = 0
int64_t var_78 = 0
int32_t result

if (arg1[0x42].d s>= 0x14)
    result = 1
else if (arg1[0xf5].d != 3)
    int64_t* rbx_1 = *(rdi + 0x250)
    
    if (*(rdi + 0x4a98) != 0)
        goto label_142c6a7fa
    
    data_143ccb8a0(*(rdi + 0x4aa0))
    int64_t rax_3 = data_143ccb8b0(rsi[0x1a])
    *(rdi + 0x4aa0) = rax_3
    
    if (rax_3 == 0)
    labelid_12c:
        result = 0x1b
    else
        *(rdi + 0x4aa8) = *(rsi + 0x17c)
    label_142c6a7fa:
        rbx_1[6] = 0
        rbx_1[5] = 0
        
        if ((*(rsi[0x87] + 0x7c) & 7) != 0)
            if (*(rdi + 0x5e9) != 0)
                r13 = 4
            
            var_b0 = r13
        
        char const* const r12_1 = *(rdi + 0x650)
        char const* const var_a8_1 = r12_1
        
        if (r12_1 == 0)
            if (*(rdi + 0x5e8) != r12_1.b)
                r12_1 = "HEAD"
            else if (r13 s< 2)
                r12_1 = &data_1436b441c
            else if (r13 s<= 3)
                r12_1 = "POST"
            else if (r13 == 4)
                r12_1 = &data_1436b483c
            else if (r13 == 5)
                r12_1 = "HEAD"
            else if (r13 != 6)
                r12_1 = &data_1436b441c
            else
                r12_1 = "OPTIONS"
            
            var_a8_1 = r12_1
        
        for (int64_t* i = *(*rsi + 0x3c0); i != 0; i = i[1])
            if (sub_142c704d0(*i, "User-Agent:", 0xb) != 0)
                if (*i != 0)
                    data_143ccb8a0(rsi[0x8d])
                    rsi[0x8d] = 0
                
                break
        
        int512_t zmm2
        result, zmm2 = sub_142c6cf50(rsi, r12_1, str1_1, 0, arg4, arg3)
        
        if (result == 0)
            if (*(rdi + 0x4bad) != result.b)
                if (((r13 - 1) & 0xfffffffb) == 0)
                    *(rsi + 0x402) = 0
                else
                    *(rsi + 0x402) = 1
            else if (*(rdi + 0x4bbd) == result.b || ((r13 - 1) & 0xfffffffb) == 0)
                *(rsi + 0x402) = 0
            else
                *(rsi + 0x402) = 1
            
            data_143ccb8a0(rsi[0x91])
            rsi[0x91] = 0
            char* rax_11
            
            if (*(rdi + 0x890) != 0)
                rax_11 = sub_142c6c910(rsi, "Referer:")
            
            if (*(rdi + 0x890) == 0 || rax_11 != 0)
                rsi[0x91] = 0
            label_142c6a9b0:
                
                if (*(rdi + 0x640) != 0 && sub_142c6c910(rsi, "Cookie:") == 0)
                    var_80 = *(rdi + 0x640)
                
                char* rax_15 = sub_142c6c910(rsi, "Accept-Encoding:")
                
                if (rax_15 != 0 || *(rdi + 0x668) == rax_15)
                    data_143ccb8a0(rsi[0x8e])
                    rsi[0x8e] = 0
                label_142c6aa4d:
                    char* rax_17 = sub_142c6c910(rsi, "TE:")
                    int64_t rax_19
                    
                    if (rax_17 == 0 && *(rdi + 0x5e3) != rax_17.b)
                        char* rax_18 = sub_142c6c910(rsi, "Connection:")
                        data_143ccb8a0(rsi[0x95])
                        rsi[0x95] = 0
                        
                        if (rax_18 == 0)
                            rax_19 = data_143ccb8b0("Connection: TE\r\nTE: gzip\r\n")
                        else
                            rax_19, zmm2 = sub_142c563e0("%s, TE\r\nTE: gzip\r\n", rax_18, zmm2)
                        
                        rsi[0x95] = rax_19
                    
                    if (rax_17 == 0 && *(rdi + 0x5e3) != rax_17.b && rax_19 == 0)
                    labelid_12c:
                        result = 0x1b
                    else
                        char* rax_20
                        int64_t r8_2
                        rax_20, r8_2 = sub_142c6c910(rsi, "Transfer-Encoding:")
                        
                        if (rax_20 == 0)
                            if ((*(rsi[0x87] + 0x7c) & 3) == 0 || *(rdi + 0x5e9) == 0
                                    || *(rdi + 0x4e68) != -1)
                                *(rdi + 0x249) = 0
                            label_142c6ab55:
                                void* rax_24 = "Transfer-Encoding: chunked\r\n"
                                
                                if (*(rdi + 0x249) == 0)
                                    rax_24 = &data_1434cce10
                                
                                var_a0 = rax_24
                                goto label_142c6ab6f
                            
                            if (*(rsi + 0x402) != 0)
                                goto label_142c6ab55
                            
                            if (sub_142c6ea00(rdi, rsi) != 0)
                                *(rdi + 0x249) = 1
                                goto label_142c6ab55
                            
                            sub_142c64760(rdi, "Chunky upload is not supported by HTTP 1.0", r8_2, 
                                zmm2)
                            result = 0x19
                        else
                            *(rdi + 0x249) = sub_142c6c980(rax_20, "Transfer-Encoding:", "chunked")
                        label_142c6ab6f:
                            data_143ccb8a0(rsi[0x92])
                            rsi[0x92] = 0
                            char* rax_25 = sub_142c6c910(rsi, "Host:")
                            int32_t rax_26
                            
                            if (rax_25 != 0 && *(rdi + 0x4a98) != 0)
                                rax_26 = sub_142c70460(*(rdi + 0x4aa0), rsi[0x1a])
                            
                            if (rax_25 == 0 || (*(rdi + 0x4a98) != 0 && rax_26 == 0))
                                char rcx_25 = (*(rsi[0x88] + 0x7c)).b
                                int32_t var_118
                                int64_t rax_33
                                
                                if (((rcx_25 & 2) == 0 || *(rsi + 0x17c) != 0x1bb)
                                        && ((rcx_25 & 1) == 0 || *(rsi + 0x17c) != 0x50))
                                    var_118 = *(rsi + 0x17c)
                                    void* const rdx_9 = &data_1434cce10
                                    
                                    if (*(rsi + 0x3fa) != 0)
                                        rdx_9 = &data_1436b32c0
                                    
                                    rax_33, zmm2 =
                                        sub_142c563e0("Host: %s%s%s:%hu\r\n", rdx_9, zmm2)
                                else
                                    void* const rdx_8 = &data_1434cce10
                                    
                                    if (*(rsi + 0x3fa) != 0)
                                        rdx_8 = &data_1436b32c0
                                    
                                    rax_33, zmm2 = sub_142c563e0("Host: %s%s%s\r\n", rdx_8, zmm2)
                                
                                rsi[0x92] = rax_33
                                
                                if (rax_33 == 0)
                                labelid_12c:
                                    result = 0x1b
                                else
                                label_142c6ad4f:
                                    
                                    if (*(rsi + 0x3f6) == 0 || *(rsi + 0x401) != 0)
                                    label_142c6afaa:
                                        
                                        if (r13 == 3)
                                            char* rax_47 = sub_142c6c910(rsi, "Content-Type:")
                                            var_118.q = &rbx_1[1]
                                            result, zmm2 = sub_142c8a5d0(rdi, rbx_1, 
                                                *(rdi + 0x3d0), rax_47, var_118)
                                        
                                        if (r13 != 3 || result == 0)
                                            char* rax_48
                                            int64_t r8_13
                                            rax_48, r8_13 = sub_142c6c910(rsi, "Accept:")
                                            char const* const rcx_42 = "Accept: */*\r\n"
                                            
                                            if (rax_48 != 0)
                                                rcx_42 = nullptr
                                            
                                            rbx_1[4] = rcx_42
                                            uint64_t rax_49
                                            
                                            if (r13 - 2 u> 2)
                                            label_142c6b132:
                                                
                                                if (*(rdi + 0x4e41) == 0)
                                                    goto label_142c6b22c
                                                
                                                if (((r13 - 1) & 0xfffffffb) == 0)
                                                    rax_49 = sub_142c6c910(rsi, "Range:")
                                                
                                                if (((r13 - 1) & 0xfffffffb) != 0 || rax_49 != 0)
                                                    if (r13 == 1)
                                                        goto label_142c6b22c
                                                    
                                                    if (sub_142c6c910(rsi, "Content-Range:") != 0)
                                                        goto label_142c6b22c
                                                    
                                                    data_143ccb8a0(rsi[0x90])
                                                    
                                                    if (*(rdi + 0x3b8) s>= 0)
                                                        int64_t rdx_17 = *(rdi + 0x4e48)
                                                        
                                                        if (*(rdi + 0x4e50) == 0)
                                                            *(rdi + 0x4e68)
                                                            rax_49, zmm2 = sub_142c563e0(
                                                                "Content-Range: bytes %s/%I64d\r\n", 
                                                                rdx_17, zmm2)
                                                        else
                                                            *(rdi + 0x4e68)
                                                            rax_49, zmm2 = sub_142c563e0(
                                                                "Content-Range: bytes %s%I64d/%I64d\r\n", 
                                                                rdx_17, zmm2)
                                                    else
                                                        rax_49, zmm2 = sub_142c563e0(
                                                            "Content-Range: bytes 0-%I64d/%I64d\r\n", 
                                                            *(rdi + 0x4e68) - 1, zmm2)
                                                    
                                                    rsi[0x90] = rax_49
                                                    
                                                    if (rax_49 != 0)
                                                        goto label_142c6b22c
                                                    
                                                labelid_12c:
                                                    result = 0x1b
                                                else
                                                    data_143ccb8a0(rsi[0x90])
                                                    rax_49, zmm2 = sub_142c563e0(
                                                        "Range: bytes=%s\r\n", *(rdi + 0x4e48), 
                                                        zmm2)
                                                    rsi[0x90] = rax_49
                                                label_142c6b22c:
                                                    
                                                    if (*(rdi + 0x4e24) == 0xa)
                                                        rax_49.b = 0
                                                    else
                                                        int32_t rcx_56 = rsi[0x42].d
                                                        
                                                        if (rcx_56 == 0xa)
                                                            rax_49.b = 0
                                                        else
                                                            rax_49 = zx.q(*(rdi + 0x43c))
                                                            
                                                            if (rax_49.d != 1)
                                                                if (rax_49.d s< 0 || rax_49.d == 1)
                                                                    rax_49.b = 0
                                                                else
                                                                    rax_49.b = 1
                                                            else if (rcx_56 s<= 0xa || rax_49.d s< 0
                                                                    || rax_49.d == 1)
                                                                rax_49.b = 0
                                                            else
                                                                rax_49.b = 1
                                                    
                                                    int64_t* rax_54 = data_143ccb8b8(1, 0x18)
                                                    
                                                    if (rax_54 == 0)
                                                    label_142c6ac8e:
                                                        result = 0x1b
                                                    else
                                                        int512_t zmm2_1
                                                        result, zmm2_1 = sub_142c6c410(rax_54, 
                                                            "%s ", r12_1, zmm2)
                                                        
                                                        if (result == 0)
                                                            char* str1_2 = *(rdi + 0x7d0)
                                                            
                                                            if (str1_2 != 0)
                                                                str1_1 = str1_2
                                                            
                                                            if (var_ac == 0)
                                                                int64_t r8_21 = -1
                                                                
                                                                do
                                                                    r8_21 += 1
                                                                while (str1_1[r8_21] != 0)
                                                                
                                                                result =
                                                                    sub_142c6c0d0(rax_54, str1_1, r8_21)
                                                            else
                                                                rsi[0x3f]
                                                                var_118.q = &str1_1[6]
                                                                result, zmm2_1 = sub_142c6c410(rax_54, 
                                                                    "ftp://%s:%s@%s", rsi[0x3e], zmm2_1)
                                                            
                                                            if (result == 0)
                                                                char* rax_56
                                                                
                                                                if (*(rsi + 0x3f6) != result.b
                                                                        && *(rsi + 0x401) == result.b)
                                                                    rax_56 =
                                                                        sub_142c6c880(rsi, "Proxy-Connection:")
                                                                
                                                                void* const rcx_61
                                                                char const* const r12_3
                                                                
                                                                if (*(rsi + 0x3f6) == result.b
                                                                        || *(rsi + 0x401) != result.b
                                                                        || rax_56 != 0)
                                                                    rcx_61 = &data_1434cce10
                                                                    r12_3 = &data_1434cce10
                                                                else
                                                                    r12_3 =
                                                                        "Proxy-Connection: Keep-Alive\r\n"
                                                                    rcx_61 = &data_1434cce10
                                                                
                                                                void* const r15_1
                                                                
                                                                if (*(rdi + 0x890) != 0)
                                                                    r15_1 = rsi[0x91]
                                                                
                                                                if (*(rdi + 0x890) == 0 || r15_1 == 0)
                                                                    r15_1 = &data_1434cce10
                                                                
                                                                char* rax_57 = *(rdi + 0x668)
                                                                void* const r11_1
                                                                
                                                                if (rax_57 != 0 && *rax_57 != 0)
                                                                    r11_1 = rsi[0x8e]
                                                                
                                                                if (rax_57 == 0 || *rax_57 == 0
                                                                        || r11_1 == 0)
                                                                    r11_1 = &data_1434cce10
                                                                
                                                                void* rax_58 = rsi[0x95]
                                                                void* const rbp_7 = &data_1434cce10
                                                                void* const r14_2 = &data_1434cce10
                                                                
                                                                if (rax_58 != 0)
                                                                    rbp_7 = rax_58
                                                                
                                                                void* rax_60 = rbx_1[4]
                                                                
                                                                if (rax_60 != 0)
                                                                    r14_2 = rax_60
                                                                
                                                                char* rax_61 = *(rdi + 0x740)
                                                                void* const r10_1
                                                                
                                                                if (rax_61 != 0 && *rax_61 != 0)
                                                                    r10_1 = rsi[0x8d]
                                                                
                                                                if (rax_61 == 0 || *rax_61 == 0
                                                                        || r10_1 == 0)
                                                                    r10_1 = &data_1434cce10
                                                                
                                                                void* const r9_11
                                                                
                                                                if (*(rdi + 0x4e41) != 0)
                                                                    r9_11 = rsi[0x90]
                                                                
                                                                if (*(rdi + 0x4e41) == 0 || r9_11 == 0)
                                                                    r9_11 = &data_1434cce10
                                                                
                                                                void* rax_62 = rsi[0x8f]
                                                                void* const r8_22 = &data_1434cce10
                                                                int32_t rdx_19 = 0x434cce10
                                                                
                                                                if (rax_62 != 0)
                                                                    r8_22 = rax_62
                                                                
                                                                int64_t rax_63 = rsi[0x8c]
                                                                
                                                                if (rax_63 != 0)
                                                                    rdx_19 = rax_63.d
                                                                
                                                                void* rax_64 = rsi[0x92]
                                                                
                                                                if (rax_64 != 0)
                                                                    rcx_61 = rax_64
                                                                
                                                                void* const var_c8_1 = var_a0
                                                                char const* const var_d0_1 = r12_3
                                                                void* const var_d8_1 = r15_1
                                                                void* const var_e0_1 = r11_1
                                                                void* const var_e8_1 = rbp_7
                                                                void* const var_f0_1 = r14_2
                                                                void* const var_f8_1 = r10_1
                                                                void* const var_100_1 = r9_11
                                                                void* const var_108_1 = r8_22
                                                                int32_t var_110_1 = rdx_19
                                                                var_118.q = rcx_61
                                                                int32_t result_5
                                                                int512_t zmm2_2
                                                                result_5, zmm2_2 = sub_142c6c410(
                                                                    rax_54, 
                                                                    "%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s", 
                                                                    &var_58, zmm2_1)
                                                                int32_t result_4 = result_5
                                                                data_143ccb8a0(rsi[0x8f])
                                                                int64_t rcx_64 = rsi[0x8c]
                                                                rsi[0x8f] = 0
                                                                int64_t r8_24 = data_143ccb8a0(rcx_64)
                                                                rsi[0x8c] = 0
                                                                
                                                                if (result_4 != 0)
                                                                    result = result_4
                                                                else if ((*(rsi[0x87] + 0x80) & 1) != 0
                                                                        || rsi[0x42].d == 0x14
                                                                        || *(rdi + 0x43c) != 3)
                                                                    int64_t rax_67 = *(rdi + 0x8b0)
                                                                    
                                                                    if (rax_67 != 0 || var_80 != 0)
                                                                        int32_t r15_2 = 0
                                                                        void* const r13_2
                                                                        
                                                                        if (rax_67 == 0)
                                                                            r13_2 = &data_1434cce10
                                                                        else
                                                                            sub_142c52530(rdi, 2, 2)
                                                                            char* rax_68 = rsi[0x93]
                                                                            char* rdx_20 = rax_2
                                                                            
                                                                            if (rax_68 != 0)
                                                                                rdx_20 = rax_68
                                                                            
                                                                            void** i_1 = sub_142c584f0(
                                                                                *(rdi + 0x8b0), rdx_20, 
                                                                                *(rdi + 0x4e38), 
                                                                                (*(rsi[0x87] + 0x7c) u>> 1).b & 1)
                                                                            r8_24 = sub_142c52570(rdi, 2)
                                                                            r13_2 = &data_1434cce10
                                                                            
                                                                            if (i_1 != 0)
                                                                                void** i_3 = i_1
                                                                                
                                                                                do
                                                                                    if (i_1[2] != 0)
                                                                                        if (r15_2 == 0)
                                                                                            int32_t result_6
                                                                                            result_6, zmm2_2 = sub_142c6c410(
                                                                                                rax_54, "Cookie: ", r8_24, zmm2_2)
                                                                                            result_4 = result_6
                                                                                            
                                                                                            if (result_6 != 0)
                                                                                                break
                                                                                        
                                                                                        i_1[1]
                                                                                        void* const r8_26 = &data_1434cce10
                                                                                        var_118.q = i_1[2]
                                                                                        
                                                                                        if (r15_2 != 0)
                                                                                            r8_26 = &data_1436b4adc
                                                                                        
                                                                                        int32_t result_7
                                                                                        result_7, r8_24, zmm2_2 = sub_142c6c410(
                                                                                            rax_54, "%s%s=%s", r8_26, zmm2_2)
                                                                                        result_4 = result_7
                                                                                        
                                                                                        if (result_7 != 0)
                                                                                            break
                                                                                        
                                                                                        r15_2 += 1
                                                                                    
                                                                                    i_1 = *i_1
                                                                                while (i_1 != 0)
                                                                                
                                                                                r8_24 = sub_142c58460(i_3)
                                                                                rsi = arg1
                                                                        
                                                                        if (var_80 == 0 || result_4 != 0)
                                                                            goto label_142c6b625
                                                                        
                                                                        bool cond:17_1 = r15_2 != 0
                                                                        
                                                                        if (r15_2 != 0)
                                                                            goto label_142c6b607
                                                                        
                                                                        int32_t result_1
                                                                        result_1, zmm2_2 = sub_142c6c410(
                                                                            rax_54, "Cookie: ", r8_24, zmm2_2)
                                                                        
                                                                        if (result_1 != 0)
                                                                            result = result_1
                                                                        else
                                                                            cond:17_1 = r15_2 != 0
                                                                        label_142c6b607:
                                                                            
                                                                            if (cond:17_1)
                                                                                r13_2 = &data_1436b4adc
                                                                            
                                                                            int32_t result_8
                                                                            result_8, zmm2_2 = sub_142c6c410(
                                                                                rax_54, "%s%s", r13_2, zmm2_2)
                                                                            result_4 = result_8
                                                                            r15_2 += 1
                                                                        label_142c6b625:
                                                                            
                                                                            if (r15_2 == 0)
                                                                                goto label_142c6b643
                                                                            
                                                                            if (result_4 != 0)
                                                                                result = result_4
                                                                            else
                                                                                result_4 = sub_142c6c0d0(rax_54, 
                                                                                    &data_1436b2f34, zx.q(result_4 + 2))
                                                                            label_142c6b643:
                                                                                
                                                                                if (result_4 == 0)
                                                                                    goto label_142c6b657
                                                                                
                                                                                result = result_4
                                                                    else
                                                                    label_142c6b657:
                                                                        int512_t zmm2_3
                                                                        result, zmm2_3 =
                                                                            sub_142c6c700(rdi, rax_54, zmm2_2)
                                                                        
                                                                        if (result == 0)
                                                                            int64_t r8_30
                                                                            int512_t zmm2_4
                                                                            result, r8_30, zmm2_4 =
                                                                                sub_142c6c490(rsi, 0, rax_54, zmm2_3)
                                                                            
                                                                            if (result == 0)
                                                                                rbx_1[2] = 0
                                                                                sub_142c6f270(rdi, -1)
                                                                                void* var_108_3
                                                                                int32_t result_3
                                                                                int64_t rbp_8
                                                                                void* r14_5
                                                                                int512_t zmm2_6
                                                                                int512_t zmm2_7
                                                                                
                                                                                if (var_b0 == 2)
                                                                                    char rax_89 = *(rsi + 0x402)
                                                                                    
                                                                                    if (rax_89 != 0)
                                                                                        rbp_8 = 0
                                                                                        
                                                                                        if (*(rdi + 0x249) != 0)
                                                                                            goto label_142c6bae1
                                                                                        
                                                                                        goto label_142c6baa7
                                                                                    
                                                                                    rbp_8 = *(rdi + 0x4e68)
                                                                                    
                                                                                    if (rbp_8 == -1 || *(rdi + 0x249) != 0)
                                                                                    label_142c6bae1:
                                                                                        char* rax_91
                                                                                        int64_t r8_47
                                                                                        rax_91, r8_47 =
                                                                                            sub_142c6c910(rsi, "Content-Type:")
                                                                                        
                                                                                        if (rax_91 == 0)
                                                                                            result, zmm2_4 = sub_142c6c410(rax_54, 
                                                                                                "Content-Type: "
                                                                                            "application/x-www-form-urlencoded\r"
                                                                                            "
                                                                                                r8_47, zmm2_4)
                                                                                        
                                                                                        if (rax_91 != 0 || result == 0)
                                                                                            char* rax_92 =
                                                                                                sub_142c6c910(rsi, "Expect:")
                                                                                            
                                                                                            if (rax_92 == 0)
                                                                                                if (rbp_8 u<= 0x400)
                                                                                                    *(rdi + 0x4e28) = 0
                                                                                                    goto label_142c6bb5c
                                                                                                
                                                                                                result, zmm2_4 =
                                                                                                    sub_142c6e180(rdi, rsi, rax_54, zmm2_4)
                                                                                                
                                                                                                if (result == 0)
                                                                                                    goto label_142c6bb5c
                                                                                            else
                                                                                                *(rdi + 0x4e28) = sub_142c6c980(rax_92, 
                                                                                                    "Expect:", "100-continue")
                                                                                            label_142c6bb5c:
                                                                                                void* const rdx_39
                                                                                                uint64_t r8_53
                                                                                                int64_t r15_4
                                                                                                int512_t zmm0_5
                                                                                                
                                                                                                if (*(rdi + 0x2b8) == 0)
                                                                                                    result, zmm0_5 = sub_142c6c0d0(rax_54, 
                                                                                                        &data_1436b2f34, 2)
                                                                                                    
                                                                                                    if (result == 0)
                                                                                                        if (*(rdi + 0x249) != result.b
                                                                                                                && *(rsi + 0x402) != result.b)
                                                                                                            r8_53 = zx.q(result + 5)
                                                                                                            rdx_39 = "0\r\n\r\n"
                                                                                                            goto label_142c6bcdb
                                                                                                        
                                                                                                        if (*(rdi + 0x4e68) != 0)
                                                                                                            int64_t rdx_40 = -1
                                                                                                            
                                                                                                            if (rbp_8 != 0)
                                                                                                                rdx_40 = rbp_8
                                                                                                            
                                                                                                            sub_142c6f270(rdi, rdx_40)
                                                                                                            
                                                                                                            if (*(rsi + 0x402) == 0)
                                                                                                                rbx_1[2] = &rbx_1[2]
                                                                                                                rbx_1[1] = rbp_8
                                                                                                            
                                                                                                            goto label_142c6bd16
                                                                                                        
                                                                                                    label_142c6bd16:
                                                                                                        r15_4 = var_b8
                                                                                                    label_142c6bd33:
                                                                                                        int32_t result_12
                                                                                                        int64_t r8_55
                                                                                                        result_12, r8_55, zmm2_7 =
                                                                                                            sub_142c6c220(rax_54, rsi, 
                                                                                                            rdi + 0x4f08, r15_4, zmm0_5, zmm2_4, 0)
                                                                                                        result_3 = result_12
                                                                                                        
                                                                                                        if (result_12 == 0)
                                                                                                            int64_t rax_95 = rbx_1[2]
                                                                                                            r14_5 = &rbx_1[6]
                                                                                                            void* rcx_135 = r14_5
                                                                                                            
                                                                                                            if (rax_95 == 0)
                                                                                                                rcx_135 = nullptr
                                                                                                            
                                                                                                            int32_t rax_96 = (neg.q(rax_95)).d
                                                                                                            var_108_3 = rcx_135
                                                                                                            var_110_1 = neg.d(sbb.d(rax_96, rax_96, 
                                                                                                                rax_95 != 0)) - 1
                                                                                                        label_142c6bd88:
                                                                                                            int32_t var_118_2
                                                                                                            var_118_2.q = &rbx_1[5]
                                                                                                            zmm2_6 = sub_142c68d40(rsi, 0, -1, 1, 
                                                                                                                zmm2_7, var_118_2, var_110_1, var_108_3)
                                                                                                            goto label_142c6bd97
                                                                                                        
                                                                                                        sub_142c64760(rdi, 
                                                                                                            "Failed sending HTTP POST request", 
                                                                                                            r8_55, zmm2_7)
                                                                                                        result = result_3
                                                                                                else if (rsi[0x42].d == 0x14
                                                                                                        || *(rdi + 0x4e28) != 0
                                                                                                        || rbp_8 s>= 0x10000)
                                                                                                    rbx_1[1] = rbp_8
                                                                                                    rbx_1[2] = *(rdi + 0x2b8)
                                                                                                    rbx_1[0xf].d = 2
                                                                                                    *(rdi + 0x4e80) = sub_142c6e910
                                                                                                    *(rdi + 0x4e88) = rsi
                                                                                                    sub_142c6f270(rdi, rbx_1[1])
                                                                                                    r8_53 = 2
                                                                                                    rdx_39 = &data_1436b2f34
                                                                                                label_142c6bcdb:
                                                                                                    result, zmm0_5 =
                                                                                                        sub_142c6c0d0(rax_54, rdx_39, r8_53)
                                                                                                    
                                                                                                    if (result == 0)
                                                                                                        goto label_142c6bd16
                                                                                                else
                                                                                                    result = sub_142c6c0d0(rax_54, 
                                                                                                        &data_1436b2f34, 2)
                                                                                                    
                                                                                                    if (result == 0)
                                                                                                        if (*(rdi + 0x249) != result.b)
                                                                                                            int64_t rcx_127
                                                                                                            
                                                                                                            if (rbp_8 == 0)
                                                                                                                result, zmm0_5 =
                                                                                                                    sub_142c6c0d0(rax_54, "0\r\n\r\n", 5)
                                                                                                                rcx_127 = var_b8
                                                                                                            else
                                                                                                                result, zmm0_5, zmm2_4 = sub_142c6c410(
                                                                                                                    rax_54, "%x\r\n", zx.q(rbp_8.d), zmm2_4)
                                                                                                                
                                                                                                                if (result != 0)
                                                                                                                    rcx_127 = var_b8
                                                                                                                else
                                                                                                                    result, zmm0_5 = sub_142c6c0d0(rax_54, 
                                                                                                                        *(rdi + 0x2b8), rbp_8)
                                                                                                                    
                                                                                                                    if (result == 0)
                                                                                                                        result, zmm0_5 = sub_142c6c0d0(rax_54, 
                                                                                                                            &data_1436b2f34, zx.q(result + 2))
                                                                                                                    
                                                                                                                    rcx_127 = rbp_8 + 2
                                                                                                                    
                                                                                                                    if (result == 0)
                                                                                                                        result, zmm0_5 =
                                                                                                                            sub_142c6c0d0(rax_54, "0\r\n\r\n", 5)
                                                                                                                        rcx_127 = rcx_127
                                                                                                            
                                                                                                            r15_4 = rcx_127 + 5
                                                                                                        else
                                                                                                            result, zmm0_5 = sub_142c6c0d0(rax_54, 
                                                                                                                *(rdi + 0x2b8), rbp_8)
                                                                                                            r15_4 = rbp_8
                                                                                                        
                                                                                                        if (result == 0)
                                                                                                            sub_142c6f270(rdi, rbp_8)
                                                                                                            goto label_142c6bd33
                                                                                    else
                                                                                    label_142c6baa7:
                                                                                        char* rax_90
                                                                                        
                                                                                        if (rax_89 == 0)
                                                                                            rax_90 =
                                                                                                sub_142c6c910(rsi, "Content-Length:")
                                                                                        
                                                                                        if (rax_89 == 0 && rax_90 != 0)
                                                                                            goto label_142c6bae1
                                                                                        
                                                                                        result, zmm2_4 = sub_142c6c410(rax_54, 
                                                                                            "Content-Length: %I64d\r\n", rbp_8, 
                                                                                            zmm2_4)
                                                                                        
                                                                                        if (result == 0)
                                                                                            goto label_142c6bae1
                                                                                else if (var_b0 == 3)
                                                                                    int64_t rdx_27 = *rbx_1
                                                                                    
                                                                                    if (rdx_27 == 0 || *(rsi + 0x402) != 0)
                                                                                        int512_t zmm0_4
                                                                                        int512_t zmm2_10
                                                                                        result, zmm0_4, zmm2_10 = sub_142c6c410(
                                                                                            rax_54, "Content-Length: 0\r\n\r\n", 
                                                                                            r8_30, zmm2_4)
                                                                                        
                                                                                        if (result == 0)
                                                                                            int32_t result_11
                                                                                            int64_t r8_45
                                                                                            int512_t zmm2_11
                                                                                            result_11, r8_45, zmm2_11 =
                                                                                                sub_142c6c220(rax_54, rsi, 
                                                                                                rdi + 0x4f08, 0, zmm0_4, zmm2_10, 0)
                                                                                            result_3 = result_11
                                                                                            
                                                                                            if (result_11 == 0)
                                                                                                int32_t var_118_4
                                                                                                var_118_4.q = &rbx_1[5]
                                                                                                zmm2_6 = sub_142c68d40(rsi, 0, -1, 1, 
                                                                                                    zmm2_11, var_118_4, 0xffffffff, nullptr)
                                                                                                rbp_8 = var_78
                                                                                                r14_5 = &rbx_1[6]
                                                                                            label_142c6bd97:
                                                                                                int64_t rdx_42 = *r14_5
                                                                                                
                                                                                                if (rdx_42 != 0)
                                                                                                    int32_t rax_101
                                                                                                    int512_t zmm2_12
                                                                                                    rax_101, zmm2_12 = sub_142c6f450(rsi, 
                                                                                                        sub_142c6f1b0(rdi, rdx_42), zmm2_6)
                                                                                                    int64_t r8_56 = *r14_5
                                                                                                    
                                                                                                    if (rax_101 != 0)
                                                                                                        result_3 = 0x2a
                                                                                                    
                                                                                                    if (r8_56 s>= rbp_8)
                                                                                                        sub_142c64850(rdi, 
                                                                                                            "upload completely sent off: %I64d out "
                                                                                                        "of %I64d bytes\n", 
                                                                                                            r8_56, zmm2_12)
                                                                                                        *(rdi + 0x220) &= 0xfffffffd
                                                                                                        *(rdi + 0x224) = 1
                                                                                                        *(rdi + 0x198) = 0
                                                                                                        sub_142c52d00(rdi, 0)
                                                                                                
                                                                                                if (rsi[0x42].d == 0x14
                                                                                                        && *(rdi + 0x249) != 0)
                                                                                                    *(rdi + 0x249) = 0
                                                                                                
                                                                                                result = result_3
                                                                                            else
                                                                                                sub_142c64760(rdi, 
                                                                                                    "Failed sending POST request", r8_45, 
                                                                                                    zmm2_11)
                                                                                                result = result_3
                                                                                    else if (
                                                                                            sub_142c8a3b0(&rbx_1[7], rdx_27) == 0)
                                                                                        rbx_1[0xa] = *(rdi + 0x4e80)
                                                                                        *(rdi + 0x4e80) = sub_142c8a3d0
                                                                                        *(rdi + 0x4e88) = &rbx_1[7]
                                                                                        rbx_1[0xf].d = 2
                                                                                        
                                                                                        if (*(rdi + 0x249) != 0)
                                                                                        label_142c6b8ff:
                                                                                            int512_t zmm2_8
                                                                                            result, zmm2_8 =
                                                                                                sub_142c6e180(rdi, rsi, rax_54, zmm2_4)
                                                                                            
                                                                                            if (result == 0)
                                                                                                var_a0 = nullptr
                                                                                                int64_t rax_86
                                                                                                int64_t r8_39
                                                                                                rax_86, r8_39 =
                                                                                                    sub_142c8a5a0(&rbx_1[7], &var_a0)
                                                                                                
                                                                                                if (rax_86 != 0)
                                                                                                    result =
                                                                                                        sub_142c6c0d0(rax_54, rax_86, var_a0)
                                                                                                    
                                                                                                    if (result == 0)
                                                                                                        int512_t zmm0_3
                                                                                                        result, zmm0_3 = sub_142c6c0d0(rax_54, 
                                                                                                            &data_1436b2f34, zx.q(result + 2))
                                                                                                        
                                                                                                        if (result == 0)
                                                                                                            sub_142c6f270(rdi, rbx_1[1])
                                                                                                            int32_t result_2
                                                                                                            int64_t r8_43
                                                                                                            int512_t zmm2_9
                                                                                                            result_2, r8_43, zmm2_9 = sub_142c6c220(
                                                                                                                rax_54, rsi, rdi + 0x4f08, 0, zmm0_3, 
                                                                                                                zmm2_8, 0)
                                                                                                            
                                                                                                            if (result_2 == 0)
                                                                                                                r14_5 = &rbx_1[6]
                                                                                                                int32_t var_118_3
                                                                                                                var_118_3.q = &rbx_1[5]
                                                                                                                zmm2_6 = sub_142c68d40(rsi, 0, -1, 1, 
                                                                                                                    zmm2_9, var_118_3, 0, r14_5)
                                                                                                                rbp_8 = var_78
                                                                                                                result_3 = 0
                                                                                                                goto label_142c6bd97
                                                                                                            
                                                                                                            sub_142c64760(rdi, 
                                                                                                                "Failed sending POST request", r8_43, 
                                                                                                                zmm2_9)
                                                                                                            sub_142c8a540(rbx_1)
                                                                                                            result = result_2
                                                                                                else
                                                                                                    sub_142c64760(rdi, 
                                                                                                        "Could not get Content-Type header line!", 
                                                                                                        r8_39, zmm2_8)
                                                                                                    result = 0x22
                                                                                        else
                                                                                            if (
                                                                                                    sub_142c6c910(rsi, "Content-Length:")
                                                                                                    != 0)
                                                                                                goto label_142c6b8ff
                                                                                            
                                                                                            result, zmm2_4 = sub_142c6c410(rax_54, 
                                                                                                "Content-Length: %I64d\r\n", rbx_1[1], 
                                                                                                zmm2_4)
                                                                                            
                                                                                            if (result == 0)
                                                                                                goto label_142c6b8ff
                                                                                    else
                                                                                        sub_142c64760(rdi, 
                                                                                            "Internal HTTP POST error!", r8_30, 
                                                                                            zmm2_4)
                                                                                        result = 0x22
                                                                                else if (var_b0 == 4)
                                                                                    char rax_79 = *(rsi + 0x402)
                                                                                    
                                                                                    if (rax_79 != 0)
                                                                                        rbp_8 = 0
                                                                                        
                                                                                        if (*(rdi + 0x249) != 0)
                                                                                            goto label_142c6b7b4
                                                                                        
                                                                                        goto label_142c6b781
                                                                                    
                                                                                    rbp_8 = *(rdi + 0x4e68)
                                                                                    
                                                                                    if (rbp_8 == -1 || *(rdi + 0x249) != 0)
                                                                                    label_142c6b7b4:
                                                                                        
                                                                                        if (rbp_8 != 0)
                                                                                            result, zmm2_4 =
                                                                                                sub_142c6e180(rdi, rsi, rax_54, zmm2_4)
                                                                                        
                                                                                        if (rbp_8 == 0 || result == 0)
                                                                                            int512_t zmm0_2
                                                                                            result, zmm0_2 = sub_142c6c0d0(rax_54, 
                                                                                                &data_1436b2f34, 2)
                                                                                            
                                                                                            if (result == 0)
                                                                                                sub_142c6f270(rdi, rbp_8)
                                                                                                int32_t result_10
                                                                                                int32_t rcx_91
                                                                                                int64_t r8_36
                                                                                                result_10, rcx_91, r8_36, zmm2_7 =
                                                                                                    sub_142c6c220(rax_54, rsi, 
                                                                                                    rdi + 0x4f08, 0, zmm0_2, zmm2_4, 0)
                                                                                                result_3 = result_10
                                                                                                
                                                                                                if (result_10 == 0)
                                                                                                    r14_5 = &rbx_1[6]
                                                                                                    void* rdx_26 = nullptr
                                                                                                    
                                                                                                    if (rbp_8 != 0)
                                                                                                        rdx_26 = r14_5
                                                                                                    
                                                                                                    var_108_3 = rdx_26
                                                                                                    var_110_1 =
                                                                                                        neg.d(sbb.d(rcx_91, rcx_91, rbp_8 != 0))
                                                                                                        - 1
                                                                                                    goto label_142c6bd88
                                                                                                
                                                                                                sub_142c64760(rdi, 
                                                                                                    "Failed sending PUT request", r8_36, 
                                                                                                    zmm2_7)
                                                                                                result = result_3
                                                                                    else
                                                                                    label_142c6b781:
                                                                                        char* rax_80
                                                                                        
                                                                                        if (rax_79 == 0)
                                                                                            rax_80 =
                                                                                                sub_142c6c910(rsi, "Content-Length:")
                                                                                        
                                                                                        if (rax_79 == 0 && rax_80 != 0)
                                                                                            goto label_142c6b7b4
                                                                                        
                                                                                        result, zmm2_4 = sub_142c6c410(rax_54, 
                                                                                            "Content-Length: %I64d\r\n", rbp_8, 
                                                                                            zmm2_4)
                                                                                        
                                                                                        if (result == 0)
                                                                                            goto label_142c6b7b4
                                                                                else
                                                                                    int512_t zmm0_1
                                                                                    result, zmm0_1 = sub_142c6c0d0(rax_54, 
                                                                                        &data_1436b2f34, 2)
                                                                                    
                                                                                    if (result == 0)
                                                                                        int32_t result_9
                                                                                        int64_t r8_32
                                                                                        int512_t zmm2_5
                                                                                        result_9, r8_32, zmm2_5 = sub_142c6c220(
                                                                                            rax_54, rsi, rdi + 0x4f08, 0, zmm0_1, 
                                                                                            zmm2_4, 0)
                                                                                        result_3 = result_9
                                                                                        
                                                                                        if (result_9 == 0)
                                                                                            int64_t rax_73 = rbx_1[2]
                                                                                            r14_5 = &rbx_1[6]
                                                                                            void* rcx_83 = r14_5
                                                                                            
                                                                                            if (rax_73 == 0)
                                                                                                rcx_83 = nullptr
                                                                                            
                                                                                            int32_t rax_74 = (neg.q(rax_73)).d
                                                                                            int32_t var_118_1
                                                                                            var_118_1.q = &rbx_1[5]
                                                                                            zmm2_6 = sub_142c68d40(rsi, 0, -1, 1, 
                                                                                                zmm2_5, var_118_1, 
                                                                                                neg.d(sbb.d(rax_74, rax_74, 
                                                                                                    rax_73 != 0)) - 1, 
                                                                                                rcx_83)
                                                                                            rbp_8 = var_78
                                                                                            goto label_142c6bd97
                                                                                        
                                                                                        sub_142c64760(rdi, 
                                                                                            "Failed sending HTTP request", r8_32, 
                                                                                            zmm2_5)
                                                                                        result = result_3
                                                                else
                                                                    result = result_4 + 1
                                            else
                                                rax_49 = *(rdi + 0x4e50)
                                                
                                                if (rax_49 == 0)
                                                    goto label_142c6b132
                                                
                                                if (rax_49 s< 0)
                                                    *(rdi + 0x4e50) = 0
                                                
                                                int64_t rdx_15 = *(rdi + 0x4e50)
                                                
                                                if (rdx_15 == 0 || *(rdi + 0x4a98) != 0)
                                                    goto label_142c6b132
                                                
                                                int64_t rax_50 = rsi[0xa2]
                                                int32_t rax_51
                                                
                                                if (rax_50 != 0)
                                                    rax_51, r8_13 = rax_50(rsi[0xa3], rdx_15, 0)
                                                
                                                if (rax_50 == 0 || rax_51 == 0)
                                                label_142c6b0de:
                                                    rax_49 = *(rdi + 0x4e68)
                                                    
                                                    if (rax_49 s<= 0)
                                                        goto label_142c6b132
                                                    
                                                    rax_49 -= *(rdi + 0x4e50)
                                                    *(rdi + 0x4e68) = rax_49
                                                    
                                                    if (rax_49 s> 0)
                                                        goto label_142c6b132
                                                    
                                                    sub_142c64760(rdi, 
                                                        "File already completely uploaded", r8_13, 
                                                        zmm2)
                                                    result = 0x12
                                                else
                                                    int64_t rbp_6 = 0
                                                    
                                                    if (rax_51 == 2)
                                                        while (true)
                                                            int64_t rbx_8 = sx.q(*(rdi + 0x598))
                                                            int64_t rcx_46 = *(rdi + 0x4e50) - rbp_6
                                                            
                                                            if (rcx_46 s<= rbx_8)
                                                                rbx_8 = sub_14058e700(rcx_46)
                                                            
                                                            int64_t rax_53
                                                            rax_53, r8_13 = (*(rdi + 0x4e80))(
                                                                *(rdi + 0xa80), 1, rbx_8, 
                                                                *(rdi + 0x4e88), var_118)
                                                            rbp_6 += rax_53
                                                            
                                                            if (rax_53 == 0 || rax_53 u> rbx_8)
                                                                sub_142c64760(rdi, 
                                                                    "Could only read %I64d bytes from the 
                                                                        input", 
                                                                    rbp_6, zmm2)
                                                                result = 0x1a
                                                                break
                                                            
                                                            if (rbp_6 s>= *(rdi + 0x4e50))
                                                                goto label_142c6b0de
                                                            
                                                            continue
                                                    else
                                                        sub_142c64760(rdi, "Could not seek stream", 
                                                            r8_13, zmm2)
                                                        result = 0x1a
                                    else
                                        char* str2 = rsi[0x1b]
                                        
                                        if (str2 == rsi[0x1a])
                                            goto label_142c6aea6
                                        
                                        char* str1 = *(rdi + 0x880)
                                        char* rax_36 = strstr(str1, str2)
                                        
                                        if (rax_36 == 0)
                                        label_142c6ae9e:
                                            r13 = var_b0
                                        label_142c6aea6:
                                            str1_1 = *(rdi + 0x880)
                                            
                                            if (j_sub_142c704d0("ftp://", str1_1, 6) != 0)
                                                if (*(rdi + 0x61c) != 0)
                                                    char* rax_41 = strstr(str1_1, ";type=")
                                                    
                                                    if (rax_41 == 0)
                                                    label_142c6af1a:
                                                        char* rcx_38 = &var_58
                                                        
                                                        if (**(rdi + 0x4e38) == 0)
                                                            int64_t rax_44 = -1
                                                            bool cond:12_1
                                                            
                                                            do
                                                                cond:12_1 = str1_1[rax_44 + 1] != 0
                                                                rax_44 += 1
                                                            while (cond:12_1)
                                                            
                                                            if (str1_1[rax_44 - 1] != 0x2f)
                                                                var_58 = 0x2f
                                                                rcx_38 = &var_57
                                                        
                                                        int64_t r9_5 = 0x69
                                                        
                                                        if (*(rdi + 0x5db) != 0)
                                                            r9_5 = 0x61
                                                        
                                                        zmm2 = sub_142c564b0(rcx_38, 8, ";type=%c", 
                                                            r9_5, zmm2)
                                                    else
                                                        uint32_t rcx_37 = zx.d(rax_41[6])
                                                        
                                                        if (rcx_37.b != 0 && rax_41[7] == 0)
                                                            int32_t rax_42
                                                            rax_42.b =
                                                                sub_142c70430(rcx_37).b - 0x41
                                                            
                                                            if (rax_42.b u> 8
                                                                    || not(test_bit(0x109, rax_42)))
                                                                goto label_142c6af1a
                                                
                                                if (rsi[0x7f].b != 0)
                                                    uint32_t rax_46 = zx.d(var_ac)
                                                    
                                                    if (rsi[0x81].b == 0)
                                                        rax_46 = 1
                                                    
                                                    var_ac.d = rax_46
                                            
                                            goto label_142c6afaa
                                        
                                        void* r15 = -ffffffffffffffff
                                        
                                        do
                                            r15 += 1
                                        while (*(rsi[0x1b] + r15) != 0)
                                        
                                        int64_t r14_1 = -1
                                        
                                        do
                                            r14_1 += 1
                                        while (rsi[0x1a][r14_1] != 0)
                                        
                                        char* rbp_2 = -ffffffffffffffff
                                        
                                        do
                                            rbp_2 = &rbp_2[1]
                                        while (*(rbp_2 + str1) != 0)
                                        
                                        void* rbp_3 = rbp_2 - r15
                                        int64_t rax_38 = data_143ccb898(rbp_3 + 1 + r14_1)
                                        
                                        if (rax_38 != 0)
                                            memcpy(rax_38, str1, rax_36.d - str1.d)
                                            void* rbx_6 = rax_38 - str1
                                            memcpy(rax_36 + rbx_6, rsi[0x1a], r14_1.d)
                                            memcpy(rbx_6 + r14_1 + rax_36, r15 + rax_36, 
                                                str1.d + 1 + rbp_3.d - rax_36.d)
                                            
                                            if (*(rdi + 0x888) != 0)
                                                data_143ccb8a0(*(rdi + 0x880))
                                                *(rdi + 0x880) = 0
                                                *(rdi + 0x888) = 0
                                            
                                            *(rdi + 0x880) = rax_38
                                            r12_1 = var_a8_1
                                            *(rdi + 0x888) = 1
                                            goto label_142c6ae9e
                                        
                                    label_142c6ac8e_1:
                                        result = 0x1b
                            else
                                char* string = sub_142c6ca70(rax_25)
                                
                                if (string != 0)
                                    char rax_27 = *string
                                    
                                    if (rax_27 != 0)
                                        int32_t ch
                                        
                                        if (rax_27 != 0x5b)
                                            ch = 0x3a
                                        else
                                            int64_t r8_3 = -1
                                            
                                            do
                                                r8_3 += 1
                                            while (string[r8_3] != 0)
                                            
                                            memmove(string, &string[1], r8_3.d - 1)
                                            ch = 0x5d
                                        
                                        char* rax_28 = strchr(string, ch)
                                        
                                        if (rax_28 != 0)
                                            *rax_28 = 0
                                        
                                        data_143ccb8a0(rsi[0x93])
                                        rsi[0x93] = string
                                    else
                                        data_143ccb8a0(string)
                                    
                                    for (int64_t i_2 = 0; i_2 != 6; )
                                        char rax_29 = (*"Host:")[i_2]
                                        i_2 += 1
                                        
                                        if (rax_29 != rax_25[i_2 - 1])
                                            int64_t rax_30
                                            rax_30, zmm2 = sub_142c563e0("%s\r\n", rax_25, zmm2)
                                            rsi[0x92] = rax_30
                                            
                                            if (rax_30 != 0)
                                                goto label_142c6ad4f
                                            
                                            goto label_142c6ac8e_2
                                    
                                    rsi[0x92] = 0
                                    goto label_142c6ad4f
                                
                            label_142c6ac8e_2:
                                result = 0x1b
                else
                    data_143ccb8a0(rsi[0x8e])
                    rsi[0x8e] = 0
                    int64_t rax_16
                    rax_16, zmm2 = sub_142c563e0("Accept-Encoding: %s\r\n", *(rdi + 0x668), zmm2)
                    rsi[0x8e] = rax_16
                    
                    if (rax_16 != 0)
                        goto label_142c6aa4d
                    
                    result = 0x1b
            else
                int64_t rax_12
                rax_12, zmm2 = sub_142c563e0("Referer: %s\r\n", *(rdi + 0x890), zmm2)
                rsi[0x91] = rax_12
                
                if (rax_12 != 0)
                    goto label_142c6a9b0
                
                result = 0x1b
else
    arg1[0x42].d = 0x14
    result = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
