// 函数: sub_141915e60
// 地址: 0x141915e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg4 != 0)
    (*(*arg4 + 0x48))(arg4)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    result = (*(*arg4 + 0x48))(arg4)
else
    result = nullptr

int64_t r10 = sx.q(arg3) * 0x28

if (result == 0)
    result = *(arg1 + 0x138)
    __builtin_memset(r10 + result, 0, 0x18)
    *(r10 + result + 0x18) = 0xffffffff
    *(r10 + result + 0x1c) = 1
    *(r10 + result + 0x20) = 0
else
    int32_t r9 = *(arg4 + 0x34)
    int64_t rcx_2 = *(arg1 + 0x138)
    int32_t r8 = *(result + 0x10)
    int32_t rdx_1 = *(result + 0x14)
    *(r10 + rcx_2) = result
    *(r10 + rcx_2 + 8) = 0
    *(r10 + rcx_2 + 0x10) = rdx_1
    *(r10 + rcx_2 + 0x14) = r8
    *(r10 + rcx_2 + 0x18) = 0xffffffff
    
    if (r9 s< 0 || r9 == 1)
        result.b = 0
        *(r10 + rcx_2 + 0x20) = r9
        *(r10 + rcx_2 + 0x1c) = 0
    else
        result.b = 1
        *(r10 + rcx_2 + 0x20) = r9
        *(r10 + rcx_2 + 0x1c) = 1

return result
