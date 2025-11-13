// 函数: sub_142082560
// 地址: 0x142082560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x20)

if (rcx == 0)
    int64_t rax_1
    rax_1.b = false
    return 0

int64_t result
result.b = (*(*rcx + 0x260))(rcx) != 0
return result
