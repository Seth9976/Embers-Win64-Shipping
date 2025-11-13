// 函数: sub_140835370
// 地址: 0x140835370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141dd15d0(arg1)

if (arg1[0x26] == 0)
    void arg_8
    uint64_t rbx_1 = *sub_140b58260(&arg_8, u"SceneComp", 1)
    uint32_t rcx_3
    rcx_3.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    result = sub_140d2dfc0(sub_1425881f0(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
    arg1[0x26] = result

return result
