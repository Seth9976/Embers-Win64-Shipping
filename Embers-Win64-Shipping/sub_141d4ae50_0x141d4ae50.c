// 函数: sub_141d4ae50
// 地址: 0x141d4ae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t* rsi = arg2[1]
int64_t r14 = *arg2
int64_t var_28 = r14
int64_t* var_20 = rsi

if (rsi != 0)
    *(rsi + 0xc) += 1
    r14 = var_28

if (sub_140901d20(arg1 + 0x38, &var_28) == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x40))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x40) = rax_1
    
    if (rax_1 s> *(arg1 + 0x44))
        sub_1405a4f90(arg1 + 0x38)
    
    int64_t* rax_4 = (rdi_1 << 4) + *(arg1 + 0x38)
    *rax_4 = r14
    rax_4[1] = rsi
else if (rsi != 0)
    int32_t rax_5 = *(rsi + 0xc)
    *(rsi + 0xc) -= 1
    
    if (rax_5 == 1)
        (*(*rsi + 8))(rsi, 1)

int64_t* rcx_4 = *(arg1 + 0x58)
int64_t result = (*(*rcx_4 + 0x10))(rcx_4)

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
