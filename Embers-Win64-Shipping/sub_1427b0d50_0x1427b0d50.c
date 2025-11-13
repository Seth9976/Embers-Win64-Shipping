// 函数: sub_1427b0d50
// 地址: 0x1427b0d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (*(arg1 + 0x20) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x28)

int64_t result = (*(*rcx + 0x28))(rcx)

if (*(arg1 + 0x40) != 0 && *(arg1 + 0x48) != 0)
    int64_t* rcx_1 = *(arg1 + 0x48)
    result = (*(*rcx_1 + 0x18))(rcx_1)

*(arg1 + 0x53) = 0
return result
