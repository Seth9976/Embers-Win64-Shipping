// 函数: sub_14096fb10
// 地址: 0x14096fb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x48) s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rdi = 0
char rax_1

do
    int64_t* rcx = *(*(arg1 + 0x40) + rdi + 0x30)
    int64_t r8_1 = *rcx
    rax_1 = (*r8_1)(rcx, arg2, r8_1)
    
    if (rax_1 != 0)
        return 1
    
    i += 1
    rdi += 0x78
while (i s< *(arg1 + 0x48))

return rax_1
