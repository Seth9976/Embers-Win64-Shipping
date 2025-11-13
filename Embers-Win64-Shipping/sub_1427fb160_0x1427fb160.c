// 函数: sub_1427fb160
// 地址: 0x1427fb160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427fb0e0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0 || arg1 == 0)
    return arg1

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t r8 = *rax
(*(r8 + 0x10))(rax, arg1, r8)
return arg1
