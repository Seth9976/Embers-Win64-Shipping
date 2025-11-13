// 函数: sub_142815900
// 地址: 0x142815900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)

if (rdi != 0)
    sub_142814080(rdi)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x10))(rax_1, rdi, r8_1)
    *(arg1 + 0x10) = 0

void* rdi_1 = *(arg1 + 8)

if (rdi_1 == 0)
    return 

sub_142814080(rdi_1)
class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
int64_t r8_2 = *rax_2
(*(r8_2 + 0x10))(rax_2, rdi_1, r8_2)
*(arg1 + 8) = 0
