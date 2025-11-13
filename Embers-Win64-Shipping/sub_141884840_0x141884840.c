// 函数: sub_141884840
// 地址: 0x141884840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = sub_14183e350(arg2)
int64_t* i_1 = i

while (i != 0)
    void* j = *(arg1 + 0x20)
    int64_t rsi_1 = *i_1
    int64_t r14_1 = i_1[1]
    
    if (j == 0 || *(arg1 + 0x28) == 0)
        j = *(arg1 + 8)
        *(arg1 + 0x20) = j
        *(arg1 + 0x28) = *(j + 0x20)
    
    int64_t r13_1 = r14_1 + rsi_1
    
    if (r13_1 - 1 u>= *(j + 8))
        while (true)
            int64_t rdx_1 = *(j + 0x10)
            
            if (rdx_1 != 0 && r14_1 != 0)
                int64_t rax_4 = *(j + 8)
                
                if (rax_4 u<= r13_1 - 1 && rax_4 - 1 + rdx_1 u>= rsi_1)
                    break
            
            j = *(j + 0x38)
            
            if (j == 0)
                goto label_1418848e0
    else
        while (true)
            int64_t rdx = *(j + 0x10)
            
            if (rdx != 0 && r14_1 != 0)
                int64_t rax_1 = *(j + 8)
                
                if (rax_1 u<= r13_1 - 1 && rax_1 - 1 + rdx u>= rsi_1)
                    break
            
            j = *(j + 0x40)
            
            if (j == 0)
                goto label_1418848e0
    
    if (j == 0)
    label_1418848e0:
        j = *(arg1 + 8)
    else
        while (true)
            int64_t rax_7 = *(j + 0x10)
            int64_t rdx_2
            
            if (rax_7 != 0)
                rdx_2 = *(j + 8)
            
            if ((rax_7 == 0 || rdx_2 u> r13_1 - 1 || rax_7 - 1 + rdx_2 u< rsi_1)
                    && *(j + 0x10) != 0)
                do
                    int64_t rdx_3 = *(j + 0x10)
                    
                    if (rdx_3 != 0)
                        int64_t r8 = *(j + 8)
                        
                        if (r8 u<= rsi_1 - 1 + r14_1 && rdx_3 - 1 + r8 u>= rsi_1)
                            break
                    
                    j = *(j + 0x38)
                while (j != 0)
                
                break
            
            j = *(j + 0x40)
            
            if (j == 0)
                goto label_1418848e0
    
    int64_t* j_1
    
    if (*(arg1 + 0x20) == j)
        j_1 = *(arg1 + 0x28)
    else
        *(arg1 + 0x20) = j
        j_1 = *(j + 0x20)
        *(arg1 + 0x28) = j_1
    
    if (r13_1 - 1 u>= *j_1)
        while (true)
            int64_t rdx_10 = j_1[1]
            
            if (rdx_10 != 0 && r14_1 != 0)
                int64_t rcx_14 = *j_1
                
                if (rcx_14 u<= r13_1 - 1 && rcx_14 - 1 + rdx_10 u>= rsi_1)
                    break
            
            j_1 = j_1[5]
            
            if (j_1 == 0)
                goto label_1418849e2
    else
        while (true)
            int64_t rdx_4 = j_1[1]
            
            if (rdx_4 != 0 && r14_1 != 0)
                int64_t rcx_1 = *j_1
                
                if (rcx_1 u<= r13_1 - 1 && rcx_1 - 1 + rdx_4 u>= rsi_1)
                    break
            
            j_1 = j_1[6]
            
            if (j_1 == 0)
            label_1418849e2:
                j_1 = *(*(arg1 + 0x20) + 0x20)
                goto label_1418849e6
    
    while (true)
        int64_t rdx_11 = j_1[1]
        
        if (rdx_11 != 0)
            int64_t rcx_17 = *j_1
            
            if ((rcx_17 u> r13_1 - 1 || rcx_17 - 1 + rdx_11 u< rsi_1) && rdx_11 != 0)
                do
                    int64_t rcx_20 = j_1[1]
                    
                    if (rcx_20 != 0)
                        int64_t rdx_12 = *j_1
                        
                        if (rdx_12 u<= r13_1 - 1 && rcx_20 - 1 + rdx_12 u>= rsi_1)
                            break
                    
                    j_1 = j_1[5]
                while (j_1 != 0)
                
                break
        
        j_1 = j_1[6]
        
        if (j_1 == 0)
            goto label_1418849e2
    
label_1418849e6:
    void* r8_1 = *(arg1 + 0x20)
    *(arg1 + 0x28) = j_1
    
    if (r8_1 != 0)
        while (j_1 != 0)
            int64_t rdx_5 = *(r8_1 + 0x10)
            
            if (rdx_5 == 0)
                break
            
            if (r14_1 == 0)
                break
            
            int64_t rcx_4 = *(r8_1 + 8)
            
            if (rcx_4 u> r13_1 - 1)
                break
            
            if (rcx_4 - 1 + rdx_5 u< rsi_1)
                break
            
            int64_t rdx_6 = j_1[1]
            
            if (rdx_6 == 0)
                break
            
            int64_t rcx_7 = *j_1
            
            if (rcx_7 u> r13_1 - 1)
                break
            
            int64_t r10_1 = rcx_7 + rdx_6
            
            if (r10_1 - 1 u< rsi_1)
                break
            
            int64_t* j_3 = j_1[5]
            int64_t* j_2 = j_1
            int64_t rdx_7 = rsi_1
            void* rax_15 = *(arg3 + 0x10)
            
            if (rcx_7 u>= rsi_1)
                rdx_7 = rcx_7
            
            int64_t var_40 = rdx_7
            void* var_48 = r8_1
            int64_t rcx_8 = r13_1
            
            if (r10_1 - 1 u<= r13_1 - 1)
                rcx_8 = r10_1
            
            int64_t var_38_1 = rcx_8 - rdx_7
            void* rcx_10 = arg3 + 0x20
            
            if (rax_15 != 0)
                rcx_10 = rax_15
            
            (*arg3)((*(*rcx_10 + 8))(rcx_10), &var_40, &var_48, &j_2)
            *(arg1 + 0x28) = j_3
            j_1 = j_3
            
            if (j_3 == 0)
                void* rcx_12 = *(arg1 + 0x20)
                int64_t* j_4 = nullptr
                
                do
                    j_1 = j_4
                    
                    if (rcx_12 == 0)
                        break
                    
                    void* rdx_9 = *(rcx_12 + 0x38)
                    *(arg1 + 0x20) = rdx_9
                    rcx_12 = rdx_9
                    
                    if (rdx_9 != 0)
                        j_1 = *(rdx_9 + 0x20)
                        *(arg1 + 0x28) = j_1
                    
                    j_4 = j_1
                while (j_1 == 0)
            
            r8_1 = *(arg1 + 0x20)
            
            if (r8_1 == 0)
                break
    
    i = sub_14082fb80(i_1)
    i_1 = i

return i
