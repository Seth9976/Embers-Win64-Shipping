// 函数: sub_141d0e1d0
// 地址: 0x141d0e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 5) == 0 && (*(arg1 + 0x4e) != 0 || (*(arg1 + 0x48) & 0x100) == 0))
    int64_t rdi_1 = 0
    
    if (*(arg1 + 0x50) != *(arg1 + 0x20) || *(arg1 + 0x58) != *(arg1 + 0x28))
        rdi_1 = sub_140a82f30(*(arg1 + 0x28), 0)
    
    int64_t rbp_1 = *(arg1 - 0x58)
    
    if (*(arg1 - 3) == 0)
        rbp_1 = sub_140a82f30(*(arg1 + 0x58), 0)
    
    void* const rdx_1 = arg1
    
    if (arg1 == 0x68)
        rdx_1 = nullptr
    
    char rax_5 = sub_141d03310(data_143f36250, rdx_1)
    
    if (rax_5 != 0)
        *(arg1 - 0x58) = rbp_1
        int128_t var_28
        int128_t* r8_3 = &var_28
        var_28 = *(arg1 + 0x60)
        
        if (rdi_1 == 0)
            sub_141cff040(rbp_1, *(arg1 + 0x58), r8_3)
        else
            sub_141cff040(rdi_1, *(arg1 + 0x28), r8_3)
            memcpy(*(arg1 - 0x58), *(arg1 + 0x50) - *(arg1 + 0x20) + rdi_1, (*(arg1 + 0x58)).d)
            sub_140a74f90(rdi_1)
    else
        if (*(arg1 - 3) == rax_5)
            sub_140a74f90(rbp_1)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)

*(arg1 - 8) = 1

if (*(arg1 - 0x48) != 0)
    void* rcx_10 = arg1 - 0x28
    char arg_8 = *(arg1 - 5)
    void* rax_7 = *(arg1 - 0x38)
    void* arg_10 = arg1 - 0x68
    
    if (rax_7 != 0)
        rcx_10 = rax_7
    
    (*(arg1 - 0x48))((*(*rcx_10 + 8))(rcx_10), &arg_8, &arg_10)

EnterCriticalSection(&data_143f366b8)
int64_t* rcx_12 = *(arg1 + 0x30)
*(arg1 + 0x4c) = 0

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

*(arg1 - 7) = 1
return LeaveCriticalSection(&data_143f366b8) __tailcall
