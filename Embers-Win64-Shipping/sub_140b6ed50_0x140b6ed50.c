// 函数: sub_140b6ed50
// 地址: 0x140b6ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)

if (arg2 == 1)
    WaitForSingleObject(*(arg1 + 0x48), 0xffffffff)

CloseHandle(*(arg1 + 0x48))
*(arg1 + 0x48) = 0
int64_t result
result.b = 1
return result
