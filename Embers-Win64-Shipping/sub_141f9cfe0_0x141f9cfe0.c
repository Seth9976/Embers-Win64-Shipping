// 函数: sub_141f9cfe0
// 地址: 0x141f9cfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
(*(*arg1 + 0x650))(arg3, arg1[0x4a])
arg1[0x4a] = rdi
void* const rax_4

if (rdi == 0)
    rax_4 = nullptr
else
    void* rax_1 = sub_1424890f0()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        rdi = arg1[0x4a]
        rax_4 = nullptr
    else
        rax_4 = rdi
        rdi = arg1[0x4a]

arg1[0x4c] = rax_4
(*(*arg1 + 0x638))(arg1, rdi)
arg1[0x4a]
jump(*(*arg1 + 0x648))
