// 函数: sub_142c814a0
// 地址: 0x142c814a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int64_t arg_10 = 0

if (arg1[0xd9] != 0)
    return sub_142c8ec60(&arg1[0xd3], arg2)

int64_t* rsi = arg1[0xde]
void* r15 = *rsi
int32_t arg_8
int32_t rax_1
int64_t r8_1
int512_t entry_zmm2
int512_t zmm2
rax_1, r8_1, zmm2 = FindVITargetTypeInstance(arg1[0x47], &arg1[0xd3], &arg_8, &arg_10, entry_zmm2)
int32_t rbx = rax_1
*(r15 + 0x4ef0) = arg_8
int32_t r9_1 = arg_8

if (r9_1 == 0x1a5)
    sub_142c64850(r15, "We got a 421 - timeout!\n", r8_1, zmm2)
    rsi[0xea].d = 0
    return 0x1c

if (rbx != 0)
    return rbx

if (r9_1 != 0)
    uint64_t r8_2 = zx.q(arg1[0xea].d)
    int32_t rax_4 = (r8_2 - 1).d
    int32_t rax_3
    
    if (rax_4 u> 0x20)
        arg1[0xea].d = 0
    else
        switch (rax_4)
            case 0
                if (r9_1 == 0xe6)
                    return sub_142c81360(arg1, r9_1, zmm2)
                
                if (r9_1 != 0xdc)
                    sub_142c64760(r14, "Got a %03d ftp-server response when 220 was expected", 
                        zx.q(r9_1), zmm2)
                    return 8
                
                if (*(r14 + 0x5f8) == 0
                        || (arg1[0x58].b != 0 && (*(arg1 + 0x411) == 0 || arg1[0x62].b != 0)))
                    rax_3 = sub_142c81300(arg1)
                    goto label_142c81c51
                
                *(arg1 + 0x74c) = 0
                uint64_t r8_4 = zx.q(*(r14 + 0x5fc))
                
                if (r8_4.d s< 0)
                    sub_142c64760(r14, "unsupported parameter to CURLOPT_FTPSSLAUTH: %d", r8_4, 
                        zmm2)
                    return 0x30
                
                if (r8_4.d s<= 1)
                    arg1[0xe9].d = 1
                    *(arg1 + 0x744) = 0
                else
                    if (r8_4.d != 2)
                        sub_142c64760(r14, "unsupported parameter to CURLOPT_FTPSSLAUTH: %d", r8_4, 
                            zmm2)
                        return 0x30
                    
                    arg1[0xe9].d = 0xffffffff
                    *(arg1 + 0x744) = 1
                
                rax_3 = gzprintf(&arg1[0xd3], "AUTH %s", 
                    &data_1436b7c80 + (sx.q(*(arg1 + 0x744)) << 2), zmm2)
                rbx = rax_3
                
                if (rax_3 != 0)
                    return rax_3
                
                arg1[0xea].d = 2
            case 1
                if (r9_1 != 0xea && r9_1 != 0x14e)
                    int32_t rax_9 = *(arg1 + 0x74c)
                    
                    if (rax_9 s< 1)
                        *(arg1 + 0x74c) = rax_9 + 1
                        *(arg1 + 0x744) += arg1[0xe9].d
                        return gzprintf(&arg1[0xd3], "AUTH %s", 
                            &data_1436b7c80 + (sx.q(*(arg1 + 0x744)) << 2), zmm2)
                    
                    if (*(r14 + 0x5f8) s> 1)
                        return 0x40
                    
                    return sub_142c81300(arg1)
                
                int32_t rax_14 = sub_142c5b250(arg1, 0, zmm2)
                rbx = rax_14
                
                if (rax_14 == 0)
                    *(arg1 + 0x406) = 0
                    return sub_142c81300(arg1)
            case 2, 3
                return sub_142c81360(arg1, r9_1, zmm2)
            case 4
                if (r9_1 == 0xe6)
                    return sub_142c7f500(arg1)
                
                sub_142c64760(*arg1, "ACCT rejected by server: %03d", zx.q(r9_1), zmm2)
                return 0xb
            case 5
                int64_t r8_8 = 0x50
                
                if (*(r14 + 0x5f8) == 2)
                    r8_8 = 0x43
                
                rax_3 = gzprintf(&arg1[0xd3], "PROT %c", r8_8, zmm2)
                rbx = rax_3
                
                if (rax_3 != 0)
                    return rax_3
                
                arg1[0xea].d = 7
            case 6
                int32_t rdx_5 = r9_1 s/ 0x64
                
                if (rdx_5 == 2)
                    uint32_t rax_19
                    rax_19.b = *(r14 + 0x5f8) != rdx_5
                    *(arg1 + 0x406) = rax_19.b
                else if (*(r14 + 0x5f8) s> 2)
                    return 0x40
                
                if (*(r14 + 0x600) == 0)
                    goto label_142c8185a
                
                rax_3 = gzprintf(&arg1[0xd3], &data_1434ccff0, &data_1436b8798, zmm2)
                rbx = rax_3
                
                if (rax_3 != 0)
                    return rax_3
                
                arg1[0xea].d = 8
            case 7
                if (r9_1 s>= 0x1f4)
                label_142c8185a:
                    rax_3 = sub_142c7ffd0(arg1)
                label_142c81c51:
                    rbx = rax_3
                    
                    if (rax_3 != 0)
                        return rax_3
                else
                    int32_t rax_20
                    int64_t r8_9
                    int512_t zmm2_1
                    rax_20, r8_9, zmm2_1 = sub_142c5ba70(arg1, 0, zmm2)
                    rbx = rax_20
                    
                    if (rax_20 == 0)
                        goto label_142c8185a
                    
                    sub_142c64760(*arg1, "Failed to clear the command channel (CCC)", r8_9, zmm2_1)
            case 8
                if (r9_1 != 0x101)
                    arg1[0xea].d = 0
                else
                    char* i = *(r14 + 0xa80) + 4
                    int64_t r12_1 = sx.q(*(r14 + 0x598))
                    char* rax_21 = data_143ccb898(arg_10 + 1)
                    
                    if (rax_21 == 0)
                        return 0x1b
                    
                    for (; i u< *(r14 + 0xa80) + r12_1; i = &i[1])
                        char rax_23 = *i
                        
                        if (rax_23 u<= 0x22 && test_bit(0x400000401, sx.q(rax_23)))
                            break
                    
                    char* rcx_22 = rax_21
                    
                    if (*i != 0x22)
                        sub_142c64850(r14, "Failed to figure out path\n", data_143ccb8a0(rcx_22), 
                            zmm2)
                        arg1[0xea].d = 0
                    else
                        char i_1 = i[1]
                        void* rsi_2 = &i[1]
                        
                        while (i_1 != 0)
                            if (i_1 != 0x22)
                                *rcx_22 = i_1
                            else
                                rsi_2 += 1
                                
                                if (*rsi_2 != i_1)
                                    *rcx_22 = 0
                                    break
                                
                                *rcx_22 = i_1
                            
                            i_1 = *(rsi_2 + 1)
                            rsi_2 += 1
                            rcx_22 = &rcx_22[1]
                        
                        if (arg1[0xec] != 0 || *rax_21 == 0x2f)
                            data_143ccb8a0(arg1[0xe1])
                            arg1[0xe1] = rax_21
                            sub_142c64850(r14, "Entry path is '%s'\n", rax_21, zmm2)
                            *(r14 + 0x4e18) = arg1[0xe1]
                            arg1[0xea].d = 0
                        else
                            int32_t rax_25
                            int512_t zmm2_2
                            rax_25, zmm2_2 = gzprintf(&arg1[0xd3], &data_1434ccff0, "SYST", zmm2)
                            rbx = rax_25
                            
                            if (rax_25 == 0)
                                data_143ccb8a0(arg1[0xe1])
                                arg1[0xe1] = rax_21
                                sub_142c64850(r14, "Entry path is '%s'\n", rax_21, zmm2_2)
                                *(r14 + 0x4e18) = arg1[0xe1]
                                arg1[0xea].d = 0xa
                            else
                                data_143ccb8a0(rax_21)
            case 9
                if (r9_1 != 0xd7)
                    arg1[0xea].d = 0
                else
                    char* rsi_4 = *(r14 + 0xa80) + 4
                    char* rax_28 = data_143ccb898(arg_10 + 1)
                    
                    if (rax_28 == 0)
                        return 0x1b
                    
                    while (*rsi_4 == 0x20)
                        rsi_4 = &rsi_4[1]
                    
                    char i_2 = *rsi_4
                    char* rcx_32 = rax_28
                    
                    if (i_2 != 0)
                        while (i_2 != 0x20)
                            *rcx_32 = i_2
                            rcx_32 = &rcx_32[1]
                            i_2 = *(rsi_4 - rax_28 + rcx_32)
                            
                            if (i_2 == 0)
                                break
                    
                    *rcx_32 = 0
                    
                    if (sub_142c70460(rax_28, "OS/400") == 0)
                        data_143ccb8a0(arg1[0xec])
                        arg1[0xec] = rax_28
                        arg1[0xea].d = 0
                    else
                        int32_t rax_30 =
                            gzprintf(&arg1[0xd3], &data_1434ccff0, "SITE NAMEFMT 1", zmm2)
                        rbx = rax_30
                        
                        if (rax_30 == 0)
                            data_143ccb8a0(arg1[0xec])
                            arg1[0xec] = rax_28
                            arg1[0xea].d = 0xb
                        else
                            data_143ccb8a0(rax_28)
            case 0xa
                if (r9_1 != 0xfa)
                    arg1[0xea].d = 0
                else
                    sub_142c7ffd0(arg1)
            case 0xb, 0xc, 0xd, 0xe
                if (r9_1 s>= 0x190 && arg1[0xe9].d == 0)
                    sub_142c64760(*arg1, "QUOT command failed with %03d", zx.q(r9_1), zmm2)
                    return 0x15
                
                rax_3 = sub_142c80010(arg1, 0, r8_2.d, zmm2)
                goto label_142c81c51
            case 0xf
                if (r9_1 s/ 0x64 == 2)
                    *(arg1 + 0x72c) += 1
                    int32_t rax_36 = *(arg1 + 0x72c)
                    arg1[0xe9].d = 0
                    
                    if (rax_36 s<= arg1[0xe3].d)
                        rax_3 = gzprintf(&arg1[0xd3], "CWD %s", 
                            *(arg1[0xe2] + (sx.q(rax_36 - 1) << 3)), zmm2)
                        goto label_142c81c51
                    
                    rax_3 = sub_142c7f570(arg1)
                    rbx = rax_3
                    
                    if (rax_3 != 0)
                        return rax_3
                else
                    int32_t rax_34
                    
                    if (*(*arg1 + 0x5c4) != 0)
                        rax_34 = *(arg1 + 0x72c)
                    
                    if (*(*arg1 + 0x5c4) == 0 || rax_34 == 0 || arg1[0xe9].d != 0)
                        sub_142c64760(r14, "Server denied you to change to the given directory", 
                            r8_2, zmm2)
                        arg1[0xe6].b = 1
                        return 9
                    
                    arg1[0xe9].d = 1
                    rax_3 = gzprintf(&arg1[0xd3], "MKD %s", 
                        *(arg1[0xe2] + (sx.q(rax_34 - 1) << 3)), zmm2)
                    rbx = rax_3
                    
                    if (rax_3 != 0)
                        return rax_3
                    
                    arg1[0xea].d = 0x11
            case 0x10
                if (r9_1 s/ 0x64 != 2)
                    int32_t rcx_45 = *(arg1 + 0x74c)
                    *(arg1 + 0x74c) = rcx_45 - 1
                    
                    if (rcx_45 == 0)
                        sub_142c64760(r14, "Failed to MKD dir: %03d", zx.q(r9_1), zmm2)
                        return 9
                
                arg1[0xea].d = 0x10
                rax_3 = gzprintf(&arg1[0xd3], "CWD %s", 
                    *(arg1[0xe2] + (sx.q(*(arg1 + 0x72c) - 1) << 3)), zmm2)
                goto label_142c81c51
            case 0x11
                return sub_142c7f630(arg1, r9_1, r8_2, zmm2)
            case 0x12, 0x13, 0x14, 0x15
                return sub_142c807b0(arg1, r9_1, r8_2, zmm2)
            case 0x16, 0x17, 0x18
                return sub_142c80590(arg1, r9_1, r8_2, zmm2)
            case 0x19, 0x1a
                return sub_142c80260(arg1, r9_1, r8_2, zmm2)
            case 0x1b
                return sub_142c7fdd0(arg1, r9_1, r8_2, zmm2)
            case 0x1c
                if (r9_1 == 0xc8)
                    return sub_142c80a60(arg1)
                
                sub_142c64760(r14, "PRET command not accepted: %03d", zx.q(r9_1), zmm2)
                return 0x54
            case 0x1d
                return sub_142c7f8e0(arg1, r9_1, zmm2)
            case 0x1e, 0x1f
                return sub_142c7f190(arg1, r9_1, r8_2.d, zmm2)
            case 0x20
                return sub_142c806a0(arg1, r9_1, r8_2, zmm2)

return rbx
