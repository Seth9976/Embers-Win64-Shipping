// 函数: sub_1427f9490
// 地址: 0x1427f9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434d0f48
physx::shdfnd::SListImpl::~SListImpl(arg1[6])
int64_t rdi = arg1[6]

if (rdi != 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x10))(rax_1, rdi, r8_1)

void* rdi_1 = arg1[3]

if (rdi_1 != 0)
    void* rdi_2 = rdi_1 - *(rdi_1 - 8)
    
    if (rdi_1 != *(rdi_1 - 8))
        class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_2
        (*(r8_2 + 0x10))(rax_2, rdi_2, r8_2)

physx::shdfnd::SListImpl::~SListImpl(arg1[4])
int64_t rdi_3 = arg1[4]

if (rdi_3 != 0)
    class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_3
    (*(r8_3 + 0x10))(rax_3, rdi_3, r8_3)

physx::shdfnd::ThreadImpl* rcx_5 = arg1[2]
*arg1 = &data_1434d0f38
physx::shdfnd::ThreadImpl::~ThreadImpl(rcx_5)
int64_t rdi_4 = arg1[2]

if (rdi_4 != 0)
    class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
    int64_t r8_4 = *rax_4
    (*(r8_4 + 0x10))(rax_4, rdi_4, r8_4)

*arg1 = &data_1434d0f28
return &data_1434d0f28
