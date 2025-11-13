// 函数: sub_140ac0210
// 地址: 0x140ac0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s<= rbx.d)
    return 

int32_t rbp_2 = arg2 - rbx.d
arg1[1].d = arg2

if (arg2 s> *(arg1 + 0xc))
    sub_1406798d0(arg1)

int32_t rdx_1 = arg2 - 1
int64_t r9_1 = sx.q(rdx_1)

if (r9_1 s>= rbx)
    int32_t rax_1 = *(arg1 + 0x34)
    int32_t* r8_1 = r9_1 * 0x38
    int64_t i_1 = r9_1 - rbx + 1
    int64_t i
    
    do
        if (rax_1 != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rdx_1
        
        *(r8_1 + *arg1) = 0xffffffff
        int32_t rcx_1
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_1 = -1
        else
            rcx_1 = arg1[6].d
        
        *(r8_1 + *arg1 + 4) = rcx_1
        r8_1 -= 0x38
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

uint64_t rcx_4 = zx.q((*(rbx_1 + 0x1c) + 0x1f) u>> 5)
void* r14_1 = rbx_1 + 0x18
uint32_t rsi_2 = (rbp_2 + 0x1f) u>> 5
*r14_1 = rbp_2

if (rsi_2 u<= rcx_4.d)
    uint64_t rax = *(rbx_1 + 0x10)
    
    if (rax != 0)
        rbx_1 = rax
    
    if (rcx_4.d u> 8)
        memset(rbx_1, 0, zx.q(rcx_4.d) << 2)
    else if (rcx_4.d != 0)
        __builtin_memset(rbx_1, 0, rcx_4 << 2)
else
    sub_1405a4a00(rbx_1, 0, rsi_2, 4)
    *(rbx_1 + 0x1c) = rsi_2 << 5
    void* rax_8 = *(rbx_1 + 0x10)
    
    if (rax_8 != 0)
        rbx_1 = rax_8
    
    if (rsi_2 u> 8)
        memset(rbx_1, 0, zx.q(rsi_2) << 2)
    else if (rsi_2 != 0)
        __builtin_memset(rbx_1, 0, zx.q(rsi_2) << 2)
    
    void* rdx_2 = rbx_1 + (zx.q(rsi_2 - 1) << 2)
    *rdx_2 &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
