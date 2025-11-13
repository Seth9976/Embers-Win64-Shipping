// 函数: sub_142af6740
// 地址: 0x142af6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(arg5)
int16_t* r14 = arg1
int64_t i_5 = sx.q(arg2)
int16_t* rsi = arg3
int64_t i_2 = i_5
int32_t rcx_1 = r10 & 0xb
int32_t r13_2

if (rcx_1 == 0)
    if (arg4 s< i_5.d)
        *arg6 = 0xf
        return zx.q(i_5.d)
    
    r13_2 = i_5.d
    void* r9_1 = &r14[-1 + i_5]
    
    do
        uint32_t rax_41 = zx.d(r14[i_2 - 1])
        i_2 -= 1
        int64_t r8_2 = sx.q(i_5.d)
        i_5 = zx.q(i_5.d - 1)
        r9_1 -= 2
        
        if ((rax_41 & 0xfffffc00) == 0xdc00 && i_5.d s> 0 && (zx.d(*r9_1) & 0xfffffc00) == 0xd800)
            i_5 = zx.q(i_5.d - 1)
            i_2 -= 1
            r9_1 -= 2
        
        int64_t i_4 = i_2
        
        do
            int16_t rcx_13 = r14[i_4]
            i_4 += 1
            *rsi = rcx_13
            rsi = &rsi[1]
        while (i_4 s< r8_2)
    while (i_5.d s> 0)
else if (rcx_1 == 1)
    if (arg4 s< i_5.d)
        *arg6 = 0xf
        return zx.q(i_5.d)
    
    r13_2 = i_5.d
    
    do
        int64_t r15_3 = sx.q(i_5.d)
        void* rbp_3 = &r14[-1 + i_2]
        int32_t i
        
        do
            uint32_t rcx_11 = zx.d(r14[i_2 - 1])
            i_2 -= 1
            i_5 = zx.q(i_5.d - 1)
            rbp_3 -= 2
            
            if ((rcx_11 & 0xfffffc00) == 0xdc00)
                if (i_2 s<= 0)
                    break
                
                uint32_t rdx_1 = zx.d(*rbp_3)
                
                if ((rdx_1 & 0xfffffc00) == 0xd800)
                    i_5 = zx.q(i_5.d - 1)
                    i_2 -= 1
                    rbp_3 -= 2
                    rcx_11 += (rdx_1 - 0xd7f7) << 0xa
            
            if (i_2 s<= 0)
                break
            
            i = sx.d(sub_142a53dd0(rcx_11)) - 6
        while (i u<= 2)
        int64_t i_3 = i_2
        
        do
            int16_t rax_39 = r14[i_3]
            i_3 += 1
            *rsi = rax_39
            rsi = &rsi[1]
        while (i_3 s< r15_3)
    while (i_5.d s> 0)
else
    int16_t rax_1 = r10.w & 8
    int32_t var_34_1
    int32_t r8
    
    if (rax_1 != 0)
        int32_t i_1 = i_5.d
        r8 = 0
        
        do
            uint32_t rax_2 = zx.d(*r14)
            r14 = &r14[1]
            
            if ((rax_2 & 0xfffffffc) != 0x200c && rax_2 - 0x202a u>= 5 && rax_2 - 0x2066 u>= 4)
                r8 += 1
            
            i_1 -= 1
        while (i_1 s> 0)
        
        var_34_1 = r8
        r14 = &r14[neg.q(i_2)]
    else
        r8 = i_5.d
        var_34_1 = i_5.d
    
    if (arg4 s< r8)
        *arg6 = 0xf
        return zx.q(r8)
    
    int16_t r8_1 = r10.w & 1
    int16_t var_36_1 = r8_1
    
    do
        uint32_t rbp_1 = zx.d(r14[i_2 - 1])
        i_2 -= 1
        int64_t r13_1 = sx.q(i_5.d)
        i_5 = zx.q(i_5.d - 1)
        
        if ((rbp_1 & 0xfffffc00) == 0xdc00 && i_5.d s> 0)
            uint32_t rdx = zx.d(r14[i_2 - 1])
            
            if ((rdx & 0xfffffc00) == 0xd800)
                i_5 = zx.q(i_5.d - 1)
                i_2 -= 1
                rbp_1 += (rdx - 0xd7f7) << 0xa
        
        if (r8_1 != 0 && i_2 s> 0)
            int16_t* r15_2 = &r14[i_2 - 1]
            
            do
                if (sx.d(sub_142a53dd0(rbp_1)) - 6 u> 2)
                    break
                
                rbp_1 = zx.d(r14[i_2 - 1])
                i_2 -= 1
                i_5 = zx.q(i_5.d - 1)
                r15_2 -= 2
                
                if ((rbp_1 & 0xfffffc00) == 0xdc00)
                    if (i_2 s<= 0)
                        break
                    
                    uint32_t rcx_6 = zx.d(*r15_2)
                    
                    if ((rcx_6 & 0xfffffc00) == 0xd800)
                        i_5 = zx.q(i_5.d - 1)
                        i_2 -= 1
                        r15_2 -= 2
                        rbp_1 += (rcx_6 - 0xd7f7) << 0xa
            while (i_2 s> 0)
            
            r10 = zx.d(arg5)
        
        if (rax_1 == 0)
        label_142af6913:
            int32_t rax_30 = i_5.d
            
            if ((r10.b & 2) != 0)
                int32_t rax_27 = j_sub_142af5eb0(rbp_1)
                int16_t rcx_8 = rax_27.w
                int32_t rcx_9
                
                if (rax_27 u> 0xffff)
                    *rsi = (rax_27 s>> 0xa).w - 0x2840
                    rsi[1] = (rcx_8 & 0x3ff) | 0xdc00
                    rcx_9 = 2
                else
                    *rsi = rcx_8
                    rcx_9 = 1
                
                r10 = zx.d(arg5)
                rsi = &rsi[zx.q(rcx_9)]
                rax_30 = rcx_9 + i_5.d
            
            int64_t rcx_10 = sx.q(rax_30)
            
            while (rcx_10 s< r13_1)
                int16_t rax_31 = r14[rcx_10]
                rcx_10 += 1
                *rsi = rax_31
                rsi = &rsi[1]
        else if ((rbp_1 & 0xfffffffc) != 0x200c && rbp_1 - 0x202a u>= 5 && rbp_1 - 0x2066 u>= 4)
            goto label_142af6913
        
        r8_1 = var_36_1
    while (i_5.d s> 0)
    
    r13_2 = var_34_1

return zx.q(r13_2)
