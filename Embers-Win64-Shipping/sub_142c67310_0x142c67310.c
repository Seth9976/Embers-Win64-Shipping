// 函数: sub_142c67310
// 地址: 0x142c67310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* string = arg3
void* rdi = *arg1
int64_t* r15 = arg1
int64_t r14 = sx.q(arg2)
int32_t var_74 = 0
char string_2 = 0
char* rbx = r15[0xf3]
void* string_1 = arg3
int64_t rbp = r15[r14 + 0x47]
int64_t var_70 = rbp
void* rcx_1 = &arg1[0x47 + r14]

if (rbx == 0 || *(rbx + 0x4024) != 2)
    *(r15 + 0x40a) = 0
    
    while (true)
        if (*(rbx + 0x4024) == 0)
            int512_t zmm2 =
                sub_142c64850(rdi, "Establish HTTP proxy tunnel to %s:%hu\n", string_1, arg6)
            data_143ccb8a0(*(rdi + 0x230))
            *(rdi + 0x230) = 0
            int64_t* rax_1 = sub_142c6c210()
            int64_t* rbp_1 = rax_1
            
            if (rax_1 == 0)
                return 0x1b
            
            char* rax_2
            int512_t zmm2_1
            rax_2, zmm2_1 = sub_142c563e0("%s:%hu", string_1, zmm2)
            
            if (rax_2 == 0)
                sub_142c6c1e0(rbp_1)
                return 0x1b
            
            int32_t string_3
            string_3, arg6 = sub_142c6cf50(r15, "CONNECT", rax_2, 1, arg5, zmm2_1)
            string_1 = zx.q(string_3)
            data_143ccb8a0(rax_2)
            
            if (string_1.d == 0)
                void* r15_1 = nullptr
                void* const r13_1 = &data_1434cce10
                *(arg1 + 0x164)
                uint64_t rax_3 = zx.q(*(arg1 + 0x3fa))
                
                if (string != arg1[0x1a])
                    rax_3.b = strchr(string, 0x3a) != 0
                
                void* const rdx_1 = &data_1434cce10
                
                if (rax_3.b != 0)
                    rdx_1 = &data_1436b32c0
                
                void* const var_98
                var_98.d = arg4
                int64_t rax_5
                int512_t zmm2_2
                rax_5, zmm2_2 = sub_142c563e0("%s%s%s:%hu", rdx_1, arg6)
                
                if (rax_5 == 0)
                    sub_142c6c1e0(rbp_1)
                    return 0x1b
                
                char* rax_6 = sub_142c6c880(arg1, "Host:")
                void* rax_7
                
                if (rax_6 == 0)
                    rax_7, zmm2_2 = sub_142c563e0("Host: %s\r\n", rax_5, zmm2_2)
                    r15_1 = rax_7
                
                if (rax_6 == 0 && rax_7 == 0)
                    data_143ccb8a0(rax_5)
                    sub_142c6c1e0(rbp_1)
                    return 0x1b
                
                char const* const rsi_1 = "Proxy-Connection: Keep-Alive\r\n"
                
                if (sub_142c6c880(arg1, "Proxy-Connection:") != 0)
                    rsi_1 = &data_1434cce10
                
                if (sub_142c6c880(arg1, "User-Agent:") == 0 && *(rdi + 0x740) != 0)
                    r13_1 = arg1[0x8d]
                
                void* rax_11 = arg1[0x8c]
                char const* const var_80_1 = rsi_1
                void* const rcx_10 = &data_1434cce10
                void* const var_88_1 = r13_1
                
                if (rax_11 != 0)
                    rcx_10 = rax_11
                
                void* const rax_12 = &data_1434cce10
                void* const var_90_1 = rcx_10
                
                if (r15_1 != 0)
                    rax_12 = r15_1
                
                var_98 = rax_12
                int32_t string_4
                string_4, arg6 =
                    sub_142c6c410(rbp_1, "CONNECT %s HTTP/%s\r\n%s%s%s%s", rax_5, zmm2_2)
                string_1 = zx.q(string_4)
                
                if (r15_1 != 0)
                    data_143ccb8a0(r15_1)
                
                int64_t r8_5 = data_143ccb8a0(rax_5)
                r15 = arg1
                
                if (string_1.d == 0)
                    int32_t string_5
                    string_5, r8_5, arg6 = sub_142c6c490(r15, 1, rbp_1, arg6)
                    string_1 = zx.q(string_5)
                    
                    if (string_5 == 0)
                        int32_t string_6
                        int512_t zmm0_1
                        string_6, r8_5, zmm0_1, arg6 = sub_142c6c410(rbp_1, "\r\n", r8_5, arg6)
                        string_1 = zx.q(string_6)
                        
                        if (string_6 == 0)
                            var_98.d = arg2
                            int32_t string_7
                            string_7, r8_5, arg6 =
                                sub_142c6c220(rbp_1, r15, rdi + 0x4f08, 0, zmm0_1, arg6, var_98.d)
                            string_1 = zx.q(string_7)
                
                rbp_1 = nullptr
                
                if (string_1.d != 0)
                    arg6 = sub_142c64760(rdi, "Failed sending CONNECT to proxy", r8_5, arg6)
            
            sub_142c6c1e0(rbp_1)
            
            if (string_1.d != 0)
                return string_1.d
            
            rbp = var_70
            r14 = zx.q(arg2)
            *(rbx + 0x4024) = 1
            *(rbx + 0x4000) = 0
        
        arg3.b = 1
        int64_t rax_14
        int64_t r8_8
        rax_14, r8_8 = sub_142c65dc0(rdi, nullptr, arg3.b, rbx)
        
        if (rax_14 s<= 0)
            sub_142c64760(rdi, "Proxy CONNECT aborted due to timeout", r8_8, arg6)
            return 0x1c
        
        char rax_15
        int64_t rdx_6
        rax_15, rdx_6 = sub_142c65270(r15, r14.d)
        
        if (rax_15 == 0)
            break
        
        int32_t r12_2 = 0
        int32_t result
        
        if (*(rbx + 0x4004) != 0)
            while (true)
                int64_t r8_9 = *(rbx + 0x4010)
                
                if (r8_9 u>= &rbx[0x4000])
                    sub_142c64760(rdi, "CONNECT response too large!", r8_9, arg6)
                    return 0x38
                
                int64_t var_68
                int32_t rax_16
                int64_t rdx_8
                rax_16, rdx_8 = sub_142c648f0(r15, rbp, r8_9, 1, &var_68)
                
                if (rax_16 == 0x51)
                    return 0
                
                int32_t rax_17
                int64_t r8_10
                rax_17, rdx_6, r8_10, arg6 = sub_142c6f450(r15, rdx_8, arg6)
                
                if (rax_17 != 0)
                    return 0x2a
                
                if (rax_16 == 0)
                    if (var_68 s> 0)
                        if (*(rbx + 0x4004) s<= 1)
                            char* rax_21 = *(rbx + 0x4010)
                            *(rbx + 0x4000) += 1
                            
                            if (*rax_21 != 0xa)
                                *(rbx + 0x4010) = &rax_21[1]
                            label_142c67b00:
                                
                                if (*(rbx + 0x4004) == 0)
                                    break
                                
                                continue
                            
                            if (*(rdi + 0x5f0) != 0)
                                rdx_6, arg6 = sub_142c64600(rdi, 1, *(rbx + 0x4008), 
                                    sx.q(*(rbx + 0x4000)), arg6, r15)
                            
                            if (*(rdi + 0x858) == 0)
                                int32_t rdx_10
                                rdx_10.b = *(rdi + 0x5e5) != 0
                                result, rdx_6, arg6 = sub_142c645e0(r15, rdx_10 + 2, 
                                    *(rbx + 0x4008), sx.q(*(rbx + 0x4000)), arg6)
                                
                                if (result != 0)
                                    return result
                            
                            *(rdi + 0x4f04) += *(rbx + 0x4000)
                            *(rdi + 0x108) += *(rbx + 0x4000)
                            char* rcx_27 = *(rbx + 0x4008)
                            char rax_25 = *rcx_27
                            
                            if (rax_25 == 0xd || rax_25 == 0xa)
                                *(rbx + 0x4010) = rbx
                                
                                if (*(rdi + 0x180) != 0x197 || *(rdi + 0x4bc0) != 0)
                                    *(rbx + 0x4004) = 0
                                else
                                    int64_t r8_19 = *(rbx + 0x4018)
                                    *(rbx + 0x4004) = 2
                                    
                                    if (r8_19 != 0)
                                        rdx_6, arg6 = sub_142c64850(rdi, 
                                            "Ignore %I64d bytes of response-body\n", r8_19, arg6)
                                    else if (rbx[0x4020] == 0)
                                        *(rbx + 0x4004) = 0
                                    else
                                        int512_t zmm2_3 = sub_142c64850(rdi, 
                                            "Ignore chunked response-body\n", r8_19, arg6)
                                        *(rdi + 0x225) = 1
                                        char* rax_41 = *(rbx + 0x4008) + 1
                                        
                                        if (*rax_41 == 0xa)
                                            *(rbx + 0x4008) = rax_41
                                        
                                        int32_t rax_42
                                        int64_t r8_20
                                        rax_42, rdx_6, r8_20, arg6 = sub_142c89660(r15, 
                                            *(rbx + 0x4008) + 1, 1, &var_68, zmm2_3)
                                        
                                        if (rax_42 == 0xffffffff)
                                            rdx_6, arg6 = sub_142c64850(rdi, 
                                                "chunk reading DONE\n", r8_20, arg6)
                                            *(rbx + 0x4024) = 2
                                            *(rbx + 0x4004) = 0
                                
                                if (*(rbx + 0x4018) != 0)
                                    goto label_142c67b00
                                
                                goto label_142c67af6
                            
                            rcx_27[sx.q(*(rbx + 0x4000))] = 0
                            int32_t rax_27 =
                                j_sub_142c704d0("WWW-Authenticate:", *(rbx + 0x4008), 0x11)
                            
                            if (rax_27 != 0)
                                string_1 = zx.q(*(rdi + 0x180))
                            
                            if (rax_27 != 0 && string_1.d == 0x191)
                            label_142c6786d:
                                char* rax_29 = sub_142c6ca70(*(rbx + 0x4008))
                                
                                if (rax_29 == 0)
                                    return 0x1b
                                
                                arg6 = sub_142c6cd70(r15, string_1.d == 0x197, rax_29, arg6)
                                string_1 = nullptr
                                rdx_6 = data_143ccb8a0(rax_29)
                                rbp = var_70
                            else
                                int32_t rax_28 =
                                    j_sub_142c704d0("Proxy-authenticate:", *(rbx + 0x4008), 0x13)
                                
                                if (rax_28 != 0)
                                    string_1 = zx.q(*(rdi + 0x180))
                                
                                if (rax_28 != 0 && string_1.d == 0x197)
                                    goto label_142c6786d
                                
                                if (j_sub_142c704d0("Content-Length:", *(rbx + 0x4008), 0xf) == 0)
                                    char rax_33
                                    rax_33, rdx_6 =
                                        sub_142c6c980(*(rbx + 0x4008), "Connection:", "close")
                                    
                                    if (rax_33 == 0)
                                        if (j_sub_142c704d0("Transfer-Encoding:", *(rbx + 0x4008), 
                                                0x12) == 0)
                                            char rax_37
                                            rax_37, rdx_6 = sub_142c6c980(*(rbx + 0x4008), 
                                                "Proxy-Connection:", "close")
                                            
                                            if (rax_37 == 0)
                                                int32_t rax_38
                                                rax_38, rdx_6 = sub_1425f29b0(*(rbx + 0x4008), 
                                                    "HTTP/1.%d %d", &var_74)
                                                
                                                if (rax_38 == 2)
                                                    *(rdi + 0x4ef4) = *(rdi + 0x180)
                                            else
                                                string_2 = 1
                                        else
                                            uint64_t r8_16 = zx.q(*(rdi + 0x180))
                                            
                                            if ((r8_16 - 0xc8).d u>= 0x64)
                                                char rax_36
                                                int64_t r8_17
                                                rax_36, rdx_6, r8_17 = sub_142c6c980(
                                                    *(rbx + 0x4008), "Transfer-Encoding:", 
                                                    "chunked")
                                                
                                                if (rax_36 != 0)
                                                    rdx_6, arg6 = sub_142c64850(rdi, 
                                                        "CONNECT responded chunked\n", r8_17, arg6)
                                                    rbx[0x4020] = 1
                                                    sub_142c89650(r15)
                                            else
                                                rdx_6, arg6 = sub_142c64850(rdi, 
                                                    "Ignoring Transfer-Encoding in CONNECT %03d response"
                                                "
                                                    r8_16, arg6)
                                    else
                                        string_2 = 1
                                else
                                    uint64_t r8_15 = zx.q(*(rdi + 0x180))
                                    
                                    if ((r8_15 - 0xc8).d u>= 0x64)
                                        int64_t rax_32
                                        rax_32, rdx_6 = strtoll(*(rbx + 0x4008) + 0xf, nullptr, 0xa)
                                        *(rbx + 0x4018) = rax_32
                                    else
                                        rdx_6, arg6 = sub_142c64850(rdi, 
                                            "Ignoring Content-Length in CONNECT %03d response\n", 
                                            r8_15, arg6)
                            
                            *(rbx + 0x4000) = 0
                            *(rbx + 0x4010) = rbx
                            *(rbx + 0x4008) = rbx
                            goto label_142c67b00
                        else
                            int64_t rax_18 = *(rbx + 0x4018)
                            *(rbx + 0x4010) = rbx
                            
                            if (rax_18 == 0)
                                int64_t var_58 = 0
                                int32_t rax_20
                                int64_t r8_11
                                rax_20, rdx_6, r8_11, arg6 =
                                    sub_142c89660(r15, rbx, 1, &var_58, arg6)
                                
                                if (rax_20 != 0xffffffff)
                                    goto label_142c67b00
                                
                                rdx_6, arg6 =
                                    sub_142c64850(rdi, "chunk reading DONE\n", r8_11, arg6)
                                *(rbx + 0x4004) = 0
                            label_142c67af6:
                                *(rbx + 0x4024) = 2
                                goto label_142c67b00
                            
                            *(rbx + 0x4018) = rax_18 - 1
                            
                            if (rax_18 - 1 s> 0)
                                goto label_142c67b00
                        
                        *(rbx + 0x4024) = 2
                    else if (*(rdi + 0x2a0) == 0 || *(rdi + 0x4bb8) == 0)
                        r12_2 = 1
                        rdx_6, arg6 = sub_142c64760(rdi, "Proxy CONNECT aborted", r8_10, arg6)
                    else
                        *(r15 + 0x40a) = 1
                        rdx_6, arg6 =
                            sub_142c64850(rdi, "Proxy CONNECT connection closed\n", r8_10, arg6)
                
                *(rbx + 0x4004) = 0
                break
            
            r14 = zx.q(arg2)
        
        int32_t rax_43
        rax_43, arg3, arg5, arg6 = sub_142c6f450(r15, rdx_6, arg6)
        
        if (rax_43 != 0)
            return 0x2a
        
        if (r12_2 != 0)
            return 0x38
        
        if (*(rdi + 0x4ef4) != 0xc8)
            result, arg3, arg6 = sub_142c6cb80(r15)
            
            if (result != 0)
                return result
            
            if (*(r15 + 0x3f1) == result.b)
                goto label_142c67ba6
            
            string_1.b = 1
            string_2 = 1
            
            if (*(rdi + 0x230) != 0)
                goto label_142c67c66
            
            goto label_142c67bc6
        
    label_142c67ba6:
        string_1 = zx.q(string_2)
        void* r14_5
        
        if (string_1.b == 0 || *(rdi + 0x230) == 0)
        label_142c67bc6:
            
            if (*(rdi + 0x230) != 0)
                if (*(rbx + 0x4024) == 2)
                    void* rax_44 = r15[0xf3]
                    *(rax_44 + 0x4024) = 0
                    *(rax_44 + 0x4004) = 1
                    *(rax_44 + 0x4008) = rax_44
                    *(rax_44 + 0x4010) = rax_44
                    *(rax_44 + 0x4018) = 0
                
                if (*(rdi + 0x230) != 0)
                    string_1 = string
                    continue
            
            r14_5 = rcx_1
        else
        label_142c67c66:
            r14_5 = rcx_1
            arg3 = sub_142c65200(r15, *r14_5)
            *r14_5 = -1
        
        if (*(rdi + 0x180) == 0xc8)
            *(rbx + 0x4024) = 2
            int64_t r8_23 = data_143ccb8a0(r15[0x8c])
            r15[0x8c] = 0
            *(rdi + 0x4bbc) = 1
            sub_142c64850(rdi, "Proxy replied OK to CONNECT request\n", r8_23, arg6)
            *(rdi + 0x225) = 0
            *(r15 + 0x403) = 0
            break
        
        if (string_1.b == 0 || *(rdi + 0x230) == 0)
            data_143ccb8a0(*(rdi + 0x230))
            *(rdi + 0x230) = 0
            sub_142c65340(r15, 2)
            sub_142c65200(r15, *r14_5)
            *r14_5 = -1
        else
            *(r15 + 0x40a) = 1
            int64_t r8_21
            int512_t zmm2_4
            r8_21, zmm2_4 = sub_142c64850(rdi, "Connect me again please\n", arg3, arg6)
            *(r15[0xf3] + 0x4024) = 2
            arg6 = sub_142c64850(*r15, "CONNECT phase completed!\n", r8_21, zmm2_4)
        
        *(rbx + 0x4024) = 0
        
        if (*(r15 + 0x40a) != 0)
            break
        
        sub_142c64760(rdi, "Received HTTP code %d from proxy after CONNECT", zx.q(*(rdi + 0x180)), 
            arg6)
        return 0x38

return 0
