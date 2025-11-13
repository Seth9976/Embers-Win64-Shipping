// 函数: sub_141e462e0
// 地址: 0x141e462e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
void* result = *(rcx + 0x430)

if (result == 0 || *(result + 0x60) == 0)
    return result

if (sub_141f3ba00(rcx) == 0)
    int64_t* rax_1 = sub_141f3b9f0(*(arg1 + 0x10))
    
    if (rax_1 != 0)
        sub_141e07a00(rax_1, zx.o(0), nullptr)
        sub_141e0f0c0(rax_1, zx.o(0), 0, 1)

int64_t* rcx_4 = *(arg1 + 0x10)
(*(*rcx_4 + 0x8d8))(rcx_4, 0)
sub_141f6f060(*(arg1 + 0x10))
return sub_1405c6ac0(*(arg1 + 0x10), 0, 0) __tailcall
