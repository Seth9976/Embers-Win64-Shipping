// 函数: sub_14038ad30
// 地址: 0x14038ad30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[2] + arg1[1]

if (rdx s> 0xff)
    return 0

int64_t r9_1 = sx.q(*arg1)

if (r9_1 s<= 0)
    return 1

void* rcx = &arg1[3]

while (true)
    uint32_t rax_2 = zx.d(*rcx)
    
    if (rax_2 s>= rdx && rax_2.b != 0xff)
        return 0
    
    rcx += 1
    
    if (-0xc - arg1 + rcx s>= r9_1)
        return 1
