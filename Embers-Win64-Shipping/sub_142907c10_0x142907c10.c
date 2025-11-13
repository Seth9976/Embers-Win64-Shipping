// 函数: sub_142907c10
// 地址: 0x142907c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r9 = *arg1

if (r9 == 0)
    *arg3 = 0
    return 0x20

int32_t result = sub_142907fc0(arg1, arg2, &arg1[2], r9)

if ((arg1[0x17].b & 1) == 0)
    char* result_1 = zx.q(result)
    result += 1
    *(result_1 + arg2) = 0xa

*(zx.q(result) + arg2) = 0
*arg1 = 0
*arg3 = result
return result
