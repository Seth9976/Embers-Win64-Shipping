// 函数: sub_140b40f00
// 地址: 0x140b40f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)
uint32_t result

if ((*(*rcx + 0x70))(rcx).b == 0 || arg3 != 0)
    result.b = 0
else
    result.b = 1

if (*(arg1 + 0x50) == 0 || data_143de542f != 0 || result.b != 0 || data_143de5426 != result.b)
    result.b = 0
else if (data_143de5480 != result.b)
    result.b = GetCurrentThreadId() == data_143de5470
    
    if (result.b == 0 || *(arg1 + 0x3c) == 2)
        result.b = 0
    else
        result.b = 1
else if (*(arg1 + 0x3c) == 2)
    result.b = 0
else
    result.b = 1

if (data_143de5430 == 0 && result.b != 0)
    void* rbx_1 = arg1 + 0x18
    char rax_1 = sub_140ab3dc0(rbx_1)
    int64_t* rcx_2 = *(arg1 + 0x58)
    
    if (rax_1 != 0)
        rbx_1 = arg1
    
    result = (*(*rcx_2 + 0x58))(rcx_2, rbx_1, zx.q(arg2))
    
    if (data_143de5430 != 0)
        int64_t* rbx_2 = *(arg1 + 0x58)
        *(arg1 + 0x51) = 1
        sub_140b26350(rbx_2, 1)
        return sub_140b26350(rbx_2, 1)

return result
