// 函数: sub_1406892b0
// 地址: 0x1406892b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg4

if (arg4 == arg5)
    *arg1 = arg3
    return arg1

char* i
char* i_1 = i

do
    char r9 = *rsi
    
    if (r9 != 0x24)
    label_1406896db:
        int64_t rcx_23 = arg3[2]
        int64_t rdx_18 = arg3[3]
        
        if (rcx_23 u>= rdx_18)
            sub_14058b730(arg3, 1, 0, r9)
            rsi = &rsi[1]
        else
            arg3[2] = rcx_23 + 1
            int64_t* rax_30 = arg3
            
            if (rdx_18 u>= 0x10)
                rax_30 = *arg3
            
            *(rax_30 + rcx_23) = r9
            *(rax_30 + rcx_23 + 1) = 0
            rsi = &rsi[1]
    else
        rsi = &rsi[1]
        
        if (rsi == arg5)
            int64_t rcx_24 = arg3[2]
            int64_t rdx_19 = arg3[3]
            
            if (rcx_24 u>= rdx_19)
                sub_14058b730(arg3, 1, 0, 0x24)
            else
                arg3[2] = rcx_24 + 1
                int64_t* rax_32 = arg3
                
                if (rdx_19 u>= 0x10)
                    rax_32 = *arg3
                
                *(rax_32 + rcx_24) = 0x24
            
            break
        
        int32_t rcx = sx.d(*rsi)
        
        if (rcx.b == r9)
            int64_t rcx_1 = arg3[2]
            int64_t rdx = arg3[3]
            
            if (rcx_1 u>= rdx)
                sub_14058b730(arg3, 1, 0, 0x24)
                rsi = &rsi[1]
            else
                arg3[2] = rcx_1 + 1
                int64_t* rax_2 = arg3
                
                if (rdx u>= 0x10)
                    rax_2 = *arg3
                
                *(rax_2 + rcx_1) = 0x24
                rsi = &rsi[1]
        else if (rcx.b == 0x60)
            int64_t rbp_1 = *(arg2 + 0x30)
            
            for (i = *(arg2 + 0x28); i != rbp_1; i = &i[1])
                int64_t rcx_3 = arg3[2]
                int64_t rdx_1 = arg3[3]
                char r9_1 = *i
                
                if (rcx_3 u>= rdx_1)
                    sub_14058b730(arg3, 1, 0, r9_1)
                else
                    arg3[2] = rcx_3 + 1
                    int64_t* rax_5 = arg3
                    
                    if (rdx_1 u>= 0x10)
                        rax_5 = *arg3
                    
                    *(rax_5 + rcx_3) = r9_1
                    *(rax_5 + rcx_3 + 1) = 0
            
            rsi = &rsi[1]
        else if (rcx.b == 0x27)
            int64_t rbp_2 = *(arg2 + 0x48)
            
            for (i = *(arg2 + 0x40); i != rbp_2; i = &i[1])
                int64_t rcx_5 = arg3[2]
                int64_t rdx_2 = arg3[3]
                char r9_2 = *i
                
                if (rcx_5 u>= rdx_2)
                    sub_14058b730(arg3, 1, 0, r9_2)
                else
                    arg3[2] = rcx_5 + 1
                    int64_t* rax_7 = arg3
                    
                    if (rdx_2 u>= 0x10)
                        rax_7 = *arg3
                    
                    *(rax_7 + rcx_5) = r9_2
                    *(rax_7 + rcx_5 + 1) = 0
            
            rsi = &rsi[1]
        else if (rcx.b != 0x26)
            if (rcx.b - 0x30 u> 9)
                int64_t rcx_21 = arg3[2]
                int64_t rdx_17 = arg3[3]
                
                if (rcx_21 u>= rdx_17)
                    sub_14058b730(arg3, 1, 0, 0x24)
                else
                    arg3[2] = rcx_21 + 1
                    int64_t* rax_28 = arg3
                    
                    if (rdx_17 u>= 0x10)
                        rax_28 = *arg3
                    
                    *(rax_28 + rcx_21) = 0x24
                
                r9 = *rsi
                goto label_1406896db
            
            rsi = &rsi[1]
            uint64_t rdx_7 = zx.q(rcx - 0x30)
            int32_t r8_1
            
            if (rsi != arg5)
                r8_1 = sx.d(*rsi)
            
            if (rsi == arg5 || r8_1.b - 0x30 u> 9)
                i.b = 0
            else
                i.b = 1
                rsi = &rsi[1]
                rdx_7 = zx.q(r8_1 + (((rdx_7 * 5).d - 0x18) << 1))
            
            if (rdx_7.d != 0)
                int64_t r9_4 = *(arg2 + 0x10)
                uint64_t r8_2 = zx.q(rdx_7.d)
                int64_t rax_21
                int64_t rdx_13
                rdx_13:rax_21 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg2 + 0x18) - r9_4)
                int64_t rdx_14 = rdx_13 s>> 2
                
                if (r8_2 u< rdx_14 + (rdx_14 u>> 0x3f))
                    uint64_t rax_24 = r8_2 * 3
                    i = *(r9_4 + (rax_24 << 3))
                    
                    for (int64_t rbp_4 = _mm_bsrli_si128(*(r9_4 + (rax_24 << 3)), 8).q; i != rbp_4; 
                            i = &i[1])
                        int64_t rcx_19 = arg3[2]
                        int64_t rdx_16 = arg3[3]
                        char r9_5 = *i
                        
                        if (rcx_19 u>= rdx_16)
                            sub_14058b730(arg3, 1, 0, r9_5)
                        else
                            arg3[2] = rcx_19 + 1
                            int64_t* rax_26 = arg3
                            
                            if (rdx_16 u>= 0x10)
                                rax_26 = *arg3
                            
                            *(rax_26 + rcx_19) = r9_5
                            *(rax_26 + rcx_19 + 1) = 0
            else
                int64_t rcx_11 = arg3[2]
                int64_t rdx_10 = arg3[3]
                
                if (rcx_11 u>= rdx_10)
                    sub_14058b730(arg3, 1, 0, 0x24)
                else
                    arg3[2] = rcx_11 + 1
                    int64_t* rax_16 = arg3
                    
                    if (rdx_10 u>= 0x10)
                        rax_16 = *arg3
                    
                    *(rax_16 + rcx_11) = 0x24
                
                int64_t rcx_13 = arg3[2]
                int64_t rdx_11 = arg3[3]
                
                if (rcx_13 u>= rdx_11)
                    sub_14058b730(arg3, 1, 0, 0x30)
                else
                    arg3[2] = rcx_13 + 1
                    int64_t* rax_18 = arg3
                    
                    if (rdx_11 u>= 0x10)
                        rax_18 = *arg3
                    
                    *(rax_18 + rcx_13) = 0x30
                
                if (i.b != 0)
                    int64_t rcx_15 = arg3[2]
                    int64_t rdx_12 = arg3[3]
                    
                    if (rcx_15 u>= rdx_12)
                        sub_14058b730(arg3, 1, 0, 0x30)
                    else
                        arg3[2] = rcx_15 + 1
                        int64_t* rax_20 = arg3
                        
                        if (rdx_12 u>= 0x10)
                            rax_20 = *arg3
                        
                        *(rax_20 + rcx_15) = 0x30
        else
            char** r8 = *(arg2 + 0x10)
            rsi = &rsi[1]
            int64_t rax_8
            int64_t rdx_3
            rdx_3:rax_8 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg2 + 0x18) - r8)
            int64_t rdx_4 = rdx_3 s>> 2
            
            if (rdx_4 != neg.q(rdx_4 u>> 0x3f))
                i = *r8
                
                for (int64_t rbp_3 = _mm_bsrli_si128(*r8, 8).q; i != rbp_3; i = &i[1])
                    int64_t rcx_9 = arg3[2]
                    int64_t rdx_6 = arg3[3]
                    char r9_3 = *i
                    
                    if (rcx_9 u>= rdx_6)
                        sub_14058b730(arg3, 1, 0, r9_3)
                    else
                        arg3[2] = rcx_9 + 1
                        int64_t* rax_12 = arg3
                        
                        if (rdx_6 u>= 0x10)
                            rax_12 = *arg3
                        
                        *(rax_12 + rcx_9) = r9_3
                        *(rax_12 + rcx_9 + 1) = 0
while (rsi != arg5)

*arg1 = arg3
return arg1
