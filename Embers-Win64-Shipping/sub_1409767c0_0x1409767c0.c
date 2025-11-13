// 函数: sub_1409767c0
// 地址: 0x1409767c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0x47efffffe0000000
*(arg1 + 0x18) = 0
void* rcx = *(arg1 + 0x20)

if (rcx != 0)
    sub_141c70e50(rcx)
    int64_t* rax_1 = sub_141c5d640(*(arg1 + 0x20))
    
    if (rax_1 != 0 && (rax_1[0x11].b & 1) != 0)
        sub_141efdf10(rax_1)
    
    if (sub_14243afa0(*(arg1 + 0x28)) != 0)
        int64_t* rcx_4 = *(arg1 + 0x28)
        (*(*rcx_4 + 0x400))(rcx_4)
    
    int64_t* rcx_5 = *(arg1 + 0x20)
    *(arg1 + 0x31) = 0
    
    if ((rcx_5[0x11].b & 1) != 0)
        sub_141efdf10(rcx_5)
    
    *(arg1 + 0x20) = 0

*(arg1 + 8) = 0
*(arg1 + 0xf0) = 0
int64_t result = EnterCriticalSection(arg1 + 0x38)
*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    result = sub_1405c5510(arg1 + 0x60, 0)

if (arg1 == -0x38)
    return result

return LeaveCriticalSection(arg1 + 0x38)
