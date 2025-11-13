// 函数: sub_14106bb20
// 地址: 0x14106bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[2]
void* rcx = &arg1[4]

if (rax != 0)
    rcx = rax

(*(*rcx + 8))(rcx)
jump(*arg1)
