// 函数: sub_1427eda50
// 地址: 0x1427eda50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x50)

if (rdi != 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x10))(rax_1, rdi, r8_1)

*(arg1 + 0x50) = 0

if (arg1 != 0x18)
    (*(*(arg1 - 0x18) + 0x18))(arg1 - 0x18, 1)
