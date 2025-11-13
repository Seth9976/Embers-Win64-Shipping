// 函数: sub_1417c3dc0
// 地址: 0x1417c3dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
int64_t rbx = 0

if (rax == 0)
    return 0

int64_t* rcx = *(arg1 + 0x18)
int64_t rbp

if (rcx == 0)
    rbp = 0
else
    int64_t rdx_1 = *rcx
    rbp = (*(rdx_1 + 0x18))(rcx, rdx_1)

int64_t* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    rbx = (*(*rcx_1 + 0x18))(rcx_1)

return sub_1417bf2a0(rax, rbx, rbp, *(arg1 + 0x20)) __tailcall
