// 函数: sub_142b379b0
// 地址: 0x142b379b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0x18

if (arg8 != 0)
    r13 = 0x35

char* r8 = arg9
int64_t r14
r14.b = 0
int32_t arg_8 = r13
int64_t i_1 = 0
arg8 = 0
int32_t rbp = 0
*r8 = 1
void** rbx = arg1
int16_t* rax = *arg1

while (*rax == 0x30)
    bool cond:1_1
    
    if (arg4 != 0)
        *rbx = &rax[1]
        
        if (&rax[1] == arg2)
        label_142b37aba:
            *r8 = 0
            
            if (arg3 == 0)
                return zx.o(0)
            
            return -0x8000000000000000
        
        if (&rax[2] != arg2)
            if (rax[1] == arg4)
                uint32_t rdx = zx.d(rax[2])
                
                if (rdx - 0x30 u> 9)
                    if (rdx - 0x61 u<= 5 || rdx - 0x41 u<= 5)
                        *rbx = &rax[2]
                else if (rdx u< 0x40 || rdx - 0x61 u<= 5 || rdx - 0x41 u<= 5)
                    *rbx = &rax[2]
            
            cond:1_1 = *rbx == arg2
            goto label_142b37a6e
    else
        *rbx = &rax[1]
        cond:1_1 = &rax[1] == arg2
    label_142b37a6e:
        void* rax_1
        rax_1.b = cond:1_1
        
        if (rax_1.b != 0)
            goto label_142b37aba
    rax = *rbx

char r15 = arg5

while (true)
    char rax_5 = sub_142b38df0(zx.d(**rbx), 0x10)
    void* rdx_1 = *rbx
    int32_t rcx_3
    
    if (rax_5 != 0)
        int32_t rax_6 = rbp - 4
        rcx_3 = sx.d(*rdx_1) - 0x30
        
        if (r14.b == 0)
            rax_6 = rbp
        
        rbp = rax_6
        goto label_142b37b2d
    
    uint32_t rcx_4 = zx.d(*rdx_1)
    
    if (rcx_4 - 0x61 u> 5)
        if (rcx_4 - 0x41 u<= 5)
            rcx_3 = sx.d(*rdx_1) - 0x37
            
            if (r14.b != 0)
                rbp -= 4
            
            goto label_142b37b2d
        
        if (r15 != 0)
            if (rcx_4 == 0x2e)
                r14.b = 1
                arg8 = 1
                
                if (arg4 != 0)
                    if ((rcx_4 - 0x30 u> 9 || rcx_4 u>= 0x40) && rcx_4 - 0x61 u> 5
                            && rcx_4 - 0x41 u> 5)
                        *rbx = rdx_1 + 2
                        continue
                    
                    *rbx = rdx_1 + 2
                    
                    if (rdx_1 + 2 == arg2)
                        continue
                    else if (rdx_1 + 4 == arg2)
                        continue
                    else if (*(rdx_1 + 2) != arg4)
                        continue
                    else
                        uint32_t rcx_10 = zx.d(*(rdx_1 + 4))
                        
                        if ((rcx_10 - 0x30 u> 9 || rcx_10 u>= 0x40) && rcx_10 - 0x61 u> 5
                                && rcx_10 - 0x41 u> 5)
                            continue
                        
                        *rbx = rdx_1 + 4
                        continue
                else
                    *rbx = rdx_1 + 2
                    continue
            else if ((0xffdf & (*rdx_1 - 0x50)) == 0)
                break
        
        if (arg6 != 0)
            break
        
        if (sub_142b36ed0(rbx, arg2) == 0)
            break
    else
        int32_t rax_8 = rbp - 4
        rcx_3 = sx.d(*rdx_1) - 0x57
        
        if (r14.b == 0)
            rax_8 = rbp
        
        rbp = rax_8
    label_142b37b2d:
        i_1 = (i_1 << 4) + sx.q(rcx_3)
        int64_t rax_12 = i_1 s>> r13.b
        
        if (rax_12.d != 0)
            int32_t r15_1 = 1
            
            while (rax_12.d s> 1)
                r15_1 += 1
                rax_12 = zx.q(rax_12.d s>> 1)
            
            char r9_1 = arg8
            char rcx_11 = r15_1.b
            char r14_1 = 1
            int32_t r13_3 = ((1 << rcx_11) - 1) & i_1.d
            i_1 s>>= rcx_11
            rbp += r15_1
            
            while (true)
                bool cond:3_1
                
                if (arg4 != 0)
                    int16_t* rdx_4 = *rbx
                    uint32_t rcx_12 = zx.d(*rdx_4)
                    
                    if (rcx_12 - 0x30 u> 9)
                        if (rcx_12 - 0x61 u> 5 && rcx_12 - 0x41 u> 5)
                            goto label_142b37d23
                    else if (rcx_12 u>= 0x40 && rcx_12 - 0x61 u> 5 && rcx_12 - 0x41 u> 5)
                    label_142b37d23:
                        *rbx = &rdx_4[1]
                        cond:3_1 = &rdx_4[1] == arg2
                        goto label_142b37d74
                    
                    *rbx = &rdx_4[1]
                    
                    if (&rdx_4[1] == arg2)
                        break
                    
                    if (&rdx_4[2] != arg2)
                        if (rdx_4[1] == arg4)
                            uint32_t rdx_5 = zx.d(rdx_4[2])
                            
                            if (rdx_5 - 0x30 u> 9)
                                if (rdx_5 - 0x61 u<= 5 || rdx_5 - 0x41 u<= 5)
                                    *rbx = &rdx_4[2]
                            else if (rdx_5 u< 0x40 || rdx_5 - 0x61 u<= 5 || rdx_5 - 0x41 u<= 5)
                                *rbx = &rdx_4[2]
                        
                        goto label_142b37d71
                else
                    *rbx += 2
                label_142b37d71:
                    cond:3_1 = *rbx == arg2
                label_142b37d74:
                    rax_12.b = cond:3_1
                    
                    if (rax_12.b != 0)
                        break
                
                if (arg5 != 0)
                    int16_t* rax_35 = *rbx
                    
                    if (*rax_35 == 0x2e)
                        r9_1 = 1
                        *rbx = &rax_35[1]
                
                uint32_t rcx_14 = zx.d(**rbx)
                
                if ((rcx_14 - 0x30 u> 9 || rcx_14 u>= 0x40) && rcx_14 - 0x61 u> 5
                        && rcx_14 - 0x41 u> 5)
                    break
                
                if (r14_1 != 0 && rcx_14 == 0x30)
                    rax_12 = zx.q(rbp + 4)
                    r14_1 = 1
                    
                    if (r9_1 != 0)
                        rax_12 = zx.q(rbp)
                    
                    rbp = rax_12.d
                    continue
                
                rax_12 = zx.q(rbp + 4)
                r14_1 = 0
                
                if (r9_1 != 0)
                    rax_12 = zx.q(rbp)
                
                rbp = rax_12.d
            
            if (arg5 != 0 || arg6 != arg5)
            label_142b37e10:
                int32_t r8_1 = 1 << (r15_1.b - 1)
                
                if (r13_3 s> r8_1)
                    i_1 += 1
                else if (r13_3 == r8_1 && ((i_1.b & 1) != 0 || r14_1 == 0))
                    i_1 += 1
                
                r15 = arg5
                
                if (test_bit(i_1, zx.q(arg_8)))
                    rbp += 1
                    i_1 s>>= 1
                
                break
            
            if (sub_142b36ed0(rbx, arg2) == 0)
                goto label_142b37e10
        else
            bool cond:2_1
            
            if (arg4 != 0)
                uint32_t rcx_8 = zx.d(*rdx_1)
                
                if ((rcx_8 - 0x30 u> 9 || rcx_8 u>= 0x40) && rcx_8 - 0x61 u> 5 && rcx_8 - 0x41 u> 5)
                    *rbx = rdx_1 + 2
                    cond:2_1 = rdx_1 + 2 == arg2
                else
                    *rbx = rdx_1 + 2
                    
                    if (rdx_1 + 2 == arg2)
                        break
                    
                    if (rdx_1 + 4 == arg2)
                        continue
                    else
                        if (*(rdx_1 + 2) == arg4)
                            uint32_t rcx_9 = zx.d(*(rdx_1 + 4))
                            
                            if (rcx_9 - 0x30 u> 9)
                                if (rcx_9 - 0x61 u<= 5 || rcx_9 - 0x41 u<= 5)
                                    *rbx = rdx_1 + 4
                            else if (rcx_9 u< 0x40 || rcx_9 - 0x61 u<= 5 || rcx_9 - 0x41 u<= 5)
                                *rbx = rdx_1 + 4
                        
                        cond:2_1 = *rbx == arg2
            else
                *rbx = rdx_1 + 2
                cond:2_1 = rdx_1 + 2 == arg2
            
            void* rax_13
            rax_13.b = cond:2_1
            
            if (rax_13.b != 0)
                break
            
            continue
    
    return zx.o(arg7)

*arg9 = 0
int64_t r13_4

if (r15 == 0)
    r13_4 = 0
else
    if (arg4 != 0)
        void* rdx_8 = *rbx
        uint32_t rcx_19 = zx.d(*rdx_8)
        
        if ((rcx_19 - 0x30 u> 9 || rcx_19 u>= 0x40) && rcx_19 - 0x61 u> 5 && rcx_19 - 0x41 u> 5)
            *rbx = rdx_8 + 2
        else
            *rbx = rdx_8 + 2
            
            if (rdx_8 + 2 != arg2 && rdx_8 + 4 != arg2 && *(rdx_8 + 2) == arg4)
                uint32_t rcx_20 = zx.d(*(rdx_8 + 4))
                
                if (rcx_20 - 0x30 u> 9)
                    if (rcx_20 - 0x61 u<= 5 || rcx_20 - 0x41 u<= 5)
                        *rbx = rdx_8 + 4
                else if (rcx_20 u< 0x40 || rcx_20 - 0x61 u<= 5 || rcx_20 - 0x41 u<= 5)
                    *rbx = rdx_8 + 4
    else
        *rbx += 2
    
    void* rax_52 = *rbx
    r15 = 0
    int16_t rcx_21 = *rax_52
    
    if (rcx_21 == 0x2b)
        *rbx = rax_52 + 2
    else if (rcx_21 == 0x2d)
        r15 = 1
        *rbx = rax_52 + 2
    
    r13_4 = 0
    uint64_t r14_2 = 0
    
    if (sub_142b38df0(zx.d(**rbx), 0xa) != 0)
        char i
        
        do
            void* rdx_10 = *rbx
            uint32_t rcx_23 = zx.d(*rdx_10)
            r14_2 = zx.q(rcx_23 + (((r14_2 * 5).d - 0x18) << 1))
            bool cond:8_1
            
            if (arg4 != 0)
                if (rcx_23 - 0x30 u> 9)
                    if (rcx_23 - 0x61 u> 5 && rcx_23 - 0x41 u> 5)
                        goto label_142b37f85
                else if (rcx_23 u>= 0x40 && rcx_23 - 0x61 u> 5 && rcx_23 - 0x41 u> 5)
                label_142b37f85:
                    *rbx = rdx_10 + 2
                    cond:8_1 = rdx_10 + 2 == arg2
                    goto label_142b37fd2
                
                *rbx = rdx_10 + 2
                
                if (rdx_10 + 2 == arg2)
                    break
                
                if (rdx_10 + 4 != arg2)
                    if (*(rdx_10 + 2) == arg4)
                        uint32_t rdx_11 = zx.d(*(rdx_10 + 4))
                        
                        if (rdx_11 - 0x30 u> 9)
                            if (rdx_11 - 0x61 u<= 5 || rdx_11 - 0x41 u<= 5)
                                *rbx = rdx_10 + 4
                        else if (rdx_11 u< 0x40 || rdx_11 - 0x61 u<= 5 || rdx_11 - 0x41 u<= 5)
                            *rbx = rdx_10 + 4
                    
                    cond:8_1 = *rbx == arg2
                    goto label_142b37fd2
            else
                *rbx = rdx_10 + 2
                cond:8_1 = rdx_10 + 2 == arg2
            label_142b37fd2:
                void* rax_56
                rax_56.b = cond:8_1
                
                if (rax_56.b != 0)
                    break
            i = sub_142b38df0(zx.d(**rbx), 0xa)
        while (i != 0)
    
    int32_t rax_64 = neg.d(r14_2.d)
    
    if (r15 == 0)
        rax_64 = r14_2.d
    
    rbp += rax_64

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
                r13_4 = sx.q(rbp + 0x433)
            
            r13_4 = r13_4 << 0x34 | (i_1 & 0xfffffffffffff)
    else
        r13_4 = 0x7ff0000000000000
    
    arg_8.q = r13_4
    memmove(&arg9, &arg_8, 8)
    result = zx.o(arg9)
    
    if (arg3 != 0)
        return result ^ data_142d8e3c0

return result
