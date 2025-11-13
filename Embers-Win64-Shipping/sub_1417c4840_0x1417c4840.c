// 函数: sub_1417c4840
// 地址: 0x1417c4840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax
int64_t rdx
rax, rdx = j_sub_140a82f30(0x38)
int64_t rbx = 0

if (rax == 0)
    return 0

int64_t* rcx = *(arg1 + 0x28)
int64_t r14

if (rcx == 0)
    r14 = 0
else
    int64_t rdx_1 = *rcx
    int64_t rax_1
    rax_1, rdx = (*(rdx_1 + 0x18))(rcx, rdx_1)
    r14 = rax_1

int64_t* rcx_1 = *(arg1 + 0x20)
int64_t rsi

if (rcx_1 == 0)
    rsi = 0
else
    int64_t rax_3
    rax_3, rdx = (*(*rcx_1 + 0x18))(rcx_1)
    rsi = rax_3

int64_t* rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    int64_t rax_5
    rax_5, rdx = (*(*rcx_2 + 0x18))(rcx_2)
    rbx = rax_5

int512_t zmm1
zmm1.o = *(arg1 + 0x10)
return sub_1417bf890(rax, rdx, rbx, rsi, r14, *(arg1 + 0x30))
