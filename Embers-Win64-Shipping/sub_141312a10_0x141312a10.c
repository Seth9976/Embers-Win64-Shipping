// 函数: sub_141312a10
// 地址: 0x141312a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0xe02))

if (r8 u> 2 || arg1[0x2a9].d s< 1)
    r8 = 1

uint32_t rdx = r8
int32_t rcx = *(data_143eb3fb0 + 4)
void* rax

if (rcx == 1)
    uint32_t rdx_3 = 0
    rax.b = arg1[0x2a9].d s>= 1
    
    if (rax.b == 0)
        rdx_3 = r8
    
    if ((*(*arg1 + 0x28) & 0x20) == 0)
        rdx_3 = 2
    
    return zx.q(rdx_3)

if (rcx == 2)
    uint32_t rdx_2 = 1
    rax.b = arg1[0x2a9].d s>= 1
    
    if (rax.b == 0)
        rdx_2 = r8
    
    if ((*(*arg1 + 0x28) & 0x20) == 0)
        rdx_2 = 2
    
    return zx.q(rdx_2)

if (rcx == 3)
    uint32_t rdx_1 = 2
    rax.b = arg1[0x2a9].d s>= rcx - 2
    
    if (rax.b == 0)
        rdx_1 = r8
    
    if ((*(*arg1 + 0x28) & 0x20) == 0)
        rdx_1 = 2
    
    return zx.q(rdx_1)

if (r8 u> 2)
    rdx = r8
    
    if ((*(*arg1 + 0x28) & 0x20) == 0)
        rdx = 2
    
    return zx.q(rdx)

rax.b = arg1[0x2a9].d s>= 1

if (rax.b == 0)
    rdx = r8

if ((*(*arg1 + 0x28) & 0x20) == 0)
    rdx = 2

return zx.q(rdx)
