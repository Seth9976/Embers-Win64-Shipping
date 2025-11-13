// 函数: sub_141c42410
// 地址: 0x141c42410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x1c) s<= 0)
    return 

int64_t rax = 0
int32_t* rdx = arg2 - arg3

do
    int64_t rcx = *(arg1 + 0x10)
    float zmm3 = *(rdx + arg3)
    float zmm4 = *(rax + rcx + 0x1c)
    float zmm5 = *(rax + rcx + 0x24)
    float zmm2 = zmm4 f* *(rax + rcx + 0xc) + zmm3 f* *(rax + rcx + 8)
        + *(rax + rcx + 0x10) f* *(rax + rcx + 0x20) - zmm5 f* *(rax + rcx + 0x14)
    zmm2 = zmm2 - *(rax + rcx + 0x18) f* *(rax + rcx + 0x28)
    
    if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
        zmm2 = (zx.o(0)).d
    
    *(rax + rcx + 0x28) = zmm5
    i += 1
    *(rax + rcx + 0x24) = zmm2
    *(rax + rcx + 0x20) = zmm4
    *(rax + rcx + 0x1c) = zmm3
    rax += 0x30
    *arg3 = zmm2
    arg3 = &arg3[1]
while (i s< *(arg1 + 0x1c))
