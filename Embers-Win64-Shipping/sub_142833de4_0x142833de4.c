// 函数: sub_142833de4
// 地址: 0x142833de4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_142833d90(arg1, arg2)
int64_t* result_1 = result
void* rcx = *result

if (rcx == 0)
    *result_1 = sub_142833f58(arg2, arg3, arg4)
    uint64_t rcx_3 = zx.q(*arg1)
    arg1[1] += 1
    result = zx.q((rcx_3 * 3).d)
    
    if (result.d u<= arg1[1] && rcx_3.d u< 0xd342ab)
        return sub_142833e80(arg1)
else
    int64_t r9 = *(arg1 + 0x10)
    
    if (r9 != 0)
        result = r9(*(rcx + 8), zx.q(*(rcx + 0x10)))
        rcx = *result_1
    
    *(rcx + 8) = arg3

return result
