// 函数: sub_1427d2510
// 地址: 0x1427d2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::shdfnd::SListEntry* rax = physx::shdfnd::SListImpl::pop(*(arg1 + 8))

if (rax == 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t rax_2 = PxGetFoundation()
    int64_t rdx = *rax_2
    char const* const rax_4
    
    if ((*(rdx + 0x28))(rax_2, rdx) != 0)
        rax_4 = __std_type_info_name(&data_143ccccc0, &data_14401b730)
    else
        rax_4 = "<allocation names disabled>"
    
    int64_t rax_5 = (*(*rax_1 + 8))(rax_1, 0x37, rax_4, 
        "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\E"
    "xtSharedQueueEntryPool.h", 
        0x7f)
    
    if (rax_5 == 0)
        return rax_5
    
    rax = (rax_5 + 0x17) & 0xfffffffffffffff0
    *(rax - 8) = rax - rax_5
    *rax = 0
    *(rax + 0x10) = 0

*(rax + 8) = arg2
return rax
