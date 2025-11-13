// 函数: sub_141d52360
// 地址: 0x141d52360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x80
*arg1 = &data_143227480
arg1[5] = &data_143227868

if (((arg1[1].d u>> 4).b & 1) == 0)
    void arg_8
    uint64_t rbx_1 = *sub_140b58170(&arg_8, "MediaPlayer", 1)
    uint32_t rcx_3
    rcx_3.b = (rbx_1 u>> 0x20).d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_5 = sub_140d2dfc0(sub_141d5ec10(), arg1, rbx_1, 0x40, 0, 0, 0, 0, 0)
    arg1[0x17] = rax_5
    sub_140af2bc0()
    void* rcx_6 = *(rax_5 + 0x110)
    *(rax_5 + 0xc4) &= 0xfffffffd
    sub_141d51050(rcx_6, 0)
    *(arg1[0x17] + 0xc1) = 0
    uint64_t rbx_3 = *sub_140b58170(&arg_8, "MediaTexture", 1)
    uint32_t rcx_10
    rcx_10.b = (rbx_3 u>> 0x20).d == 0
    
    if ((rcx_10.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    arg1[0x16] = sub_140d2dfc0(sub_141d5f3d0(), arg1, rbx_3, 0x40, 0, 0, 0, 0, 0)

return arg1
