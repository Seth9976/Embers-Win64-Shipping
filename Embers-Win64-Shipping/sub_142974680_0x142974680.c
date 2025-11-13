// 函数: sub_142974680
// 地址: 0x142974680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = -2
int32_t rsi = 0
int32_t r15 = 0
sub_1428d8e50(arg3)
int64_t* rdi = sub_1428d8ba0(arg3)
int64_t* rax_1 = sub_1428d8ba0(arg3)
int64_t* r14 = rax_1

if (rax_1 != 0)
    int64_t* rax_2 = sub_142890040(rdi, arg1)
    r15.b = rax_2 == 0
    
    if (rax_2 != 0)
        int64_t* rax_3 = sub_142890040(r14, arg2)
        r15.b = rax_3 == 0
        
        if (rax_3 != 0)
            if (sub_142890300(r14) == 0)
                int32_t rax_6 = sub_142890290(rdi)
                int32_t rax_7
                
                if (rax_6 == 0)
                    rax_7 = sub_142890290(r14)
                
                if (rax_6 == 0 && rax_7 == 0)
                    rbp = rsi
                else
                    int32_t rbx_1 = 0
                    
                    if (sub_142890240(r14, 0) == 0)
                        int32_t i
                        
                        do
                            rbx_1 += 1
                            i = sub_142890240(r14, rbx_1)
                        while (i == 0)
                    
                    int32_t rax_9 = sub_1428f5760(r14, r14, rbx_1)
                    r15.b = rax_9 == 0
                    
                    if (rax_9 != 0)
                        if ((rbx_1.b & 1) == 0)
                            rbp = 1
                        else if (rdi[1].d != 0)
                            rbp = (&data_1435508b8)[zx.q((**rdi).d) & 7]
                        else
                            rbp = 0
                        
                        if (r14[2].d != 0)
                            r14[2].d = 0
                            
                            if (rdi[2].d != 0)
                                rbp = neg.d(rbp)
                        
                        if (sub_142890300(rdi) == 0)
                            int32_t i_1
                            
                            do
                                int32_t rbx_2 = 0
                                
                                if (sub_142890240(rdi, 0) == 0)
                                    int32_t j
                                    
                                    do
                                        rbx_2 += 1
                                        j = sub_142890240(rdi, rbx_2)
                                    while (j == 0)
                                
                                int32_t rax_13 = sub_1428f5760(rdi, rdi, rbx_2)
                                r15.b = rax_13 == 0
                                
                                if (rax_13 == 0)
                                    goto label_1429748d6
                                
                                if ((rbx_2.b & 1) != 0)
                                    int32_t rax_14
                                    
                                    if (r14[1].d != 0)
                                        rax_14 = (**r14).d
                                    else
                                        rax_14 = 0
                                    
                                    rbp *= (&data_1435508b8)[zx.q(rax_14) & 7]
                                
                                int32_t rax_17 = rdi[1].d
                                char rcx_15
                                
                                if (rdi[2].d == 0)
                                    if (rax_17 != 0)
                                        rcx_15 = (**rdi).b
                                    else
                                        rcx_15 = 0
                                else if (rax_17 != 0)
                                    rcx_15 = (not.q(**rdi)).b
                                else
                                    rcx_15 = -1
                                
                                char rax_20
                                
                                if (r14[1].d != 0)
                                    rax_20 = (**r14).b
                                else
                                    rax_20 = 0
                                
                                int32_t rbx_4 = neg.d(rbp)
                                
                                if ((rax_20 & rcx_15 & 2) == 0)
                                    rbx_4 = rbp
                                
                                int32_t rax_22 = sub_1429084c0(r14, r14, rdi, arg3)
                                rbp = rbx_4
                                r15.b = rax_22 == 0
                                
                                if (rax_22 == 0)
                                    goto label_1429748d6
                                
                                int64_t* rax_23 = rdi
                                rdi = r14
                                r14 = rax_23
                                rax_23[2].d = 0
                                i_1 = sub_142890300(rdi)
                            while (i_1 == 0)
                        
                        if (sub_1428902b0(r14) != 0)
                            rsi = rbp
                        
                        rbp = rsi
            else
                rbp = sub_14288fa30(rdi, 1)

label_1429748d6:
sub_1428d8a60(arg3)

if (r15 != 0)
    rbp = -2

return zx.q(rbp)
