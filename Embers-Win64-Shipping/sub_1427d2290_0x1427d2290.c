// 函数: sub_1427d2290
// 地址: 0x1427d2290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = zx.q(arg2)
char const* const rsi = "<allocation names disabled>"
uint64_t rdi = zx.q(*physx::shdfnd::SListImpl::getSize())
physx::shdfnd::SListImpl* rax_5

if (rdi == 0)
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
    
    rax_5 = (*(*rax_1 + 8))(rax_1, rdi, rax_4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sSList.h", 
        0x67)

arg1[1] = rax_5

if (rax_5 != 0)
    physx::shdfnd::SListImpl::SListImpl(rax_5)

void* const rcx_6

if (i_1.d == 0)
    rcx_6 = nullptr
label_1427d23b1:
    *arg1 = rcx_6
    
    if (rcx_6 != 0 && i_1.d != 0)
        int64_t rdi_3 = 0
        int64_t rsi_1 = 0
        uint64_t i
        
        do
            void* rcx_7 = *arg1
            int64_t* rcx_8 = rcx_7 + rdi_3
            
            if (rcx_7 != neg.q(rdi_3))
                *rcx_8 = 0
                rcx_8[1] = 0
                rcx_8[2].b = 1
            
            physx::shdfnd::SListImpl::push(arg1[1], *arg1 + rsi_1)
            rsi_1 += 0x20
            rdi_3 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t rax_7 = PxGetFoundation()
    int64_t rdx_2 = *rax_7
    
    if ((*(rdx_2 + 0x28))(rax_7, rdx_2) != 0)
        rsi = __std_type_info_name(&data_143ccccc0, &data_14401b730)
    
    int64_t rax_10 = (*(*rax_6 + 8))(rax_6, (i_1 << 5) + 0x17, rsi, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
    "xtSharedQueueEntryPool.h", 
        0x57)
    
    if (rax_10 != 0)
        rcx_6 = (rax_10 + 0x17) & 0xfffffffffffffff0
        *(rcx_6 - 8) = rcx_6 - rax_10
        goto label_1427d23b1
    
    *arg1 = 0
return arg1
