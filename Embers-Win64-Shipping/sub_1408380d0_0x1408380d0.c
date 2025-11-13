// 函数: sub_1408380d0
// 地址: 0x1408380d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x3c]

if (rdi == 0)
    return 

int32_t rax = (*(*arg1 + 0x58))()
*(rdi + 0x10) -= rax
int64_t* rcx = arg1[0x3c]
arg1[0x3c] = 0

if (rcx == 0)
    return 

rcx[1].d -= 1

if (rcx[1].d == 1)
    (**rcx)(rcx, 1)
