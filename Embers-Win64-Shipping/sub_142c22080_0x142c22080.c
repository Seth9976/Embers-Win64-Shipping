// 函数: sub_142c22080
// 地址: 0x142c22080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x90)
int32_t r10

if (*(rax + 0x59) == 0)
    r10 = *(rax + 0x5c)
else
    r10 = *(rax + 0x64)

void* rdx = *(arg1 + 0x48)
int32_t rbx = 0
*(arg1 + 0x40) = r10
*(arg1 + 0x78) = arg2
*(arg1 + 0x7c) = *(*(rdx + 0x90) + 0x60)
void* r8 = *(rdx + 0x90)
char rdx_1

if (r10 != *(r8 + 0x5c))
    rdx_1 = 0
else
    rdx_1 = *(*(r8 + 0x70) + zx.q(*(r8 + 0x5c)) * 0x14 + 0xf)

*(arg1 + 0x5c) = rdx_1
*(arg1 + 0x68) = arg5
*(arg1 + 0x60) = arg4
*(arg1 + 0x70) = arg3

if (arg2 != 0)
    do
        if (sub_142c22b10(arg1 + 0x40) == 0)
            return 0
        
        rbx += 1
    while (rbx u< arg2)

*arg6 = *(arg1 + 0x40)
int32_t* result
result.b = 1
return result
