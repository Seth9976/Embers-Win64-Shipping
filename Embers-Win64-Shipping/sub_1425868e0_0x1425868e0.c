// 函数: sub_1425868e0
// 地址: 0x1425868e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
char r10 = 0
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int32_t rdx = *(arg1 + 0x34)

if (rdx s>= 0)
    r10 = 0xc
    
    if (rdx s< 0xc)
        r10 = rdx.b

int32_t result = 1 << r10
*arg3 = result
return result
