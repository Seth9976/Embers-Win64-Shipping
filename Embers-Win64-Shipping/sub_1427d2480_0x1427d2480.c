// 函数: sub_1427d2480
// 地址: 0x1427d2480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::shdfnd::SListEntry* rax = physx::shdfnd::SListImpl::pop(*arg1)

if (rax == 0)
    return rax

int64_t rdi = *(rax + 8)

if (*(rax + 0x10) != 0)
    *(rax + 8) = 0
    physx::shdfnd::SListImpl::push(*(arg2 + 8), rax)
    return rdi

void* rbx_1 = rax - *(rax - 8)

if (rax != *(rax - 8))
    class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x10))(rax_2, rbx_1, r8_1)

return rdi
