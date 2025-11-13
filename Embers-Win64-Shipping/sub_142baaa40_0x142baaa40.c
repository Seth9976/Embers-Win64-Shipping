// 函数: sub_142baaa40
// 地址: 0x142baaa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = arg2[1].w
int16_t rcx = *arg2

if (rcx u>= *(arg1 + 0x44) || r8 u>= *(arg1 + 0x84))
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    *arg2 = 0
    return 

if ((*(arg1 + 0x218) & 1) != 0)
    uint64_t rcx_1 = zx.q(rcx)
    int32_t* r9 = *(arg1 + 0x90) + (zx.q(r8) << 3)
    int64_t rax_1 = *(arg1 + 0x50)
    *arg2 = (*(arg1 + 0x328))(arg1, zx.q(*(rax_1 + (rcx_1 << 3)) - *r9), 
        zx.q(*(rax_1 + (rcx_1 << 3) + 4) - r9[1]))
    return 

if (*(arg1 + 0x1fc) == 0 || *(arg1 + 0x1fe) == 0)
    int32_t* rdx_9 = *(arg1 + 0x48) + (zx.q(rcx) << 3)
    int64_t rax_10 = *(arg1 + 0x88)
    uint64_t rcx_13 = zx.q(r8)
    *arg2 = (*(arg1 + 0x330))(arg1, zx.q(*rdx_9 - *(rax_10 + (rcx_13 << 3))), 
        zx.q(rdx_9[1] - *(rax_10 + (rcx_13 << 3) + 4)))
    return 

int32_t rdx_3 = *(arg1 + 0x180)
int32_t* r14 = *(arg1 + 0x58) + (zx.q(rcx) << 3)
int32_t* rbp = *(arg1 + 0x98) + (zx.q(r8) << 3)

if (rdx_3 != *(arg1 + 0x184))
    *arg2 = (*(arg1 + 0x330))(arg1, zx.q(sub_142b93e80(*r14 - *rbp, rdx_3)), 
        zx.q(sub_142b93e80(r14[1] - rbp[1], *(arg1 + 0x184))))
else
    *arg2 = sub_142b93e80((*(arg1 + 0x330))(arg1, zx.q(*r14 - *rbp), zx.q(r14[1] - rbp[1])), 
        *(arg1 + 0x180))
