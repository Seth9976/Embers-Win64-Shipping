// 函数: sub_142a67fa0
// 地址: 0x142a67fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0x1a].d

if (rcx s>= 2)
    int32_t rax_1 = arg1[0x10].d
    arg2 = 0
    
    if (rax_1 s> 0)
        arg2 = rax_1
    
    int32_t rax_2 = *(arg1 + 0x84)
    
    if (rax_2 s> arg2)
        arg2 = rax_2
    
    int32_t rax_3 = arg1[0x11].d
    
    if (rax_3 s> arg2)
        arg2 = rax_3
    
    int32_t rax_4 = *(arg1 + 0x8c)
    
    if (rax_4 s> arg2)
        arg2 = rax_4
    
    int32_t rax_5 = arg1[0x12].d
    
    if (rax_5 s> arg2)
        arg2 = rax_5
    
    int32_t rax_6 = *(arg1 + 0x94)
    
    if (rax_6 s> arg2)
        arg2 = rax_6
    
    int32_t rax_7 = arg1[0x13].d
    
    if (rax_7 s> arg2)
        arg2 = rax_7
    
    int32_t rax_8 = *(arg1 + 0x9c)
    
    if (rax_8 s> arg2)
        arg2 = rax_8
    
    int32_t rax_9 = arg1[0x14].d
    
    if (rax_9 s> arg2)
        arg2 = rax_9
    
    int32_t rax_10 = *(arg1 + 0xc4)
    
    if (rax_10 s> arg2)
        arg2 = rax_10
    
    int32_t rax_11 = arg1[0x19].d
    
    if (rax_11 s> arg2)
        arg2 = rax_11
    
    int32_t rax_12 = *(arg1 + 0xcc)
    
    if (rax_12 s> arg2)
        arg2 = rax_12
    
    if (arg2 s<= rcx)
        return zx.q(*(arg1 + 0x5c))

sub_142a6b7a0(arg1, (*(*arg1 + 0x138))(arg1, arg2))
jump(*(*arg1 + 0x120))
