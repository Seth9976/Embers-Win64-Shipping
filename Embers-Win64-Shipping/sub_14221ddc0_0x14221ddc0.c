// 函数: sub_14221ddc0
// 地址: 0x14221ddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    result = sub_141fe97c0(arg1 + 0x40)
    
    if (result.b == 0)
        void arg_8
        uint64_t rbx_1 = *sub_140b58260(&arg_8, u"DistributionSourceStrength", 1)
        uint32_t rcx_4
        rcx_4.b = (rbx_1 u>> 0x20).d == 0
        
        if ((rcx_4.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        result = sub_140d2dfc0(sub_1424a01d0(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
        *(result + 0x38) = 0x42c80000
        *(arg1 + 0x68) = result

return result
