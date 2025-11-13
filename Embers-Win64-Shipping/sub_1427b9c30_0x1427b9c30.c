// 函数: sub_1427b9c30
// 地址: 0x1427b9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_4

if (*(arg1 + 0x30) != 0)
    void* rax_1 = *(arg1 + 0x40)
    void* rcx = arg1 + 0x50
    
    if (rax_1 != 0)
        rcx = rax_1
    
    rax_4 = (*(arg1 + 0x30))((*(*rcx + 8))(rcx), arg3)

if (*(arg1 + 0x30) != 0 && rax_4 == 0)
    arg2[1].d = 2
    *arg2 = nullptr
else
    int64_t rax_5 = *(arg1 + 0x78)
    
    if (rax_5 == data_143e1df78)
        if (*(arg3 + 0x20) == 0)
            arg2[1].d = 2
            *arg2 = nullptr
        else
            arg2[1].d = 1
            *arg2 = arg1
    else if (*(arg3 + 8) != rax_5 || *(arg3 + 0x20) == 0)
        arg2[1].d = 2
        *arg2 = nullptr
    else
        arg2[1].d = 1
        *arg2 = arg1

arg2[3] = 0
arg2[2].d = 0x7f7fffff
*(arg2 + 0xc) = 0x63
return arg2
