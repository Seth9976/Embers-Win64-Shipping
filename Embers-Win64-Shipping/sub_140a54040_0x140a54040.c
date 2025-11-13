// 函数: sub_140a54040
// 地址: 0x140a54040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t _ArgList = arg4
int64_t _BufferCount = sx.q(arg2)
int32_t result =
    __stdio_common_vsprintf(data_143cd5b30 | 2, arg1, _BufferCount, arg3, nullptr, &_ArgList)

if (result s< 0)
    result = -1

bool cond:1_1

if (result != 0xffffffff)
    cond:1_1 = result s>= _BufferCount.d

if (result == 0xffffffff || result s>= _BufferCount.d)
    result = -1
    cond:1_1 = 0xffffffff s>= _BufferCount.d

if (cond:1_1)
    return -1

return result
