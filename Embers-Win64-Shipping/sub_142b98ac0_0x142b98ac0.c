// 函数: sub_142b98ac0
// 地址: 0x142b98ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xf0)
int64_t count = sx.q(arg2)
int64_t rdi = *(*(arg1 + 8) + 0x98)
int32_t rax_1 = *(rcx + 8)

if ((rax_1.b & 1) == 0)
    *(rcx + 8) = rax_1 | 1
else
    int64_t rdx = *(arg1 + 0x78)
    
    if (rdx != 0)
        (*(rdi + 0x10))(rdi, rdx)
    
    *(arg1 + 0x78) = 0

int32_t temp0 = count.d

if (temp0 s<= 0)
    *(arg1 + 0x78) = 0
    
    if (temp0 s< 0)
        return 6
else
    int64_t rax_3 = (*(rdi + 8))(rdi, zx.q(count.d))
    
    if (rax_3 == 0)
        *(arg1 + 0x78) = rax_3
        return zx.q((rax_3 + 0x40).d)
    
    memset(rax_3, 0, count)
    *(arg1 + 0x78) = rax_3

return 0
