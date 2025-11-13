// 函数: sub_1427e3e20
// 地址: 0x1427e3e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434cf338

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t r8 = *rax
(*(r8 + 0x10))(rax, arg1, r8)
return arg1
