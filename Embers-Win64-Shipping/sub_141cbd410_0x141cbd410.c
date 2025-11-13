// 函数: sub_141cbd410
// 地址: 0x141cbd410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int64_t rsi = sx.q(arg1[1].d)
int64_t* rax = r9
int64_t r14_1 = rsi * 2
void* rdx = &r9[r14_1]
int32_t result

if (r9 != rdx)
    while (*rax != *arg2 || rax[1] != arg2[1])
        rax = &rax[2]
        
        if (rax == rdx)
            goto label_141cbd46d
    
    result = ((rax - r9) s>> 4).d

if (r9 == rdx || result == 0xffffffff)
label_141cbd46d:
    int32_t rcx_1 = (rsi + 1).d
    arg1[1].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    result = rsi.d
    *(*arg1 + (r14_1 << 3)) = *arg2

return result
