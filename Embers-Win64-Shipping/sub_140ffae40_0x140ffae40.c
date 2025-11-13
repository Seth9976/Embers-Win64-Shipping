// 函数: sub_140ffae40
// 地址: 0x140ffae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_3

if (arg3 != 0)
    char rax_2 = 0x1c
    int64_t* rcx_1 = *(arg1 + 0x168)
    
    if (*(arg3 + 0x18) == 2)
        rax_2 = 0x20
    
    int64_t* arg_10 = nullptr
    sub_140fe44e0(rcx_1, *(arg3 + 0x40), 0, 0xffffffff, rax_2, &arg_10)
    sub_140ffc4c0(arg2, arg_10, arg3 + 0x28)
    rcx_3 = arg_10
else
    int64_t* rcx = *(arg2 + 0x18)
    *(arg2 + 0x18) = arg3
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    rcx_3 = *(arg2 + 0x20)
    *(arg2 + 0x20) = 0

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)
