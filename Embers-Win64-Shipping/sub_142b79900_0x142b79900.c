// 函数: sub_142b79900
// 地址: 0x142b79900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

arg1[2] = arg2
arg1[9].d = 0

while (true)
    int32_t* rax = arg1[2]
    int16_t rcx = rax[2].w
    int32_t rcx_2
    
    if (rcx s< 0)
        rcx_2 = rax[3]
    else
        rcx_2 = sx.d(rcx) s>> 5
    
    int64_t r8 = sx.q(arg1[9].d)
    
    if (r8.d s>= rcx_2)
        break
    
    int16_t rdx = rax[2].w
    int32_t rcx_4
    
    if (rdx s< 0)
        rcx_4 = rax[3]
    else
        rcx_4 = sx.d(rdx) s>> 5
    
    int16_t rdx_1
    
    if (r8.d u>= rcx_4)
        rdx_1 = -1
    else
        void* rcx_5 = rax + 0xa
        
        if ((rdx.b & 2) == 0)
            rcx_5 = *(rax + 0x18)
        
        rdx_1 = *(rcx_5 + (r8 << 1))
    
    uint32_t rdi_1 = zx.d(rdx_1)
    
    if (sub_142b13730(rdi_1).b == 0)
        if (rdi_1 == 0x21)
            arg1[9].d += 1
        else if (rdi_1 == 0x23)
            arg1[9].d = sub_142b7c930(arg1, arg1[9].d + 1).d
        else if (rdi_1 == 0x26)
            sub_142b7a4b0(arg1, arg3)
        else if (rdi_1 == 0x40)
            sub_142b27350(arg1[4], 0x800, 0x11, 0, arg3)
            arg1[9].d += 1
        else if (rdi_1 == 0x5b)
            sub_142b7a620(arg1, arg3)
        else
            if (*arg3 s> 0)
                break
            
            *arg3 = 3
            bool cond:1_1 = arg1[5] == 0
            arg1[6] = "expected a reset or setting or comment"
            
            if (not(cond:1_1))
                sub_142b7c7c0(arg1)
        
        if (*arg3 s> 0)
            break
    else
        arg1[9].d += 1
