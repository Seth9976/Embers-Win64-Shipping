// 函数: sub_141527f80
// 地址: 0x141527f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x1c))
int32_t rdi = 0
int64_t r13 = *(arg1 + 0x28)
uint128_t zmm4 = arg4
uint128_t zmm5 = arg3
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm6 = arg2
int32_t r15 = 0
int32_t r10 = *(r13 + (result << 2))
int32_t rdx = 0

if (r10 s<= 0)
label_141528020:
    result.b = 0
else
    int64_t r12_1 = *(arg1 + 0x20)
    double* r9_1 = *(arg1 + 0x30)
    arg3 = zx.o(arg6)
    int32_t* rbx_1 = *(r12_1 + (result << 3))
    int32_t* r8_1 = rbx_1
    
    while (true)
        uint64_t r11_1 = zx.q(*r8_1)
        int64_t rcx = sx.q((r11_1 * 3).d)
        arg4.q = zmm5.q f* r9_1[rcx + 1]
        arg2.q = zmm4.q f* r9_1[rcx + 2]
        arg4.q = arg4.q f+ zmm6.q * r9_1[rcx]
        arg4.q = arg4.q f+ arg2.q
        
        if (arg4.q f> arg3.q)
            zmm7 = zx.o(arg5)
            int32_t rsi_1 = rbx_1[sx.q(r10 + rdx)]
            *(arg1 + 0x1c) = r11_1.d
            
            if (not(arg4.q f>= zmm7.q))
                int32_t r14_1 = *(arg1 + 0x18)
                
                do
                    r15 += 1
                    
                    if (r15 s>= r14_1)
                        if (r14_1 s<= 0)
                            goto label_141528020
                        
                        result = &r9_1[2]
                        
                        while (true)
                            arg3.q = zmm5.q f* *(result - 8)
                            arg2.q = zmm4.q f* *result
                            arg3.q = arg3.q f+ zmm6.q * *r9_1
                            arg3.q = arg3.q f+ arg2.q
                            
                            if (arg3.q f> zmm7.q)
                                break
                            
                            rdi += 1
                            r9_1 = &r9_1[3]
                            result += 0x18
                            
                            if (rdi s>= r14_1)
                                goto label_141528020
                        
                        break
                    
                    int32_t r8_2 = 0
                    int64_t i = 0
                    
                    if (rsi_1 s> 0)
                        int32_t* r10_1 = *(r12_1 + (sx.q(r11_1.d) << 3))
                        
                        do
                            r11_1 = zx.q(*r10_1)
                            int64_t rcx_2 = sx.q((r11_1 * 3).d)
                            arg3.q = zmm5.q f* r9_1[rcx_2 + 1]
                            arg2.q = zmm4.q f* r9_1[rcx_2 + 2]
                            arg3.q = arg3.q f+ zmm6.q * r9_1[rcx_2]
                            arg3.q = arg3.q f+ arg2.q
                            
                            if (arg3.q f> arg4.q)
                                break
                            
                            r8_2 += 1
                            i += 1
                            r10_1 = &r10_1[1]
                        while (i s< sx.q(rsi_1))
                    
                    if (r8_2 == rsi_1)
                        result = sx.q(*(arg1 + 0x1c))
                        r8_2 += 1
                        int32_t rbx_3 = *(r13 + (result << 2))
                        bool cond:2_1 = r8_2 == rbx_3
                        
                        if (r8_2 s< rbx_3)
                            int32_t* r10_2 = *(r12_1 + (result << 3)) + ((i + 1) << 2)
                            
                            do
                                r11_1 = zx.q(*r10_2)
                                int64_t rcx_3 = sx.q((r11_1 * 3).d)
                                arg3.q = zmm5.q f* r9_1[rcx_3 + 1]
                                arg2.q = zmm4.q f* r9_1[rcx_3 + 2]
                                arg3.q = arg3.q f+ zmm6.q * r9_1[rcx_3]
                                arg3.q = arg3.q f+ arg2.q
                                
                                if (arg3.q f> arg4.q)
                                    break
                                
                                r8_2 += 1
                                r10_2 = &r10_2[1]
                            while (r8_2 s< rbx_3)
                            
                            cond:2_1 = r8_2 == rbx_3
                        
                        if (cond:2_1)
                            goto label_141528020
                    
                    int64_t rdx_2 = sx.q(*(arg1 + 0x1c))
                    arg4 = arg3
                    rsi_1 = *(*(r12_1 + (rdx_2 << 3)) + (sx.q(*(r13 + (rdx_2 << 2)) + r8_2) << 2))
                    *(arg1 + 0x1c) = r11_1.d
                while (arg3.q f< zmm7.q)
            
            result.b = 1
            break
        
        rdx += 1
        r8_1 = &r8_1[1]
        
        if (rdx s>= r10)
            goto label_141528020

return result
