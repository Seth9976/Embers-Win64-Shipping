// 函数: sub_140689770
// 地址: 0x140689770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg4

if (arg4 == arg5)
    *arg1 = arg3
    return arg1

do
    uint32_t r9_1 = zx.d(*rsi)
    
    if (r9_1.b == 0x26)
        int128_t* r8 = *(arg2 + 0x10)
        int64_t rax_1
        int64_t rdx
        rdx:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg2 + 0x18) - r8)
        int64_t rdx_1 = rdx s>> 2
        
        if (rdx_1 != neg.q(rdx_1 u>> 0x3f))
            char* i = *r8
            
            for (int64_t rbp_1 = _mm_bsrli_si128(*r8, 8).q; i != rbp_1; i = &i[1])
                int64_t rcx_2 = arg3[2]
                int64_t rdx_3 = arg3[3]
                char r9 = *i
                
                if (rcx_2 u>= rdx_3)
                    sub_14058b730(arg3, 1, 0, r9)
                else
                    arg3[2] = rcx_2 + 1
                    int64_t* rax_5 = arg3
                    
                    if (rdx_3 u>= 0x10)
                        rax_5 = *arg3
                    
                    *(rax_5 + rcx_2) = r9
                    *(rax_5 + rcx_2 + 1) = 0
    else if (r9_1.b != 0x5c)
    label_140689919:
        int64_t rdx_8 = arg3[3]
        int64_t rcx_8 = arg3[2]
        
        if (rcx_8 u>= rdx_8)
            sub_14058b730(arg3, 1, 0, r9_1.b)
        else
            arg3[2] = rcx_8 + 1
            int64_t* rax_14 = arg3
            
            if (rdx_8 u>= 0x10)
                rax_14 = *arg3
            
            *(rax_14 + rcx_8 + 1) = 0
            *(rax_14 + rcx_8) = r9_1.b
    else
        rsi = &rsi[1]
        
        if (rsi == arg5)
            break
        
        r9_1 = sx.d(*rsi)
        
        if (r9_1.b - 0x30 u> 9)
            goto label_140689919
        
        uint64_t r8_1 = zx.q(r9_1 - 0x30)
        int64_t r9_2 = *(arg2 + 0x10)
        int64_t rax_7
        int64_t rdx_4
        rdx_4:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg2 + 0x18) - r9_2)
        int64_t rdx_5 = rdx_4 s>> 2
        
        if (r8_1 u< rdx_5 + (rdx_5 u>> 0x3f))
            uint64_t rax_10 = r8_1 * 3
            char* i_1 = *(r9_2 + (rax_10 << 3))
            
            for (int64_t rbp_2 = _mm_bsrli_si128(*(r9_2 + (rax_10 << 3)), 8).q; i_1 != rbp_2; 
                    i_1 = &i_1[1])
                int64_t rcx_6 = arg3[2]
                int64_t rdx_7 = arg3[3]
                char r9_3 = *i_1
                
                if (rcx_6 u>= rdx_7)
                    sub_14058b730(arg3, 1, 0, r9_3)
                else
                    arg3[2] = rcx_6 + 1
                    int64_t* rax_12 = arg3
                    
                    if (rdx_7 u>= 0x10)
                        rax_12 = *arg3
                    
                    *(rax_12 + rcx_6) = r9_3
                    *(rax_12 + rcx_6 + 1) = 0
    
    rsi = &rsi[1]
while (rsi != arg5)

*arg1 = arg3
return arg1
