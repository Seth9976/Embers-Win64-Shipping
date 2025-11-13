// 函数: sub_14040c040
// 地址: 0x14040c040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg3 + 1
int32_t rax = arg3
int32_t r10 = r11

if (arg2 s< r11)
    r10 = arg2

if (arg2 s> r11)
    r11 = arg2

if (arg2 s< arg3)
    rax = arg2

if (arg2 s> arg3)
    arg3 = arg2

return sub_1403fe640(arg4, sub_14040c0d0(arg2, arg1), 
    *((&data_143701ca0)[sx.q(rax)] + (sx.q(arg3) << 2))
        + *((&data_143701ca0)[sx.q(r10)] + (sx.q(r11) << 2))) __tailcall
