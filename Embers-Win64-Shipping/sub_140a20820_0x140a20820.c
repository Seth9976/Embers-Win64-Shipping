// 函数: sub_140a20820
// 地址: 0x140a20820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x7e0))
int32_t rax = (rdi + 1).d
*(arg1 + 0x7e0) = rax

if (rax s> *(arg1 + 0x7e4))
    sub_1405c4fe0(arg1 + 0x7d8)

int64_t result = *arg2
int64_t* rcx_3 = (rdi << 6) + *(arg1 + 0x7d8)
*rcx_3 = result
rcx_3[2] = 0

if (*rcx_3 == 0)
    return result

void* rax_1 = arg2[2]
void* rcx_4 = &arg2[4]

if (rax_1 != 0)
    rcx_4 = rax_1

return (**rcx_4)(rcx_4)
