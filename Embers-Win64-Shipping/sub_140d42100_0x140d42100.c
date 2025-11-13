// 函数: sub_140d42100
// 地址: 0x140d42100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax = arg2[1]
arg1[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[2].d = arg2[2].d
arg1[3].b = 1
arg1[4] = 0
arg1[5].d = 0
return arg1
