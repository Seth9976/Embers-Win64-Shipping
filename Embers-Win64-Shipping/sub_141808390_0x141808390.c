// 函数: sub_141808390
// 地址: 0x141808390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)
int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

char rax_3 = (*(*rcx + 0x70))(rcx, &var_18)
int64_t* rbx_1 = arg2[1]

if (rbx_1 == 0)
    return zx.q(rax_3)

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    int64_t rdx_2 = *rbx_1
    (*rdx_2)(rbx_1, rdx_2)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return zx.q(rax_3)
