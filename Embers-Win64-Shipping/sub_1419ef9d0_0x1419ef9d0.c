// 函数: sub_1419ef9d0
// 地址: 0x1419ef9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[0x11].b & 3

if (result == 3)
    (*(*arg1 + 0x2e8))()
    sub_141efe1c0(arg1, nullptr)
    result = arg1[0x11].b
    
    if ((result & 2) == 0 && (result & 1) != 0)
        (*(*arg1 + 0x2d0))(arg1, 0)
        return sub_141efe1c0(arg1, nullptr) __tailcall

return result
