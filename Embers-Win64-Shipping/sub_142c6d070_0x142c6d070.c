// 函数: sub_142c6d070
// 地址: 0x142c6d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax_83

do
    char (* rcx)[0x10] = *(arg1 + 0x150)
    *(arg1 + 0x158) = rcx
    uint64_t rax_1 = memchr(rcx, 0xa, *arg3)
    *(arg1 + 0x160) = rax_1
    int32_t result
    
    if (rax_1 == 0)
        result = sub_142c6e270(arg1, arg1 + 0xd8, *arg3, arg5, arg6)
        
        if (result != 0)
            return result
        
        if (*(arg1 + 0x138) != 0)
            break
        
        if (*(arg1 + 0x148) u<= 5)
            break
        
        char* rdx_34 = *(arg1 + 0xa70)
        int32_t rax_87
        
        if ((*(arg2[0x87] + 0x7c) & 0x40000) == 0)
            rax_87 = sub_142c6e0e0(arg1, rdx_34)
        else
            rax_87.b = j_sub_142c704d0("RTSP/", rdx_34, 5) != 0
        
        if (rax_87.b != 0)
            break
        
        *(arg1 + 0x134) = 2
        *(arg1 + 0x130) = 0
        break
    
    int64_t rbx_3 = rax_1 - *(arg1 + 0x150) + 1
    *arg3 -= rbx_3
    int64_t r8_2 = *(arg1 + 0x160) + 1
    *(arg1 + 0x150) = r8_2
    int64_t r8_4
    int512_t zmm2
    result, r8_4, zmm2 = sub_142c6e270(arg1, arg1 + 0xd8, r8_2 - *(arg1 + 0x158), arg5, arg6)
    
    if (result != 0)
        return result
    
    *(arg1 + 0x160) = *(arg1 + 0x140)
    *(arg1 + 0x168) = *(arg1 + 0xa70)
    
    if (*(arg1 + 0x138) == 0 && *(arg1 + 0x148) u> 5)
        char* rdx_1 = *(arg1 + 0xa70)
        int32_t rax_5
        
        if ((*(arg2[0x87] + 0x7c) & 0x40000) == 0)
            rax_5, r8_4 = sub_142c6e0e0(arg1, rdx_1)
        else
            rax_5, r8_4 = j_sub_142c704d0("RTSP/", rdx_1, 5)
            rax_5.b = rax_5 != 0
        
        if (rax_5.b == 0)
            *(arg1 + 0x130) = 0
            
            if (*arg3 == 0)
                *(arg1 + 0x134) = 2
                *arg3 = rbx_3
            else
                *(arg1 + 0x134) = 1
            
            break
    
    char* r10_1 = *(arg1 + 0x168)
    char rax_6 = *r10_1
    
    if (rax_6 == 0xa)
        if (rax_6 == 0xd)
        label_142c6dc49:
            *(arg1 + 0x168) = &r10_1[1]
        
        char* rax_72 = *(arg1 + 0x168)
        
        if (*rax_72 == 0xa)
            *(arg1 + 0x168) = &rax_72[1]
        
        int32_t rcx_64 = *(arg1 + 0x180)
        
        if (rcx_64 - 0x64 u> 0x63)
            bool cond:0_1 = *(arg1 + 0xd8) != -1
            *(arg1 + 0x130) = 0
            
            if (not(cond:0_1) && *(arg1 + 0x248) == 0)
                if (*(arg2 + 0x3f1) != 0)
                    goto label_142c6dd30
                
                if (arg2[0x42].d == 0xb && (*(arg2[0x87] + 0x7c) & 0x40000) == 0
                        && *(arg1 + 0x438) != 5)
                    zmm2 = sub_142c64850(arg1, 
                        "no chunk, no close, no size. Assume close to signal end\n", r8_4, zmm2)
                    r8_4 = sub_142c65340(arg2, 2)
        else if (rcx_64 == 0x64)
            *(arg1 + 0x130) = 1
            *(arg1 + 0x138) = 0
            
            if (*(arg1 + 0x198) s> 0)
                *(arg1 + 0x220) |= 2
                *(arg1 + 0x198) = 0
                r8_4 = sub_142c52d00(arg1, 0)
        else
            if (rcx_64 == 0x65)
                if (*(arg1 + 0x19c) != 1)
                    *(arg1 + 0x130) = 0
                    goto label_142c6dd27
                
                sub_142c64850(arg1, "Received 101\n", r8_4, zmm2)
                *(arg1 + 0x19c) = 2
                *(arg1 + 0x130) = 1
                *(arg1 + 0x138) = 0
                return 1
            
            *(arg1 + 0x130) = 1
            *(arg1 + 0x138) = 0
        
    label_142c6dd27:
        
        if (*(arg2 + 0x3f1) != 0)
        label_142c6dd30:
            int32_t rax_76 = *(arg1 + 0x180)
            
            if (rax_76 == 0x191 && arg2[0xa4].d == 2)
                zmm2 = sub_142c64850(arg1, 
                    "Connection closure while negotiating auth (HTTP 1.0?)\n", r8_4, zmm2)
                *(arg1 + 0x4bc0) = 1
            else if (rax_76 == 0x197 && arg2[0xa8].d == 2)
                zmm2 = sub_142c64850(arg1, 
                    "Connection closure while negotiating auth (HTTP 1.0?)\n", r8_4, zmm2)
                *(arg1 + 0x4bc0) = 1
        
        if (sub_142c6e600(arg2) != 0)
            sub_142c64760(arg1, "The requested URL returned error: %d", zx.q(*(arg1 + 0x180)), zmm2)
            return 0x16
        
        char* r8_20 = *(arg1 + 0xa70)
        void* rbx_16 = *(arg1 + 0x168) - r8_20
        int32_t rdx_31
        rdx_31.b = *(arg1 + 0x5e5) != 0
        result = sub_142c645e0(arg2, rdx_31 + 2, r8_20, rbx_16, zmm2)
        
        if (result != 0)
            return result
        
        *(arg1 + 0x108) += rbx_16.d
        int32_t rcx_71 = 0
        *(arg1 + 0x4f04) += rbx_16.d
        
        if (*(arg1 + 0x180) - 0x64 u<= 0x63)
            rcx_71 = *(arg1 + 0x108)
        
        *(arg1 + 0x10c) = rcx_71
        int64_t r8_21
        result, r8_21, arg5, arg6 = sub_142c6cb80(arg2)
        
        if (result != 0)
            return result
        
        if (*(arg1 + 0x180) s>= 0x12c)
            if (*(arg2 + 0x402) != 0 || *(arg2 + 0x3f1) != 0)
            label_142c6dead:
                
                if (*(arg2 + 0x403) != 0)
                    arg5, arg6 =
                        sub_142c64850(arg1, "Keep sending data to get tossed away!\n", r8_21, arg6)
                    *(arg1 + 0x220) |= 2
            else
                if (*(arg2 + 0x403) == 0)
                    if (*(arg1 + 0x438) - 2 u<= 2)
                        r8_21, arg5 = sub_142c52d00(arg1, 0)
                        
                        if (*(arg1 + 0x224) == 0)
                            if (*(arg1 + 0x5e1) == 0)
                                arg5, arg6 = sub_142c64850(arg1, 
                                    "HTTP error before end of send, stop sending\n", r8_21, arg6)
                                r8_21 = sub_142c65340(arg2, 2)
                                *(arg1 + 0x220) &= 0xfffffffd
                                *(arg1 + 0x224) = 1
                                
                                if (*(arg1 + 0x4e28) != 0)
                                    *(arg1 + 0x198) = 3
                            else
                                r8_21, arg5, arg6 = sub_142c64850(arg1, 
                                    "HTTP error before end of send, keep sending\n", r8_21, arg6)
                                
                                if (*(arg1 + 0x198) s> 0)
                                    *(arg1 + 0x220) |= 2
                                    *(arg1 + 0x198) = 0
                    
                    goto label_142c6dead
                
                arg5, arg6 =
                    sub_142c64850(arg1, "Keep sending data to get tossed away!\n", r8_21, arg6)
                *(arg1 + 0x220) |= 2
        
        if (*(arg1 + 0x130) == 0)
            if (*(arg1 + 0x5e8) != 0)
                *arg4 = 1
            else if ((*(arg2[0x87] + 0x7c) & 0x40000) != 0 && *(arg1 + 0x804) == 2
                    && *(arg1 + 0xd8) s<= -1)
                *arg4 = 1
            else if (*(arg1 + 0x248) != 0)
                *(arg1 + 0xd8) = -1
                *(arg1 + 0xe8) = -1
            
            int64_t rdx_33 = *(arg1 + 0xd8)
            
            if (rdx_33 != -1)
                sub_142c6f180(arg1, rdx_33)
                *(arg1 + 0xe8) = *(arg1 + 0xd8)
            
            if (*(arg1 + 0xe8) == 0)
                *arg4 = 1
                *(arg1 + 0x220) &= 0xfffffffe
            else if (*arg4 != 0)
                *(arg1 + 0x220) &= 0xfffffffe
            
            if (*(arg1 + 0x5f0) != 0)
                sub_142c64600(arg1, 1, *(arg1 + 0x158), rbx_16, arg6, arg2)
            
            break
    else
        if (rax_6 == 0xd)
            goto label_142c6dc49
        
        int32_t rcx_3 = *(arg1 + 0x138)
        *(arg1 + 0x138) = rcx_3 + 1
        
        if (rcx_3 == 0)
            int32_t rdx_2 = *(arg2[0x87] + 0x7c)
            void* rbx_4
            void* rsi_1
            int64_t r8_6
            
            if ((rdx_2.b & 3) == 0)
                if (not(test_bit(rdx_2, 0x12)))
                    *(arg1 + 0x130) = 0
                    break
                    break
                    break
                
                rsi_1 = arg1 + 0x180
                void* var_48_2 = rsi_1
                int32_t var_34
                int32_t rax_14
                rax_14, r8_6 = sub_1425f29b0(r10_1, " RTSP/%d.%d %3d", &var_34)
                
                if (rax_14 != 3)
                    *(arg1 + 0x130) = 0
                    break
                    break
                    break
                
                uint64_t rax_15 = zx.q(var_34)
                rbx_4 = &arg2[0x42]
                *rbx_4 = 0xb
                *(arg2 + 0x214) += (rax_15 * 5).d * 2
            else
                rsi_1 = arg1 + 0x180
                rbx_4 = &arg2[0x42]
                void* var_40_1 = rsi_1
                char arg_8
                char* var_48_1 = &arg_8
                int32_t var_38
                int32_t rax_9
                rax_9, r8_6 = sub_1425f29b0(r10_1, " HTTP/%1d.%1d%c%3d", &var_38)
                
                if (rax_9 != 1)
                    if (rax_9 == 4)
                        if (arg_8 == 0x20)
                            goto label_142c6d230
                        
                        sub_142c64760(arg1, "Unsupported HTTP version in response\n", r8_6, zmm2)
                        return 1
                    
                    if (rax_9 != 0)
                        sub_142c64760(arg1, "Unsupported HTTP version in response\n", r8_6, zmm2)
                        return 1
                    
                    int32_t rax_12
                    rax_12, r8_6 = sub_1425f29b0(*(arg1 + 0x168), " HTTP %3d", rsi_1)
                    *rbx_4 = 0xa
                    
                    if (rax_12 == 0)
                        char rax_13
                        rax_13, r8_6 = sub_142c6e0e0(arg1, *(arg1 + 0x168))
                        
                        if (rax_13 == 0)
                            *(arg1 + 0x130) = 0
                            break
                            break
                            break
                        
                        *rsi_1 = 0xc8
                        *rbx_4 = 0xa
                else
                    if (var_38 != 2)
                        sub_142c64760(arg1, "Unsupported HTTP version in response\n", r8_6, zmm2)
                        return 1
                    
                    int32_t rax_10
                    rax_10, r8_6 = sub_1425f29b0(*(arg1 + 0x168), " HTTP/2 %d", rsi_1)
                    
                    if (rax_10 != 1)
                        sub_142c64760(arg1, "Unsupported HTTP version in response\n", r8_6, zmm2)
                        return 1
                    
                    *rbx_4 = 0
                    arg_8 = 0x20
                label_142c6d230:
                    *rbx_4 += var_38 * 0xa
                    
                    if (*(arg1 + 0x19c) == 2 && *rbx_4 != 0x14)
                        r8_6, zmm2 =
                            sub_142c64850(arg1, "Lying server, not serving HTTP/2\n", r8_6, zmm2)
            
            *(arg1 + 0x4ef0) = *rsi_1
            *(arg1 + 0x4ef8) = *rbx_4
            int32_t rax_18 = *(arg1 + 0x4e24)
            
            if (rax_18 == 0 || rax_18 s> *rbx_4)
                *(arg1 + 0x4e24) = *rbx_4
            
            if (*(arg1 + 0x5e0) != 0)
                int32_t rax_20 = *rsi_1
                
                if (rax_20 s>= 0x190 && (rax_20 != 0x191 || arg2[0x7f].b == 0)
                        && (rax_20 != 0x197 || *(arg2 + 0x3f9) == 0)
                        && (*(arg1 + 0x4e50) == 0 || *(arg1 + 0x438) != 1 || rax_20 != 0x1a0))
                    sub_142c6e840(arg1)
                    return 0x16
            
            int32_t rax_21 = *rbx_4
            
            if (rax_21 == 0xa)
                zmm2 = sub_142c64850(arg1, "HTTP 1.0, assume close after body\n", r8_6, zmm2)
                sub_142c65340(arg2, 1)
            else if (rax_21 == 0x14 || (*(arg1 + 0x19c) == 1 && *rsi_1 == 0x65))
                *arg2[0xf4] = 2
            else if (rax_21 s>= 0xb && *(arg2 + 0x3f1) == 0 && arg2[0xf4] != 0)
                char rax_22
                rax_22, zmm2 = sub_142c70330(arg1, arg2, zmm2)
                
                if (rax_22 == 0)
                    *arg2[0xf4] = 1
            
            int32_t rcx_17 = *rsi_1
            
            if (rcx_17 == 0xcc || rcx_17 == 0x130)
                if (*(arg1 + 0x428) != 0)
                    *(arg1 + 0x4f00) = 1
                
                *(arg1 + 0xd8) = 0
                *(arg1 + 0xe8) = 0
                *(arg1 + 0x226) = 1
        
        int32_t rax_25
        
        if (*(arg1 + 0x226) == 0 && *(arg1 + 0x607) == 0)
            rax_25 = j_sub_142c704d0("Content-Length:", *(arg1 + 0x168), 0xf)
        
        if (*(arg1 + 0x226) != 0 || *(arg1 + 0x607) != 0 || rax_25 == 0)
            if (j_sub_142c704d0("Content-Type:", *(arg1 + 0x168), 0xd) == 0)
                if (j_sub_142c704d0("Server:", *(arg1 + 0x168), 7) == 0)
                    char rax_34
                    
                    if (arg2[0x42].d == 0xa && *(arg2 + 0x3f6) != 0)
                        rax_34 = sub_142c6c980(*(arg1 + 0x168), "Proxy-Connection:", "keep-alive")
                    
                    if (arg2[0x42].d != 0xa || *(arg2 + 0x3f6) == 0 || rax_34 == 0)
                        char rax_35
                        
                        if (arg2[0x42].d == 0xb && *(arg2 + 0x3f6) != 0)
                            rax_35 = sub_142c6c980(*(arg1 + 0x168), "Proxy-Connection:", "close")
                        
                        if (arg2[0x42].d != 0xb || *(arg2 + 0x3f6) == 0 || rax_35 == 0)
                            char rax_36
                            
                            if (arg2[0x42].d == 0xa)
                                rax_36 = sub_142c6c980(*(arg1 + 0x168), "Connection:", "keep-alive")
                            
                            if (arg2[0x42].d != 0xa || rax_36 == 0)
                                if (sub_142c6c980(*(arg1 + 0x168), "Connection:", "close") == 0)
                                    if (j_sub_142c704d0("Transfer-Encoding:", *(arg1 + 0x168), 0x12)
                                            == 0)
                                        if (j_sub_142c704d0("Content-Encoding:", *(arg1 + 0x168), 
                                                0x11) == 0 || *(arg1 + 0x668) == 0)
                                            if (j_sub_142c704d0("Content-Range:", *(arg1 + 0x168), 
                                                    0xe) == 0)
                                                int32_t rax_55
                                                
                                                if (*(arg1 + 0x8b0) != 0)
                                                    rax_55 = j_sub_142c704d0("Set-Cookie:", 
                                                        *(arg1 + 0x168), 0xb)
                                                
                                                if (*(arg1 + 0x8b0) == 0 || rax_55 == 0)
                                                    if (j_sub_142c704d0("Last-Modified:", 
                                                            *(arg1 + 0x168), 0xe) == 0 || (
                                                            *(arg1 + 0x428) == 0
                                                            && *(arg1 + 0x5d9) == 0))
                                                        int32_t rax_60 = j_sub_142c704d0(
                                                            "WWW-Authenticate:", *(arg1 + 0x168), 
                                                            0x11)
                                                        int32_t rbx_13
                                                        
                                                        if (rax_60 != 0)
                                                            rbx_13 = *(arg1 + 0x180)
                                                        
                                                        if (rax_60 != 0 && rbx_13 == 0x191)
                                                        label_142c6dae6:
                                                            char* rax_62 =
                                                                sub_142c6ca70(*(arg1 + 0x168))
                                                            
                                                            if (rax_62 == 0)
                                                                return 0x1b
                                                            
                                                            zmm2 = sub_142c6cd70(arg2, 
                                                                rbx_13 == 0x197, rax_62, zmm2)
                                                            data_143ccb8a0(rax_62)
                                                        else
                                                            int32_t rax_61 = j_sub_142c704d0(
                                                                "Proxy-authenticate:", *(arg1 + 0x168), 
                                                                0x13)
                                                            
                                                            if (rax_61 != 0)
                                                                rbx_13 = *(arg1 + 0x180)
                                                            
                                                            if (rax_61 != 0 && rbx_13 == 0x197)
                                                                goto label_142c6dae6
                                                            
                                                            int32_t rax_65
                                                            
                                                            if (*(arg1 + 0x180) - 0x12c u<= 0x63)
                                                                rax_65 = j_sub_142c704d0("Location:", 
                                                                    *(arg1 + 0x168), 9)
                                                            
                                                            if (*(arg1 + 0x180) - 0x12c u<= 0x63
                                                                    && rax_65 != 0 && *(arg1 + 0x228) == 0)
                                                                char* rax_66 =
                                                                    sub_142c6ca70(*(arg1 + 0x168))
                                                                
                                                                if (rax_66 == 0)
                                                                    return 0x1b
                                                                
                                                                if (*rax_66 != 0)
                                                                    *(arg1 + 0x228) = rax_66
                                                                    
                                                                    if (*(arg1 + 0x5e2) != 0)
                                                                        int64_t rax_67 = data_143ccb8b0(rax_66)
                                                                        *(arg1 + 0x230) = rax_67
                                                                        
                                                                        if (rax_67 == 0)
                                                                            return 0x1b
                                                                        
                                                                        result, zmm2 = sub_142c6e490(arg2)
                                                                        goto label_142c6dbd2
                                                                else
                                                                    data_143ccb8a0(rax_66)
                                                            else if ((*(arg2[0x87] + 0x7c)
                                                                    & 0x40000) != 0)
                                                                result, zmm2 = sub_142c76c20(arg2, 
                                                                    *(arg1 + 0x168), zmm2)
                                                            label_142c6dbd2:
                                                                
                                                                if (result != 0)
                                                                    return result
                                                    else
                                                        __time64_t var_30_1 = _time64(nullptr)
                                                        int64_t rax_59 =
                                                            sub_142c705f0(*(arg1 + 0x168) + 0xe)
                                                        *(arg1 + 0x200) = rax_59
                                                        
                                                        if (*(arg1 + 0x5d9) != 0)
                                                            *(arg1 + 0x4efc) = rax_59.d
                                                else
                                                    sub_142c52530(arg1, 2, 2)
                                                    char* rcx_49 = arg2[0x93]
                                                    
                                                    if (rcx_49 == 0)
                                                        rcx_49 = arg2[0x1a]
                                                    
                                                    zmm2 = DBI1::OpenModW(arg1, *(arg1 + 0x8b0), 1, 
                                                        *(arg1 + 0x168) + 0xb, zmm2, rcx_49, 
                                                        *(arg1 + 0x4e38))
                                                    sub_142c52570(arg1, 2)
                                            else
                                                char* _String = *(arg1 + 0x168) + 0xe
                                                char i = *_String
                                                
                                                while (i != 0)
                                                    if (isdigit(zx.d(i)) != 0)
                                                        break
                                                    
                                                    if (*_String == 0x2a)
                                                        break
                                                    
                                                    i = _String[1]
                                                    _String = &_String[1]
                                                
                                                if (isdigit(zx.d(*_String)) == 0)
                                                    *(arg1 + 0x4e50) = 0
                                                else
                                                    int64_t rax_54 = strtoll(_String, nullptr, 0xa)
                                                    *(arg1 + 0x178) = rax_54
                                                    
                                                    if (*(arg1 + 0x4e50) == rax_54)
                                                        *(arg1 + 0x170) = 1
                                        else
                                            char* rbx_11 = *(arg1 + 0x168) + 0x11
                                            char i_1 = *rbx_11
                                            
                                            while (i_1 != 0)
                                                if (isspace(zx.d(i_1)) == 0)
                                                    break
                                                
                                                i_1 = rbx_11[1]
                                                rbx_11 = &rbx_11[1]
                                            
                                            if (j_sub_142c704d0("identity", rbx_11, 8) == 0)
                                                if (j_sub_142c704d0("deflate", rbx_11, 7) == 0)
                                                    int32_t rax_49 =
                                                        j_sub_142c704d0("gzip", rbx_11, 4)
                                                    int32_t rax_50
                                                    
                                                    if (rax_49 == 0)
                                                        rax_50 = j_sub_142c704d0("x-gzip", rbx_11, 
                                                            zx.q(rax_49 + 6))
                                                    
                                                    if (rax_49 != 0 || rax_50 != 0)
                                                        *(arg1 + 0x1a0) = 2
                                                else
                                                    *(arg1 + 0x1a0) = 1
                                            else
                                                *(arg1 + 0x1a0) = 0
                                    else
                                        char* rbx_9 = *(arg1 + 0x168) + 0x12
                                        
                                        while (true)
                                            char i_2 = *rbx_9
                                            
                                            while (i_2 != 0)
                                                if (isspace(zx.d(i_2)) == 0 && *rbx_9 != 0x2c)
                                                    break
                                                
                                                i_2 = rbx_9[1]
                                                rbx_9 = &rbx_9[1]
                                            
                                            if (j_sub_142c704d0("chunked", rbx_9, 7) != 0)
                                                *(arg1 + 0x248) = 1
                                                sub_142c89650(arg2)
                                                rbx_9 = &rbx_9[7]
                                            
                                            if (*(arg1 + 0x1a0) != 0)
                                                break
                                            
                                            if (j_sub_142c704d0("identity", rbx_9, 8) == 0)
                                                if (j_sub_142c704d0("deflate", rbx_9, 7) == 0)
                                                    if (j_sub_142c704d0("gzip", rbx_9, 4) == 0)
                                                        if (j_sub_142c704d0("x-gzip", rbx_9, 6)
                                                                == 0)
                                                            break
                                                        
                                                        *(arg1 + 0x1a0) = 2
                                                        rbx_9 = &rbx_9[6]
                                                    else
                                                        *(arg1 + 0x1a0) = 2
                                                        rbx_9 = &rbx_9[4]
                                                else
                                                    *(arg1 + 0x1a0) = 1
                                                    rbx_9 = &rbx_9[7]
                                            else
                                                *(arg1 + 0x1a0) = 0
                                                rbx_9 = &rbx_9[8]
                                else
                                    sub_142c65340(arg2, 2)
                            else
                                zmm2 = sub_142c64850(arg1, 
                                    "HTTP/1.0 connection set to keep alive!\n", 
                                    sub_142c65340(arg2, 0), zmm2)
                        else
                            zmm2 = sub_142c64850(arg1, "HTTP/1.1 proxy connection set close!\n", 
                                sub_142c65340(arg2, 1), zmm2)
                    else
                        zmm2 = sub_142c64850(arg1, 
                            "HTTP/1.0 proxy connection set to keep alive!\n", 
                            sub_142c65340(arg2, 0), zmm2)
                else if (arg2[0x42].d s< 0x14)
                    char* rax_31 = sub_142c6ca70(*(arg1 + 0x168))
                    int32_t* rcx_28 = arg2[0xf4]
                    
                    if (rcx_28 != 0 && *rcx_28 == 1)
                        char rax_32
                        rax_32, zmm2 = sub_142c70090(arg1, rax_31, zmm2)
                        
                        if (rax_32 != 0)
                            *arg2[0xf4] = 0xffffffff
                    
                    data_143ccb8a0(rax_31)
            else
                char* rax_29 = sub_142c6ca70(*(arg1 + 0x168))
                
                if (rax_29 == 0)
                    return 0x1b
                
                if (*rax_29 != 0)
                    data_143ccb8a0(*(arg1 + 0x4f18))
                    *(arg1 + 0x4f18) = rax_29
                else
                    data_143ccb8a0(rax_29)
        else
            int64_t rax_26
            int64_t r8_10
            rax_26, r8_10 = strtoll(*(arg1 + 0x168) + 0xf, nullptr, 0xa)
            int64_t rax_27 = *(arg1 + 0x5b8)
            
            if (rax_27 != 0 && rax_26 s> rax_27)
                sub_142c64760(arg1, "Maximum file size exceeded", r8_10, zmm2)
                return 0x3f
            
            if (rax_26 s< 0)
                sub_142c65340(arg2, 2)
                zmm2 = sub_142c64850(arg1, 
                    "Negative content-length: %I64d, closing after transfer\n", rax_26, zmm2)
            else
                *(arg1 + 0xd8) = rax_26
                *(arg1 + 0xe8) = rax_26
                sub_142c6f180(arg1, rax_26)
        
        int32_t rbx_14
        rbx_14.b = *(arg1 + 0x5e5) != 0
        
        if (*(arg1 + 0x5f0) != 0)
            zmm2 = sub_142c64600(arg1, 1, *(arg1 + 0x168), *(arg1 + 0x148), zmm2, arg2)
        
        result, arg5, arg6 = sub_142c645e0(arg2, rbx_14 + 2, *(arg1 + 0x168), *(arg1 + 0x148), zmm2)
        
        if (result != 0)
            return result
        
        *(arg1 + 0x4f04) += *(arg1 + 0x148)
        *(arg1 + 0x108) += *(arg1 + 0x148)
    
    *(arg1 + 0x140) = *(arg1 + 0xa70)
    rax_83 = *(arg1 + 0x150)
    *(arg1 + 0x148) = 0
while (*rax_83 != 0)
return 0
