// 函数: sub_142705200
// 地址: 0x142705200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[5]

if (rdi != arg2)
    return 

if (rdi != 0)
    void* rax_1 = sub_1426a09e0()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        sub_1405a46b0(rdi + 0x488, arg1)

int32_t* rcx_2 = arg1[0x1b]
arg1[5] = 0
sub_142609170(rcx_2)
arg1[0x1b] = 0
sub_1426f6d80(arg1)
