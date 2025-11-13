// 函数: sub_1427f9330
// 地址: 0x1427f9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434d0f38
char const* const rdi = "<allocation names disabled>"
uint64_t rsi = zx.q(*physx::shdfnd::ThreadImpl::getSize())
physx::shdfnd::ThreadImpl* rax_5

if (rsi == 0)
    rax_5 = nullptr
else
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t rax_2 = PxGetFoundation()
    int64_t rdx_1 = *rax_2
    char const* const rax_4
    
    if ((*(rdx_1 + 0x28))(rax_2, rdx_1) != 0)
        rax_4 = __std_type_info_name(&data_143cccfc8, &data_14401b730)
    else
        rax_4 = "<allocation names disabled>"
    
    rax_5 = (*(*rax_1 + 8))(rax_1, rsi, rax_4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sThread.h", 
        0xe5)

arg1[2] = rax_5

if (rax_5 != 0)
    physx::shdfnd::ThreadImpl::ThreadImpl(rax_5)

*arg1 = &data_1434d0f48
sub_1427d2290(&arg1[3], 0x80)
uint64_t rsi_1 = zx.q(*physx::shdfnd::SListImpl::getSize())
physx::shdfnd::SListImpl* rax_11

if (rsi_1 == 0)
    rax_11 = nullptr
else
    class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
    int64_t rax_8 = PxGetFoundation()
    int64_t rdx_3 = *rax_8
    
    if ((*(rdx_3 + 0x28))(rax_8, rdx_3) != 0)
        rdi = __std_type_info_name(&data_143cccc28, &data_14401b730)
    
    rax_11 = (*(*rax_7 + 8))(rax_7, rsi_1, rdi, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PxShared\src\foundation\include\P"
    "sSList.h", 
        0x67)

arg1[6] = rax_11

if (rax_11 != 0)
    physx::shdfnd::SListImpl::SListImpl(rax_11)

arg1[7] = 0
return arg1
