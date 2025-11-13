// 函数: sub_142833cbc
// 地址: 0x142833cbc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142833d90(arg1, arg2)
void* rax_1 = *rax
uint64_t result

if (rax_1 == 0)
    *rax = sub_142833f58(arg2, arg3, arg4)
    uint64_t rcx_1 = zx.q(*arg1)
    arg1[1] += 1
    result = zx.q((rcx_1 * 3).d)
    
    if (result.d u<= arg1[1] && rcx_1.d u< 0xd342ab)
        return sub_142833e80(arg1)
else
    *(rax_1 + 8) = arg3
    result = *rax
    *(result + 0x10) = arg4

return result
