// 函数: sub_142a69610
// 地址: 0x142a69610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t rdi = arg3

if (arg3 == arg4)
    return zx.q(arg3)

int32_t r15 = -1

if (arg4 s> rdi)
    r15 = 1

if (*arg5 s> 0)
    return zx.q(rdi)

int64_t* rax_3
int64_t r8
rax_3, r8 = (*(*arg1 + 0x10))()

if (rax_3 == 0)
    *arg5 = 7
    return zx.q(rdi)

if (rax_3[1].b != 0)
label_142a696c3:
    
    if (*(rax_3 + 9) == 0)
        (*(*rax_3 + 0xe0))(rax_3, arg5)
        
        if (*arg5 s<= 0)
            *(rax_3 + 9) = 0x101
else
    (*(*rax_3 + 0xd8))(rax_3, arg5)
    
    if (*arg5 s<= 0)
        if (rax_3[0x1d].b != 0 || *(rax_3 + 0xa) == 0)
            *(rax_3 + 9) = 0
        
        rax_3[1].b = 1
        *(rax_3 + 0xb) = 0
        
        if (*arg5 s<= 0)
            goto label_142a696c3

rax_3[0x1d].b = 1
r8.b = arg4 s<= rdi
(*(*rax_3 + 0xe8))(rax_3, zx.q(rbp.d), r8, arg5)
sub_142a6c030(rax_3, rbp.d, rdi)
int32_t r12_1 = rdi

if ((sub_142a695b0(rax_3, rbp.d, arg5) == rdi || rbp.d == 4 || arg4 s<= rdi) && *arg5 s<= 0)
    do
        rdi += r15
        (*(*rax_3 + 0x28))(rax_3, zx.q(rbp.d), zx.q(r15), arg5)
        int32_t rcx_6 = *arg5
        int32_t rdx_7
        
        if (rcx_6 s> 0)
            rdx_7 = 0
        else
            sub_142a67c60(rax_3, arg5)
            rcx_6 = *arg5
            
            if (rcx_6 s> 0)
                rdx_7 = 0
            else
                rdx_7 = *(rax_3 + (rbp << 2) + 0xc)
        
        if (rdx_7 != rdi)
            break
        
        if (rcx_6 s> 0)
            break
        
        r12_1 = rdi
    while (rdi != arg4)

int64_t r8_4 = *rax_3
(*r8_4)(rax_3, 1, r8_4)
return zx.q(r12_1)
