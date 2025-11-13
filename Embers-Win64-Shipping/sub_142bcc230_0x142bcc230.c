// 函数: sub_142bcc230
// 地址: 0x142bcc230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 & 0xffffff00) == 0)
    void* const rdx = &data_143688018
    
    if ((arg2.b & 4) != 0)
        rdx = &data_143688038
    
    return sub_142b96aa0(arg1, rdx, arg3)

char arg_20
int32_t result = sub_142b96aa0(arg1, &data_143688058, &arg_20)

if (result != 0)
    return result

*arg3 = zx.w(arg_20) - 0x80
arg3[1] = zx.w(arg4) - 0x80
arg3[2] = zx.w(arg5) - 0x80
arg3[3] = zx.w(arg6) - 0x80
arg3[4] = zx.w(arg7) - 0x80
arg3[5] = 0
return result
