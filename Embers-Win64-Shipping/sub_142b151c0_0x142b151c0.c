// 函数: sub_142b151c0
// 地址: 0x142b151c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg2
char* rbx = arg2
void* rsi_1 = &arg2[sx.q(arg3)]

if (i s>= 0)
    if (arg4 == 0)
        do
            if (*(zx.q(i) + arg1 + 8) != 0)
                return rbx
            
            rbx = &rbx[1]
            
            if (rbx == rsi_1)
                return rbx
            
            i = *rbx
        while (i s>= 0)
    else
        while (true)
            if (*(zx.q(i) + arg1 + 8) != 0)
                rbx = &rbx[1]
                
                if (rbx != rsi_1)
                    i = *rbx
                    
                    if (i s< 0)
                        break
                    
                    continue
            
            return rbx
    
    arg3 = rsi_1.d - rbx.d

char rax_3 = *(rsi_1 - 1)
void* rcx = rsi_1 - 1
int32_t rbp = 1

if (arg4 == 0)
    rbp = arg4

void* r14 = rsi_1

if (rax_3 s< 0)
    if (rax_3 u>= 0xc0)
        rsi_1 = rcx
        
        if (sx.d(*(arg1 + 0x108)) != rbp)
            r14 = rcx
    else
        void* rcx_1
        
        if (arg3 s>= 2)
            rax_3 = *(rsi_1 - 2)
            rcx_1 = rsi_1 - 2
        
        if (arg3 s>= 2 && rax_3 u>= 0xe0)
            rsi_1 = rcx_1
            
            if (sx.d(*(arg1 + 0x108)) != rbp)
                r14 = rcx_1
        else if (rax_3 - 0x80 u<= 0x3f && arg3 s>= 3 && *(rsi_1 - 3) u>= 0xf0)
            rsi_1 -= 3
            
            if (sx.d(*(arg1 + 0x108)) != rbp)
                r14 = rsi_1

while (rbx u< rsi_1)
    char i_1 = *rbx
    
    if (i_1 s>= 0)
        if (rbp == 0)
            do
                if (*(zx.q(i_1) + arg1 + 8) != 0)
                    return rbx
                
                rbx = &rbx[1]
                
                if (rbx == rsi_1)
                    return r14
                
                i_1 = *rbx
            while (i_1 s>= 0)
        else
            do
                if (*(zx.q(i_1) + arg1 + 8) == 0)
                    return rbx
                
                rbx = &rbx[1]
                
                if (rbx == rsi_1)
                    return r14
                
                i_1 = *rbx
            while (i_1 s>= 0)
    
    rbx = &rbx[1]
    
    if (i_1 u< 0xe0)
        if (i_1 u< 0xc0)
        label_142b154a6:
            
            if (sx.d(*(arg1 + 0x108)) != rbp)
                return &rbx[-1]
        else
            char rcx_13 = *rbx - 0x80
            
            if (rcx_13 u> 0x3f)
                goto label_142b154a6
            
            int32_t rax_23
            rax_23.b = test_bit(*(arg1 + (zx.q(rcx_13) << 2) + 0x10c), zx.d(i_1) & 0x1f)
            
            if (rax_23 != rbp)
                return &rbx[-1]
            
            rbx = &rbx[1]
    else if (i_1 u>= 0xf0)
        char rax_13 = *rbx - 0x80
        
        if (rax_13 u> 0x3f)
            goto label_142b154a6
        
        char r8_6 = rbx[1] - 0x80
        
        if (r8_6 u> 0x3f)
            goto label_142b154a6
        
        char r9_2 = rbx[2] - 0x80
        
        if (r9_2 u> 0x3f)
            goto label_142b154a6
        
        int32_t rcx_11 =
            (zx.d(rax_13) << 6 | zx.d(r8_6)) << 6 | (zx.d(i_1) - 0xf0) << 0x12 | zx.d(r9_2)
        char rax_20
        
        if (rcx_11 - 0x10000 u> 0xfffff)
            rax_20 = *(arg1 + 0x108)
        else
            rax_20 = sub_142b14190(arg1, rcx_11, *(arg1 + 0x34c), *(arg1 + 0x350))
        
        if (sx.d(rax_20) != rbp)
            return &rbx[-1]
        
        rbx = &rbx[3]
    else
        char r9 = *rbx - 0x80
        
        if (r9 u> 0x3f)
            goto label_142b154a6
        
        char r10_1 = rbx[1] - 0x80
        
        if (r10_1 u> 0x3f)
            goto label_142b154a6
        
        i_1 &= 0xf
        uint32_t i_2 = zx.d(i_1)
        int32_t r8_3 = *(arg1 + (zx.q(r9) << 2) + 0x20c) u>> i_2.b & 0x10001
        bool cond:2_1
        
        if (r8_3 u> 1)
            char rax_12 = sub_142b14190(arg1, (zx.d(r9) | i_2 << 6) << 6 | zx.d(r10_1), 
                *(arg1 + (zx.q(i_1) << 2) + 0x30c), *(arg1 + (zx.q(i_2 + 1) << 2) + 0x30c))
            cond:2_1 = sx.d(rax_12) != rbp
        else
            cond:2_1 = r8_3 != rbp
        
        if (cond:2_1)
            return &rbx[-1]
        
        rbx = &rbx[2]

return r14
