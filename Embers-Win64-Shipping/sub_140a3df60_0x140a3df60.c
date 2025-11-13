// 函数: sub_140a3df60
// 地址: 0x140a3df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t result = (*(*rcx + 0x18))(rcx)
*(arg1 + 0x10) -= 1
int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 == 0)
    return result

jump(*(*rcx_1 + 0x10))
