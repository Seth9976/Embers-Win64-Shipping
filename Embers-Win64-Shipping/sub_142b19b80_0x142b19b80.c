// 函数: sub_142b19b80
// 地址: 0x142b19b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int16_t* i = arg2

if (arg3 == 0)
    int64_t rax
    rax.b = 1
    return rax

if (arg1[5].d s< rdi.d)
    char rax_1 = sub_142b1fbc0(arg1, rdi.d, arg7)
    
    if (rax_1 == 0)
        return rax_1

arg1[5].d -= rdi.d
int16_t rax_6

if (*(arg1 + 0x2c) u<= arg5 || arg5 == 0)
    if (arg6 u<= 1)
        arg1[3] = arg1[4] + (rdi << 1)
    else if (arg5 u<= 1)
        arg1[3] = arg1[4] + 2
    
    do
        rax_6 = *i
        i = &i[1]
        *arg1[4] = rax_6
        arg1[4] += 2
    while (i != &i[rdi])
    
    *(arg1 + 0x2c) = arg6
else
    uint32_t rdx_1 = zx.d(*i)
    int64_t rbp_1 = 1
    
    if ((rdx_1 & 0xfffffc00) == 0xd800 && rdi.d != 1)
        uint32_t r8_1 = zx.d(i[1])
        
        if ((r8_1 & 0xfffffc00) == 0xdc00)
            rbp_1 = 2
            rdx_1 = ((rdx_1 - 0xd7f7) << 0xa) + r8_1
    
    sub_142b1eab0(arg1, rdx_1, arg5)
    
    while (rbp_1 s< rdi)
        uint32_t rdi_3 = zx.d(i[rbp_1])
        rbp_1 += 1
        uint64_t rax_11
        
        if ((rdi_3 & 0xfffffc00) != 0xd800)
        label_142b19c9e:
            
            if (rbp_1 s>= rdi)
                rax_11 = zx.q(arg6)
            else
                void* rcx_3 = *arg1
                
                if (arg4 == 0)
                    rax_11 = sub_142af42a0(rcx_3, rdi_3)
                    void* rdx_5 = *arg1
                    
                    if (rax_11.w u>= 0xfc00)
                        rax_11.w u>>= 1
                    else if (rax_11.w u< *(rdx_5 + 0x12) || *(rdx_5 + 0x1a) u<= rax_11.w)
                        rax_11.b = 0
                    else
                        uint64_t rcx_4 = zx.q(rax_11.w)
                        rax_11 = *(rdx_5 + 0x30)
                        uint64_t rcx_5 = rcx_4 u>> 1
                        
                        if ((*(rax_11 + (rcx_5 << 1)) & 0x80) == 0)
                            rax_11.b = 0
                        else
                            rax_11 = zx.q(*(rax_11 + (rcx_5 << 1) - 2))
                else
                    rax_11 = sub_142b1e310(rcx_3, rdi_3)
                    
                    if (rax_11.w u< 0xfc00)
                        rax_11.b = 0
                    else
                        rax_11.w u>>= 1
        else
            if (rbp_1 != rdi)
                uint32_t rcx_2 = zx.d(i[rbp_1])
                
                if ((rcx_2 & 0xfffffc00) == 0xdc00)
                    rbp_1 += 1
                    rdi_3 = ((rdi_3 - 0xd7f7) << 0xa) + rcx_2
                
                goto label_142b19c9e
            
            rax_11 = zx.q(arg6)
        
        char r8_3 = rax_11.b
        
        if (rdi_3 s> 0xffff)
            sub_142b19f70(arg1, rdi_3, r8_3, arg7)
        else
            sub_142b19db0(arg1, rdi_3.w, r8_3, arg7)

rax_6.b = 1
return rax_6
