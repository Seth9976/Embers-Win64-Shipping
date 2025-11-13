// 函数: sub_1405b2850
// 地址: 0x1405b2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141ed55e0(arg1, arg2)

if ((*(arg1 + 0x8a) & 1) != 0)
    int64_t arg_8
    
    if (arg1[0x3e] == 0)
        uint64_t rbx_1 = *sub_140b58260(&arg_8, u"SceneCapture", 1)
        uint32_t rcx_3
        rcx_3.b = (rbx_1 u>> 0x20).d == 0
        
        if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_3 = sub_140d2dfc0(sub_142587970(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
        arg1[0x3e] = rax_3
        arg_8 = 0
        sub_141f32b40(rax_3, arg1, &data_143f3f280, 0)
        *(arg1[0x3e] + 0x1f0) = 2
        void* rax_5 = arg1[0x3e]
        *(rax_5 + 0x1f2) &= 0xfe
        void* rax_6 = arg1[0x3e]
        *(rax_6 + 0x1f2) &= 0xfd
        *(arg1[0x3e] + 0x244) = 1
        *(arg1[0x3e] + 0x1f1) = 2
        result = sub_141ef1390(arg1[0x3e])
    
    if (arg1[0x3f] == 0)
        uint64_t rbx_2 = *sub_140b58260(&arg_8, u"PostProcessBlendable", 1)
        uint32_t rcx_11
        rcx_11.b = (rbx_2 u>> 0x20).d == 0
        
        if ((rcx_11.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        result = sub_140d2dfc0(sub_1405cd290(), arg1, rbx_2, 0, 0, 0, 0, 0, 0)
        arg1[0x3f] = result
        *(result + 0x30) = arg1

return result
