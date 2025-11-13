// 函数: sub_141d0e5c0
// 地址: 0x141d0e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 5) == 0 && (*(arg1 + 0x4e) != 0 || (*(arg1 + 0x48) & 0x100) == 0))
    if (*(arg1 - 3) == 0)
        *(arg1 - 0x58) = sub_140a82f30(*(arg1 + 0x28), 0)
    
    *(arg1 - 0x58)
    void* const rdx_1 = arg1
    
    if (arg1 == 0x68)
        rdx_1 = nullptr
    
    sub_141d03310(data_143f36250, rdx_1)

*(arg1 - 8) = 1

if (*(arg1 - 0x48) != 0)
    void* rcx_2 = arg1 - 0x28
    char arg_8 = *(arg1 - 5)
    void* rax_4 = *(arg1 - 0x38)
    void* arg_10 = arg1 - 0x68
    
    if (rax_4 != 0)
        rcx_2 = rax_4
    
    (*(arg1 - 0x48))((*(*rcx_2 + 8))(rcx_2), &arg_8, &arg_10)

EnterCriticalSection(&data_143f366b8)
int64_t* rcx_4 = *(arg1 + 0x30)
*(arg1 + 0x4c) = 0

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

*(arg1 - 7) = 1
return LeaveCriticalSection(&data_143f366b8) __tailcall
