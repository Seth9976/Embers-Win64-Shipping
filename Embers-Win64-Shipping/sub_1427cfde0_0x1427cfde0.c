// 函数: sub_1427cfde0
// 地址: 0x1427cfde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434cdb48
PxUnregisterPhysicsSerializers()
sub_1427d3130(arg1, arg2)

if (*(arg1 + 0x44) u> 0)
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 2, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\SnSerializationRegistry.cpp", 
        0xa5, 
        "PxSerializationRegistry::release(): some registered PxSerializer instances were not unregistered")

if (*(arg1 + 0x7c) u> 0)
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 2, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\SnSerializationRegistry.cpp", 
        0xab, 
        "PxSerializationRegistry::release(): some registered PxRepXSerializer instances were not "
    "unregistered")

int32_t rax_3 = *(arg1 + 0x8c)

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0)
    int64_t rdi_1 = arg1[0x10]
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_4
        (*(r8_1 + 0x10))(rax_4, rdi_1, r8_1)

int64_t rdi_2 = arg1[9]

if (rdi_2 != 0)
    class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
    int64_t r8_2 = *rax_5
    (*(r8_2 + 0x10))(rax_5, rdi_2, r8_2)

int64_t rdi_3 = arg1[2]

if (rdi_3 != 0)
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_6
    (*(r8_3 + 0x10))(rax_6, rdi_3, r8_3)

*arg1 = &data_1434cdb00
return &data_1434cdb00
