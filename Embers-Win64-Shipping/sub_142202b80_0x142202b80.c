// 函数: sub_142202b80
// 地址: 0x142202b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg2 + 0x438))
int32_t rbx_1 = (rcx << 2).d s>> 2

if (rbx_1 == 0xffffffff)
    return 

int64_t rax_1 = sx.q(rbx_1)

if (test_bit(rcx.d, 0x1e))
    int64_t r14 = rax_1 << 3
    void* rcx_1 = *(r14 + *(arg1 + 0x68))
    *(rcx_1 + 0x438) |= 0x3fffffff
    int32_t rdx = *(arg1 + 0x70)
    int32_t rax_5 = rdx - rbx_1 - 1
    
    if (rax_5 s>= 1)
        rax_5 = 1
    
    if (rax_5 != 0)
        int64_t rcx_2 = *(arg1 + 0x68)
        memcpy(rcx_2 + r14, rcx_2 + (sx.q(rdx - rax_5) << 3), rax_5 << 3)
        rdx = *(arg1 + 0x70)
    
    uint64_t rax_7 = zx.q(rdx - 1)
    *(arg1 + 0x70) = rax_7.d
    
    if (rbx_1 s>= 0 && rbx_1 s< rax_7.d)
        void* rcx_4 = *(r14 + *(arg1 + 0x68))
        *(rcx_4 + 0x438) &= 0xc0000000
        *(rcx_4 + 0x438) |= rbx_1 & 0x3fffffff
    
    *(arg2 + 0x438) &= 0xbfffffff
    return 

void* rax = (rax_1 << 4) + *(arg1 + 0x38)
*(rax + 0xd) |= 2
*(arg2 + 0x438) |= 0x80000000
