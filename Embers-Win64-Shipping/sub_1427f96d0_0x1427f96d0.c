// 函数: sub_1427f96d0
// 地址: 0x1427f96d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434d0f38
physx::shdfnd::ThreadImpl::~ThreadImpl(arg1[2])
int64_t rsi = arg1[2]

if (rsi != 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x10))(rax_1, rsi, r8_1)

*arg1 = &data_1434d0f28

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
int64_t r8_2 = *rax_2
(*(r8_2 + 0x10))(rax_2, arg1, r8_2)
return arg1
