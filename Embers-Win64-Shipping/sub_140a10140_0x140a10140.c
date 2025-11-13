// 函数: sub_140a10140
// 地址: 0x140a10140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        sub_1405a6220(sub_140a242a0(), &arg1[1])

return sub_140a11ac0(*arg1, &arg1[2]) __tailcall
