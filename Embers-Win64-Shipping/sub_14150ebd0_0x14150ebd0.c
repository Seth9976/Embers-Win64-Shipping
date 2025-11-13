// 函数: sub_14150ebd0
// 地址: 0x14150ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u>= *(arg1 + 8))
    return 

uint64_t r9_2 = zx.q(*(arg1 + 4)) & zx.q(arg2)
int64_t rax_2 = *(arg1 + 0x10)
uint64_t rax = zx.q(*(rax_2 + (r9_2 << 2)))

if (rax.d == arg3)
    *(rax_2 + (r9_2 << 2)) = *(*(arg1 + 0x18) + (zx.q(arg3) << 2))
    return 

if (rax.d == 0xffffffff)
    return 

int64_t r9_3 = *(arg1 + 0x18)

while (true)
    uint64_t rdx_1 = rax << 2
    rax = zx.q(*(rdx_1 + r9_3))
    
    if (rax.d == arg3)
        *(rdx_1 + r9_3) = *(r9_3 + (zx.q(arg3) << 2))
        break
    
    if (rax.d == 0xffffffff)
        return 
