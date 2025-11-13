// 函数: sub_1427cd970
// 地址: 0x1427cd970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434cd5e8

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

class physx::PxAllocatorCallback* rax = physx::shdfnd::getAllocator()
int64_t r8 = *rax
(*(r8 + 0x10))(rax, arg1, r8)
return arg1
