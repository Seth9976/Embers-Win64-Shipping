// 函数: sub_142bcdfe0
// 地址: 0x142bcdfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0xffffffff
int32_t* rsi = arg4
char* i_3
uint32_t result = sub_142bcde90(arg1, &i_3)
int32_t var_38

if (var_38 == 3)
    int64_t r9 = *arg1
    int64_t r10_1 = arg1[2]
    void* r13_1 = arg2 + zx.q(arg3) * 0x18
    void* rcx_2 = &i_3[1]
    int128_t* r15_1 = arg2
    void* var_60_1 = r13_1
    *arg1 = rcx_2
    int64_t var_40
    arg1[2] = var_40 - 1
    
    if (rcx_2 u< var_40 - 1)
        do
            int64_t rdx_1 = arg1[2]
            char* i = *arg1
            int32_t var_38_1 = 0
            i_3.o = zx.o(0)
            
            for (; i u< rdx_1; i = &i[1])
                char r8 = *i
                
                if (r8 u> 0x20 || not(test_bit(0x100003601, zx.q(r8))))
                    if (r8 != 0x25)
                        break
                    
                    for (; i u< rdx_1; i = &i[1])
                        char rax_3 = *i
                        
                        if (rax_3 == 0xd)
                            break
                        
                        if (rax_3 == 0xa)
                            break
            
            *arg1 = i
            char* i_2 = i
            
            if (i u>= rdx_1)
                break
            
            char rdx_2 = *i
            i_3 = i
            int32_t var_38_2
            char* i_1
            int32_t rsi_1
            int32_t rax_5
            bool cond:1_1
            
            if (rdx_2 == 0x28)
                rsi_1 = 2
                var_38_2 = 2
                rax_5 = sub_142bd83f0(&i_2, rdx_1)
            label_142bce218:
                cond:1_1 = rax_5 != 0
                i_1 = i_2
            label_142bce21e:
                
                if (cond:1_1)
                    goto label_142bce229
                
            label_142bce220:
                char* i_4 = i_1
                
                if (i_1 == 0)
                    goto label_142bce229
            else
                if (rdx_2 != 0x5b)
                    if (rdx_2 == 0x7b)
                        rsi_1 = 3
                        var_38_2 = 3
                        rax_5 = sub_142bd8510(&i_2, rdx_1)
                        goto label_142bce218
                    
                    rsi_1 = 1
                    
                    if (rdx_2 == 0x2f)
                        rsi_1 = 4
                    
                    var_38_2 = rsi_1
                    sub_142bcdca0(arg1)
                    i_1 = *arg1
                    cond:1_1 = arg1[3].d != 0
                    goto label_142bce21e
                
                rsi_1 = 3
                var_38_2 = 3
                *arg1 = &i[1]
                int32_t rbx_1 = 1
                sub_142bcdc30(arg1)
                i_1 = *arg1
                
                if (i_1 u< rdx_1)
                    while (true)
                        if (arg1[3].d != 0)
                            goto label_142bce229
                        
                        char rcx_6 = *i_1
                        
                        if (rcx_6 == 0x5b)
                            rbx_1 += 1
                        else if (rcx_6 == 0x5d)
                            rbx_1 -= 1
                            
                            if (rbx_1 s<= 0)
                                i_1 = &i_1[1]
                                break
                        
                        sub_142bcdca0(arg1)
                        int64_t r8_1 = arg1[2]
                        i_1 = *arg1
                        
                        if (i_1 u< r8_1)
                            do
                                char rdx_4 = *i_1
                                
                                if (rdx_4 u> 0x20 || not(test_bit(0x100003601, zx.q(rdx_4))))
                                    if (rdx_4 != 0x25)
                                        break
                                    
                                    for (; i_1 u< r8_1; i_1 = &i_1[1])
                                        char rcx_9 = *i_1
                                        
                                        if (rcx_9 == 0xd)
                                            break
                                        
                                        if (rcx_9 == 0xa)
                                            break
                                
                                i_1 = &i_1[1]
                            while (i_1 u< r8_1)
                            
                            r13_1 = var_60_1
                        
                        *arg1 = i_1
                        
                        if (i_1 u>= rdx_1)
                            goto label_142bce229
                    
                    goto label_142bce220
                
            label_142bce229:
                rsi_1 = 0
                i_3 = nullptr
                var_38_2 = 0
            *arg1 = i_1
            
            if (rsi_1 == 0)
                break
            
            if (arg2 != 0 && r15_1 u< r13_1)
                *r15_1 = i_3.o
                r15_1[1].q = var_38_2.q
            
            r15_1 += 0x18
        while (*arg1 u< arg1[2])
        
        rsi = arg4
    
    int64_t rax_8
    int64_t rdx_6
    rdx_6:rax_8 = muls.dp.q(0x2aaaaaaaaaaaaaab, r15_1 - arg2)
    result = (rdx_6 s>> 2 u>> 0x3f).d
    *rsi = ((r15_1 - arg2) s/ 0x18).d
    *arg1 = r9
    arg1[2] = r10_1

return result
