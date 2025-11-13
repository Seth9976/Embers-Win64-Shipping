// 函数: sub_142a44ce0
// 地址: 0x142a44ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1

if (arg2 == 0)
    return 

char rax

if (arg1 u< &data_14400f130 || arg1 u>= &data_14400f370)
    rax = 0
else
    rax = 1

if (rax != 0)
    arg1[3]
    arg1[3] += arg2
    int64_t rcx = arg1[3]
    
    if (rcx s> r8[2])
        r8[2] = rcx
    
    int64_t rax_4
    int64_t rdx
    rdx:rax_4 = sx.o(arg2)
    
    if (arg2 s<= 0)
        r8 = &r8[1]
    
    *r8
    *r8 += (rax_4 ^ rdx) - rdx
    return 

int64_t rcx_3 = arg1[3] + arg2
r8[3] = rcx_3

if (rcx_3 s> r8[2])
    r8[2] = rcx_3

if (arg2 s> 0)
    *r8 += arg2
    return 

r8[1] -= arg2
