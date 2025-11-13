// 函数: sub_141c31810
// 地址: 0x141c31810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141c37bf0(arg1, sub_141c37910(*(arg1 + 0x38)))
int64_t* rcx_2 = *(arg1 + 0x40)

if (rcx_2 != 0)
    result = (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *(arg1 + 0x38)

if (rcx_3 != 0)
    result = (**rcx_3)(rcx_3, 1)

int64_t rcx_4 = *(arg1 + 0x28)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x18)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
