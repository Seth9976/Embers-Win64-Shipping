// 函数: sub_142a83690
// 地址: 0x142a83690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x128) s>= 0)
    int64_t rax
    rax.b = 1
    return rax

int64_t rax_11

if (*(arg1 + 0xb8) == 2)
    int64_t i_9 = sx.q(*(arg1 + 0xc4))
    char i_10 = 0
    int32_t rax_5 = *(arg1 + 0x14)
    char r9 = 0xfe
    char* rbx_1 = *(arg1 + 0x78)
    int32_t rdx_1 = 0
    int32_t arg_8 = rax_5
    
    if (i_9.d s> 0)
        char* rax_6 = rbx_1
        int64_t i_6 = i_9
        int64_t i
        
        do
            char rcx_2 = *rax_6
            
            if (rcx_2 != r9)
                rdx_1 += 1
                r9 = rcx_2
            
            rax_6 = &rax_6[1]
            i = i_6
            i_6 -= 1
        while (i != 1)
        rax_5 = arg_8
    
    if (rdx_1 == 1 && i_9.d == rax_5)
        uint32_t rax_7 = zx.d(*rbx_1)
        *(arg1 + 0x130) = arg1 + 0x138
        *(arg1 + 0x128) = rdx_1
        *(arg1 + 0x138) = rax_7 << 0x1f
        *(*(arg1 + 0x130) + 4) = *(arg1 + 0x14)
        *(*(arg1 + 0x130) + 8) = 0
        goto label_142a838f2
    
    uint64_t rcx_5 = zx.q(rdx_1 + 1)
    uint64_t i_11
    i_11.b = 0x7e
    
    if (i_9.d s>= rax_5)
        rcx_5 = zx.q(rdx_1)
    
    if (sub_142a82af0(arg1 + 0x58, arg1 + 0x2c, *(arg1 + 0x69), (rcx_5 * 3).d << 2).b != 0)
        int32_t* r14_1 = *(arg1 + 0x58)
        int32_t rbp_1 = 0
        int32_t r8_2 = 0
        char* rdx_3 = nullptr
        void* r10_1 = &r14_1[2]
        
        do
            char i_1 = *(rdx_3 + rbx_1)
            int32_t r11_1 = r8_2
            char i_4 = i_11.b
            
            if (i_1 u< i_11.b)
                i_4 = i_1
            
            i_11 = zx.q(i_4)
            char i_5 = i_10
            
            if (i_1 u> i_10)
                i_5 = i_1
            
            i_10 = i_5
            
            do
                r8_2 += 1
                rdx_3 = &rdx_3[1]
                
                if (rdx_3 s>= i_9)
                    break
            while (*(rdx_3 + rbx_1) == i_1)
            
            *(r10_1 - 8) = r11_1
            *r10_1 = 0
            *(r10_1 - 4) = r8_2 - r11_1
            rbp_1 += 1
            r10_1 += 0xc
        while (rdx_3 s< i_9)
        
        if (i_9.d s< arg_8)
            int64_t rcx_7 = sx.q(rbp_1) * 3
            char i_12 = i_11.b
            r14_1[rcx_7] = i_9.d
            r14_1[rcx_7 + 1] = arg_8 - i_9.d
            char i_13 = *(arg1 + 0x8d)
            
            if (i_13 u< i_11.b)
                i_12 = i_13
            
            i_11 = zx.q(i_12)
        
        int64_t i_8 = sx.q(rcx_5.d)
        *(arg1 + 0x128) = i_8.d
        *(arg1 + 0x130) = r14_1
        sub_142a83340(arg1, i_11.b, i_10)
        int64_t i_7 = i_8
        int32_t r10_2 = 0
        
        if (i_8.d s> 0)
            int32_t* r8_4 = r14_1
            int64_t i_2
            
            do
                int64_t rdx_7 = sx.q(*r8_4)
                r8_4 = &r8_4[3]
                uint32_t rcx_9 = zx.d(rbx_1[rdx_7])
                r8_4[-2] += r10_2
                r10_2 = r8_4[-2]
                r8_4[-3] = rcx_9 << 0x1f | rdx_7.d
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
        
        if (rbp_1 s< i_8.d)
            uint32_t rdx_8 = zx.d(*(arg1 + 0x8d))
            
            if ((rdx_8.b & 1) != 0)
                rbp_1 = 0
            
            int64_t rcx_12 = sx.q(rbp_1) * 3
            r14_1[rcx_12] |= rdx_8 << 0x1f
        
        goto label_142a838f2
    
    rax_11.b = 0
else
    uint32_t rax_1 = zx.d(*(arg1 + 0x8d))
    *(arg1 + 0x130) = arg1 + 0x138
    *(arg1 + 0x128) = 1
    *(arg1 + 0x138) = rax_1 << 0x1f
    *(*(arg1 + 0x130) + 4) = *(arg1 + 0x14)
    *(*(arg1 + 0x130) + 8) = 0
label_142a838f2:
    rax_11 = sx.q(*(arg1 + 0x1a4))
    
    if (rax_11.d s> 0)
        for (int32_t* i_3 = *(arg1 + 0x1b0); i_3 u< &i_3[rax_11 * 2]; i_3 = &i_3[2])
            int32_t* rbp_2 = *(arg1 + 0x130)
            int32_t r10_3 = 0
            int32_t r11_2 = *i_3
            int32_t* rdx_10 = rbp_2
            int64_t r8_5 = 0
            
            while (true)
                if (r8_5 s>= sx.q(*(arg1 + 0x128)))
                    abort()
                    noreturn
                
                int32_t r9_3 = rdx_10[1]
                int32_t rax_17 = *rdx_10 & 0x7fffffff
                
                if (r11_2 s>= rax_17 && r11_2 s< r9_3 - r10_3 + rax_17)
                    break
                
                r8_5 += 1
                r10_3 = r9_3
                rdx_10 = &rdx_10[3]
            
            rbp_2[r8_5 * 3 + 2] |= i_3[1]
    
    if (*(arg1 + 0x1b8) s> 0)
        int16_t* rbx_2 = *(arg1 + 8)
        void* r14_3 = &rbx_2[sx.q(*(arg1 + 0x14))]
        
        if (rbx_2 u< r14_3)
            int64_t r15_1 = neg.q(rbx_2)
            
            do
                uint32_t rcx_17 = zx.d(*rbx_2)
                
                if ((rcx_17 & 0xfffffffc) == 0x200c || rcx_17 - 0x202a u< 5 || rcx_17 - 0x2066 u< 4)
                    int32_t* rbp_3 = *(arg1 + 0x130)
                    int32_t* rdx_11 = rbp_3
                    int32_t r10_5 = ((r15_1 + rbx_2) s>> 1).d
                    int32_t r11_3 = 0
                    int64_t r8_6 = 0
                    
                    while (true)
                        if (r8_6 s>= sx.q(*(arg1 + 0x128)))
                            abort()
                            noreturn
                        
                        int32_t r9_4 = rdx_11[1]
                        int32_t rcx_19 = *rdx_11 & 0x7fffffff
                        
                        if (r10_5 s>= rcx_19 && r10_5 s< r9_4 - r11_3 + rcx_19)
                            break
                        
                        r8_6 += 1
                        r11_3 = r9_4
                        rdx_11 = &rdx_11[3]
                    
                    rax_11 = r8_6 * 3
                    rbp_3[rax_11 + 2] -= 1
                
                rbx_2 = &rbx_2[1]
            while (rbx_2 u< r14_3)
    
    rax_11.b = 1

return rax_11
