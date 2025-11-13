// 函数: sub_1413ebd80
// 地址: 0x1413ebd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = 0
int64_t i_1 = 2
int64_t* rcx = arg1 + 0xfb8
int64_t i

do
    void* rax_1 = *rcx
    
    if (rax_1 == 0 || (*(*(rax_1 + 0x20) + 0x138) & 2) != 0)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    rdx |= rax_1.b
    rcx = &rcx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return zx.q(rdx)
