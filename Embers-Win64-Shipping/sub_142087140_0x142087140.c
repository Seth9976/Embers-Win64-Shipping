// 函数: sub_142087140
// 地址: 0x142087140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xa0))
    return 0xffffffff

int64_t rax = *(arg1 + 0x98)

if (arg4 == 0)
    arg4 = arg1

int32_t rdi = 0
int64_t rdx_1 = sx.q(arg2) << 5
int128_t zmm6 = *(rdx_1 + rax + 0x10)
int64_t rax_1 = sx.q(*(arg4 + 0xa0))
int128_t var_38 = *(rdx_1 + rax)
var_38.d = arg3

if (rax_1.d s> 0)
    int64_t rcx = 0
    int32_t* rax_2 = *(arg4 + 0x98)
    
    while (not(arg3 f<= *rax_2))
        rdi += 1
        rcx += 1
        rax_2 = &rax_2[8]
        
        if (rcx s>= rax_1)
            break

int32_t rbp = *(arg4 + 0xa0)
*(arg4 + 0xa0) = rbp + 1

if (rbp + 1 s> *(arg4 + 0xa4))
    sub_1405c4e40(arg4 + 0x98)

int64_t rbx_1 = sx.q(rdi) << 5
int64_t rdx_5 = *(arg4 + 0x98) + rbx_1
memmove(rdx_5 + 0x20, rdx_5, (rbp - rdi) << 5)
__builtin_memset(rbx_1 + *(arg4 + 0x98), 0, 0x20)
int128_t* rcx_4 = *(arg4 + 0x98)
rcx_4[sx.q(rdi) * 2] = var_38
rcx_4[sx.q(rdi) * 2 + 1] = zmm6
return zx.q(rdi)
