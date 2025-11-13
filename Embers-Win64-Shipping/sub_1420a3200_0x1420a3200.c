// 函数: sub_1420a3200
// 地址: 0x1420a3200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xa0))
    return zx.q(arg2)

int64_t r10 = *(arg1 + 0x98)
int128_t* rcx_2 = (sx.q(arg2) << 5) + r10

if (arg4 == 0)
    *rcx_2 = arg3.d
    return zx.q(arg2)

int32_t r8 = *(arg1 + 0xa0)
int128_t zmm7 = rcx_2[1]
int128_t var_48 = *rcx_2
int32_t rax_1 = r8 - arg2

if (rax_1 != 1)
    memmove(rcx_2, (sx.q(arg2 + 1) << 5) + r10, (rax_1 - 1) << 5)
    r8 = *(arg1 + 0xa0)

*(arg1 + 0xa0) = r8 - 1
sub_1405dad20(arg1 + 0x98)
int64_t rax_5 = sx.q(*(arg1 + 0xa0))
int32_t rdi = 0
var_48.d = arg3.d

if (rax_5.d s> 0)
    int64_t rcx_4 = 0
    int32_t* rax_6 = *(arg1 + 0x98)
    
    while (not(arg3.d f<= *rax_6))
        rdi += 1
        rcx_4 += 1
        rax_6 = &rax_6[8]
        
        if (rcx_4 s>= rax_5)
            break

int32_t rbp = *(arg1 + 0xa0)
*(arg1 + 0xa0) = rbp + 1

if (rbp + 1 s> *(arg1 + 0xa4))
    sub_1405c4e40(arg1 + 0x98)

int64_t rbx_2 = sx.q(rdi) << 5
int64_t rdx_6 = *(arg1 + 0x98) + rbx_2
memmove(rdx_6 + 0x20, rdx_6, (rbp - rdi) << 5)
__builtin_memset(rbx_2 + *(arg1 + 0x98), 0, 0x20)
int128_t* rcx_8 = *(arg1 + 0x98)
rcx_8[sx.q(rdi) * 2] = var_48
rcx_8[sx.q(rdi) * 2 + 1] = zmm7
return zx.q(rdi)
