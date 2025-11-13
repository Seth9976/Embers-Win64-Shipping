// 函数: sub_141e765c0
// 地址: 0x141e765c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1

if (r9 == 0)
    return 

void* rdx = *arg3
int64_t rax = sx.q(*(rdx + 0x148))

if (rax.d s<= 0)
    return 

int64_t* rdx_1 = *(rdx + 0x140)
int64_t r8 = rax
rax = 0

do
    int64_t* rcx = *rdx_1
    
    if (rcx != 0 && rcx[3] == r9)
        jump(*(*rcx + 0x40))
    
    rax += 1
    rdx_1 = &rdx_1[1]
while (rax s< r8)
