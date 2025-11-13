// 函数: sub_140ce0dd0
// 地址: 0x140ce0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[4]

if (rcx != 0)
    char result = (*(*rcx + 0x1b8))(rcx)
    
    if (result == 0)
        return result

jump(*(*arg1 + 0x1b8))
