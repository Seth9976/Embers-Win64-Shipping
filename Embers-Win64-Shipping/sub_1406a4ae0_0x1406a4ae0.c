// 函数: sub_1406a4ae0
// 地址: 0x1406a4ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s<= rdi.d)
    return 

int32_t rbp_2 = arg2 - rdi.d
arg1[1].d = arg2

if (arg2 s> *(arg1 + 0xc))
    sub_1406a4e00(arg1)

int32_t rdx_1 = arg2 - 1
int64_t r9_1 = sx.q(rdx_1)

if (r9_1 s>= rdi)
    int32_t rax_1 = *(arg1 + 0x34)
    int64_t r8_2 = r9_1 * 0xa0
    int64_t i_1 = r9_1 - rdi + 1
    int64_t i
    
    do
        if (rax_1 != 0)
            *(sx.q(arg1[6].d) * 0xa0 + *arg1) = rdx_1
        
        *(r8_2 + *arg1) = 0xffffffff
        int32_t rcx_2
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_2 = -1
        else
            rcx_2 = arg1[6].d
        
        *(r8_2 + *arg1 + 4) = rcx_2
        r8_2 -= 0xa0
        *(arg1 + 0x34) += 1
        rax_1 = *(arg1 + 0x34)
        arg1[6].d = rdx_1
        rdx_1 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rbx_1 = &arg1[2]

if (rbp_2 != arg2)
    sub_1406989a0(rbx_1, 0, rbp_2)
    return 

uint32_t rdi_2 = (rbp_2 + 0x1f) u>> 5
uint32_t rcx_5 = (*(rbx_1 + 0x1c) + 0x1f) u>> 5
void* rsi_1 = rbx_1 + 0x18
*rsi_1 = rbp_2

if (rdi_2 u<= rcx_5)
    uint64_t rax = *(rbx_1 + 0x10)
    
    if (rax != 0)
        rbx_1 = rax
    
    if (rcx_5 u> 8)
        memset(rbx_1, 0, zx.q(rcx_5) << 2)
    else if (rcx_5 != 0)
        memset(rbx_1, 0, zx.q(rcx_5) << 2)
else
    sub_1405a4a00(rbx_1, 0, rdi_2, 4)
    *(rbx_1 + 0x1c) = rdi_2 << 5
    void* rax_8 = *(rbx_1 + 0x10)
    
    if (rax_8 != 0)
        rbx_1 = rax_8
    
    if (rdi_2 u> 8)
        memset(rbx_1, 0, zx.q(rdi_2) << 2)
    else if (rdi_2 != 0)
        memset(rbx_1, 0, zx.q(rdi_2) << 2)
    
    void* rdx_2 = rbx_1 + (zx.q(rdi_2 - 1) << 2)
    *rdx_2 &= 0xffffffff u>> ((neg.d(*rsi_1)).b & 0x1f)
