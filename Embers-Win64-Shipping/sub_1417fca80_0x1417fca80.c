// 函数: sub_1417fca80
// 地址: 0x1417fca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int64_t result = (*(*rcx + 0x50))(rcx)
int64_t* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    result = (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    result = (**rcx_2)(rcx_2, 1)

data_143ef9cb8 = 0
return result
