// 函数: sub_14284d590
// 地址: 0x14284d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t rcx = arg1[9]

if (rcx != 0)
    j_sub_140a74f90(rcx)
    arg1[9] = 0

int64_t rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    _aligned_free(rcx_1)
    arg1[0xa] = 0

__builtin_memset(&arg1[2], 0, 0x38)
return 0
