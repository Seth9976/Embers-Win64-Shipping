// 函数: sub_14059a8e0
// 地址: 0x14059a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x1c)
int32_t rdx_1 = (arg2 + 0x1f) & 0xffffffe0
int32_t rax = 0x80

if (rdx_1 s> rcx || rcx s> 0x80)
    if (rdx_1 s>= 0x80)
        rax = rdx_1
    
    *(arg1 + 0x1c) = rax
    int64_t rax_2 = sub_1405a4410(arg1, 0)
    *(arg1 + 0x18) = 0
    return rax_2

void* rax_1 = *(arg1 + 0x10)
uint32_t rdx_4 = (*(arg1 + 0x18) + 0x1f) u>> 5
void* rdi = arg1

if (rax_1 != 0)
    rdi = rax_1

if (rdx_4 u> 8)
    rax_1 = memset(rdi, 0, zx.q(rdx_4) << 2)
else if (rdx_4 != 0)
    __builtin_memset(rdi, 0, zx.q(rdx_4) << 2)
    *(arg1 + 0x18) = 0
    return 0

*(arg1 + 0x18) = 0
return rax_1
