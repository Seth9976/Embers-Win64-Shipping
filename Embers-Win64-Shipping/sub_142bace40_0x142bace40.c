// 函数: sub_142bace40
// 地址: 0x142bace40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(*arg1 + 0x90)
int32_t rdi = *(arg1[2] + 0xd8)

if (rdi s> 0)
    memcpy(arg1[0x17], arg1[0x18], zx.d(*(arg1 + 0xb4)) << 3)

void* rax_2 = arg1[1]
void* rcx_1 = arg1[0x1d]
*(rcx_1 + 0x1c0) = *(rax_2 + 0xf0)
*(rcx_1 + 0x1d0) = *(rax_2 + 0x100)
*(rcx_1 + 0x1e0) = *(rax_2 + 0x110)
*(rcx_1 + 0x1f0) = *(rax_2 + 0x120)
*(rcx_1 + 0x200) = *(rax_2 + 0x130)

if (arg2 == 0)
    *(arg1[0x1d] + 0x180) = *(*(arg1[1] + 0x40) + 4)
    *(arg1[0x1d] + 0x184) = *(*(arg1[1] + 0x40) + 8)
else
    *(arg1[0x1d] + 0x180) = 0x10000
    *(arg1[0x1d] + 0x184) = 0x10000
    memcpy(arg1[0x19], arg1[0x18], zx.d(*(arg1 + 0xb4)) << 3)

int64_t rcx_5 = sx.q(zx.d(*(arg1 + 0xb4)) - 4)
int64_t rax_12 = arg1[0x18]
*(rax_12 + (rcx_5 << 3)) = (*(rax_12 + (rcx_5 << 3)) + 0x20) & 0xffffffc0
int64_t rcx_6 = sx.q(zx.d(*(arg1 + 0xb4)) - 3)
int64_t rax_18 = arg1[0x18]
*(rax_18 + (rcx_6 << 3)) = (*(rax_18 + (rcx_6 << 3)) + 0x20) & 0xffffffc0
int64_t rcx_7 = sx.q(zx.d(*(arg1 + 0xb4)) - 2)
int64_t rax_24 = arg1[0x18]
*(rax_24 + (rcx_7 << 3) + 4) = (*(rax_24 + (rcx_7 << 3) + 4) + 0x20) & 0xffffffc0
int64_t rcx_8 = sx.q(zx.d(*(arg1 + 0xb4)) - 1)
int64_t rax_30 = arg1[0x18]
*(rax_30 + (rcx_8 << 3) + 4) = (*(rax_30 + (rcx_8 << 3) + 4) + 0x20) & 0xffffffc0

if (rdi s> 0)
    void* rcx_9 = arg1[0x1d]
    int128_t zmm1 = *(arg1[3] + 0x70)
    *(rcx_9 + 0x2a0) = *(rcx_9 + 0x238)
    *(rcx_9 + 0x2a8) = rdi
    char* var_28_1 = zmm1.q
    *(arg1[0x1d] + 0x314) = arg2
    void* rax_37 = arg1[0x1d]
    *(rax_37 + 0xf8) = *(arg1 + 0xa8)
    *(rax_37 + 0x108) = *(arg1 + 0xb8)
    *(rax_37 + 0x118) = *(arg1 + 0xc8)
    *(rax_37 + 0x128) = *(arg1 + 0xd8)
    int32_t result = sub_142bafbf0(arg1[0x1d])
    
    if (result != 0 && *(arg1[0x1d] + 0x315) != 0)
        return result
    
    *var_28_1 |= *(arg1[0x1d] + 0x1f8) << 5 | 4

if (*(rbp + 0x78) != 0x28 || *(arg1[0x1d] + 0x373) == 0)
    arg1[0xb] = *(arg1[0x18] + (sx.q(zx.d(*(arg1 + 0xb4)) - 4) << 3))
    arg1[0xc] = *(arg1[0x18] + (sx.q(zx.d(*(arg1 + 0xb4)) - 3) << 3))
    arg1[0x22] = *(arg1[0x18] + (sx.q(zx.d(*(arg1 + 0xb4)) - 2) << 3))
    arg1[0x23] = *(arg1[0x18] + (sx.q(zx.d(*(arg1 + 0xb4)) - 1) << 3))

return 0
