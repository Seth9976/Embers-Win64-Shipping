// 函数: sub_1426019a0
// 地址: 0x1426019a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1 + 0xd4, 0, 0x84)
*(arg1 + 0x194) = 0
*(arg1 + 0xf8) = arg1
*(arg1 + 0x124) = arg1
*(arg1 + 0x150) = arg1
*(arg1 + 0x1a0) = 0
int64_t* rax = *(arg1 + 0x10)
int64_t* rsi = *rax

if (rsi == 0 || rsi[0x4d] == 0 || 0f f< *(rax + 0xfc))
    int32_t rax_9 = *(arg1 + 0x164)
    int32_t rbp_3 = *(*(arg1 + 0x18) + 0xc) << 0xe
    *(arg1 + 0x160) = 0
    
    if (rax_9 s< 0 && rax_9 != 0)
        sub_1405c5510(arg1 + 0x158, 0)
    
    int64_t r14_1 = sx.q(*(arg1 + 0x160))
    int32_t rax_10 = r14_1.d + rbp_3
    *(arg1 + 0x160) = rax_10
    
    if (rax_10 s> *(arg1 + 0x164))
        sub_1405daba0(arg1 + 0x158)
    
    memset(r14_1 + *(arg1 + 0x158), 0, sx.q(rbp_3))
    int64_t rdx_7 = *(arg1 + 0x158)
    *(arg1 + 0xdc) = rdx_7
    *(arg1 + 0xd8) = rbp_3
    
    if (rsi == 0 || (*(rsi + 0x16d) & 1) == 0)
        int64_t* rcx_14 = *(arg1 + 0x90)
        int64_t r9_1
        r9_1.b = *(*(arg1 + 0x10) + 0xf8) != 0
        (*(*rcx_14 + 0x20))(rcx_14, rdx_7, 0x2000, r9_1)
    else
        *(arg1 + 0xd8) = (*(*rsi + 0x318))(rsi, rdx_7, zx.q(*(*(arg1 + 0x18) + 0xc) << 0xd))
    
    int64_t* r14_2 = **(arg1 + 0x10)
    int32_t rax_17 = *(arg1 + 0x174)
    int32_t rsi_3 = *(*(arg1 + 0x18) + 0xc) << 0xe
    *(arg1 + 0x170) = 0
    
    if (rax_17 s< 0 && rax_17 != 0)
        sub_1405c5510(arg1 + 0x168, 0)
    
    int64_t rbp_4 = sx.q(*(arg1 + 0x170))
    int32_t rax_18 = rsi_3 + rbp_4.d
    *(arg1 + 0x170) = rax_18
    
    if (rax_18 s> *(arg1 + 0x174))
        sub_1405daba0(arg1 + 0x168)
    
    memset(rbp_4 + *(arg1 + 0x168), 0, sx.q(rsi_3))
    int64_t rdx_9 = *(arg1 + 0x168)
    *(arg1 + 0x108) = rdx_9
    *(arg1 + 0x104) = rsi_3
    
    if (r14_2 == 0 || (*(r14_2 + 0x16d) & 1) == 0)
        int64_t* rcx_20 = *(arg1 + 0x90)
        int64_t r9_2
        r9_2.b = *(*(arg1 + 0x10) + 0xf8) != 0
        (*(*rcx_20 + 0x20))(rcx_20, rdx_9, 0x2000, r9_2)
    else
        *(arg1 + 0x104) = (*(*r14_2 + 0x318))(r14_2, rdx_9, zx.q(*(*(arg1 + 0x18) + 0xc) << 0xd))
else
    *(arg1 + 0x1a0) = 1
    void* r14 = arg1 + 0xd8
    void* rbx = arg1 + 0x160
    int64_t i_1 = 2
    uint32_t count = *(**(arg1 + 0x10) + 0x270) * *(*(arg1 + 0x18) + 0xc) * 2
    int64_t i
    
    do
        int32_t rax_3 = *(rbx + 4)
        int32_t rsi_1 = 0
        *rbx = 0
        
        if (rax_3 s< 0 && rax_3 != 0)
            sub_1405c5510(rbx - 8, 0)
            rsi_1 = *rbx
        
        int32_t rax_4 = rsi_1 + count
        *rbx = rax_4
        
        if (rax_4 s> *(rbx + 4))
            sub_1405daba0(rbx - 8)
        
        memset(sx.q(rsi_1) + *(rbx - 8), 0, sx.q(count))
        *(r14 + 4) = *(rbx - 8)
        rbx += 0x10
        *r14 = count
        *(r14 + 0x20) = arg1
        r14 += 0x2c
        i = i_1
        i_1 -= 1
    while (i != 1)
    memcpy(*(arg1 + 0xdc), *(**(arg1 + 0x10) + 0x268), count)
    memcpy(*(arg1 + 0x108), *(**(arg1 + 0x10) + 0x268) + zx.q(count), count)

int64_t* rcx_21 = *(arg1 + 0x98)
int64_t rbx_4 = **(arg1 + 0x80)
int32_t rax_25 = (*(*rcx_21 + 0xa8))(rcx_21, arg1 + 0xd4, 0)
(*(rbx_4 + 0xa8))(*(arg1 + 0x80), u"SubmitSourceBuffer - PCMRT", zx.q(rax_25))
int64_t* rcx_23 = *(arg1 + 0x98)
int64_t rbx_5 = **(arg1 + 0x80)
int32_t rax_28 = (*(*rcx_23 + 0xa8))(rcx_23, arg1 + 0x100, 0)
int64_t result = (*(rbx_5 + 0xa8))(*(arg1 + 0x80), u"SubmitSourceBuffer - PCMRT", zx.q(rax_28))
*(arg1 + 0x1ac) |= 1
*(arg1 + 0x194) = 2
return result
