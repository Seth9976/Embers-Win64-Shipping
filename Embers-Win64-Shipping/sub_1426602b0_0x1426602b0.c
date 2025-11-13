// 函数: sub_1426602b0
// 地址: 0x1426602b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x5c]

if (rcx == 0)
    int64_t result = (*(*arg1 + 0x690))(arg1)
    rcx = arg1[0x5c]
    
    if (rcx == 0)
        return result

jump(*(*rcx + 0x28))
