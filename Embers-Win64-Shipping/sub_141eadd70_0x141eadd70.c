// 函数: sub_141eadd70
// 地址: 0x141eadd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd8f80(arg1, arg2)
void* rcx = arg1[0x51]

if (rcx == 0 || arg1[0x1e].b != 3 || (*(*(rcx + 0x140) + 0x40))(rcx + 0x140).b == 0)
    return 

int64_t* rcx_3 = arg1[0x51] + 0x140
void* rax = (*(*rcx_3 + 0x30))(rcx_3)

if (rax != 0)
    int64_t rdx = *arg1
    *(rax + 8) = *((*(rdx + 0x150))(arg1, rdx) + 0x520)
