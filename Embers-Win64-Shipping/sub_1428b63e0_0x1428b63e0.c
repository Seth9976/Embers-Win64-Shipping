// 函数: sub_1428b63e0
// 地址: 0x1428b63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    void* rcx = *arg1
    
    if (rcx != 0)
        FindClose(*(rcx + 0x250))
        free(*arg1)
        *arg1 = 0
        return 1

*_errno() = 0x16
return 0
