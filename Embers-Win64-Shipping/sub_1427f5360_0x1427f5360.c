// 函数: sub_1427f5360
// 地址: 0x1427f5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 0)
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 8, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Binary\SnConvX.cpp", 
        0x6f, 
        "PxBinaryConverter: metadata not defined. Call PxBinaryConverter::setMetaData first.\n")
    int64_t result
    result.b = 0
    return result

sub_142811560(arg1)
sub_142817330(arg1)
uint64_t rbp
rbp.b = 0

if (*(arg1 + 0x160) != 0)
    if (arg3 == 0)
        physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), arg3 + 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\serialization\Binary\SnConvX.cpp", 
            arg3 + 0x7c, "PxBinaryConverter: source serialized data size is zero.\n")
        return 0
    
    int64_t rdi_2
    
    if (arg3 != 0xffffff80)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        rdi_2 = (*(*rax_4 + 8))(rax_4, zx.q(arg3 + 0x80), "NonTrackedAlloc", 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\serialization\Binary\SnConvX.cpp", 
            0x81)
    else
        rdi_2 = 0
    
    int32_t* rbp_2 = (rdi_2 + 0x80) & 0xffffffffffffff80
    int32_t rax_7
    int64_t r9_1
    rax_7, r9_1 = (**arg2)(arg2, rbp_2, zx.q(arg3))
    
    if (rax_7 != arg3)
        physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
            "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\s"
        "rc\serialization\Binary\SnConvX.cpp", 
            0x87, "PxBinaryConverter: failure on reading source serialized data.\n")
    label_1427f5485:
        
        if (rdi_2 == 0)
            return 0
        
        class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_9
        (*(r8_1 + 0x10))(rax_9, rdi_2, r8_1)
        return 0
    
    sub_142817350(arg1, 1, "\n\nConverting...\n\n", r9_1)
    
    if (sub_142816a70(arg1, arg4) == 0)
        goto label_1427f5485
    
    rbp = zx.q(sub_1428113b0(arg1, rbp_2, arg3))
    sub_142816ae0(arg1)
    
    if (rdi_2 != 0)
        class physx::PxAllocatorCallback* rax_11 = physx::shdfnd::getAllocator()
        int64_t r8_3 = *rax_11
        (*(r8_3 + 0x10))(rax_11, rdi_2, r8_3)

return rbp.b
