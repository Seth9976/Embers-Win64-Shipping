// 函数: sub_141dc4750
// 地址: 0x141dc4750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t* i = __security_cookie ^ &var_1f8
int64_t* i_3 = i
int64_t r9 = *(arg1 + 0x130)

if (r9 != 0)
    int32_t rcx = 1
    int64_t r14_1 = 0
    int64_t* i_7 = nullptr
    int64_t* i_2 = nullptr
    void* i_5 = nullptr
    int32_t var_34_1 = 0x18
    void* i_6 = nullptr
    int32_t var_108_1 = 0
    int32_t var_104_1 = 0x18
    int32_t var_38_1 = 1
    int64_t var_100 = r9
    
    while (true)
        int64_t* i_10 = &var_100
        
        if (i_7 != 0)
            i_10 = i_7
        
        void* rdi_1 = i_10[sx.q(rcx - 1)]
        
        if (0 != 0)
            memmove(&i_10[sx.q(rcx - 1)], &i_10[sx.q(rcx)], 0 << 3)
            rcx = var_38_1
            i_5 = i_6
        
        int64_t rbx_1 = sx.q(var_108_1)
        var_38_1 = rcx - 1
        int32_t rax_7 = (rbx_1 + 1).d
        var_108_1 = rax_7
        void var_1d0
        
        if (rax_7 s> var_104_1)
            sub_141a14450(&var_1d0, rbx_1.d)
            i_5 = i_6
        
        void* i_8 = &var_1d0
        
        if (i_5 != 0)
            i_8 = i_5
        
        *(i_8 + (rbx_1 << 3)) = rdi_1
        i = *(rdi_1 + 0xa0)
        void* i_9
        
        if (i == 0)
        label_141dc488a:
            i_5 = i_6
        label_141dc488e:
            rcx = var_38_1
            
            if (rcx s<= 0)
                if (i_5 == 0)
                    break
                
                i_9 = i_5
            else
                i_7 = i_2
                r14_1 = 0
                continue
        else
            if (i == arg1)
                int64_t* rsi_1 = *(rdi_1 + 0xd0)
                uint64_t r15_2 = sx.q(*(rdi_1 + 0xd8)) << 3 u>> 3
                i = nullptr
                
                if (rsi_1 u> &rsi_1[sx.q(*(rdi_1 + 0xd8))])
                    r15_2 = 0
                
                if (r15_2 == 0)
                    goto label_141dc488a
                
                i_5 = i_6
                
                do
                    int64_t rbx_2 = *rsi_1
                    
                    if (rbx_2 != 0)
                        i = &var_1d0
                        
                        if (i_5 != 0)
                            i = i_5
                        
                        for (; i != &i[sx.q(var_108_1)]; i = &i[1])
                            if (*i == rbx_2)
                                goto label_141dc494c
                        
                        int64_t rdi_2 = sx.q(var_38_1)
                        int32_t rax_10 = (rdi_2 + 1).d
                        var_38_1 = rax_10
                        
                        if (rax_10 s> var_34_1)
                            sub_141a14450(&var_100, rdi_2.d)
                        
                        i = i_2
                        int64_t* i_4 = &var_100
                        
                        if (i != 0)
                            i_4 = i
                        
                        i_4[rdi_2] = rbx_2
                        i_5 = i_6
                    
                label_141dc494c:
                    rsi_1 = &rsi_1[1]
                    r14_1 += 1
                while (r14_1 != r15_2)
                
                goto label_141dc488e
            
            int64_t rcx_5 = *(arg2 + 8)
            int64_t* i_1 = i
            i = (*arg2)(rcx_5, &i_1)
            
            if (i.b != 0)
                goto label_141dc488a
            
            i_9 = i_6
            
            if (i_9 == 0)
                break
        
        i = sub_140a74f90(i_9)
        break
    
    if (i_2 != 0)
        i = sub_140a74f90(i_2)

__security_check_cookie(i_3 ^ &var_1f8)
return i
