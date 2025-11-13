// 函数: sub_141f23590
// 地址: 0x141f23590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3930(arg1, arg2)
int32_t rdx = arg2[6].d
uint8_t result = (rdx u>> 0x16).b

if ((result & 1) == 0)
    if (((rdx u>> 0xc).b & 1) == 0)
        return result
    
    if ((arg2[5].b & 1) == 0 && data_143de542d == 0)
        jump(*(*arg2 + 0x150))

return (*(*arg2 + 0x130))(arg2, arg1 + 0x200)
