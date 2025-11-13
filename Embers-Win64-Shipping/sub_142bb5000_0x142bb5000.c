// 函数: sub_142bb5000
// 地址: 0x142bb5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x98)
int32_t rsi = 0
char r15 = arg4
int32_t* r12 = arg3
int32_t i = arg2
int32_t result_1 = 0
char arg_8 = 0
*(arg1 + 0x409) = 0
int32_t result

if (*(arg1 + 0x410) == 0)
    result, arg3, arg5 = sub_142ba7990(arg1, nullptr, arg6)
    result_1 = result

if (*(arg1 + 0x410) != 0 || result == 0)
    int32_t* r14_1 = *(arg1 + 0x410)
    int32_t rdx = 0
    int32_t* r13_1 = *(r14_1 + 0x18)
    
    if (i u> *r13_1)
        i = *r13_1
    
    if (i != 0)
        int32_t* rcx = r12
        
        do
            if (*rcx + 0x10000 u> 0x20000)
                return 6
            
            rdx += 1
            rcx = &rcx[1]
        while (rdx u< i)
    
    if (*(arg1 + 0x408) == 0 && *(r14_1 + 0x80) == 0)
        result, arg3 = sub_142bb1600(arg1, arg6, arg5)
        result_1 = result
    
    if (*(arg1 + 0x408) != 0 || *(r14_1 + 0x80) != 0 || result == 0)
        if (*(r14_1 + 8) != 0)
            goto label_142bb5102
        
        int64_t rax_3
        rax_3, arg3 = sub_142b99a90(rbp, 4, 0, *r13_1, 0, &result_1)
        *(r14_1 + 8) = rax_3
        result = result_1
        
        if (result == 0)
            arg_8 = 1
        label_142bb5102:
            int64_t r11_1 = *(r14_1 + 0x10)
            
            if (r11_1 != 0)
                arg3.b = 0
                uint64_t rdx_2 = 0
                
                if (i != 0)
                    do
                        int32_t* rcx_4 = rdx_2 << 2
                        
                        if (*(rcx_4 + r11_1) != *(rcx_4 + r12))
                            rsi = 2
                            arg3.b = 1
                            break
                        
                        rdx_2 = zx.q(rdx_2.d + 1)
                    while (rdx_2.d u< i)
                
                int32_t rcx_5 = *(arg1 + 4)
                int32_t i_3 = *r13_1
                
                if ((rcx_5 & 0x7fff0000) == 0)
                    int64_t rcx_11 = r11_1 + (rdx_2 << 2)
                    
                    if (rdx_2.d u< i_3)
                        uint64_t i_5 = zx.q(i_3 - rdx_2.d)
                        uint64_t i_1
                        
                        do
                            bool cond:0_1 = *rcx_11 != 0
                            rcx_11 += 4
                            arg3 = zx.q(arg3.b)
                            
                            if (cond:0_1)
                                arg3 = 1
                            
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                else
                    int64_t r9_2 = r11_1 + (rdx_2 << 2)
                    
                    if (rdx_2.d u< i_3)
                        int32_t* r15_2 = *(r14_1 + 0x28)
                            + ((zx.q(((rcx_5 u>> 0x10) - 1) * i_3) + zx.q(rdx_2.d)) << 2) - r9_2
                        uint64_t i_4 = zx.q(i_3 - rdx_2.d)
                        uint64_t i_2
                        
                        do
                            bool cond:1_1 = *r9_2 != *(r15_2 + r9_2)
                            r9_2 += 4
                            arg3 = zx.q(arg3.b)
                            
                            if (cond:1_1)
                                arg3 = 1
                            
                            i_2 = i_4
                            i_4 -= 1
                        while (i_2 != 1)
                    
                    r15 = arg4
                
                if (arg3.b == 0)
                    *(arg1 + 0x409) = 1
                    return -1
                
                while (rdx_2.d u< i_3)
                    if (*(r11_1 + (rdx_2 << 2)) != 0)
                        rsi = 2
                        break
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                goto label_142bb5250
            
            *(r14_1 + 0x10) = sub_142b99a90(rbp, (r11_1 + 4).d, 0, *r13_1, 0, &result_1)
            result = result_1
            
            if (result == 0)
                rsi = result + 1
            label_142bb5250:
                int64_t rcx_12 = *(r14_1 + 0x10)
                *r14_1 = *r13_1
                int512_t zmm0 = memcpy(rcx_12, r12, i << 2)
                
                if (r15 != 0)
                    if (arg_8 != 0)
                        i = *r14_1
                    
                    sub_142bb24e0(arg1, i, *(r14_1 + 0x10), *(r14_1 + 8))
                
                int64_t rdx_5 = *(arg1 + 0x3d8)
                *(arg1 + 0x409) = 1
                
                if (rdx_5 != 0)
                    if (rsi == 1)
                        result_1 = sub_142bb3f50(arg1, *(arg1 + 0xa0), zmm0)
                    else if (rsi == 2)
                        sub_142b99980(rbp, rdx_5)
                        *(arg1 + 0x3d8) = 0
                        result_1 = sub_142bb3ab0(arg1, *(arg1 + 0xa0))
                
                sub_142b99980(rbp, *(arg1 + 0x3f8))
                result = result_1
                *(arg1 + 0x3f8) = 0

return result
