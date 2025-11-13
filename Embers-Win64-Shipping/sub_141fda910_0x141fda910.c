// 函数: sub_141fda910
// 地址: 0x141fda910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int32_t rdi = 0

if (rbp.d s> 0)
    int32_t* rax_1 = *arg1
    int64_t rdx_1 = 0
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[8]
        
        if (rdx_1 s>= rbp)
            break

int32_t rax_2 = (rbp + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t rbx_1 = sx.q(rdi) << 5
int64_t rdx_4 = *arg1 + rbx_1
memmove(rdx_4 + 0x20, rdx_4, (rbp.d - rdi) << 5)
int64_t rcx_1 = *arg1
uint64_t var_34 = *arg3
int64_t var_2c
__builtin_memset(&var_2c, 0, 0x11)
uint128_t zmm0
zmm0.d = arg2.d
*(rbx_1 + rcx_1) = zmm0
*(rbx_1 + rcx_1 + 0x10) = var_2c:4.o
return zx.q(rdi)
