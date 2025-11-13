// 函数: sub_142b3bb20
// 地址: 0x142b3bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_142b3a090(arg1, arg2, arg3, arg4, &arg_8)
int32_t rdx = arg_8

if (rdx != 0)
    if ((rdx.b & 0xdd) != 0)
        if (not(test_bit(rdx, 0x1e)))
            *arg1 = 1
            arg1[2].w = 0x20
        else
            rdx &= 0xbfffffff
    
    sub_142b38f50(arg4, rdx)

return arg1
