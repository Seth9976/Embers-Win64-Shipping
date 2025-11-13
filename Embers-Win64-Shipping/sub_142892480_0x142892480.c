// 函数: sub_142892480
// 地址: 0x142892480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* const rbp = arg3
int32_t* rsi = arg2
int32_t r14

if (arg6 != 0xffffffff)
    r14 = 1
    
    if (arg6 == 0)
        r14 = arg6
    
    arg1[2].d = r14
else
    r14 = arg1[2].d

int32_t* rcx

if (arg1[1] != 0)
    rcx = *arg1

if (arg1[1] != 0 && rcx != 0 && (rsi == 0 || *arg2 == *rcx))
    goto label_142892605

rcx = *arg1

if (rsi == 0)
    if (rcx != 0)
        goto label_142892605
    
    sub_1428a5670(6, 0x7b, 0x83, "crypto\evp\evp_enc.c", 0x94)
else
    if (rcx != 0)
        int32_t rbx_1 = *(arg1 + 0x6c)
        sub_1428922e0(arg1)
        arg1[2].d = r14
        *(arg1 + 0x6c) = rbx_1
    
    if (rbp == 0)
        rbp = sub_1428ce250(*rsi)
    label_14289255d:
        
        if (rbp == 0)
            rbp = nullptr
        label_142892581:
            arg1[1] = rbp
            *arg1 = rsi
            int64_t rax_5 = sx.q(rsi[0xc])
            int32_t* rcx_6
            
            if (rax_5.d == 0)
                arg1[0xe] = 0
                rcx_6 = rsi
            label_1428925ce:
                int32_t rax_7 = rsi[2]
                *(arg1 + 0x6c) &= 1
                arg1[0xd].d = rax_7
                int32_t rax_8
                
                if ((rcx_6[4].b & 0x40) != 0)
                    rax_8 = sub_142892150(arg1)
                
                if ((rcx_6[4].b & 0x40) == 0 || rax_8 != 0)
                    rcx = *arg1
                label_142892605:
                    int32_t rax_9 = rcx[1]
                    
                    if (rax_9 u> 0x10 || not(test_bit(0x10102, rax_9)))
                        sub_1428bc530()
                        noreturn
                    
                    int32_t rax_12
                    
                    if ((*(arg1 + 0x6c) & 1) == 0)
                        rax_12 = sub_142890eb0(sub_140687ad0(arg1)) & 0xf0007
                    
                    if ((*(arg1 + 0x6c) & 1) != 0 || rax_12 != 0x10002)
                        if ((sub_142890eb0(sub_140687ad0(arg1)) & 0x10) != 0)
                        label_14289274b:
                            int32_t rax_23
                            
                            if (arg4 != 0 || (*(*arg1 + 0x10) & 0x20) != 0)
                                rax_23 = (*(*arg1 + 0x18))(arg1, arg4, arg5, zx.q(r14))
                            
                            if ((arg4 == 0 && (*(*arg1 + 0x10) & 0x20) == 0) || rax_23 != 0)
                                void* rcx_25 = *arg1
                                *(arg1 + 0x14) = 0
                                arg1[0xf].d = 0
                                *(arg1 + 0x7c) = *(rcx_25 + 4) - 1
                                return 1
                        else
                            uint64_t rax_17 = zx.q(sub_142890eb0(sub_140687ad0(arg1))) & 0xf0007
                            
                            if (rax_17.d u<= 5)
                                switch (rax_17)
                                    case 2
                                        goto label_1428926d2
                                    case 3, 4
                                        arg1[0xb].d = 0
                                    label_1428926d2:
                                        
                                        if (sub_142890ed0(arg1) s> 0x10)
                                            sub_1428bc530()
                                            noreturn
                                        
                                        if (arg5 != 0)
                                            memcpy(&arg1[3], arg5, sub_142890ed0(arg1))
                                        
                                        memcpy(&arg1[5], &arg1[3], sub_142890ed0(arg1))
                                    case 5
                                        arg1[0xb].d = 0
                                        
                                        if (arg5 != 0)
                                            memcpy(&arg1[5], arg5, sub_142890ed0(arg1))
                                
                                goto label_14289274b
                    else
                        sub_1428a5670(6, 0x7b, 0xaa, "crypto\evp\evp_enc.c", 0xa1)
                else
                    *arg1 = 0
                    sub_1428a5670(6, 0x7b, 0x86, "crypto\evp\evp_enc.c", 0x8f)
            else
                int64_t rax_6 = sub_1428a6a70(rax_5)
                arg1[0xe] = rax_6
                
                if (rax_6 != 0)
                    rcx_6 = *arg1
                    goto label_1428925ce
                
                *arg1 = 0
                sub_1428a5670(6, 0x7b, (rax_6 + 0x41).d, "crypto\evp\evp_enc.c", 0x83)
        else
            int32_t* rax_4 = sub_1428ce1f0(rbp, *rsi)
            rsi = rax_4
            
            if (rax_4 != 0)
                goto label_142892581
            
            sub_1428a5670(6, 0x7b, 0x86, "crypto\evp\evp_enc.c", 0x70)
    else
        if (sub_1428af800(rbp) != 0)
            goto label_14289255d
        
        sub_1428a5670(6, 0x7b, 0x86, "crypto\evp\evp_enc.c", 0x61)

return 0
