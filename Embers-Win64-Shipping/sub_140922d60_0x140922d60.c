// 函数: sub_140922d60
// 地址: 0x140922d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x20))(arg2)
int64_t r8 = *arg1
int32_t result

if ((*(r8 + 0x20))(arg1, arg3, r8) == rax_1)
    int64_t count = sx.q((*(*arg1 + 0x20))(arg1))
    int64_t buffer2 = (*(*arg2 + 0x18))(arg2)
    int64_t rdx = *arg1
    
    if (memcmp((*(rdx + 0x18))(arg1, rdx), buffer2, count) == 0)
        result.b = 1
        return result

result.b = 0
return result
