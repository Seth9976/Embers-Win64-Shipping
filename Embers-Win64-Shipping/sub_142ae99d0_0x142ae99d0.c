// 函数: sub_142ae99d0
// 地址: 0x142ae99d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x48)
int32_t rsi = 0
int32_t r9 = *(arg1 + 0x78)
uint64_t rbp = arg2
void* rdi = arg1

if (arg2 s< 0)
    rbp = 0
else if (rbp s> 0x7fffffff)
    rbp = 0x7fffffff

uint32_t arg_10 = rbp.d

if (rbp.d s> r9)
    if (r9 s< 0)
        int32_t rax_1 = *(arg1 + 0x7c)
        
        if (rbp.d s>= rax_1)
            if (rax_1 s< rbp.d)
                int32_t i
                
                do
                    int64_t rcx = sx.q(*(rdi + 0x7c))
                    
                    if (*(rcx + r12) == 0)
                        break
                    
                    i = (rcx + 1).d
                    *(rdi + 0x7c) = i
                while (i s< rbp.d)
            
            int64_t rcx_1 = sx.q(*(rdi + 0x7c))
            
            if (*(rcx_1 + r12) == 0)
                *(rdi + 8) &= 0xfffffffd
                rbp = zx.q(rcx_1.d)
                *(rdi + 0x78) = rcx_1.d
                r9 = rcx_1.d
                arg_10 = rbp.d
    else
        rbp = zx.q(r9)
        arg_10 = rbp.d

int64_t result = sx.q(rbp.d)
int32_t arg_18
int32_t* rdx
bool cond:2_1

if (arg3 == 0)
    int64_t rcx_17 = *(rdi + 0x20)
    
    if (result != rcx_17)
    label_142ae9e23:
        rdx = *(rdi + 0x58)
        int32_t r8_2 = *rdx
        
        if (rbp.d s> r8_2 && rbp.d s<= rdx[1])
        label_142ae9e38:
            *(rdi + 0x58) = *(rdi + 0x50)
            *(rdi + 0x50) = rdx
            *(rdi + 0x30) = rdx + ((sx.q(rdx[2]) + 0xc) << 1)
            *(rdi + 0x2c) = rdx[3] - rdx[2]
            *(rdi + 0x20) = sx.q(*rdx)
            *(rdi + 0x10) = sx.q(rdx[1])
            *(rdi + 0x1c) = rdx[4]
            *(rdi + 0x28) = zx.d(*(sx.q(rbp.d - rdx[5]) + rdx + 0x84)) - rdx[2]
            result.b = 1
        else if (rbp.d == 0)
            cond:2_1 = r8_2 == 0
        label_142ae9e8e:
            
            if (not(cond:2_1))
                *rdx = rbp.d
                rdx[1] = rbp.d
                *(rdx + 8) = 0
                rdx[4] = 0
                rdx[5] = rbp.d
                rdx[0x18].b = 0
                rdx[0x21].b = 0
            
            int32_t* rdx_9 = *(rdi + 0x58)
            *(rdi + 0x58) = *(rdi + 0x50)
            *(rdi + 0x50) = rdx_9
            *(rdi + 0x30) = rdx_9 + ((sx.q(rdx_9[2]) + 0xc) << 1)
            int32_t rcx_25 = rdx_9[3] - rdx_9[2]
            *(rdi + 0x2c) = rcx_25
            *(rdi + 0x20) = sx.q(*rdx_9)
            *(rdi + 0x10) = sx.q(rdx_9[1])
            *(rdi + 0x1c) = rdx_9[4]
            
            if (rbp.d != rdx_9[1])
                *(rdi + 0x28) = 0
                result.b = 0
            else
                *(rdi + 0x28) = rcx_25
                result.b = 0
        else if (result s<= rcx_17 || result s> *(rdi + 0x10))
            if (rbp.d != *(rdi + 0x78) && *(result + r12) s< 0xc0)
                rbp = zx.q(sub_142a9bab0(r12, 0, rbp.d))
                arg_10 = rbp.d
            
            int32_t r14_2 = (rbp - 0x65).d
            int32_t* r15_2 = *(rdi + 0x58)
            int32_t rsi_1 = 0x22
            *(rdi + 0x58) = *(rdi + 0x50)
            int32_t rdx_11 = 0x22
            arg_18 = rbp.d
            *(rdi + 0x50) = r15_2
            *(r15_2 + 0x82) = rbp.b - r14_2.b
            *(sx.q(arg_18 - r14_2) + r15_2 + 0x84) = 0x22
            int32_t rcx_29 = arg_18
            
            while (rcx_29 - r14_2 s> 5)
                if (rcx_29 s<= 0)
                    break
                
                rsi_1 -= 1
                arg_18 = rcx_29 - 1
                uint32_t r9_1 = zx.d(*(sx.q(rcx_29 - 1) + r12))
                
                if (r9_1 s>= 0x80)
                    int32_t rbx_1 = rcx_29 - 1
                    int32_t rax_61 = sub_142a9be90(r12, 0, &arg_18, r9_1, 0xfd)
                    int64_t rcx_33 = sx.q(rsi_1)
                    int32_t rdx_12 = rax_61
                    
                    if (rax_61 s>= 0x10000)
                        rax_61.w &= 0x3ff
                        rax_61.w |= 0xdc00
                        rsi_1 -= 1
                        *(r15_2 + (rcx_33 << 1) + 0x18) = rax_61.w
                        *(rcx_33 + r15_2 + 0x60) = arg_18.b - r14_2.b
                        rdx_12.w = (rdx_12 s>> 0xa).w - 0x2840
                        rcx_33 = sx.q(rsi_1)
                    
                    *(r15_2 + (rcx_33 << 1) + 0x18) = rdx_12.w
                    *(rcx_33 + r15_2 + 0x60) = arg_18.b - r14_2.b
                    
                    do
                        int32_t rax_64 = neg.d(r14_2) + rbx_1
                        rbx_1 -= 1
                        *(sx.q(rax_64) + r15_2 + 0x84) = rsi_1.b
                        rcx_29 = arg_18
                    while (rbx_1 s>= rcx_29)
                    
                    rdx_11 = rsi_1
                else
                    int64_t rcx_31 = sx.q(rsi_1)
                    *(r15_2 + (rcx_31 << 1) + 0x18) = r9_1.w
                    *(sx.q(arg_18 - r14_2) + r15_2 + 0x84) = rsi_1.b
                    *(rcx_31 + r15_2 + 0x60) = arg_18.b - r14_2.b
                    rcx_29 = arg_18
                
                if (rsi_1 s<= 2)
                    break
            
            *r15_2 = rcx_29
            r15_2[1] = arg_10
            r15_2[2] = rsi_1
            r15_2[3] = 0x22
            r15_2[4] = rdx_11 - rsi_1
            r15_2[5] = r14_2
            *(arg1 + 0x30) = r15_2 + ((sx.q(rsi_1) + 0xc) << 1)
            int32_t rax_66 = r15_2[3] - r15_2[2]
            *(arg1 + 0x2c) = rax_66
            *(arg1 + 0x28) = rax_66
            *(arg1 + 0x20) = sx.q(*r15_2)
            *(arg1 + 0x10) = sx.q(r15_2[1])
            *(arg1 + 0x1c) = r15_2[4]
            result.b = 1
        else
            void* rdx_10 = *(rdi + 0x50)
            uint32_t rcx_26 = zx.d(*(sx.q(rbp.d - *(rdx_10 + 0x14)) + rdx_10 + 0x84))
            bool cond:0_1 = rcx_26 != *(rdx_10 + 8)
            *(rdi + 0x28) = rcx_26 - *(rdx_10 + 8)
            result.b = cond:0_1
    else
        if (rbp.d != 0)
            rdx = *(rdi + 0x58)
            
            if (rbp.d s<= *rdx || rbp.d s> rdx[1])
                goto label_142ae9e23
            
            goto label_142ae9e38
        
        *(rdi + 0x28) = 0
        result.b = 0
else
    int64_t rcx_2 = *(rdi + 0x10)
    
    if (result != rcx_2)
    label_142ae9a9b:
        rdx = *(rdi + 0x58)
        
        if (rbp.d s>= *rdx && rbp.d s< rdx[1])
            goto label_142ae9e38
        
        if (rbp.d != r9)
            if (result s< *(rdi + 0x20) || result s>= rcx_2)
                if (*(result + r12) s< 0xc0)
                    rbp = zx.q(sub_142a9bab0(r12, 0, rbp.d))
                
                int32_t i_1 = 0
                int32_t* r15_1 = *(rdi + 0x58)
                int32_t r8_1 = rbp.d
                *(rdi + 0x58) = *(rdi + 0x50)
                int32_t rax_4 = *(rdi + 0x78)
                int32_t r13_1 = rax_4
                *(rdi + 0x50) = r15_1
                void* r11_1 = &r15_1[6]
                
                if (rax_4 s< 0)
                    r13_1 = 0x7fffffff
                
                uint32_t rax_5 = rax_4 u>> 0x1f
                char r10 = 0
                arg_18.b = 0
                uint32_t rdx_2
                
                do
                    char* rcx_7 = sx.q(r8_1) + r12
                    rdx_2 = zx.d(*rcx_7)
                    
                    if (rdx_2 - 1 u> 0x7e)
                        if (r10 == 0)
                            arg_18.b = 1
                            r15_1[4] = i_1
                        
                        rdx_2 = zx.d(*rcx_7)
                        int32_t r10_1 = r8_1
                        r8_1 += 1
                        rsi += 1
                        int32_t i_3 = i_1
                        char r14_1 = i_1.b
                        
                        if (rdx_2.b s>= 0)
                            goto label_142ae9ca7
                        
                        int64_t i_4
                        
                        if (r8_1 == r13_1)
                        label_142ae9c66:
                            i_4 = sx.q(i_1)
                            rdx_2 = 0xfffd
                            *(r15_1 + (i_4 << 1) + 0x18) = 0xfffd
                        else
                            int32_t rdx_7
                            
                            if (rdx_2 s< 0xe0)
                                if (rdx_2 s< 0xc2)
                                    goto label_142ae9c66
                                
                                rdx_7 = rdx_2 & 0x1f
                            else
                                int32_t rdx_3
                                uint32_t r11_2
                                
                                if (rdx_2 s>= 0xf0)
                                    if (rdx_2 - 0xf0 s> 4)
                                        goto label_142ae9c66
                                    
                                    uint32_t rcx_9 = zx.d(*(sx.q(r8_1) + r12))
                                    
                                    if (not(test_bit(sx.d(*((zx.q(rcx_9) u>> 4) + 0x14363c6e8)), 
                                            rdx_2 - 0xf0)))
                                        goto label_142ae9c66
                                    
                                    r8_1 += 1
                                    rdx_3 = (zx.d(rcx_9.b) & 0x3f) | (rdx_2 - 0xf0) << 6
                                    rsi += 1
                                    
                                    if (r8_1 == r13_1)
                                        goto label_142ae9c66
                                    
                                    r11_2.b = *(sx.q(r8_1) + r12) - 0x80
                                    
                                    if (r11_2.b u> 0x3f)
                                        goto label_142ae9c66
                                else
                                    rdx_3 = rdx_2 & 0xf
                                    r11_2 = zx.d(*(sx.q(r8_1) + r12))
                                    rdi = arg1
                                    
                                    if (not(test_bit(sx.d((*" 000000000000")[sx.q(rdx_3)]), 
                                            zx.d((r11_2 u>> 5).b))))
                                        goto label_142ae9c66
                                    
                                    r11_2.b &= 0x3f
                                
                                r8_1 += 1
                                rsi += 1
                                rdx_7 = rdx_3 << 6 | zx.d(r11_2.b)
                                
                                if (r8_1 == r13_1)
                                    goto label_142ae9c66
                                
                                r11_1 = &r15_1[6]
                            
                            char rcx_12 = *(sx.q(r8_1) + r12) - 0x80
                            
                            if (rcx_12 u> 0x3f)
                                goto label_142ae9c66
                            
                            r8_1 += 1
                            rdx_2 = rdx_7 << 6 | zx.d(rcx_12)
                            rsi += 1
                        label_142ae9ca7:
                            
                            if (rdx_2 == 0)
                                if (rax_5.b != rdx_2.b)
                                    r8_1 -= 1
                                    break
                                
                                i_4 = sx.q(i_1)
                                *(r15_1 + (i_4 << 1) + 0x18) = rdx_2.w
                            else if (rdx_2 u> 0xffff)
                                i_4 = sx.q(i_1)
                                i_1 += 1
                                *(r15_1 + (i_4 << 1) + 0x18) = (rdx_2 s>> 0xa).w - 0x2840
                                *(r15_1 + (sx.q(i_1) << 1) + 0x18) = (rdx_2.w & 0x3ff) | 0xdc00
                            else
                                i_4 = sx.q(i_1)
                                *(r15_1 + (i_4 << 1) + 0x18) = rdx_2.w
                        
                        i_1 += 1
                        void* rax_35 = &r15_1[0x18] + i_4
                        
                        do
                            i_3 += 1
                            *rax_35 = r10_1.b - rbp.b
                            rax_35 += 1
                        while (i_3 s< i_1)
                        
                        do
                            int32_t rax_36 = neg.d(rbp.d) + r10_1
                            r10_1 += 1
                            *(sx.q(rax_36) + r15_1 + 0x84) = r14_1
                        while (r10_1 s< r8_1)
                        
                        r10 = arg_18.b
                        r11_1 = &r15_1[6]
                    else
                        int64_t i_2 = sx.q(i_1)
                        char rax_7 = r8_1.b - rbp.b
                        r8_1 += 1
                        *(r11_1 + (i_2 << 1)) = rdx_2.w
                        *(r15_1 + i_2 + 0x60) = rax_7
                        int64_t rax_8 = sx.q(rsi)
                        rsi += 1
                        *(rax_8 + r15_1 + 0x84) = i_1.b
                        i_1 += 1
                    
                    if (r8_1 s>= r13_1)
                        break
                while (i_1 s< 0x20)
                
                *(sx.q(i_1) + r15_1 + 0x60) = r8_1.b - rbp.b
                *(sx.q(r8_1 - rbp.d) + r15_1 + 0x84) = i_1.b
                *r15_1 = rbp.d
                r15_1[1] = r8_1
                r15_1[2] = 0
                r15_1[3] = i_1
                
                if (arg_18.b == 0)
                    r15_1[4] = i_1
                
                r15_1[5] = rbp.d
                *(rdi + 0x30) = r11_1
                *(rdi + 0x28) = 0
                *(rdi + 0x2c) = r15_1[3]
                *(rdi + 0x20) = sx.q(*r15_1)
                *(rdi + 0x10) = sx.q(r15_1[1])
                *(rdi + 0x1c) = r15_1[4]
                
                if (rax_5.b != 0 && r8_1 s> *(rdi + 0x7c))
                    *(rdi + 0x7c) = r8_1
                    
                    if (rdx_2 == 0)
                        *(rdi + 8) &= 0xfffffffd
                        *(rdi + 0x78) = r8_1
            else
                void* rdx_1 = *(rdi + 0x50)
                *(rdi + 0x28) = zx.d(*(sx.q(rbp.d - *(rdx_1 + 0x14)) + rdx_1 + 0x84)) - *(rdx_1 + 8)
            
            result.b = 1
        else
            if (result != rcx_2)
                cond:2_1 = rbp.d == rdx[1]
                goto label_142ae9e8e
            
            *(rdi + 0x28) = *(rdi + 0x2c)
            result.b = 0
    else
        if (rbp.d != r9)
            rdx = *(rdi + 0x58)
            
            if (rbp.d s< *rdx || rbp.d s>= rdx[1])
                goto label_142ae9a9b
            
            goto label_142ae9e38
        
        *(rdi + 0x28) = *(rdi + 0x2c)
        result.b = 0
return result
