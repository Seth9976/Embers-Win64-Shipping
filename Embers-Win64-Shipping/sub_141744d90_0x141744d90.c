// 函数: sub_141744d90
// 地址: 0x141744d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t rbp = sx.q(arg2)
void* rdi = *(arg1 + 8) + rbp * 0x18
int32_t rax_1 = (rsi + 1).d
*(arg3 + 0x10) = rax_1

if (rax_1 s> *(arg3 + 0x14))
    sub_1405a4df0(arg3 + 8)

int64_t rax_2 = *(arg3 + 8)
int64_t rcx_3 = rsi * 3
*(rax_2 + (rcx_3 << 3) + 8) = 0
void* rbx_1 = rax_2 + (rcx_3 << 3)

if (*(rdi + 8) == 0)
    memmove(rbx_1, rdi, 8)

int64_t rcx_5 = *(rbx_1 + 8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*(rbx_1 + 8) = *(rdi + 8)
*(rdi + 8) = 0
*(rbx_1 + 0x10) = *(rdi + 0x10)
*(rbx_1 + 0x14) = *(rdi + 0x14)
*(rdi + 0x10) = 0
*(rdi + 0x14) = 1
return sub_14174dbe0(arg1 + 8, rbp.d, 1, 1) __tailcall
