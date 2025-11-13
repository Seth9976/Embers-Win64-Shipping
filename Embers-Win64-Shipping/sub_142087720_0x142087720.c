// 函数: sub_142087720
// 地址: 0x142087720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg4

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

if (arg4 == 0)
    r14 = arg1

int128_t* rax = *(arg1 + 0x70)
int64_t rsi = sx.q(arg2)
int64_t rdi = rsi * 0x2c
int128_t zmm7 = *(rax + rdi)
int32_t rbx = *(rax + rdi + 0x28)
int128_t zmm8 = *(rax + rdi + 0x10)
*(rax + rdi + 0x20)
int32_t rax_1
int64_t zmm6_1
rax_1, zmm6_1 = sub_141fda9f0(r14 + 0x70, arg3, &data_143dbb1f8)
int64_t rcx_1 = *(r14 + 0x70)
int64_t r13 = sx.q(rax_1)
int128_t* rdx = r13 * 0x2c
*(rdx + rcx_1) = zmm7
*(rdx + rcx_1 + 0x10) = zmm8
*(rdx + rcx_1 + 0x20) = zmm6_1
*(rdx + rcx_1 + 0x28) = rbx
*(rdx + *(r14 + 0x70)) = arg3.d
int128_t* rax_2 = *(arg1 + 0x88)
zmm7 = *(rax_2 + rdi)
int32_t rbx_1 = *(rax_2 + rdi + 0x28)
zmm8 = *(rax_2 + rdi + 0x10)
*(rax_2 + rdi + 0x20)
int32_t rax_3
int64_t zmm6_2
rax_3, zmm6_2 = sub_141fda9f0(r14 + 0x88, arg3, &data_143dbb1f8)
int32_t rdi_1 = 0
int64_t rax_4 = *(r14 + 0x88)
int128_t* rdx_1 = sx.q(rax_3) * 0x2c
*(rdx_1 + rax_4) = zmm7
*(rdx_1 + rax_4 + 0x10) = zmm8
*(rdx_1 + rax_4 + 0x20) = zmm6_2
*(rdx_1 + rax_4 + 0x28) = rbx_1
*(rdx_1 + *(r14 + 0x88)) = arg3.d
int64_t rbx_3 = *(*(arg1 + 0xa0) + rsi * 0xc)
int64_t rax_7 = sx.q(*(r14 + 0xa8))

if (rax_7.d s> 0)
    int64_t rcx_5 = 0
    int32_t* rax_9 = *(r14 + 0xa0) + 8
    
    while (not(arg3.d f<= *rax_9))
        rdi_1 += 1
        rcx_5 += 1
        rax_9 = &rax_9[3]
        
        if (rcx_5 s>= rax_7)
            break

sub_142075310(r14 + 0xa0, rdi_1, 1)
int64_t rdx_4 = sx.q(rdi_1) * 3
*(*(r14 + 0xa0) + (rdx_4 << 2) + 8) = arg3.d
*(*(r14 + 0xa0) + (rdx_4 << 2)) = rbx_3
sub_141f55fe0(r14 + 0x70, *(arg1 + 0xb8), 1)
sub_141f55fe0(r14 + 0x88, *(arg1 + 0xbc), 1)
return zx.q(r13.d)
