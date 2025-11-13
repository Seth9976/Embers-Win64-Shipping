// 函数: sub_142263b60
// 地址: 0x142263b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x7a].d &= 0xfffffffd
arg1[0x7a].d |= zx.d(arg2) * 2
int32_t rax_2 = arg1[0x7a].d
void* rcx = arg1[0x56]

if (rcx != 0 && arg5 != 0)
    *(rcx + 0x228) &= 0xfd
    *(rcx + 0x228) |= not.b((rax_2 u>> 1).b * 2) & 2
    
    if (arg1[0x53] != 0)
        sub_142531230()
    
    void* rcx_1 = arg1[0x9c]
    
    if (rcx_1 != 0)
        sub_140f5fc60(rcx_1, *(arg1[0x56] + 0x228) u>> 1 & 1, 1)

arg1[0x7a].d
jump(*(*arg1 + 0xab0))
