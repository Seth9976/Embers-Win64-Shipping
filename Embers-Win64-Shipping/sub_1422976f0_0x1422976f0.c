// 函数: sub_1422976f0
// 地址: 0x1422976f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142289bf0(arg1, arg2)
__builtin_memset(arg1, 0, 0x18)
int32_t result = arg3 & 0xfffffff0
arg1[0xb].d = 0x80000000

do
    arg1[(zx.q(result) & 7) + 3] = 0
    
    if ((result.b & 7) u>= 7)
        result |= 8
    else
        result ^= ((result + 1) ^ result) & 7
while (((result u>> 3).b & 1) == 0)

arg1[0x13] = 0
return result
