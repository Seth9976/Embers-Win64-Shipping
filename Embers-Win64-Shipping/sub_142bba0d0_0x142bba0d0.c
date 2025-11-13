// 函数: sub_142bba0d0
// 地址: 0x142bba0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[0x12]
int32_t rbx = 0
int64_t r12 = arg1[4]
int32_t arg_8 = 0
int32_t rdx_1
int32_t arg_18

if (*(arg1 + 0xb4) == 0)
    char* i_1 = arg1[0x13]
    char* i = i_1
    void* rdx_12 = &i_1[zx.q(arg1[0x14].d)]
    
    while (true)
        if (*i != 0x65 || &i[9] u>= rdx_12 || i[1] != 0x65 || i[2] != 0x78 || i[3] != 0x65
                || i[4] != 0x63)
            i = &i[1]
        else
            i = &i[0xa]
            *arg1 = i_1
            arg1[2] = i
            
            if (i_1 u< i)
                break
            
        label_142bba350:
            i_1 = arg1[0x13]
            rdx_12 = &i_1[zx.q(arg1[0x14].d)]
        
        if (i u>= rdx_12)
            goto label_142bba2df_2
    
    while (*i_1 != 0x65 || &i_1[5] u>= i || i_1[1] != 0x65 || i_1[2] != 0x78 || i_1[3] != 0x65
            || i_1[4] != 0x63)
        arg1[8](arg1)
        
        if (arg1[3].d != 0)
            goto label_142bba350
        
        arg1[7](arg1)
        i_1 = *arg1
        
        if (i_1 u>= i)
            goto label_142bba350
    
    arg1[2] = zx.q(arg1[0x14].d) + arg1[0x13]
    arg1[8](arg1)
    char (* rbx_2)[0x10] = *arg1
    int64_t rbp_3 = arg1[2]
    void* rsi_2 = rbp_3 - rbx_2
    uint64_t rax_15 = memchr(rbx_2, 0xa, rsi_2)
    uint64_t rax_16
    
    if (rax_15 != 0)
        rax_16 = memchr(rbx_2, 0xd, rsi_2)
    
    char rcx_15
    
    if (rax_15 == 0 || rax_15 u> rax_16)
        rcx_15 = 1
    else
        rcx_15 = 0
    
    if (rbx_2 u>= rbp_3)
    labelid_8:
        rdx_1 = 3
    else
        while (true)
            char rax_17 = *rbx_2
            
            if (rax_17 != 0x20 && rax_17 != 9 && (rcx_15 == 0 || rax_17 != 0xd) && rax_17 != 0xa)
                break
            
            rbx_2 = &(*rbx_2)[1]
            
            if (rbx_2 u>= rbp_3)
                goto label_142bba2df_2
        
        if (rbx_2 u>= rbp_3)
        label_142bba2df:
            rdx_1 = 3
        else
            uint32_t count = arg1[0x14].d - rbx_2.d + arg1[0x13].d
            
            if (*(arg1 + 0xb5) == 0)
                arg1[0x15] = arg1[0x13]
                arg1[0x13] = 0
                arg1[0x14].d = 0
                *(arg1 + 0xb6) = 1
            label_142bba45a:
                arg1[0x16].d = count
                
                if (&(*rbx_2)[3] u>= rbp_3)
                    memmove(arg1[0x15], rbx_2, count)
                else
                    uint32_t rcx_18 = zx.d(*rbx_2)
                    
                    if (rcx_18 - 0x30 u< 0xa || rcx_18 - 0x61 u< 6 || rcx_18 - 0x41 u< 6)
                        uint32_t rcx_19 = zx.d((*rbx_2)[1])
                        
                        if (rcx_19 - 0x30 u< 0xa || rcx_19 - 0x61 u< 6 || rcx_19 - 0x41 u< 6)
                            uint32_t rcx_20 = zx.d((*rbx_2)[2])
                            
                            if (rcx_20 - 0x30 u< 0xa || rcx_20 - 0x61 u< 6 || rcx_20 - 0x41 u< 6)
                                uint32_t rcx_21 = zx.d((*rbx_2)[3])
                                
                                if (rcx_21 - 0x30 u< 0xa || rcx_21 - 0x61 u< 6
                                        || rcx_21 - 0x41 u< 6)
                                    int64_t rdx_16 = arg1[0x15]
                                    *arg1 = rbx_2
                                    (*(*(arg2 + 8) + 0x30))(arg1, rdx_16, zx.q(count), &arg_18, 0)
                                    int32_t rax_33 = arg_18
                                    arg1[0x16].d = rax_33
                                    *(zx.q(rax_33) + arg1[0x15]) = 0
                                else
                                    memmove(arg1[0x15], rbx_2, count)
                            else
                                memmove(arg1[0x15], rbx_2, count)
                        else
                            memmove(arg1[0x15], rbx_2, count)
                    else
                        memmove(arg1[0x15], rbx_2, count)
                
            label_142bba541:
                (*(arg2 + 0x20))(arg1[0x15], zx.q(arg1[0x16].d), 0xd971)
                
                if (arg1[0x16].d u< 4)
                label_142bba2df_1:
                    rdx_1 = 3
                else
                    *arg1[0x15] = 0x20
                    *(arg1[0x15] + 1) = 0x20
                    *(arg1[0x15] + 2) = 0x20
                    *(arg1[0x15] + 3) = 0x20
                    int64_t rcx_26 = arg1[0x15]
                    int64_t rax_40 = zx.q(arg1[0x16].d) + rcx_26
                    arg1[1] = rcx_26
                    arg1[2] = rax_40
                    *arg1 = rcx_26
                    rdx_1 = arg_8
            else
                int64_t rax_18 = sub_142b99860(r12, count + 1, &arg_8)
                rdx_1 = arg_8
                arg1[0x15] = rax_18
                
                if (rdx_1 == 0)
                    goto label_142bba45a
else
    int32_t rax_1 = sub_1408e52d0(rsi)
    arg1[0x16].d = 0
    
    while (true)
        int16_t rbp_1 = 0
        int16_t rax_2 = sub_142b96f00(rsi, &arg_18)
        rdx_1 = arg_18
        
        if (rdx_1 == 0)
            if (0x7fff + rax_2 u<= 1)
                int32_t rax_3 = sub_142b96dd0(rsi, &arg_18)
                rdx_1 = arg_18
                
                if (rdx_1 == 0)
                    rbx = rax_3
            
            rbp_1 = rax_2
        
        arg_8 = rdx_1
        
        if (rdx_1 != 0)
            return zx.q(rdx_1)
        
        if (rbp_1 != 0x8002)
            break
        
        arg1[0x16].d += rbx
        int32_t rax_4 = sub_142b970b0(rsi, rbx)
        arg_8 = rax_4
        
        if (rax_4 != 0)
            return zx.q(rax_4)
        
        rbx = 0
    
    if (arg1[0x16].d == 0)
    label_142bba2df_2:
        rdx_1 = 3
    else
        int32_t rax_5 = sub_142b97060(rsi, rax_1, arg3)
        arg_8 = rax_5
        rdx_1 = rax_5
        
        if (rax_5 == 0)
            int64_t rax_6
            int512_t zmm0_1
            rax_6, zmm0_1 = sub_142b99860(r12, arg1[0x16].d, &arg_8)
            rdx_1 = arg_8
            arg1[0x15] = rax_6
            
            if (rdx_1 == 0)
                arg1[0x16].d = 0
                
                while (true)
                    int16_t rbp_2 = 0
                    uint32_t rbx_1 = 0
                    int16_t rax_7 = sub_142b96f00(rsi, &arg_18)
                    int32_t rdx_7 = arg_18
                    
                    if (rdx_7 == 0)
                        if (0x7fff + rax_7 u<= 1)
                            uint32_t rax_8 = sub_142b96dd0(rsi, &arg_18)
                            rdx_7 = arg_18
                            
                            if (rdx_7 == 0)
                                rbx_1 = rax_8
                        
                        rbp_2 = rax_7
                    
                    arg_8 = rdx_7
                    
                    if (rdx_7 != 0)
                        break
                    
                    if (rbp_2 != 0x8002)
                        break
                    
                    int32_t rax_9
                    rax_9, zmm0_1 =
                        sub_142b96990(rsi, zx.q(arg1[0x16].d) + arg1[0x15], rbx_1, zmm0_1)
                    arg_8 = rax_9
                    
                    if (rax_9 != 0)
                        return zx.q(rax_9)
                    
                    arg1[0x16].d += rbx_1
                
                arg_8 = 0
                goto label_142bba541
return zx.q(rdx_1)
