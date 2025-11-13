// 函数: sub_1426bdd30
// 地址: 0x1426bdd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x90)

if ((rax.b & 1) == 0)
    rax.b = 0
    return rax

int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0)
    (*(*rcx + 0x290))(rcx)
    return not.b((*(arg1 + 0x90)).b) & 1

int32_t rax_3 = rax & 0xfffffffe
*(arg1 + 0x90) = rax_3
rax_3.b = not.b(rax_3.b)
rax_3.b &= 1
return rax_3
