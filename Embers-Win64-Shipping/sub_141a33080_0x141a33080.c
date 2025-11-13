// 函数: sub_141a33080
// 地址: 0x141a33080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xd8)

if (rcx != 0)
    sub_140a74f90(rcx)

char result = *(arg1 + 0xa8)

if ((result & 1) != 0)
    void* rcx_1 = arg1 + 0x98
    
    if ((result & 2) == 0)
        rcx_1 = *(arg1 + 0x98)
    
    *(arg1 + 0xa8) = result & 0xfe
    result = (**rcx_1)(rcx_1, 0)
    
    if ((*(arg1 + 0xa8) & 2) == 0)
        result = sub_140a74f90(*(arg1 + 0x98))

int64_t rcx_3 = *(arg1 + 0x28)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 8)

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
