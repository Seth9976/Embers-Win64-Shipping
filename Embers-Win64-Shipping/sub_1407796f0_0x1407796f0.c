// 函数: sub_1407796f0
// 地址: 0x1407796f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5b0) != 0xffffffff)
    void* rax_1 = *(arg1 + 0xa8)
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    int64_t* rax = sub_140865dd0(rax_1)
    
    if (rax != 0)
        sub_14086a150(rax, arg1)

*(arg1 + 0x57c) &= 0xffffffef
*(arg1 + 0x5b0) = 0xffffffff
