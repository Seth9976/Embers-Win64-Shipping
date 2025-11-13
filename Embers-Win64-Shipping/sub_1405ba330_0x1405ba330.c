// 函数: sub_1405ba330
// 地址: 0x1405ba330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18
void**** rax = sub_1405b6ea0(&var_18, arg2, arg3, arg4)
void* rsi = rax[1]
void*** rbp = *rax

if (rsi != 0)
    *(rsi + 8) += 1

int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax_1 = (rdi + 1).d
*(arg1 + 0x30) = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_1405a4f90(arg1 + 0x28)

void**** result = (rdi << 4) + *(arg1 + 0x28)
*result = rbp
result[1] = rsi
int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
