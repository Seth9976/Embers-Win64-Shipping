// 函数: sub_142188ca0
// 地址: 0x142188ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x15]

if (rdi == 0)
    rdi = sub_141ee69e0(arg1)

int64_t* arg_8 = arg1
sub_142199780(arg1, 0, sub_1405a9f90(&arg1[0xb2], &arg_8))
sub_141ef4e60(arg1, 0)
int64_t r8 = *arg1
(*(r8 + 0x340))(arg1, 0, r8)
char result = *(arg1 + 0x43c)

if (result != 1)
    if (result != 3)
        if (*(arg1 + 0x432) s< 0)
            jump(*(*arg1 + 0x3a0))
        
        if ((*(arg1 + 0x431) & 0x20) == 0)
            return result
        
        return sub_1421888a0(arg1, 1, rdi)
    
    *(arg1 + 0x43c) = 2

return sub_14221ef30(rdi + 0x5f0, arg1) __tailcall
