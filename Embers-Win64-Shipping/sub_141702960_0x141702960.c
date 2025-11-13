// 函数: sub_141702960
// 地址: 0x141702960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142fc4250
arg1[3].d = 0
__builtin_memset(&arg1[5], 0, 0x11)
arg1[4] = &data_142fc4220
sub_14172eb30(arg1, &arg1[4])
*arg1 = &data_142fc4af8
int32_t rcx = *(arg2 + 0x18)

if (rcx != 0)
    sub_1417502a0(arg1, arg1[3].d + rcx)
    rcx = *(arg2 + 0x18)

int64_t r8 = sx.q(rcx - 1)

if (rcx - 1 s>= 0)
    int64_t rdx_4 = r8 * 0xc
    int64_t temp0_1
    
    do
        temp0_1 = r8
        r8 -= 1
        int64_t rax_1 = *(arg2 + 0x28)
        int64_t rcx_2 = arg1[5]
        rdx_4 -= 0xc
        *(rcx_2 + rdx_4 + 0xc) = *(rdx_4 + rax_1 + 0xc)
        *(rcx_2 + rdx_4 + 0x14) = *(rdx_4 + rax_1 + 0x14)
    while (temp0_1 - 1 s>= 0)

void*** rax_3 = j_sub_140a82f30(0xd8)

if (rax_3 == 0)
    arg1[8] = 0
    return arg1

int32_t var_18 = 0
arg1[8] = sub_141703130(rax_3, arg1, data_1439b8dec, 0)
return arg1
