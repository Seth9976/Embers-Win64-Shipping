// 函数: sub_141bbb3d0
// 地址: 0x141bbb3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi

if (arg2.d s< 0 || arg2.d s>= *(arg1 + 0x2f0))
    rsi = 0
else
    arg2 = sx.q(arg2.d)
    rsi = *(*(arg1 + 0x2e8) + (arg2 << 3))

int64_t* result = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218, arg2)

if (result == 0)
    return result

int64_t rdx = *(arg1 + 0x218)
int32_t rax_3 = (*(rdx + 0x50))(arg1 + 0x218, rdx)
int64_t arg_8 = rsi
int64_t rax_4 = sub_141bca720(result, &arg_8)
result[0xec].b = 1
result[0xdd] = rax_4
result[0xde].d = rax_3
return sub_140f89930(result)
