// 函数: sub_14227abd0
// 地址: 0x14227abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xf8) == 0)
    void arg_8
    void* rax_2 = sub_141b77910(arg1, *sub_140b58260(&arg_8, u"PC_InputComponent0", 1), 0, 0, 0, 0)
    *(arg1 + 0xf8) = rax_2
    sub_141ef1390(rax_2)

char result = sub_1420a63a0(*(arg1 + 0x10))

if (result == 0)
    return result

void* rcx_4 = *(arg1 + 0xf8)
*(rcx_4 + 0x134) ^= (*(arg1 + 0x5a) ^ *(rcx_4 + 0x134)) & 1
return sub_14207f1f0(*(arg1 + 0x10), *(arg1 + 0xf8)) __tailcall
