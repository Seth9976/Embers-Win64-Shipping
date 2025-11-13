// 函数: sub_140bab430
// 地址: 0x140bab430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4

if (*(arg1 + 0x20) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x18)

if (arg4 == 0)
    rdi = rbx_1[0xf]

int64_t* rcx = rbx_1

if (rdi != 0)
    int64_t r9 = *rbx_1
    (*(r9 + 0x1e8))(rcx, rdi, (*(rdi + 0x40) u>> 0x23).b & 1, r9)
    rcx = *(arg1 + 0x18)

(*(*rcx + 0x130))(rcx, arg2)

if (rdi != 0)
    int64_t r9_1 = *rbx_1
    (*(r9_1 + 0x1f0))(rbx_1, rdi, (*(rdi + 0x40) u>> 0x23).b & 1, r9_1)
