// 函数: sub_1426990a0
// 地址: 0x1426990a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dbb100(arg1)
uint64_t result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    if (*(result + 0x120) == 0)
        jump(*(*arg1 + 0x628))
    
    result = zx.q(arg1[0x45].b)
    
    if (result.b == 0)
        jump(*(*arg1 + 0x628))
    
    if (result.b == 1)
        jump(*(*arg1 + 0x630))

return result
