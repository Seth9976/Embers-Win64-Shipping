// 函数: sub_1427d0000
// 地址: 0x1427d0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_10 = arg2
int64_t result

if (*(arg1 + 0x44) == 0)
labelid_4:
    result = 0
else
    uint32_t rcx = zx.d(arg2)
    uint32_t rcx_1 = rcx + not.d(rcx << 0xf)
    uint32_t rcx_2 = ((zx.q(rcx_1 u>> 0xa) ^ zx.q(rcx_1)) * 9).d
    uint32_t rcx_3 = rcx_2 ^ rcx_2 u>> 6
    uint64_t rax_12 = zx.q(not.d(rcx_3 << 0xb) + rcx_3)
    int32_t rax_14 =
        *(*(arg1 + 0x28) + (((zx.q(rax_12.d) u>> 0x10 ^ rax_12) & zx.q(*(arg1 + 0x34) - 1)) << 2))
    
    if (rax_14 == 0xffffffff)
    label_1427d008a:
        result = 0
    else
        int64_t r9_1 = *(arg1 + 0x18)
        
        while (*(r9_1 + zx.q(rax_14) * 0x10) != arg2)
            rax_14 = *(*(arg1 + 0x20) + (zx.q(rax_14) << 2))
            
            if (rax_14 == 0xffffffff)
                goto label_1427d008a_2
        
        if (rax_14 == 0xffffffff)
        label_1427d008a_1:
            result = 0
        else
            uint64_t rcx_12 = zx.q(rax_14) << 4
            
            if (rcx_12 == neg.q(r9_1))
            label_1427d008a_2:
                result = 0
            else
                result = *(rcx_12 + r9_1 + 8)

if (sub_1427d0e80(arg1 + 0x10, &arg_10) == 0)
    uint32_t var_10_1 = zx.d(arg2)
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 2, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\SnSerializationRegistry.cpp", 
        0xc2, 
        "PxSerializationRegistry::unregisterSerializer: failed to find PxSerializer instance for type %d")

return result
