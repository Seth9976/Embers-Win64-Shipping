// 函数: sub_142aea6c0
// 地址: 0x142aea6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x28)

if (r8 - 1 s>= 0)
    int64_t r9_1 = sx.q(r8 - 1)
    int32_t rdx_2 = zx.d(*(*(arg1 + 0x30) + (r9_1 << 1))) & 0xfffffc00
    
    if (rdx_2 != 0xdc00)
        if (r8 - 1 s<= *(arg1 + 0x1c))
            return *(arg1 + 0x20) + r9_1
        
        int64_t rax_4 = *(arg1 + 0x38)
        *(arg1 + 0x28) = r8 - 1
        int64_t rax_5 = (*(rax_4 + 0x40))(arg1, rdx_2)
        *(arg1 + 0x28) += 1
        return rax_5

if (r8 == 0 && *(arg1 + 0x20) == 0)
    return 0

sub_142aeabf0(arg1)
int64_t rax_7 = sx.q(*(arg1 + 0x28))
int64_t rdi_1

if (rax_7.d s> *(arg1 + 0x1c))
    rdi_1 = (*(*(arg1 + 0x38) + 0x40))(arg1)
else
    rdi_1 = rax_7 + *(arg1 + 0x20)

sub_142aea870(arg1, arg2)
return rdi_1
