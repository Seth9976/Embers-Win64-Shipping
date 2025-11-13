// 函数: sub_1406ec540
// 地址: 0x1406ec540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x38)

if (rcx == 0)
    return 

if (rcx != arg2)
    *(arg1 + 0x38) = rcx
    *(arg2 + 0x38) = 0
    return 

int64_t rax
int64_t rdx_1
rax, rdx_1 = (*(*rcx + 8))(rcx, arg1)
*(arg1 + 0x38) = rax
int64_t* rcx_1 = *(arg2 + 0x38)

if (rcx_1 == 0)
    return 

rdx_1.b = rcx_1 != arg2
(*(*rcx_1 + 0x20))(rcx_1, rdx_1)
*(arg2 + 0x38) = 0
