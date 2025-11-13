// 函数: sub_140a4c9a0
// 地址: 0x140a4c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x63) == 0)
    int64_t* rcx = *(arg1 + 0x70)
    *(arg1 + 0x10) = (*(*rcx + 0x78))(rcx, *(arg1 + 0x78))

*(arg1 + 0x60) = 1

if (*(arg1 + 0x20) != 0)
    void* rcx_1 = arg1 + 0x40
    char arg_8 = *(arg1 + 0x63)
    void* rax_3 = *(arg1 + 0x30)
    void* arg_10 = arg1
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(arg1 + 0x20))((*(*rcx_1 + 8))(rcx_1), &arg_8, &arg_10)

*(arg1 + 0x61) = 1
