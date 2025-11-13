// 函数: sub_1427d1b90
// 地址: 0x1427d1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
*arg1 = &data_1434cdf08
int32_t i = 0

if (arg1[7].d u> 0)
    do
        physx::shdfnd::ThreadImpl::signalQuit(arg1[1 + 2][zx.q(i) * 8])
        i += 1
    while (i u< arg1[7].d)

physx::shdfnd::SyncImpl* rcx_2 = arg1[5]
*(arg1 + 0x3c) = 1
physx::shdfnd::SyncImpl::set(rcx_2)
int32_t i_1 = 0

if (arg1[7].d u> 0)
    do
        physx::shdfnd::ThreadImpl::waitForQuit(arg1[1 + 2][zx.q(i_1) * 8])
        i_1 += 1
    while (i_1 u< arg1[7].d)
    
    if (arg1[7].d u> 0)
        do
            int64_t* rcx_7 = &arg1[1][zx.q(i_2) * 8]
            (**rcx_7)(rcx_7, 0)
            i_2 += 1
        while (i_2 u< arg1[7].d)

int64_t rdi = arg1[1]

if (rdi != 0)
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_6
    (*(r8_1 + 0x10))(rax_6, rdi, r8_1)

int64_t rdi_1 = arg1[6]

if (rdi_1 != 0)
    class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
    int64_t r8_2 = *rax_7
    (*(r8_2 + 0x10))(rax_7, rdi_1, r8_2)

physx::shdfnd::SyncImpl::~SyncImpl(arg1[5])
int64_t rdi_2 = arg1[5]

if (rdi_2 != 0)
    class physx::PxAllocatorCallback* rax_8 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_8
    (*(r8_3 + 0x10))(rax_8, rdi_2, r8_3)

physx::shdfnd::SListImpl::~SListImpl(arg1[4])
int64_t rdi_3 = arg1[4]

if (rdi_3 != 0)
    class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
    int64_t r8_4 = *rax_9
    (*(r8_4 + 0x10))(rax_9, rdi_3, r8_4)

void* rdi_4 = arg1[2]

if (rdi_4 != 0)
    void* rdi_5 = rdi_4 - *(rdi_4 - 8)
    
    if (rdi_4 != *(rdi_4 - 8))
        class physx::PxAllocatorCallback* rax_10 = physx::shdfnd::getAllocator()
        int64_t r8_5 = *rax_10
        (*(r8_5 + 0x10))(rax_10, rdi_5, r8_5)

physx::shdfnd::SListImpl::~SListImpl(arg1[3])
int64_t rdi_6 = arg1[3]

if (rdi_6 != 0)
    class physx::PxAllocatorCallback* rax_11 = physx::shdfnd::getAllocator()
    int64_t r8_6 = *rax_11
    (*(r8_6 + 0x10))(rax_11, rdi_6, r8_6)

*arg1 = &data_142d5c278
return &data_142d5c278
