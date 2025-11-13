// 函数: sub_141e45df0
// 地址: 0x141e45df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e66300(arg1)
int32_t* rbx = arg1[0x16]
uint64_t rcx = sx.q(arg1[0x17].d)
void* rsi = arg1[7]
void* rdi = &rbx[rcx * 5]

if (rbx != rdi)
    do
        sub_141ea5720(rbx, rsi)
        rbx = &rbx[5]
    while (rbx != rdi)
    
    rcx = zx.q(arg1[0x17].d)

char arg_8 = 0
return sub_141e377c0(arg1[0x16], rcx.d, 0)
