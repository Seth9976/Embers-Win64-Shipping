// 函数: sub_142825420
// 地址: 0x142825420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
void** rdx = *arg1
void** rcx = rdx
void** rax = rdx[1]

while (*(rax + 0x19) == 0)
    if (rax[4] u>= r8)
        rcx = rax
        rax = *rax
    else
        rax = rax[2]

if (*(rcx + 0x19) == 0 && r8 u>= rcx[4] && rcx != rdx)
    return rcx[5]

return 0
