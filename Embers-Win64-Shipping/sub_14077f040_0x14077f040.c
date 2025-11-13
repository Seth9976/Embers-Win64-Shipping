// 函数: sub_14077f040
// 地址: 0x14077f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d20910()
sub_140745800(arg1)
*arg1 = &data_142daec98
arg1[6] = 0
arg1[7] = 0
arg1[0xa].d |= 1
arg1[8].d = 0
*(arg1 + 0x44) = 0x3f800000
arg1[9].d = 0x3f800000
void*** rax_1 = j_sub_140a82f30(0xf0)
void*** rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    memset(rax_1, 0, 0xf0)
    sub_140744780(rdi)
    *rdi = &data_142daec58
    __builtin_memset(&rdi[0x1b], 0, 0x14)

int64_t* rcx_3 = arg1[5]

if (rcx_3 != rdi)
    arg1[5] = rdi
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

return arg1
