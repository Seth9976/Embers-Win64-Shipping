// 函数: sub_140fc9eb0
// 地址: 0x140fc9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg5

if (*(*(*rsi + 0xa0))(rsi, &arg5) != *(arg1 + 0x20))
    int64_t* result
    result.b = 0
    return result

int32_t tolen = (*(*rsi + 0xf8))(rsi)
int32_t rax_2 = sendto(*(arg1 + 0x28), arg2, arg3, 0, &rsi[1], tolen)
*arg4 = rax_2
uint8_t rbx_2 = (rax_2 u>> 0x1f).b ^ 1

if (rbx_2 != 0)
    QueryPerformanceCounter(&arg5)
    *(arg1 + 0x30) = float.d(arg5) f* data_143d796f8 f+ 16777216.0

return zx.q(rbx_2)
