// 函数: sub_14227a970
// 地址: 0x14227a970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x2a8)

if (result != 0)
    *(result + 0x28) = arg2

int64_t* rcx = *(arg1 + 0x2b8)

if (rcx == 0)
    return result

int128_t zmm0 = *arg3
int64_t rax = *rcx
int128_t var_18 = zmm0
return (*(rax + 0x758))(zmm0, arg2, &var_18)
