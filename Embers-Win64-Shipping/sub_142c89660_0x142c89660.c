// 函数: sub_142c89660
// 地址: 0x142c89660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
*arg4 = 0
int64_t rbp = arg3
char* rdi = arg2
int32_t r15 = 0
int32_t rax_1

if (*(r13 + 0x610) != 0 && *(r13 + 0x225) == 0)
    rax_1, arg3, arg5 = sub_142c645e0(arg1, 1, arg2, arg3, arg5)
    r15 = rax_1

if (*(r13 + 0x610) == 0 || *(r13 + 0x225) != 0 || rax_1 == 0)
    while (true)
        if (rbp == 0)
            return 0
        
        int64_t rax_2 = sx.q(arg1[7].d)
        
        if (rax_2.d u<= 7)
            switch (rax_2)
                case 0
                    char rcx_2 = *rdi
                    
                    if (rcx_2 - 0x30 u<= 9 || rcx_2 - 0x41 u<= 5 || rcx_2 - 0x61 u<= 5)
                        int64_t rax_9 = sx.q(*(arg1 + 0x34))
                        
                        if (rax_9.d s>= 0x10)
                            return 1
                        
                        rdi = &rdi[1]
                        *(rax_9 + arg1 + 0x20) = rcx_2
                        rbp -= 1
                        *(arg1 + 0x34) += 1
                        continue
                    
                    int64_t rax_6 = sx.q(*(arg1 + 0x34))
                    
                    if (rax_6.d == 0)
                        return 2
                    
                    *(rax_6 + arg1 + 0x20) = 0
                    r15 = 0
                    char* _EndPtr
                    int64_t rax_7
                    rax_7, arg3 = strtoll(&arg1[4], &_EndPtr, 0x10)
                    arg1[8] = rax_7
                    
                    if (rax_7 == 0x7fffffffffffffff)
                        int32_t* rax_8
                        rax_8, arg3 = _errno()
                        
                        if (*rax_8 == 0x22)
                            return 2
                    
                    arg1[7].d = 1
                    continue
                case 1
                    if (*rdi == 0xa)
                        if (arg1[8] != 0)
                            arg1[7].d = 2
                        else
                            arg1[7].d = 5
                            *(arg1 + 0x694) = 0
                    
                    goto label_142c896c0
                case 2
                    int64_t rcx_4 = arg1[8]
                    
                    if (rcx_4 s>= rbp)
                        rcx_4 = rbp
                    
                    int64_t rax_10 = sub_14058e700(rcx_4)
                    int32_t rcx_6
                    
                    if (*(*arg1 + 0x611) == 0)
                        rcx_6 = *(r13 + 0x1a0)
                    else
                        rcx_6 = 0
                    
                    int32_t rax_11
                    
                    if (rcx_6 != 0)
                        if (rcx_6 == 1)
                            *(r13 + 0x150) = rdi
                            rax_11, arg3, arg5 = sub_142c89ac0(arg1, r13 + 0xd8, rax_10.d, arg5)
                        else
                            if (rcx_6 != 2)
                                sub_142c64760(*arg1, 
                                    "Unrecognized content encoding type. libcurl understands `identity', "
                                "`deflate' and `gzip' content encodings.", 
                                    arg3, arg5)
                                return 5
                            
                            *(r13 + 0x150) = rdi
                            rax_11, arg3, arg5 = sub_142c89b90(arg1, r13 + 0xd8, rax_10, arg5)
                        
                        goto label_142c897fd
                    
                    if (*(r13 + 0x225) != 0)
                        goto label_142c89800
                    
                    if (*(r13 + 0x610) != 0)
                        r15 = 0
                    else
                        rax_11, arg3, arg5 = sub_142c645e0(arg1, 1, rdi, rax_10, arg5)
                    label_142c897fd:
                        r15 = rax_11
                    label_142c89800:
                        
                        if (r15 != 0)
                            break
                    
                    rdi = &rdi[rax_10]
                    rbp -= rax_10
                    *arg4 += rax_10
                    arg1[8] -= rax_10
                    
                    if (arg1[8] != 0)
                        continue
                    else
                        arg1[7].d = 3
                        continue
                case 3
                    char rax_13 = *rdi
                    
                    if (rax_13 != 0xa)
                        if (rax_13 == 0xd)
                            goto label_142c896c0
                        
                        return 3
                    
                    *(arg1 + 0x34) = 0
                    arg1[9] = 0
                label_142c896c0:
                    rdi = &rdi[1]
                    rbp -= 1
                    continue
                case 4
                    if (*rdi != 0xa)
                        return 3
                    
                    arg1[9] = sub_14058e700(rbp - 1)
                    return 0xffffffff
                case 5
                    char rax_14 = *rdi
                    
                    if (rax_14 == 0xd || rax_14 == 0xa)
                        int64_t rax_20 = sx.q(*(arg1 + 0x694))
                        
                        if (rax_20.d == 0)
                            arg1[7].d = 7
                            continue
                        else
                            r15 = 0
                            *(rax_20 + arg1[0xd1]) = 0xd
                            *(arg1 + 0x694) += 1
                            *(sx.q(*(arg1 + 0x694)) + arg1[0xd1]) = 0xa
                            *(arg1 + 0x694) += 1
                            *(sx.q(*(arg1 + 0x694)) + arg1[0xd1]) = 0
                            
                            if (*(r13 + 0x610) == 0)
                                int32_t rax_24
                                rax_24, arg3, arg5 =
                                    sub_142c645e0(arg1, 2, arg1[0xd1], sx.q(*(arg1 + 0x694)), arg5)
                                r15 = rax_24
                                
                                if (rax_24 != 0)
                                    break
                            
                            *(arg1 + 0x694) = 0
                            arg1[7].d = 6
                            
                            if (*rdi == 0xa)
                                continue
                    else
                        int32_t rax_15 = arg1[0xd2].d
                        
                        if (*(arg1 + 0x694) s>= rax_15)
                            int64_t rax_18
                            
                            if (rax_15 == 0)
                                arg1[0xd2].d = 0x80
                                rax_18, arg3 = data_143ccb898(0x83)
                            else
                                int32_t rax_16 = rax_15 * 2
                                arg1[0xd2].d = rax_16
                                rax_18, arg3 = data_143ccb8a8(arg1[0xd1], sx.q(rax_16 + 3))
                            
                            if (rax_18 == 0)
                                return 6
                            
                            arg1[0xd1] = rax_18
                        
                        sx.q(*(arg1 + 0x694))[arg1[0xd1]] = *rdi
                        *(arg1 + 0x694) += 1
                    
                    goto label_142c896c0
                case 6
                    if (*rdi != 0xa)
                        return 3
                    
                    arg1[7].d = 7
                    goto label_142c896c0
                case 7
                    char rax_25 = *rdi
                    
                    if (rax_25 == 0xd)
                        rdi = &rdi[1]
                        rbp -= 1
                    else if (rax_25 != 0xa)
                        arg1[7].d = 5
                        continue
                    
                    arg1[7].d = 4
                    continue

return 4
