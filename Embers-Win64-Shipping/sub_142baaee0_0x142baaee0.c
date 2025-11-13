// 函数: sub_142baaee0
// 地址: 0x142baaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = *arg2
int32_t r14 = *(arg1 + 0x1e4)
int32_t rax = *(arg2 + 4)

if (rsi u>= *(arg1 + 0x44) || rax u>= *(arg1 + 0x224))
    bool cond:0 = *(arg1 + 0x315) == 0
    *(arg1 + 0x1c0) = rsi
    *(arg1 + 0x1c2) = rsi
    
    if (not(cond:0))
        *(arg1 + 0x18) = 0x86
    
    return rax

int32_t rbp = (*(arg1 + 0x358))(arg3, zx.q(rax))

if (*(arg1 + 0x1fc) == 0)
    uint32_t* rbx_1 = zx.q(rsi) << 3
    *(rbx_1 + *(arg1 + 0x48)) = sub_142bae100(rbp, sx.d(*(arg1 + 0x1ce)))
    *(*(arg1 + 0x48) + rbx_1 + 4) = sub_142bae100(rbp, sx.d(*(arg1 + 0x1d0)))
    *(rbx_1 + *(arg1 + 0x50)) = *(rbx_1 + *(arg1 + 0x48))

int64_t rax_7 = *(arg1 + 0x50)
uint64_t rcx_5 = zx.q(rsi)
int32_t rax_8 =
    (*(arg1 + 0x328))(arg1, zx.q(*(rax_7 + (rcx_5 << 3))), zx.q(*(rax_7 + (rcx_5 << 3) + 4)))

if ((*(arg1 + 0x218) & 1) != 0)
    int32_t r8_2 = rbp - rax_8
    int32_t rcx_8 = neg.d(r8_2)
    
    if (r8_2 s>= 0)
        rcx_8 = r8_2
    
    if (rcx_8 s> r14)
        rbp = rax_8
    
    rbp = (*(arg1 + 0x320))(arg1, zx.q(rbp), zx.q(*(arg1 + 0x1ac)))

int64_t rax_10 = (*(arg1 + 0x340))(arg1, arg1 + 0x38, zx.q(rsi), zx.q(rbp - rax_8))
*(arg1 + 0x1c0) = rsi
*(arg1 + 0x1c2) = rsi
return rax_10
