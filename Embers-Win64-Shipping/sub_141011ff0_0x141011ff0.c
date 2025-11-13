// 函数: sub_141011ff0
// 地址: 0x141011ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *(arg1 + 0x24) && not(_mm_cvtepi32_pd(zx.q(*(arg1 + 0x28) + 1))
        f> float.d(zx.q(arg1[2].d + 1)) f* 0.90000000000000002))
    int64_t rax_5 = *(arg3 + 8)
    uint64_t r14 = zx.q(arg4)
    char rdx = *(r14 + rax_5)
    
    if (rdx s< 0)
        *(*(arg3 + 0x10) + (r14 << 3)) = arg5
        *(r14 + *(arg3 + 8)) = arg2
        *(arg1 + 0x28) += 1
        return 0
    
    *(r14 + rax_5) = arg2
    uint64_t r9 = zx.q(arg4 + 1)
    int64_t rcx_1 = *(arg3 + 0x10)
    rdx += 1
    uint64_t r8_1 = zx.q(r9.d)
    int64_t rdi = *(rcx_1 + (r14 << 3))
    *(rcx_1 + (r14 << 3)) = arg5
    int64_t rax_10 = *(arg3 + 8)
    
    if (*(rax_10 + r9) s>= 0)
        do
            char r11_1 = *(r8_1 + rax_10)
            
            if (r11_1 s>= rdx)
                rdx += 1
                
                if (rdx == *(arg1 + 0x24))
                    int64_t rax_15 = *(arg3 + 0x10)
                    int64_t rsi = *(rax_15 + (r14 << 3))
                    *(rax_15 + (r14 << 3)) = rdi
                    uint64_t rax_16 = zx.q(arg1[2].d)
                    int32_t rdx_1 = ((rax_16 << 1) + 2).d
                    
                    if (rax_16.d == 0)
                        rdx_1 = 0
                    
                    if (rdx_1 u<= 4)
                        rdx_1 = 4
                    
                    sub_141032660(arg1, rdx_1, r8_1.b)
                    int32_t rax_17 = sub_141024bc0((rsi u>> 4).d, 0)
                    char i = 0
                    int64_t r8_2 = *(arg1 + 8)
                    uint64_t r9_2 = zx.q(arg1[2].d) & zx.q(rax_17)
                    
                    if (r8_2 != 0)
                        uint64_t rcx_6 = zx.q(r9_2.d)
                        
                        if (*(r9_2 + r8_2) s>= 0)
                            do
                                if (rsi == *(arg1[1].q + (rcx_6 << 3)))
                                    return 0
                                
                                r9_2 = zx.q(r9_2.d + 1)
                                i += 1
                                rcx_6 = zx.q(r9_2.d)
                            while (*(r9_2 + r8_2) s>= i)
                    
                    return sub_141011ff0(arg1, i, arg1, r9_2, rsi, rax_17, arg7)
            else
                *(r8_1 + rax_10) = rdx
                int64_t rax_11 = rdi
                int64_t rcx_2 = *(arg3 + 0x10)
                rdx = r11_1 + 1
                rdi = *(rcx_2 + (r8_1 << 3))
                *(rcx_2 + (r8_1 << 3)) = rax_11
                rax_10 = *(arg3 + 8)
            
            r9 = zx.q(r9.d + 1)
            r8_1 = zx.q(r9.d)
        while (*(r9 + rax_10) s>= 0)
    
    *(*(arg3 + 0x10) + (r9 << 3)) = rdi
    *(r9 + *(arg3 + 8)) = rdx
    *(arg1 + 0x28) += 1
    return 0

uint64_t rax_21 = zx.q(arg1[2].d)
int32_t rdx_2 = ((rax_21 << 1) + 2).d

if (rax_21.d == 0)
    rdx_2 = 0

if (rdx_2 u<= 4)
    rdx_2 = 4

sub_141032660(arg1, rdx_2, arg2)
char i_1 = 0
uint64_t r9_4 = zx.q(arg1[2].d) & zx.q(arg6)
int64_t rcx_8 = *(arg1 + 8)

if (rcx_8 != 0)
    uint64_t rax_22 = zx.q(r9_4.d)
    
    if (*(r9_4 + rcx_8) s>= 0)
        do
            if (arg5 == *(arg1[1].q + (rax_22 << 3)))
                return 0
            
            r9_4 = zx.q(r9_4.d + 1)
            i_1 += 1
            rax_22 = zx.q(r9_4.d)
        while (*(r9_4 + rcx_8) s>= i_1)

return sub_141011ff0(arg1, i_1, arg1, r9_4, arg5, arg6, arg7)
