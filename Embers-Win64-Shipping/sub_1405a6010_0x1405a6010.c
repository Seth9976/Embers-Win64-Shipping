// 函数: sub_1405a6010
// 地址: 0x1405a6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* arg_18 = arg3
int64_t _ArgList = arg4
int64_t _BufferCount = sx.q(arg2)
int32_t result =
    __stdio_common_vswprintf(data_143cd5b30, arg1, _BufferCount, arg3, nullptr, &_ArgList)

if (result s< 0)
    result = -1

if (result s>= _BufferCount.d)
    return -1

return result
