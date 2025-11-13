// 函数: sub_1408576a0
// 地址: 0x1408576a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    void* rax_2 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "SystemSpawnScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x88) = rax_2
    *(rax_2 + 0x28) = 0xb
    void* rax_4 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "SystemUpdateScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x90) = rax_4
    *(rax_4 + 0x28) = 0xc

return sub_14085aab0(arg1) __tailcall
