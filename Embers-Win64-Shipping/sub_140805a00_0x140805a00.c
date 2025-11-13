// 函数: sub_140805a00
// 地址: 0x140805a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int32_t rsi = 0

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    void* rax_2 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "SpawnScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x60) = rax_2
    *(rax_2 + 0x28) = 3
    void* rax_4 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "UpdateScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x38) = rax_4
    *(rax_4 + 0x28) = 5
    void* rax_6 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "EmitterSpawnScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x88) = rax_6
    *(rax_6 + 0x28) = 9
    void* rax_8 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "EmitterUpdateScript", 1), 8, 0, 0, 0)
    *(arg1 + 0xb0) = rax_8
    *(rax_8 + 0x28) = 0xa
    void* rax_10 = sub_1407dbf00(arg1, *sub_140b58170(&arg_8, "GPUComputeScript", 1), 8, 0, 0, 0)
    *(arg1 + 0x1f0) = rax_10
    *(rax_10 + 0x28) = 8

if (*(arg1 + 0x1b0) != u"Emitter")
    bool cond:0_1 = *(arg1 + 0x1bc) == 8
    *(arg1 + 0x1b8) = 0
    
    if (not(cond:0_1))
        sub_1405947f0(arg1 + 0x1b0, 8)
        rsi = *(arg1 + 0x1b8)
    
    *(arg1 + 0x1b8) = rsi + 8
    
    if (rsi + 8 s> *(arg1 + 0x1bc))
        sub_140594770(arg1 + 0x1b0)
    
    **(arg1 + 0x1b0) = *u"Emitter"

return sub_140809aa0(arg1) __tailcall
