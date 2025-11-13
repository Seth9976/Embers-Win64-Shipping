// 函数: sub_1419c6940
// 地址: 0x1419c6940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x98))
int32_t rax = (rdi + 1).d
*(arg1 + 0x98) = rax

if (rax s> *(arg1 + 0x9c))
    sub_1405c4fe0(arg1 + 0x90)

int64_t* rcx_3 = (rdi << 6) + *(arg1 + 0x90)
*rcx_3 = *arg2
rcx_3[2] = 0

if (*rcx_3 != 0)
    void* rax_1 = arg2[2]
    void* rcx_4 = &arg2[4]
    
    if (rax_1 != 0)
        rcx_4 = rax_1
    
    (**rcx_4)(rcx_4)

int64_t result
result.b = 1
return result
