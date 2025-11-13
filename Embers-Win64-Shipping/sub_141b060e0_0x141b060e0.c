// 函数: sub_141b060e0
// 地址: 0x141b060e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 0x48)

if (rdx s<= 1)
    return 

void* rax_1 = *(arg2 + 0x40)
void* rcx = arg2

if (rax_1 != 0)
    rcx = rax_1

sub_141af1a80(rcx, rdx, arg3, sub_141b33850)
int32_t rax = *(arg2 + 0x48)
int32_t r8_2 = 0
int64_t i = 0
int64_t r10_1 = 0

while (i s>= 0)
    rax = *(arg2 + 0x48)
    
    if (r8_2 s>= rax)
        break
    
    void* rdx_1 = *(arg2 + 0x40)
    void* rcx_1 = arg2
    
    if (rdx_1 != 0)
        rcx_1 = rdx_1
    
    if ((*(rcx_1 + r10_1 + 0xc) & 3) == 0)
        break
    
    r8_2 += 1
    i += 1
    r10_1 += 0x10

int32_t rcx_3 = rax - (r8_2 + 1)

if (rcx_3 s> 0)
    *(arg2 + 0x48) = rax - rcx_3
    return sub_141b308b0(arg2) __tailcall
