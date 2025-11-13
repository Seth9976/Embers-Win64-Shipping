// 函数: sub_142a37f30
// 地址: 0x142a37f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    return &arg2[0x12]

int32_t rbx = 0
int64_t* rdi = nullptr
int64_t* r13 = &arg2[0x12]
int64_t* rsi_1

while (true)
    if (rbx s< *(arg1 + 0x3c))
    label_142a37faa:
        rsi_1 = *(rdi + arg1[6])
        void* rax_5 = (*(*rsi_1 + 8))(rsi_1)
        
        if (*(rax_5 + 0x10) == sx.q(*(arg2 + 0x24)))
            if ((*(*arg2 + 8))(arg2, rsi_1) == 0)
                int64_t rcx_11
                
                if (arg3 s>= 0)
                    int64_t rax_11 = sub_142a38690(rax_5, arg1, arg4)
                    int64_t rcx_10 = *(*(*arg1 + 0x78) + 0x28)
                    int64_t rax_12
                    int64_t rdx_7
                    
                    if (rax_11 != 0)
                        rdx_7:rax_12 = sx.o(0x7fffffffffffffff)
                    
                    if (rax_11 == 0 || rcx_10 s<= divs.dp.q(rdx_7:rax_12, rax_11))
                        rcx_11 = rcx_10 * rax_11
                    else
                        rcx_11 = -1
                
                if (arg3 s< 0 || rcx_11 s<= arg3)
                    rbx += 1
                    rdi = &rdi[1]
                    continue
            else
                if (arg3 s< 0)
                    break
                
                int64_t rax_8 = sub_142a38690(rax_5, arg1, arg4)
                int64_t rcx_6 = *(*(*arg1 + 0x78) + 0x28)
                int64_t rax_9
                int64_t rdx_4
                
                if (rax_8 != 0)
                    rdx_4:rax_9 = sx.o(0x7fffffffffffffff)
                
                int64_t rcx_7
                
                if (rax_8 == 0 || rcx_6 s<= divs.dp.q(rdx_4:rax_9, rax_8))
                    rcx_7 = rcx_6 * rax_8
                else
                    rcx_7 = -1
                
                if (rcx_7 s<= arg3)
                    rbx += 1
                    r13 = rsi_1
                    rdi = &rdi[1]
                    continue
        else
            rbx += 1
            rdi = &rdi[1]
            continue
    else
        void arg_8
        void arg_20
        int32_t rax_2
        rax_2, arg4 = sub_142a39d10(arg1, &arg_20, &arg_8, arg4)
        
        if (rax_2 s<= 0)
            if (rax_2 s< 0)
                return nullptr
            
            goto label_142a37faa
    
    return r13

return rsi_1
