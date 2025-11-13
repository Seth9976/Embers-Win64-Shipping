// 函数: sub_1421f8740
// 地址: 0x1421f8740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rsi = 0

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= arg1[0x20].d)
        break
    
    rsi |= 1 << (sub_141ffde70(zx.d(*(sx.q(i) + arg1[0x1f]))) u% 0x20)

char arg_c = 0
int64_t result = rsi.q
arg1[0x21] = result
return result
