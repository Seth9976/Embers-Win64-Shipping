// 函数: sub_14207cc60
// 地址: 0x14207cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rdi = 0

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_1 = *(arg1 + 0x70)
    
    while (not(arg2.d f<= *rax_1))
        rdi += 1
        rdx_1 += 1
        rax_1 = &rax_1[2]
        
        if (rdx_1 s>= rax)
            break

int32_t rbp = *(arg1 + 0x78)
*(arg1 + 0x78) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x7c))
    sub_1405a4d70(arg1 + 0x70)

int64_t rbx = sx.q(rdi)
int64_t rdx_3 = *(arg1 + 0x70) + (rbx << 3)
memmove(rdx_3 + 8, rdx_3, (rbp - rdi) << 3)
*(*(arg1 + 0x70) + (rbx << 3)) = arg2.d
*(*(arg1 + 0x70) + (rbx << 3) + 4) = *(arg3 + 0x28)
return zx.q(rdi)
