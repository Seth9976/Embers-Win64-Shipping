// 函数: sub_142b373c0
// 地址: 0x142b373c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0x18
char* r9 = arg9

if (arg8 != 0)
    rax = 0x35

int64_t r13 = 0
int32_t arg_8 = rax
int64_t r14
r14.b = 0
*r9 = 1
int64_t i_1 = 0
char* rax_1 = *arg1
int32_t rbp = 0
arg8 = 0

while (*rax_1 == 0x30)
    bool cond:1_1
    
    if (arg4 != 0)
        *arg1 = &rax_1[1]
        
        if (&rax_1[1] == arg2)
        label_142b37540:
            *r9 = 0
            
            if (arg3 == 0)
                return zx.o(0)
            
            return -0x8000000000000000
        
        if (&rax_1[2] != arg2)
            if (sx.d(rax_1[1]) == zx.d(arg4))
                int32_t rcx_1 = sx.d(rax_1[2])
                
                if (rcx_1 - 0x30 u<= 9 && rcx_1 s< 0x38)
                    *arg1 = &rax_1[2]
            
            cond:1_1 = *arg1 == arg2
            goto label_142b37472
    else
        *arg1 = &rax_1[1]
        cond:1_1 = &rax_1[1] == arg2
    label_142b37472:
        void* rax_2
        rax_2.b = cond:1_1
        
        if (rax_2.b != 0)
            goto label_142b37540
    rax_1 = *arg1

char r12 = arg5

while (true)
    if (sub_142b38df0(sx.d(**arg1), 8) == 0)
        if (r12 != 0)
            char* rax_11 = *arg1
            
            if (*rax_11 == 0x2e)
                r14.b = 1
                arg8 = 1
                *arg1 = &rax_11[1]
                continue
            else if (((*rax_11 - 0x50) & 0xdf) == 0)
                break
        
        if (arg6 != 0)
            break
        
        if (sub_142b36e30(arg1, arg2) == 0)
            break
    else
        char* rdx_1 = *arg1
        int32_t rax_5 = rbp - 3
        
        if (r14.b == 0)
            rax_5 = rbp
        
        int32_t r8_1 = sx.d(*rdx_1)
        rbp = rax_5
        i_1 = sx.q(r8_1 - 0x30) + (i_1 << 3)
        int64_t rax_8 = i_1 s>> arg_8.b
        
        if (rax_8.d != 0)
            int32_t r13_1 = 1
            
            while (rax_8.d s> 1)
                r13_1 += 1
                rax_8 = zx.q(rax_8.d s>> 1)
            
            char r10_1 = arg8
            char rcx_7 = r13_1.b
            char r14_1 = 1
            int32_t r12_3 = ((1 << rcx_7) - 1) & i_1.d
            i_1 s>>= rcx_7
            rbp += r13_1
            
            while (true)
                bool cond:2_1
                
                if (arg4 != 0)
                    char* rcx_8 = *arg1
                    int32_t rdx_3 = sx.d(*rcx_8)
                    
                    if (rdx_3 - 0x30 u> 9 || rdx_3 s>= 0x38)
                        *arg1 = &rcx_8[1]
                        cond:2_1 = &rcx_8[1] == arg2
                        goto label_142b3766c
                    
                    *arg1 = &rcx_8[1]
                    
                    if (&rcx_8[1] == arg2)
                        break
                    
                    if (&rcx_8[2] != arg2)
                        if (sx.d(rcx_8[1]) == zx.d(arg4))
                            int32_t rcx_10 = sx.d(rcx_8[2])
                            
                            if (rcx_10 - 0x30 u<= 9 && rcx_10 s< 0x38)
                                *arg1 = &rcx_8[2]
                        
                        cond:2_1 = *arg1 == arg2
                        goto label_142b3766c
                else
                    *arg1 += 1
                    cond:2_1 = *arg1 == arg2
                label_142b3766c:
                    rax_8.b = cond:2_1
                    
                    if (rax_8.b != 0)
                        break
                
                if (arg5 != 0)
                    char* rax_14 = *arg1
                    
                    if (*rax_14 == 0x2e)
                        r10_1 = 1
                        *arg1 = &rax_14[1]
                
                int32_t rdx_5 = sx.d(**arg1)
                
                if (rdx_5 - 0x30 u> 9)
                    break
                
                if (rdx_5 s>= 0x38)
                    break
                
                if (r14_1 != 0 && rdx_5.b == 0x30)
                    rax_8 = zx.q(rbp + 3)
                    r14_1 = 1
                    
                    if (r10_1 != 0)
                        rax_8 = zx.q(rbp)
                    
                    rbp = rax_8.d
                    continue
                
                rax_8 = zx.q(rbp + 3)
                r14_1 = 0
                
                if (r10_1 != 0)
                    rax_8 = zx.q(rbp)
                
                rbp = rax_8.d
            
            if (arg5 != 0 || arg6 != arg5)
            label_142b376fc:
                int32_t r9_1 = 1 << (r13_1.b - 1)
                
                if (r12_3 s> r9_1)
                    i_1 += 1
                else if (r12_3 == r9_1 && ((i_1.b & 1) != 0 || r14_1 == 0))
                    i_1 += 1
                
                r12 = arg5
                
                if (test_bit(i_1, zx.q(arg_8)))
                    rbp += 1
                    i_1 s>>= 1
                
                r13 = 0
                break
            
            if (sub_142b36e30(arg1, arg2) == 0)
                goto label_142b376fc
        else
            bool cond:6_1
            
            if (arg4 == 0 || r8_1 - 0x30 u> 9 || r8_1 s>= 0x38)
                *arg1 = &rdx_1[1]
                cond:6_1 = &rdx_1[1] == arg2
            else
                *arg1 = &rdx_1[1]
                
                if (&rdx_1[1] == arg2)
                    break
                
                if (&rdx_1[2] == arg2)
                    continue
                else
                    if (sx.d(rdx_1[1]) == zx.d(arg4))
                        int32_t rcx_6 = sx.d(rdx_1[2])
                        
                        if (rcx_6 - 0x30 u<= 9 && rcx_6 s< 0x38)
                            *arg1 = &rdx_1[2]
                    
                    cond:6_1 = *arg1 == arg2
            
            void* rax_10
            rax_10.b = cond:6_1
            
            if (rax_10.b != 0)
                break
            
            continue
    
    return zx.o(arg7)

*arg9 = 0

if (r12 != 0)
    if (arg4 != 0)
        char* rcx_16 = *arg1
        int32_t rdx_8 = sx.d(*rcx_16)
        
        if (rdx_8 - 0x30 u> 9 || rdx_8 s>= 0x38)
            *arg1 = &rcx_16[1]
        else
            void* rdx_9 = &rcx_16[1]
            *arg1 = rdx_9
            
            if (rdx_9 != arg2 && rdx_9 + 1 != arg2 && sx.d(*rdx_9) == zx.d(arg4))
                int32_t rcx_18 = sx.d(*(rdx_9 + 1))
                
                if (rcx_18 - 0x30 u<= 9)
                    if (rcx_18 s< 0x38)
                        rdx_9 += 1
                    
                    *arg1 = rdx_9
    else
        *arg1 += 1
    
    char* rax_26 = *arg1
    r12 = 0
    char rcx_19 = *rax_26
    
    if (rcx_19 == 0x2b)
        *arg1 = &rax_26[1]
    else if (rcx_19 == 0x2d)
        r12 = 1
        *arg1 = &rax_26[1]
    
    uint64_t r14_2 = 0
    
    if (sub_142b38df0(sx.d(**arg1), 0xa) != 0)
        char i
        
        do
            char* rcx_21 = *arg1
            int32_t rdx_10 = sx.d(*rcx_21)
            r14_2 = zx.q(rdx_10 + (((r14_2 * 5).d - 0x18) << 1))
            bool cond:9_1
            
            if (arg4 == 0 || rdx_10 - 0x30 u> 9 || rdx_10 s>= 0x38)
                *arg1 = &rcx_21[1]
                cond:9_1 = &rcx_21[1] == arg2
            label_142b3787c:
                void* rax_31
                rax_31.b = cond:9_1
                
                if (rax_31.b != 0)
                    break
            else
                *arg1 = &rcx_21[1]
                
                if (&rcx_21[1] == arg2)
                    break
                
                if (&rcx_21[2] != arg2)
                    if (sx.d(rcx_21[1]) == zx.d(arg4))
                        int32_t rcx_23 = sx.d(rcx_21[2])
                        
                        if (rcx_23 - 0x30 u<= 9 && rcx_23 s< 0x38)
                            *arg1 = &rcx_21[2]
                    
                    cond:9_1 = *arg1 == arg2
                    goto label_142b3787c
            i = sub_142b38df0(sx.d(**arg1), 0xa)
        while (i != 0)
    
    int32_t rax_34 = neg.d(r14_2.d)
    
    if (r12 == 0)
        rax_34 = r14_2.d
    
    rbp += rax_34

uint128_t result

if (rbp == 0 || i_1 == 0)
    if (arg3 != 0)
        if (i_1 == 0)
            return -0x8000000000000000
        
        i_1 = neg.q(i_1)
    
    result.q = float.d(i_1)
else
    while (i_1 u> 0x1fffffffffffff)
        i_1 u>>= 1
        rbp += 1
    
    if (rbp s< 0x3cc)
        bool cond:7_1 = rbp != 0xfffffbce
        
        if (rbp s>= 0xfffffbce)
            if (rbp s> 0xfffffbce)
                while ((0x10000000000000 & i_1) == 0)
                    i_1 *= 2
                    rbp -= 1
                    
                    if (rbp s<= 0xfffffbce)
                        break
                
                cond:7_1 = rbp != 0xfffffbce
            
            if (cond:7_1 || (0x10000000000000 & i_1) != 0)
                r13 = sx.q(rbp + 0x433)
            
            r13 = r13 << 0x34 | (i_1 & 0xfffffffffffff)
    else
        r13 = 0x7ff0000000000000
    
    arg_8.q = r13
    memmove(&arg9, &arg_8, 8)
    result = zx.o(arg9)
    
    if (arg3 != 0)
        return result ^ data_142d8e3c0

return result
