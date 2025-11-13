// 函数: sub_1417c47a0
// 地址: 0x1417c47a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax
int64_t rdx
rax, rdx = j_sub_140a82f30(0x30)
int64_t rbx = 0

if (rax == 0)
    return 0

int64_t* rcx = *(arg1 + 0x20)
int64_t rbp

if (rcx == 0)
    rbp = 0
else
    int64_t rdx_1 = *rcx
    int64_t rax_1
    rax_1, rdx = (*(rdx_1 + 0x18))(rcx, rdx_1)
    rbp = rax_1

int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    int64_t rax_3
    rax_3, rdx = (*(*rcx_1 + 0x18))(rcx_1)
    rbx = rax_3

int512_t zmm1
zmm1.o = *(arg1 + 0x10)
return sub_1417bf810(rax, rdx, rbx, rbp, *(arg1 + 0x28))
