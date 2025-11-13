// 函数: sub_140a100e0
// 地址: 0x140a100e0
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

int512_t entry_zmm2
return sub_140a11e30(*arg1, &arg1[2], entry_zmm2) __tailcall
