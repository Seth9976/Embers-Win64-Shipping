// 函数: sub_141e05cb0
// 地址: 0x141e05cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x20)
*(arg1 + 0xb8) = rax
void* rax_1 = *(rax + 0x430)
int64_t rax_2

if (rax_1 == 0)
    rax_2 = 0
else
    rax_2 = *(rax_1 + 0x60)

*(arg1 + 0xb0) = rax_2
void* rcx = *(arg1 + 0xb8)
char* rdi = *(rcx + 0x630)
*(arg1 + 0x650) = 0

if (rdi != 0)
    if (sub_141f73df0(rcx) == 0)
        void* rax_6 = *(arg1 + 0xb8)
        
        if ((*(rax_6 + 0x5a9) & 4) != 0)
            uint16_t rax_5 = zx.w(*(rax_6 + 0x5a5))
            *(arg1 + 0x650) = rax_5
            *(arg1 + 0x652) = rax_5
    else
        *(arg1 + 0x650) = *(rdi + 4) - 1
        
        if (*rdi == 1 || *(rdi + 8) s> 1)
            *(arg1 + 0x652) = *(rdi + 8) - 1

*(arg1 + 0x422) = *(arg1 + 0x650)
int16_t result = *(arg1 + 0x652)
*(arg1 + 0x432) = result
return result
