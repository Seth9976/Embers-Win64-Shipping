// 函数: sub_140e44b60
// 地址: 0x140e44b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x38)
int64_t rdi = sx.q(arg3)
int64_t r8_1 = *(arg1 + 0x28) + rdi

if (r8_1 s> r9)
    int64_t rax_1 = r9 * 2
    
    if (rax_1 s>= r8_1)
        r8_1 = rax_1
    
    int64_t rax_2 = r8_1 - r9 + *(arg1 + 0x38)
    *(arg1 + 0x38) = rax_2
    
    if (rax_2 s> *(arg1 + 0x40))
        sub_140a4f990(arg1 + 0x30)

char* result = nullptr

if (rdi s> 0)
    do
        *(*(arg1 + 0x30) + *(arg1 + 0x28) + result) = result[arg2]
        result = &result[1]
    while (result s< rdi)

*(arg1 + 0x28) += rdi
return result
