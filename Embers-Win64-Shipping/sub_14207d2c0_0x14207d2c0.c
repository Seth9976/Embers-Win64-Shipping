// 函数: sub_14207d2c0
// 地址: 0x14207d2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int32_t rdi = 0

if (rbp.d s> 0)
    int32_t* rax_1 = *arg1
    int64_t rdx_1 = 0
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[0xe]
        
        if (rdx_1 s>= rbp)
            break

int32_t rax_2 = (rbp + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1407c3b60(arg1)

int128_t* rbx = sx.q(rdi) * 0x38
void* rdx_4 = *arg1 + rbx
memmove(rdx_4 + 0x38, rdx_4, (rbp.d - rdi) * 0x38)
int64_t rcx_1 = *arg1
uint128_t var_54 = *arg3
int64_t var_44
__builtin_memset(&var_44, 0, 0x21)
uint128_t zmm0
zmm0.d = arg2.d
*(rbx + rcx_1) = zmm0
*(rbx + rcx_1 + 0x10) = var_54
int64_t var_3c
*(rbx + rcx_1 + 0x20) = var_3c:4.o
int64_t var_2c
*(rbx + rcx_1 + 0x30) = var_2c
return zx.q(rdi)
