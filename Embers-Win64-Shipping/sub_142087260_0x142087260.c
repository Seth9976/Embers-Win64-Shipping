// 函数: sub_142087260
// 地址: 0x142087260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

if (arg4 == 0)
    arg4 = arg1

int32_t rdi = 0
int64_t rax_2 = sx.q(*(arg4 + 0x78))
int64_t var_18 = *(*(arg1 + 0x70) + (sx.q(arg2) << 3))
var_18.d = arg3

if (rax_2.d s> 0)
    int64_t rcx_2 = 0
    int32_t* rax_3 = *(arg4 + 0x70)
    
    while (not(arg3 f<= *rax_3))
        rdi += 1
        rcx_2 += 1
        rax_3 = &rax_3[2]
        
        if (rcx_2 s>= rax_2)
            break

int32_t rbp = *(arg4 + 0x78)
*(arg4 + 0x78) = rbp + 1

if (rbp + 1 s> *(arg4 + 0x7c))
    sub_1405a4d70(arg4 + 0x70)

int64_t rbx = sx.q(rdi)
int64_t rdx_2 = *(arg4 + 0x70) + (rbx << 3)
memmove(rdx_2 + 8, rdx_2, (rbp - rdi) << 3)
*(*(arg4 + 0x70) + (rbx << 3)) = 0
*(*(arg4 + 0x70) + (rbx << 3)) = var_18
return zx.q(rdi)
