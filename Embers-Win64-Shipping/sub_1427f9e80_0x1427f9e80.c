// 函数: sub_1427f9e80
// 地址: 0x1427f9e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427f9e00(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0 || arg1 == 0)
    return arg1

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t r8 = *rax
(*(r8 + 0x10))(rax, arg1, r8)
return arg1
