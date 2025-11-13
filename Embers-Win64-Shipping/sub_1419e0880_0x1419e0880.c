// 函数: sub_1419e0880
// 地址: 0x1419e0880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 8)
int64_t result = sx.q(*(arg1 + 0x10))

for (void* rsi = &i[result]; i != rsi; i = &i[1])
    if (*i != 0)
        result = (*(*arg3 + 0x38))(arg3, i, arg2, 0)

return result
