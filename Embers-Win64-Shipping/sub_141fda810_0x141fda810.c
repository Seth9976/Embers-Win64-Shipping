// 函数: sub_141fda810
// 地址: 0x141fda810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[1].d)
int32_t rbx = 0

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *arg1
    
    while (not(arg2.d f<= *rax_1))
        rbx += 1
        rdx_1 += 1
        rax_1 = &rax_1[0x14]
        
        if (rdx_1 s>= rax)
            break

sub_141fd3fb0(arg1, rbx, 1)
int64_t rcx = *arg1
int128_t var_64 = *arg3
uint64_t var_54 = arg3[1].q
int128_t var_4c = zx.o(0)
__builtin_memset(&var_4c, 0, 0x31)
int128_t zmm0
zmm0.d = arg2.d
arg2 = var_4c
int64_t rdx_4 = sx.q(rbx) * 0xa
*(rcx + (rdx_4 << 3)) = zmm0
*(rcx + (rdx_4 << 3) + 0x10) = var_64
*(rcx + (rdx_4 << 3) + 0x20) = arg2
*(rcx + (rdx_4 << 3) + 0x30) = zx.o(0)
*(rcx + (rdx_4 << 3) + 0x40) = zx.o(0)
return zx.q(rbx)
