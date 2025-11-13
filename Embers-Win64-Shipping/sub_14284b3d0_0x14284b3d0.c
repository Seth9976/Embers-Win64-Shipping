// 函数: sub_14284b3d0
// 地址: 0x14284b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0x80070057

int64_t rcx = *arg1

if (rcx != 0)
    _aligned_free(rcx)
    *arg1 = 0

arg1[1] = 0
int64_t rax_1 = _aligned_malloc(arg2, 0x10)
*arg1 = rax_1

if (rax_1 != 0)
    arg1[1] = arg2
    return 0

arg1[1] = rax_1
return 0x8007000e
