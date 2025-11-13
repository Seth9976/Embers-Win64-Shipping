// 函数: sub_14192a1e0
// 地址: 0x14192a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14192a540(arg1)
int64_t* rsi = arg1 + 0x5f8
__builtin_memset(arg1 + 0x4c8, 0, 0x127)
void* rbx = arg1 + 0x620
int32_t* r12 = &rsi[3]
int64_t* rcx = rsi
*(arg1 + 0x5f0) = 0xffffffff
rsi[2] = 0
rsi[3].d = 0
*(rsi + 0x1c) = 0x80
int64_t* rax = rsi[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = rbx
*(arg1 + 0x618) = 0xffffffff
*(rbx + 0x10) = 0
*(rbx + 0x18) = 0
*(rbx + 0x1c) = 0x80
void* rax_1 = *(rbx + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(arg1 + 0x640) = 0
*(arg1 + 0x648) = 0
*(arg1 + 0x650) = 0xffffffff
*(arg1 + 0x658) = 0
*(arg1 + 0x660) = 0
*(arg1 + 0x668) = 0xfffffffe
int32_t rax_2 = data_1439c7498
int32_t rcx_3 = *(rsi + 0x1c) + 0x1f
*r12 = rax_2
uint64_t rcx_4 = zx.q(rcx_3 u>> 5)
uint32_t r14_1 = (rax_2 + 0x1f) u>> 5

if (r14_1 u<= rcx_4.d)
    int64_t* rax_8 = rsi[2]
    
    if (rax_8 != 0)
        rsi = rax_8
    
    if (rcx_4.d u> 8)
        memset(rsi, 0, zx.q(rcx_4.d) << 2)
    else if (rcx_4.d != 0)
        __builtin_memset(rsi, 0, rcx_4 << 2)
else
    sub_1405a4a00(rsi, 0, r14_1, 4)
    *(rsi + 0x1c) = r14_1 << 5
    int64_t* rax_5 = rsi[2]
    
    if (rax_5 != 0)
        rsi = rax_5
    
    if (r14_1 u> 8)
        memset(rsi, 0, zx.q(r14_1) << 2)
    else if (r14_1 != 0)
        __builtin_memset(rsi, 0, zx.q(r14_1) << 2)
    
    void* rdx_1 = rsi + (zx.q(r14_1 - 1) << 2)
    *rdx_1 &= 0xffffffff u>> ((neg.d(*r12)).b & 0x1f)

int32_t rax_9 = data_143eff5c8
void* r14_2 = rbx + 0x18
uint64_t rcx_14 = zx.q((*(rbx + 0x1c) + 0x1f) u>> 5)
*r14_2 = rax_9
uint32_t rsi_2 = (rax_9 + 0x1f) u>> 5

if (rsi_2 u<= rcx_14.d)
    void* rax_14 = *(rbx + 0x10)
    
    if (rax_14 != 0)
        rbx = rax_14
    
    if (rcx_14.d u> 8)
        memset(rbx, 0, zx.q(rcx_14.d) << 2)
    else if (rcx_14.d != 0)
        __builtin_memset(rbx, 0, rcx_14 << 2)
else
    sub_1405a4a00(rbx, 0, rsi_2, 4)
    *(rbx + 0x1c) = rsi_2 << 5
    void* rax_12 = *(rbx + 0x10)
    
    if (rax_12 != 0)
        rbx = rax_12
    
    if (rsi_2 u> 8)
        memset(rbx, 0, zx.q(rsi_2) << 2)
    else if (rsi_2 != 0)
        __builtin_memset(rbx, 0, zx.q(rsi_2) << 2)
    
    void* rdx_2 = rbx + (zx.q(rsi_2 - 1) << 2)
    *rdx_2 &= 0xffffffff u>> ((neg.d(*r14_2)).b & 0x1f)

return arg1
