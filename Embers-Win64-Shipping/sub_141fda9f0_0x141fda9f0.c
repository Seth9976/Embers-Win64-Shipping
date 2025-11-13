// 函数: sub_141fda9f0
// 地址: 0x141fda9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int32_t rdi = 0

if (rbp.d s> 0)
    int32_t* rax_1 = *arg1
    int64_t rdx_1 = 0
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[0xb]
        
        if (rdx_1 s>= rbp)
            break

int32_t rax_2 = (rbp + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_140ac0cd0(arg1)

uint128_t* rbx = sx.q(rdi) * 0x2c
void* rdx_4 = *arg1 + rbx
memmove(rdx_4 + 0x2c, rdx_4, (rbp.d - rdi) * 0x2c)
int64_t rdx_5 = *arg1
uint64_t var_44 = *arg3
int32_t var_3c = arg3[1].d
int64_t var_30 = 0
uint128_t zmm0
zmm0.d = arg2.d
*(rbx + rdx_5) = zmm0
*(rbx + rdx_5 + 0x10) = 0.o
*(rbx + rdx_5 + 0x20) = 0
*(rbx + rdx_5 + 0x28) = 0.d
return zx.q(rdi)
