// 函数: sub_142af6420
// 地址: 0x142af6420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int16_t* rsi = arg3
int16_t* rdi = arg1
int32_t rax_1 = zx.d(arg5) & 0xa

if (rax_1 == 0)
    int32_t i = rbx.d
    
    if (arg4 s< rbx.d)
        *arg6 = 0xf
        return zx.q(rbx.d)
    
    int16_t* rdi_1 = rdi - rsi
    
    do
        i -= 1
        *rsi = *(rdi_1 + rsi)
        rsi = &rsi[1]
    while (i s> 0)
    
    return zx.q(rbx.d)

if (rax_1 == 2)
    int32_t r15_2 = 0
    
    if (arg4 s< rbx.d)
        *arg6 = 0xf
        return zx.q(rbx.d)
    
    int64_t r14_2 = 0
    int64_t rbp_2 = 0
    
    do
        uint32_t rcx_8 = zx.d(rdi[rbp_2])
        rbp_2 += 1
        
        if ((rcx_8 & 0xfffffc00) == 0xd800 && rbp_2 != rbx)
            uint32_t rdx_3 = zx.d(rdi[rbp_2])
            
            if ((rdx_3 & 0xfffffc00) == 0xdc00)
                rbp_2 += 1
                rcx_8 = ((rcx_8 - 0xd7f7) << 0xa) + rdx_3
        
        int32_t rax_33 = j_sub_142af5eb0(rcx_8)
        int16_t rcx_9 = rax_33.w
        int32_t rax_34
        
        if (rax_33 u> 0xffff)
            rsi[r14_2] = (rax_33 s>> 0xa).w - 0x2840
            r14_2 += 1
            rcx_9 = (rcx_9 & 0x3ff) | 0xdc00
            rax_34 = 2
        else
            rax_34 = 1
        
        rsi[r14_2] = rcx_9
        r15_2 += rax_34
        r14_2 += 1
    while (rbp_2 s< rbx)
    
    return zx.q(arg2)

int32_t r14_1

if (rax_1 == 8)
    int32_t rcx_5 = arg4
    
    while (true)
        uint32_t r8_1 = zx.d(*rdi)
        rdi = &rdi[1]
        
        if ((r8_1 & 0xfffffffc) != 0x200c && r8_1 - 0x202a u>= 5 && r8_1 - 0x2066 u>= 4)
            int32_t temp0_1 = rcx_5
            rcx_5 -= 1
            
            if (temp0_1 - 1 s< 0)
                int32_t i_1 = rbx.d - 1
                *arg6 = 0xf
                
                for (; i_1 s> 0; i_1 -= 1)
                    uint32_t rax_24 = zx.d(*rdi)
                    rdi = &rdi[1]
                    
                    if ((rax_24 & 0xfffffffc) != 0x200c && rax_24 - 0x202a u>= 5
                            && rax_24 - 0x2066 u>= 4)
                        rcx_5 -= 1
                
                r14_1 = arg4 - rcx_5
                break
            
            *rsi = r8_1.w
            rsi = &rsi[1]
        
        rbx = zx.q(rbx.d - 1)
        
        if (rbx.d s<= 0)
            r14_1 = arg4 - rcx_5
            break
else
    int32_t rbp_1 = arg4
    int32_t r15_1 = 0
    
    while (true)
        uint32_t rcx_2 = zx.d(*rdi)
        int32_t rdx = 1
        
        if ((rcx_2 & 0xfffffc00) == 0xd800 && rbx.d != 1)
            uint32_t r8 = zx.d(rdi[1])
            
            if ((r8 & 0xfffffc00) == 0xdc00)
                rdx = 2
                rcx_2 = ((rcx_2 - 0xd7f7) << 0xa) + r8
        
        rbx = zx.q(rbx.d - rdx)
        rdi = &rdi[zx.q(rdx)]
        
        if ((rcx_2 & 0xfffffffc) != 0x200c && rcx_2 - 0x202a u>= 5 && rcx_2 - 0x2066 u>= 4)
            int32_t temp1_1 = rbp_1
            rbp_1 -= rdx
            
            if (temp1_1 - rdx s< 0)
                break
            
            int32_t rax_11 = j_sub_142af5eb0(rcx_2)
            int16_t rcx_3 = rax_11.w
            
            if (rax_11 u> 0xffff)
                r15_1 += 2
                *rsi = (rax_11 s>> 0xa).w - 0x2840
                rsi[1] = (rcx_3 & 0x3ff) | 0xdc00
                rsi = &rsi[2]
            else
                r15_1 += 1
                *rsi = rcx_3
                rsi = &rsi[1]
        
        if (rbx.d s<= 0)
            return zx.q(r15_1)
    
    *arg6 = 0xf
    
    while (rbx.d s> 0)
        uint32_t rcx_4 = zx.d(*rdi)
        rdi = &rdi[1]
        
        if ((rcx_4 & 0xfffffffc) != 0x200c && rcx_4 - 0x202a u>= 5 && rcx_4 - 0x2066 u>= 4)
            rbp_1 -= 1
        
        rbx = zx.q(rbx.d - 1)
    
    r14_1 = arg4 - rbp_1

return zx.q(r14_1)
