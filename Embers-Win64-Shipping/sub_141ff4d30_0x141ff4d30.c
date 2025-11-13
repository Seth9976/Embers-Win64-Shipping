// 函数: sub_141ff4d30
// 地址: 0x141ff4d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int32_t rbx = 0
__builtin_memset(&arg1[5], 0, 0x20)
arg1[0xb].w = 0
*(arg1 + 0x5b) &= 0xf3
*(arg1 + 0x5b) |= 0x10
arg1[0xc] = 0
arg1[0xd] = 0
__builtin_memset(&arg1[0xf], 0, 0x20)
*arg1 = &data_143299238
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0

if (arg1[0x13] != u"Shared/GraphNodes/Blueprint")
    int32_t rdx = 0
    arg1[0x14].d = 0
    
    if (*(arg1 + 0xa4) != 0x1c)
        sub_1405947f0(&arg1[0x13], 0x1c)
        rdx = arg1[0x14].d
    
    arg1[0x14].d = rdx + 0x1c
    
    if (rdx + 0x1c s> *(arg1 + 0xa4))
        sub_140594770(&arg1[0x13])
    
    void* rax_2 = arg1[0x13]
    __builtin_memcpy(rax_2, u"Shared/GraphNodes/Bluepr", 0x30)
    *(rax_2 + 0x30) = 0x74006e0069

if (arg1[0x15] != u"UEdGraphNode_Documentation")
    arg1[0x16].d = 0
    
    if (*(arg1 + 0xb4) != 0x1b)
        sub_1405947f0(&arg1[0x15], 0x1b)
        rbx = arg1[0x16].d
    
    arg1[0x16].d = rbx + 0x1b
    
    if (rbx + 0x1b s> *(arg1 + 0xb4))
        sub_140594770(&arg1[0x15])
    
    __builtin_wcscpy(arg1[0x15], u"UEdGraphNode_Documentation")

return arg1
