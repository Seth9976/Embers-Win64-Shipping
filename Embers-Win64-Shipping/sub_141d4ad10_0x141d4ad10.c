// 函数: sub_141d4ad10
// 地址: 0x141d4ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
int64_t* rsi = arg2[1]
int64_t r12 = *arg2
int64_t var_48 = r12
int64_t* var_40 = rsi

if (rsi != 0)
    *(rsi + 0xc) += 1
    r12 = var_48

if (sub_140901d20(arg1 + 0x28, &var_48) == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x30))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x30) = rax_1
    
    if (rax_1 s> *(arg1 + 0x34))
        sub_1405a4f90(arg1 + 0x28)
    
    int64_t* rax_4 = (rdi_1 << 4) + *(arg1 + 0x28)
    *rax_4 = r12
    rax_4[1] = rsi
else if (rsi != 0)
    int32_t rax_5 = *(rsi + 0xc)
    *(rsi + 0xc) -= 1
    
    if (rax_5 == 1)
        (*(*rsi + 8))(rsi, 1)

char result = sub_141d4ab20(arg1 + 0x38, arg2)

if (result != 0)
    int64_t* rsi_1 = arg2[1]
    int64_t var_38 = *arg2
    int64_t* var_30_1 = rsi_1
    
    if (rsi_1 != 0)
        *(rsi_1 + 0xc) += 1
    
    result = sub_141c8c380(arg1 + 0x38, &var_38)
    
    if (rsi_1 != 0)
        int32_t rbp_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rbp_1 == 1)
            result = (*(*rsi_1 + 8))(rsi_1, zx.q(rbp_1))

if (arg1 == -0x48)
    return result

return LeaveCriticalSection(arg1 + 0x48)
