// 函数: sub_142103dc0
// 地址: 0x142103dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = data_143a2e4cc
char rdx

if (rax_3 s< 0 || *(arg1 + 0x28c) s<= rax_3)
    rdx = 1
else
    rdx = 0

void* r9 = *(arg1 + 0x220)
char r8 = *(r9 + 0x89)
uint64_t result
result.b = r8 u>> 1
result.b &= 1

if (result.b != rdx)
    *(r9 + 0x89) = (r8 & 0xfd) | (rdx * 2)
    result = *(arg1 + 0x220)
    char r8_1 = *(result + 0x88)
    
    if (rdx != 0)
        if ((r8_1 & 1) == 0 && (*(arg1 + 0x2a1) & 1) != 0)
            return sub_1421006b0(arg1) __tailcall
    else if ((r8_1 & 1) != 0)
        return sub_142103ae0(arg1) __tailcall

return result
