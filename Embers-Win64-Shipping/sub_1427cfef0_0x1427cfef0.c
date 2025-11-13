// 函数: sub_1427cfef0
// 地址: 0x1427cfef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x44) != 0)
    uint32_t rbp_1 = zx.d(arg2)
    uint32_t rcx_3 = not.d(rbp_1 << 0xf) + rbp_1
    uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
    uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
    uint64_t rax_9 = zx.q(not.d(rcx_5 << 0xb) + rcx_5)
    int32_t i =
        *(*(arg1 + 0x28) + (((zx.q(rax_9.d) u>> 0x10 ^ rax_9) & zx.q(*(arg1 + 0x34) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *(arg1 + 0x18)
        
        do
            if (*(r8 + zx.q(i) * 0x10) == arg2)
                if (i != 0xffffffff && zx.q(i) << 4 != neg.q(r8))
                    uint32_t var_20_1 = rbp_1
                    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 2, 
                        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
                    "hysXExtensions\src\serialization\SnSerializationRegistry.cpp", 
                        0xb4, 
                        "PxSerializationRegistry::registerSerializer: Type %d has already been registered")
                
                break
            
            i = *(*(arg1 + 0x20) + (zx.q(i) << 2))
        while (i != 0xffffffff)

int16_t arg_8 = arg2
char arg_10
int16_t* result = sub_1427d0ca0(arg1 + 0x10, &arg_8, &arg_10)

if (arg_10 == 0 && result != 0)
    *result = arg2
    *(result + 8) = arg3

return result
