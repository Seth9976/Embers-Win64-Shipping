// 函数: sub_142a85b30
// 地址: 0x142a85b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
int64_t rax = arg2[1]
*arg2 = 0
arg2[1] = 0
int64_t* rcx = arg1[1]
arg1[1] = rax
int64_t var_18 = r8
int64_t arg_8 = rax
*arg1 = r8

if (rcx == 0)
    return arg1

rcx[1].d -= 1

if (rcx[1].d == 1)
    (**rcx)(rcx)
    int32_t rsi_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rcx + 8))(rcx)

return arg1
