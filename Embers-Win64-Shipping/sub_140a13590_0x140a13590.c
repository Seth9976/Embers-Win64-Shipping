// 函数: sub_140a13590
// 地址: 0x140a13590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t rax_1 = (*(*rcx + 8))(rcx)
int64_t* rcx_1 = *(arg1 + 8)
int64_t r9 = *rcx_1
(*(r9 + 0x18))(rcx_1, 0, arg4, r9)
int64_t* rcx_2 = *(arg1 + 8)
int64_t rdx = *rcx_2
int64_t rax_2 = (*(rdx + 8))(rcx_2, rdx)
int64_t* rcx_3 = *(arg1 + 8)
int64_t r8 = *rcx_3
(*(r8 + 0x10))(rcx_3, rax_1, r8)

if (arg2 != 0)
    *arg2 = rax_2

if (arg3 != 0)
    *arg3 = rax_2

return 0
