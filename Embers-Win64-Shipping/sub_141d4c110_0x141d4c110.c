// 函数: sub_141d4c110
// 地址: 0x141d4c110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int64_t* rsi = arg2[1]
int64_t r14 = *arg2
int64_t var_18 = r14
int64_t* var_10 = rsi

if (rsi != 0)
    *(rsi + 0xc) += 1
    r14 = var_18

uint64_t result = sub_140901d20(arg1 + 0x70, &var_18)

if (result.d == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x78))
    int32_t rax = (rdi_1 + 1).d
    *(arg1 + 0x78) = rax
    
    if (rax s> *(arg1 + 0x7c))
        sub_1405a4f90(arg1 + 0x70)
    
    result = (rdi_1 << 4) + *(arg1 + 0x70)
    *result = r14
    *(result + 8) = rsi
else if (rsi != 0)
    result = zx.q(*(rsi + 0xc))
    *(rsi + 0xc) -= 1
    
    if (result.d == 1)
        result = (*(*rsi + 8))(rsi, 1)

if (arg1 == -0xd0)
    return result

return LeaveCriticalSection(arg1 + 0xd0)
