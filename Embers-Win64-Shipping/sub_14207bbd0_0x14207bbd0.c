// 函数: sub_14207bbd0
// 地址: 0x14207bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
uint128_t zmm1 = zx.o(arg2)
void* r10 = *(arg1 + 0x2a0)
uint128_t zmm0 = zx.o(arg3)
void* rax = r10
void* rdx_2 = (sx.q(*(arg1 + 0x2a8)) << 5) + r10

if (r10 != rdx_2)
    do
        if (*(rax + 0x10) == arg4)
            return rax
        
        rax += 0x20
    while (rax != rdx_2)

int64_t rax_1 = sx.q(*(arg1 + 0x2a8))
int32_t rdi_1 = 0
void var_38

if (rax_1.d s> 0)
    int64_t rcx = 0
    int32_t* rax_2 = r10 + 0x1c
    
    do
        if (*rax_2 s< arg6)
            int64_t* rax_6 = sub_141ff3d80(&var_38, zmm1.q, zmm0.q, &arg_20, arg5, arg6)
            int32_t rbp = *(arg1 + 0x2a8)
            *(arg1 + 0x2a8) = rbp + 1
            
            if (rbp + 1 s> *(arg1 + 0x2ac))
                sub_1405c4e40(arg1 + 0x2a0)
            
            int64_t rbx_3 = sx.q(rdi_1) << 5
            int64_t rdx_9 = *(arg1 + 0x2a0) + rbx_3
            memmove(rdx_9 + 0x20, rdx_9, (rbp - rdi_1) << 5)
            int64_t rax_7 = *(arg1 + 0x2a0)
            *(rbx_3 + rax_7) = *rax_6
            *(rbx_3 + rax_7 + 0x10) = *(rax_6 + 0x10)
            return rax_7
        
        rdi_1 += 1
        rcx += 1
        rax_2 = &rax_2[8]
    while (rcx s< rax_1)

int64_t* rax_4 = sub_141ff3d80(&var_38, zmm1.q, zmm0.q, &arg_20, arg5, arg6)
int64_t rbx_1 = sx.q(*(arg1 + 0x2a8))
int32_t rcx_2 = (rbx_1 + 1).d
*(arg1 + 0x2a8) = rcx_2

if (rcx_2 s> *(arg1 + 0x2ac))
    sub_1405c4e40(arg1 + 0x2a0)

rax = *(arg1 + 0x2a0)
uint128_t* rcx_5 = rbx_1 << 5
*(rcx_5 + rax) = *rax_4
*(rcx_5 + rax + 0x10) = *(rax_4 + 0x10)
return rax
