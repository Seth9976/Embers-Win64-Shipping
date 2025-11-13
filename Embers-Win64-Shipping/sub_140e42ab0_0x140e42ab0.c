// 函数: sub_140e42ab0
// 地址: 0x140e42ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
int64_t rcx = *(arg1 + 0x38)
int64_t r8 = *(arg1 + 0x30)
int64_t result

if (rcx + r10 s> r8)
    result.b = 0
    return result

char* rdx = nullptr

if (r10 s> 0)
    do
        rdx[arg2] = (*(arg1 + 0x28))[*(arg1 + 0x38)]
        rdx = &rdx[1]
        rcx = *(arg1 + 0x38) + 1
        *(arg1 + 0x38) = rcx
    while (rdx s< r10)
    
    r8 = *(arg1 + 0x30)

result.b = rcx s>= r8
return result
