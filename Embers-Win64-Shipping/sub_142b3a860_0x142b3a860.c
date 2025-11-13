// 函数: sub_142b3a860
// 地址: 0x142b3a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg2[2].b
int32_t* r10 = arg2

if ((rax & 0x10) != 0)
    *arg5 |= 0x40000080
else if (arg3 != 0)
    if ((arg3[2].b & 0x10) != 0)
        r10 = arg3
        *arg5 |= 0x40000080
    else if ((rax & 0x20) == 0)
        r10 = arg3

if (*r10 s> *arg4)
    arg1[2].b = r10[2].b
    int64_t rax_5 = sx.q(*arg4)
    
    if (rax_5.d s<= 0x31)
        rax_5 = zx.q(*(rax_5 + &data_14366c490))
    
    void* rcx_1 = arg1 + 9 + sx.q(rax_5.d)
    void* rdx_1 = r10 + 9
    void* r8_1 = rcx_1 - (arg1 + 9)
    
    if (arg1 + 9 u> rcx_1)
        r8_1 = nullptr
    
    if (r8_1 != 0)
        void* rcx_4 = rdx_1 - r10 - 9
        
        do
            char rax_7 = *rdx_1
            rdx_1 += 1
            *(rcx_4 + arg1 + 9) = rax_7
            rcx_4 += 1
        while (rcx_4 u< r8_1)
    
    int64_t rdx_2 = sx.q(*arg4)
    
    if (rdx_2.d s<= 0x31)
        rdx_2 = zx.q(*(rdx_2 + &data_14366c490))
    
    *arg1 = rdx_2.d
    int32_t rax_8 = *arg4
    
    if (rdx_2.d s> rax_8)
        sub_142b39360(arg1, rdx_2.d - rax_8)
else
    sub_142b3b5e0(arg1, r10)

arg1[2].b &= 0xef
arg1[2].b |= 0x20
arg1[1] = 0
return arg1
