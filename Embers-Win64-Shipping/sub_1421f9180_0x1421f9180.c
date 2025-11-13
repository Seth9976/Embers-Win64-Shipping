// 函数: sub_1421f9180
// 地址: 0x1421f9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t r14 = rdi << 3
void* rcx = *(r14 + *(arg1 + 0x28))

if (rcx != 0)
    *(rcx + 0x438) = (*(rcx + 0x438) & 0x40000000) | 0x3fffffff

int64_t rdx = *(arg1 + 0x38)
int64_t rsi_1 = rdi * 2
int64_t rax_5

if ((*(rdx + (rsi_1 << 3) + 0xd) & 1) == 0)
    rax_5 = *(arg1 + 0x58)
else
    rax_5 = *(arg1 + 0x48)

sub_1421f9020(rax_5 + zx.q(*(rdx + (rsi_1 << 3) + 0xc)) * 0x18, rdi.d)
int32_t rdx_2 = *(arg1 + 0x30)
int32_t rax_8 = rdx_2 - rdi.d - 1

if (rax_8 s>= 1)
    rax_8 = 1

if (rax_8 != 0)
    int64_t rcx_3 = *(arg1 + 0x28)
    memcpy(rcx_3 + r14, rcx_3 + (sx.q(rdx_2 - rax_8) << 3), rax_8 << 3)
    rdx_2 = *(arg1 + 0x30)

*(arg1 + 0x30) = rdx_2 - 1
int32_t rdx_5 = *(arg1 + 0x40)
int32_t rcx_7 = rdx_5 - rdi.d - 1

if (rcx_7 s>= 1)
    rcx_7 = 1

if (rcx_7 != 0)
    int64_t rax_11 = *(arg1 + 0x38)
    memcpy(rax_11 + (rsi_1 << 3), (sx.q(rdx_5 - rcx_7) << 4) + rax_11, rcx_7 << 4)
    rdx_5 = *(arg1 + 0x40)

uint64_t result = zx.q(rdx_5 - 1)
*(arg1 + 0x40) = result.d

if (rdi.d s>= 0 && rdi.d s< *(arg1 + 0x30))
    void* rcx_9 = *(r14 + *(arg1 + 0x28))
    
    if (rcx_9 != 0)
        *(rcx_9 + 0x438) &= 0xc0000000
        *(rcx_9 + 0x438) |= rdi.d & 0x3fffffff
    
    int64_t rdx_10 = *(arg1 + 0x38)
    int64_t rax_16
    
    if ((*(rdx_10 + (rsi_1 << 3) + 0xd) & 1) == 0)
        rax_16 = *(arg1 + 0x58)
    else
        rax_16 = *(arg1 + 0x48)
    
    result = *(zx.q(*(rdx_10 + (rsi_1 << 3) + 0xc)) * 0x18 + rax_16 + 8)
    *(result + (sx.q(*(rdx_10 + (rsi_1 << 3) + 8)) << 2)) = rdi.d

return result
