// 函数: sub_141cfd370
// 地址: 0x141cfd370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x88)
*(arg1 + 0x88) += 1
int32_t result = rax + 1

if (result == 1 && *(arg1 + 0x90) != 0)
    void* var_10_1 = arg1 + 0x91
    int64_t var_18_1 = *(arg1 + 0x78)
    sub_141d05a20(*(arg1 + 0x68), arg1 + 0x98, arg1, *(arg1 + 0x70))
    result = *(arg1 + 0xa0)
    
    if (result == *(arg1 + 0xcc))
        *(arg1 + 0x90) = 0
        return sub_140a536a0(arg1) __tailcall

return result
