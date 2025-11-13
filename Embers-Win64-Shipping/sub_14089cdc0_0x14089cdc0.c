// 函数: sub_14089cdc0
// 地址: 0x14089cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d
int64_t* rcx = *arg1

if (result == 1)
    result = rcx[0xd].d
    
    if ((result.b & 2) == 0)
        rcx[0xd].d = result | 2
        jump(*(*rcx + 0x80))
else if (result == 2)
    result = rcx[0xd].d
    
    if ((result.b & 4) == 0)
        rcx[0xd].d = result | 4
        jump(*(*rcx + 0x80))

return result
