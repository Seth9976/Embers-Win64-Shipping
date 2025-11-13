// 函数: sub_140bc37b0
// 地址: 0x140bc37b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x63) = 1
*(arg1 + 0x60) = 1

if (*(arg1 + 0x20) != 0)
    void* rax_1 = *(arg1 + 0x30)
    void* arg_10 = arg1
    void* rcx = arg1 + 0x40
    char arg_8 = 1
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(arg1 + 0x20))((*(*rcx + 8))(rcx), &arg_8, &arg_10)

*(arg1 + 0x61) = 1
int64_t* rcx_2 = *(arg1 + 0x78)
int64_t result = (*(*rcx_2 + 0x10))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x78)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)
    result = sub_140a4fc50(*(arg1 + 0x78))
    *(arg1 + 0x78) = 0

return result
