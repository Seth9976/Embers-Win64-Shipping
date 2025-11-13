// 函数: sub_141e102c0
// 地址: 0x141e102c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t* rdx = *arg1
int64_t r14_1 = rdi * 2
int64_t* rax = rdx
void* r8 = &rdx[r14_1]
int32_t result

if (rdx != r8)
    while (*rax != *arg2)
        rax = &rax[2]
        
        if (rax == r8)
            goto label_141e10313
    
    result = ((rax - rdx) s>> 4).d

if (rdx == r8 || result == 0xffffffff)
label_141e10313:
    int32_t rcx_1 = (rdi + 1).d
    arg1[1].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    result = rdi.d
    int64_t rdx_2 = *arg1
    *(rdx_2 + (r14_1 << 3)) = *arg2
    *(rdx_2 + (r14_1 << 3) + 8) = arg2[1]

return result
