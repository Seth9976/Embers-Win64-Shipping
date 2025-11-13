// 函数: sub_142622f90
// 地址: 0x142622f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x48)
int64_t rbx = sx.q(*(arg1 + 0x50))
int64_t rdx = 0
int32_t r10 = 0
int64_t r8 = *rax

if (rbx.d s> 0)
    int64_t rcx = 0
    
    while (r8 != arg2)
        rdx = r8
        r10 += 1
        r8 = *rax
        rcx += 1
        rax = &rax[1]
        
        if (rcx s>= rbx)
            break

if (r10 == rbx.d)
    rax.b = 0
    return rax

*arg3 = rdx
arg3[1] = r8
int64_t var_10 = arg6
sub_14260fe90(*arg7, rdx, r8, arg4, arg5)
int64_t rax_4
rax_4.b = 1
return rax_4
