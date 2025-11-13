// 函数: sub_1427f9570
// 地址: 0x1427f9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = physx::shdfnd::ThreadImpl::getId()
physx::shdfnd::ThreadImpl* rcx = *(arg1 + 0x10)
*(arg1 + 0x38) = rax

if (physx::shdfnd::ThreadImpl::quitIsSignalled(rcx) == 0)
    bool i
    
    do
        sub_1427d2230(*(arg1 + 0x28))
        class physx::shdfnd::SListEntry* rax_2 = physx::shdfnd::SListImpl::pop(*(arg1 + 0x30))
        class physx::shdfnd::SListEntry* rbx_1
        
        if (rax_2 != 0)
            rbx_1 = *(rax_2 + 8)
            
            if (*(rax_2 + 0x10) == 0)
                void* rdi_2 = rax_2 - *(rax_2 - 8)
                
                if (rax_2 != *(rax_2 - 8))
                    class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
                    int64_t r8_1 = *rax_3
                    (*(r8_1 + 0x10))(rax_3, rdi_2, r8_1)
            else
                *(rax_2 + 8) = 0
                physx::shdfnd::SListImpl::push(*(arg1 + 0x20), rax_2)
        
        if (rax_2 != 0 && rbx_1 != 0)
            goto label_1427f9614
        
        class physx::shdfnd::SListEntry* rax_4 = sub_1427d21d0(*(arg1 + 0x28))
        rbx_1 = rax_4
        
        if (rax_4 == 0)
            physx::shdfnd::SyncImpl::wait(*(*(arg1 + 0x28) + 0x28), 0xffffffff)
        else
        label_1427f9614:
            *(*(arg1 + 0x28) + 0x3d)
            (*(*rbx_1 + 8))(rbx_1)
            (*(*rbx_1 + 0x30))(rbx_1)
        
        i = physx::shdfnd::ThreadImpl::quitIsSignalled(*(arg1 + 0x10))
    while (i == 0)

return physx::shdfnd::ThreadImpl::quit(*(arg1 + 0x10)) __tailcall
