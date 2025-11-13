// 函数: sub_140d0dcc0
// 地址: 0x140d0dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d0de20(arg1, arg2)
(*(*arg2 + 0x130))(arg2, arg1 + 0x78)
int64_t rdx_1 = *(arg1 + 0x78)

if (rdx_1 != 0)
    (*(*arg2 + 0x170))(arg2, rdx_1)

int64_t result = (*(*arg2 + 0x130))(arg2, arg1 + 0x70)
int64_t rdx_3 = *(arg1 + 0x70)

if (rdx_3 == 0)
    return result

return (*(*arg2 + 0x170))(arg2, rdx_3)
