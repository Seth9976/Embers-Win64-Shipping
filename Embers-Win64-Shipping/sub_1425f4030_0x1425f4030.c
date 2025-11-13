// 函数: sub_1425f4030
// 地址: 0x1425f4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) != 0)
    sub_1425f4310(arg1)

EnterCriticalSection(arg1 + 0x50)
int64_t* rcx_1 = *(arg1 + 0xa0)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x20))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0xa0)
    
    if (rcx_2 != 0)
        *(arg1 + 0xa0) = 0
        (**rcx_2)(rcx_2, 1)

if (arg1 != -0x50)
    LeaveCriticalSection(arg1 + 0x50)

int64_t result = EnterCriticalSection(arg1 + 0x78)
int64_t* rcx_5 = *(arg1 + 0xa8)

if (rcx_5 != 0)
    result = (*(*rcx_5 + 0x20))(rcx_5)
    int64_t* rcx_6 = *(arg1 + 0xa8)
    
    if (rcx_6 != 0)
        *(arg1 + 0xa8) = 0
        result = (**rcx_6)(rcx_6, 1)

if (arg1 == -0x78)
    return result

return LeaveCriticalSection(arg1 + 0x78)
