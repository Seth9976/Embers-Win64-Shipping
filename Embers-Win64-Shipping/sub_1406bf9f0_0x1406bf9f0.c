// 函数: sub_1406bf9f0
// 地址: 0x1406bf9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int64_t* rcx = *(arg1 + 0x68)
int64_t rax_1 = (*(*rcx + 0x20))(rcx)
int64_t* rcx_1 = *(arg1 + 0x68)
int64_t r9 = *rcx_1
int64_t rax_2 = (*(r9 + 0x28))(rcx_1, arg4, arg5, r9)
int64_t* rcx_2 = *(arg1 + 0x68)

if (rbx s> rax_2)
    rbx = rax_2

int64_t rdx = *rcx_2

if (rax_2 - rbx s< (*(rdx + 0x20))(rcx_2, rdx))
    rbx = rax_2 - rax_1

if (rbx s> 0)
    int64_t* rcx_5 = *(arg1 + 0x68)
    int64_t r9_1 = *rcx_5
    (*(r9_1 + 0x150))(rcx_5, arg2, rbx, r9_1)

int64_t* rcx_6 = *(arg1 + 0x68)
int64_t r8_1 = *rcx_6
(*(r8_1 + 0x178))(rcx_6, rbx + rax_1, r8_1)
return zx.q(rbx.d)
