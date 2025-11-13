// 函数: sub_142b94c20
// 地址: 0x142b94c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int16_t rax_1 = *(arg1 + 2)

if (rax_1 == 0)
    *arg2 = 0
    arg2[2] = 0
    arg2[1] = 0
    arg2[3] = 0
    return 

int32_t* rdx = *(arg1 + 8)
int32_t r8_2 = *rdx
int32_t r9_2 = rdx[1]
void* i = &rdx[2]
int32_t rax = r8_2
int32_t r10_2 = r9_2

for (; i u< &rdx[sx.q(rax_1) * 2]; i += 8)
    int32_t rcx = *i
    
    if (rcx s< rax)
        rax = rcx
    
    if (rcx s> r8_2)
        r8_2 = rcx
    
    int32_t rcx_1 = *(i + 4)
    
    if (rcx_1 s< r10_2)
        r10_2 = rcx_1
    
    if (rcx_1 s> r9_2)
        r9_2 = rcx_1

*arg2 = rax
arg2[2] = r8_2
arg2[1] = r10_2
arg2[3] = r9_2
