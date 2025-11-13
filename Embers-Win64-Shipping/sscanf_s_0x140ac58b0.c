// 函数: sscanf_s
// 地址: 0x140ac58b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t _ArgList = arg3
int64_t r9
int64_t arg_20 = r9
int32_t result = __stdio_common_vsprintf(data_143cd5b30 | 2, arg1, 0x400, arg2, nullptr, &_ArgList)

if (result s< 0)
    result = -1

if (result != 0xffffffff && result s< 0x400)
    return result

return -1
