// 函数: sub_1420a3370
// 地址: 0x1420a3370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return zx.q(arg2)

int64_t r10 = *(arg1 + 0x70)
int64_t* rcx = r10 + (sx.q(arg2) << 3)

if (arg4 == 0)
    *rcx = arg3.d
    return zx.q(arg2)

int32_t r8 = *(arg1 + 0x78)
int64_t var_28 = *rcx
int32_t rax_3 = r8 - arg2

if (rax_3 != 1)
    memmove(rcx, r10 + (sx.q(arg2 + 1) << 3), (rax_3 - 1) << 3)
    r8 = *(arg1 + 0x78)

*(arg1 + 0x78) = r8 - 1
sub_1405c53d0(arg1 + 0x70)
int64_t rax_7 = sx.q(*(arg1 + 0x78))
int32_t rdi = 0
var_28.d = arg3.d

if (rax_7.d s> 0)
    int64_t rcx_2 = 0
    int32_t* rax_8 = *(arg1 + 0x70)
    
    while (not(arg3.d f<= *rax_8))
        rdi += 1
        rcx_2 += 1
        rax_8 = &rax_8[2]
        
        if (rcx_2 s>= rax_7)
            break

int32_t rbp = *(arg1 + 0x78)
*(arg1 + 0x78) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x7c))
    sub_1405a4d70(arg1 + 0x70)

int64_t rbx_1 = sx.q(rdi)
int64_t rdx_4 = *(arg1 + 0x70) + (rbx_1 << 3)
memmove(rdx_4 + 8, rdx_4, (rbp - rdi) << 3)
*(*(arg1 + 0x70) + (rbx_1 << 3)) = 0
*(*(arg1 + 0x70) + (rbx_1 << 3)) = var_28
return zx.q(rdi)
