// 函数: sub_1409150e0
// 地址: 0x1409150e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ed8440(arg1)

if (arg1[0x19] != 0)
    void arg_8
    uint64_t rbx_1 = *sub_140b58170(&arg_8, "SequencePlayer", 1)
    uint32_t rcx_3
    rcx_3.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int64_t* rax_3
    int512_t zmm1_1
    rax_3, zmm1_1 = sub_140d2dfc0(sub_140916450(), arg1, rbx_1, 0, 0, 0, 0, 0, 0)
    int64_t* rdx_2 = arg1[0x19]
    arg1[0x1a] = rax_3
    uint128_t zmm0_1
    result, zmm0_1 = sub_141a545f0(rax_3, rdx_2, &arg1[0x16], zmm1_1)
    
    if ((arg1[0x16].b & 1) != 0)
        return sub_141a5b2f0(arg1[0x1a], zmm0_1) __tailcall

return result
