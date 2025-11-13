// 函数: sub_1427cd9f0
// 地址: 0x1427cd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
void* result

if (arg3 != 0)
    int32_t rbx_1 = 0
    
    if (arg2 != 0)
        do
            int64_t r15_1 = *rdi
            int16_t rbp_1 = rdi[1].w
            result = (*(*arg3 + 0x50))(arg3, r15_1)
            
            if (result == 0)
                int64_t var_30_1 = r15_1
                physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                "hysXExtensions\src\serialization\Binary\SnBinaryDeserialization.cpp", 
                    0x87, 
                    "PxSerialization::createCollectionFromBinary: External reference %I64u expected in "
                "externalRefs collection but not found.")
                result.b = 0
                return result
            
            if (*(result + 8) != rbp_1)
                uint32_t var_28_1 = zx.d(*(result + 8))
                int64_t var_30
                var_30.d = zx.d(rbp_1)
                physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
                    "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                "hysXExtensions\src\serialization\Binary\SnBinaryDeserialization.cpp", 
                    0x8c, 
                    "PxSerialization::createCollectionFromBinary: External reference %d type mismatch. "
                "Expected %d but found %d in externalRefs collection.")
                result.b = 0
                return result
            
            rbx_1 += 1
            rdi = &rdi[2]
        while (rbx_1 u< arg2)
    
    result.b = 1
else if (arg2 == 0)
    result.b = 1
else
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), (arg3 + 4).d, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Binary\SnBinaryDeserialization.cpp", 
        (arg3 + 0x79).d, 
        "PxSerialization::createCollectionFromBinary: External references needed but no externalRefs "
    "collection specified.")
    result.b = 0

return result
