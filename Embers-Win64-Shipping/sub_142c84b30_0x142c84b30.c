// 函数: sub_142c84b30
// 地址: 0x142c84b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
void* r14 = *arg1
int32_t rbp = 0
int32_t rsi = -1
int64_t r15 = arg3
int32_t* rdi = *(r14 + 0x250)

if (arg3 != 0)
    char* r13_1 = arg2
    
    while (true)
        int64_t rax_1 = sx.q(rdi[0x7b2])
        char rbx_1 = *r13_1
        r15 -= 1
        
        if (rax_1.d u> 8)
            goto label_142c8503e
        
        int32_t var_38
        int32_t result
        
        switch (rax_1)
            case 0
                if (rbx_1 != 0xff)
                    if (rbx_1 == 0xd)
                        rdi[0x7b2] = 6
                    
                    goto label_142c84bfa
                
                rdi[0x7b2] = 1
            label_142c84bae:
                
                if (rsi s>= 0)
                    result, arg4 = sub_142c645e0(arg1, 1, &arg2[sx.q(rsi)], sx.q(rbp - rsi), arg4)
                
                if (rsi s< 0 || result == 0)
                    rsi = -1
                    goto label_142c8503e
            case 1
            label_142c84ee3:
                uint32_t r9_9 = zx.d(rbx_1)
                
                if (r9_9 - 0xfa u> 5)
                    rdi[0x7b2] = 0
                    
                    if (*(r14 + 0x5f0) != 0)
                        if (r9_9 u< 0xec)
                            arg4 = sub_142c64850(r14, "%s IAC %d\n", "RCVD", arg4)
                        else
                            (&data_1436b9000)[sx.q(r9_9 - 0xec)]
                            arg4 = sub_142c64850(r14, "%s IAC %s\n", "RCVD", arg4)
                else
                    switch (r9_9)
                        case 0xfa
                            rdi[0x7b2] = 7
                            *(rdi + 0x1eb8) = &rdi[0x72e]
                        case 0xfb
                            rdi[0x7b2] = 2
                        case 0xfc
                            rdi[0x7b2] = 3
                        case 0xfd
                            rdi[0x7b2] = 4
                        case 0xfe
                            rdi[0x7b2] = 5
                        case 0xff
                            rdi[0x7b2] = 0
                            
                            if (rsi s< 0)
                                rsi = rbp
                
                goto label_142c8503e
            case 2
                uint64_t rbx_2 = zx.q(rbx_1)
                
                if (*(r14 + 0x5f0) != 0)
                    char* rdx
                    
                    if (rbx_2.d u<= 0x27)
                        char const* const rcx_3 = (&data_1436b8ec0)[rbx_2]
                        
                        if (rcx_3 != 0)
                            var_38.q = rcx_3
                            rdx = "%s %s %s\n"
                        else
                            var_38 = rbx_2.d
                            rdx = "%s %s %d\n"
                    else if (rbx_2.d != 0xff)
                        var_38 = rbx_2.d
                        rdx = "%s %s %d\n"
                    else
                        var_38.q = "EXOPL"
                        rdx = "%s %s %s\n"
                    
                    arg4 = sub_142c64850(r14, rdx, "RCVD", arg4)
                
                *rdi = 1
                arg4 = sub_142c84280(arg1, rbx_2.d, arg4)
                rdi[0x7b2] = 0
                goto label_142c8503e
            case 3
                uint64_t rbx_3 = zx.q(rbx_1)
                
                if (*(r14 + 0x5f0) != 0)
                    char* rdx_2
                    
                    if (rbx_3.d u<= 0x27)
                        char const* const rcx_6 = (&data_1436b8ec0)[rbx_3]
                        
                        if (rcx_6 != 0)
                            var_38.q = rcx_6
                            rdx_2 = "%s %s %s\n"
                        else
                            var_38 = rbx_3.d
                            rdx_2 = "%s %s %d\n"
                    else if (rbx_3.d != 0xff)
                        var_38 = rbx_3.d
                        rdx_2 = "%s %s %d\n"
                    else
                        var_38.q = "EXOPL"
                        rdx_2 = "%s %s %s\n"
                    
                    arg4 = sub_142c64850(r14, rdx_2, "RCVD", arg4)
                
                *rdi = 1
                arg4 = sub_142c84350(arg1, rbx_3.d, arg4)
                rdi[0x7b2] = 0
                goto label_142c8503e
            case 4
                uint64_t rbx_4 = zx.q(rbx_1)
                
                if (*(r14 + 0x5f0) != 0)
                    char* rdx_4
                    
                    if (rbx_4.d u<= 0x27)
                        char const* const rcx_9 = (&data_1436b8ec0)[rbx_4]
                        
                        if (rcx_9 != 0)
                            var_38.q = rcx_9
                            rdx_4 = "%s %s %s\n"
                        else
                            var_38 = rbx_4.d
                            rdx_4 = "%s %s %d\n"
                    else if (rbx_4.d != 0xff)
                        var_38 = rbx_4.d
                        rdx_4 = "%s %s %d\n"
                    else
                        var_38.q = "EXOPL"
                        rdx_4 = "%s %s %s\n"
                    
                    arg4 = sub_142c64850(r14, rdx_4, "RCVD", arg4)
                
                *rdi = 1
                arg4 = sub_142c840b0(arg1, rbx_4.d, arg4)
                rdi[0x7b2] = 0
                goto label_142c8503e
            case 5
                uint64_t rbx_5 = zx.q(rbx_1)
                
                if (*(r14 + 0x5f0) != 0)
                    char* rdx_6
                    
                    if (rbx_5.d u<= 0x27)
                        char const* const rcx_12 = (&data_1436b8ec0)[rbx_5]
                        
                        if (rcx_12 != 0)
                            var_38.q = rcx_12
                            rdx_6 = "%s %s %s\n"
                        else
                            var_38 = rbx_5.d
                            rdx_6 = "%s %s %d\n"
                    else if (rbx_5.d != 0xff)
                        var_38 = rbx_5.d
                        rdx_6 = "%s %s %d\n"
                    else
                        var_38.q = "EXOPL"
                        rdx_6 = "%s %s %s\n"
                    
                    arg4 = sub_142c64850(r14, rdx_6, "RCVD", arg4)
                
                *rdi = 1
                arg4 = sub_142c841e0(arg1, rbx_5.d, arg4)
                rdi[0x7b2] = 0
                goto label_142c8503e
            case 6
                rdi[0x7b2] = 0
                
                if (rbx_1 == 0)
                    goto label_142c84bae
                
            label_142c84bfa:
                
                if (rsi s>= 0)
                    goto label_142c8503e
                
                rsi = rbp
            label_142c8503e:
                rbp += 1
                r13_1 = &r13_1[1]
                
                if (r15 == 0)
                    if (rsi s< 0)
                        break
                    
                    result = sub_142c645e0(arg1, 1, &arg_10[sx.q(rsi)], sx.q(rbp - rsi), arg4)
                    
                    if (result == 0)
                        break
                else
                    arg2 = arg_10
                    continue
            case 7
                if (rbx_1 != 0xff)
                    char* rcx_15 = *(rdi + 0x1eb8)
                    
                    if (rcx_15 u< &rdi[0x7ae])
                        *rcx_15 = rbx_1
                        *(rdi + 0x1eb8) += 1
                else
                    rdi[0x7b2] = 8
                
                goto label_142c8503e
            case 8
                if (rbx_1 == 0xf0)
                    void* rax_14 = *(rdi + 0x1eb8)
                    
                    if (rax_14 u< &rdi[0x7ae])
                        *rax_14 = 0xff
                        *(rdi + 0x1eb8) += 1
                    
                    void* rax_15 = *(rdi + 0x1eb8)
                    
                    if (rax_15 u< &rdi[0x7ae])
                        *rax_15 = 0xf0
                        *(rdi + 0x1eb8) += 1
                    
                    *(rdi + 0x1ec0) = *(rdi + 0x1eb8) - 2
                    *(rdi + 0x1eb8) = &rdi[0x72e]
                    arg4 = sub_142c847c0(arg1)
                    rdi[0x7b2] = 0
                    goto label_142c8503e
                
                if (rbx_1 == 0xff)
                    char* rcx_21 = *(rdi + 0x1eb8)
                    
                    if (rcx_21 u< &rdi[0x7ae])
                        *rcx_21 = 0xff
                        *(rdi + 0x1eb8) += 1
                    
                    rdi[0x7b2] = 7
                    goto label_142c8503e
                
                void* rax_5 = *(rdi + 0x1eb8)
                
                if (rax_5 u< &rdi[0x7ae])
                    *rax_5 = 0xff
                    *(rdi + 0x1eb8) += 1
                
                void* rax_6 = *(rdi + 0x1eb8)
                
                if (rax_6 u< &rdi[0x7ae])
                    *rax_6 = rbx_1
                    *(rdi + 0x1eb8) += 1
                
                uint32_t r9_6 = zx.d(rbx_1)
                *(rdi + 0x1ec0) = *(rdi + 0x1eb8) - 2
                *(rdi + 0x1eb8) = &rdi[0x72e]
                
                if (*(r14 + 0x5f0) != 0)
                    if (r9_6 u< 0xec)
                        sub_142c64850(r14, "%s IAC %d\n", "In SUBOPTION processing, RCVD", arg4)
                    else
                        (&data_1436b9000)[sx.q(r9_6 - 0xec)]
                        sub_142c64850(r14, "%s IAC %s\n", "In SUBOPTION processing, RCVD", arg4)
                
                arg4 = sub_142c847c0(arg1)
                rdi[0x7b2] = 1
                goto label_142c84ee3
        
        return result

return 0
