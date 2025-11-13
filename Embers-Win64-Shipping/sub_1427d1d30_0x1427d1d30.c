// 函数: sub_1427d1d30
// 地址: 0x1427d1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_3 = zx.q(arg2)
*arg1 = &data_1434cdf08
int32_t* r12 = arg3
sub_1427d2290(&arg1[2], 0x80)
int32_t i_1 = 0
char const* const r14 = "<allocation names disabled>"
uint64_t rbp = zx.q(*physx::shdfnd::SListImpl::getSize())
physx::shdfnd::SListImpl* rax_5

if (rbp == 0)
    rax_5 = nullptr
else
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t rax_2 = PxGetFoundation()
    int64_t rdx = *rax_2
    char const* const rax_4
    
    if ((*(rdx + 0x28))(rax_2, rdx) != 0)
        rax_4 = __std_type_info_name(&data_143cccc28, &data_14401b730)
    else
        rax_4 = "<allocation names disabled>"
    
    rax_5 = (*(*rax_1 + 8))(rax_1, rbp, rax_4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sSList.h", 
        0x67)

arg1[4] = rax_5

if (rax_5 != 0)
    physx::shdfnd::SListImpl::SListImpl(rax_5)

uint64_t rbp_1 = zx.q(*physx::shdfnd::SyncImpl::getSize())
physx::shdfnd::SyncImpl* rax_11

if (rbp_1 == 0)
    rax_11 = nullptr
else
    class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
    int64_t rax_8 = PxGetFoundation()
    int64_t rdx_2 = *rax_8
    
    if ((*(rdx_2 + 0x28))(rax_8, rdx_2) != 0)
        r14 = __std_type_info_name(&data_143cccc58, &data_14401b730)
    
    rax_11 = (*(*rax_7 + 8))(rax_7, rbp_1, r14, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sSync.h", 
        0x5f)

arg1[5] = rax_11

if (rax_11 != 0)
    physx::shdfnd::SyncImpl::SyncImpl(rax_11)

arg1[7].d = i_3.d
*(arg1 + 0x3c) = 0
int32_t* arg_8 = nullptr

if (r12 == 0)
    uint64_t rbp_3 = i_3 << 2
    int32_t* rdx_4
    
    if (rbp_3 != 0)
        class physx::PxAllocatorCallback* rax_12 = physx::shdfnd::getAllocator()
        rdx_4 = (*(*rax_12 + 8))(rax_12, rbp_3, "NonTrackedAlloc", 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\ExtDefaultCpuDispatcher.cpp", 
            0x46)
    else
        rdx_4 = nullptr
    
    arg_8 = rdx_4
    
    if (i_3.d != 0)
        __builtin_memset(rdx_4, 0, rbp_3 u>> 2 << 2)
    
    r12 = rdx_4

uint64_t i_2 = i_3
uint64_t r14_2 = i_3 << 6
int64_t rax_14

if (r14_2 != 0)
    class physx::PxAllocatorCallback* rax_15 = physx::shdfnd::getAllocator()
    rax_14 = (*(*rax_15 + 8))(rax_15, r14_2, "NonTrackedAlloc", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtDefaultCpuDispatcher.cpp", 
        0x4d)
else
    rax_14 = 0

arg1[1] = rax_14
int32_t rax_17 = i_3.d << 5
int64_t rax_18

if (rax_17 != 0)
    class physx::PxAllocatorCallback* rax_19 = physx::shdfnd::getAllocator()
    rax_18 = (*(*rax_19 + 8))(rax_19, zx.q(rax_17), "NonTrackedAlloc", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\E"
    "xtDefaultCpuDispatcher.cpp", 
        0x4f)
else
    rax_18 = 0

arg1[6] = rax_18

if (arg1[1] == 0)
    arg1[7].d = 0
else
    if (i_3.d != 0)
        int64_t rdi_7 = 0
        uint64_t i
        
        do
            void* rcx_11 = arg1[1]
            
            if (rcx_11 != neg.q(rdi_7))
                sub_1427f9330(rcx_11 + rdi_7)
            
            sub_1427f9560(arg1[1] + rdi_7, arg1)
            rdi_7 += 0x40
            i = i_2
            i_2 -= 1
        while (i != 1)
        
        if (i_3.d != 0)
            int64_t r14_4 = 0
            void* r15_3 = nullptr
            
            do
                physx::shdfnd::ThreadImpl::setAffinityMask(*(r14_4 + arg1[1] + 0x10), *r12)
                uint32_t rax_20 = physx::shdfnd::ThreadImpl::getDefaultStackSize()
                class physx::shdfnd::Runnable* rcx_18 = arg1[1] + r14_4
                physx::shdfnd::ThreadImpl::start(*(rcx_18 + 0x10), rax_20, rcx_18)
                int64_t rax_21 = arg1[6]
                
                if (rax_21 != 0)
                    char* rdi_8 = r15_3 + rax_21
                    physx::shdfnd::snprintf(rdi_8, 0x20, "PxWorker%02d")
                    physx::shdfnd::ThreadImpl::setName(*(r14_4 + arg1[1] + 0x10), rdi_8)
                
                i_1 += 1
                r15_3 += 0x20
                r12 = &r12[1]
                r14_4 += 0x40
            while (i_1 u< i_3.d)
    
    if (arg_8 != 0)
        class physx::PxAllocatorCallback* rax_22 = physx::shdfnd::getAllocator()
        (*(*rax_22 + 0x10))(rax_22, arg_8)

return arg1
