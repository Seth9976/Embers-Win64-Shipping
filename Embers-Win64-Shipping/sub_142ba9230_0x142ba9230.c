// 函数: sub_142ba9230
// 地址: 0x142ba9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rbp = *arg2
int16_t rsi = arg2[2]

if (rbp u>= *(arg1 + 0x84) || rsi u>= *(arg1 + 0x44))
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    return 

int32_t* r9 = *(arg1 + 0x90) + (zx.q(rbp) << 3)
int64_t rax_1 = *(arg1 + 0x50)
uint64_t rdx_1 = zx.q(rsi)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((*(arg1 + 0x328))(arg3, zx.q(*(rax_1 + (rdx_1 << 3)) - *r9), 
    zx.q(*(rax_1 + (rdx_1 << 3) + 4) - r9[1])))
(*(arg1 + 0x340))(arg1, arg1 + 0x78, zx.q(rbp), zx.q((temp1 - temp0) s>> 1))
jump(*(arg1 + 0x340))
