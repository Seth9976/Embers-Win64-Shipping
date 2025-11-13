// 函数: sub_142b78e90
// 地址: 0x142b78e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = 0
void* const r10 = &data_14367cb70
int32_t rcx

while (true)
    if (*r10 == *arg3)
        rcx = *((rax << 3) + 0x14367cb74)
        break
    
    rax = zx.q(rax.d + 1)
    r10 += 8
    
    if (rax.d u>= 0xc)
        *arg4 = 1
        rcx = -1
        break

*(arg1 + (zx.q(arg2) << 2) + 0x1cc) = rcx
char rax_2 = arg3[1]

if (rax_2 == 0x5f)
    if (*arg4 s> 0)
        *arg4 = 1
else if (rax_2 != 0 || *arg4 s> 0)
    *arg4 = 1

return &arg3[1]
