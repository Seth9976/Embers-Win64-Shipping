// 函数: sub_140d44580
// 地址: 0x140d44580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = *(arg1 + 0x10)
int64_t var_30 = *(arg1 + 0x18)
void* rax_2 = *(arg1 + 0x20)
void* var_28 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void var_20
int64_t* rax_3 = (*(arg1 + 8))(&var_20, &var_38, arg1)
*arg2 = *rax_3
void* rcx_2 = rax_3[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax_3[2].d
int64_t* var_18

if (var_18 == 0)
    return arg2

var_18[1].d -= 1

if (var_18[1].d == 1)
    (**var_18)(var_18)
    int32_t rsi_1 = *(var_18 + 0xc)
    *(var_18 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_18 + 8))(var_18, zx.q(rsi_1))

return arg2
