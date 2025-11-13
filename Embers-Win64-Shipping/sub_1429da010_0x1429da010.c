// 函数: sub_1429da010
// 地址: 0x1429da010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
int64_t _ArgList = arg4
*arg1 = arg2
arg1[1] = 0

if (arg3 != 0)
    arg1[1] = 1
    __stdio_common_vsprintf(data_143cd5b30 | 2, &arg1[2], 0x4f, arg3, nullptr, &_ArgList)
    *(arg1 + 0x57) = 0

if (arg1[0x16] == 0)
    return 

longjmp(&arg1[0x18], *arg1)
breakpoint
