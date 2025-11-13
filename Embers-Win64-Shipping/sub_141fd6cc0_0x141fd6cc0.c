// 函数: sub_141fd6cc0
// 地址: 0x141fd6cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = &data_143a2de40
*(arg1 + 0x18) = arg2
__builtin_memset(arg1, 0, 0x18)

if (arg6 != 0)
    rdi = arg6

void*** rax_1 = j_sub_140a82f30(0xc0)
void*** rcx = rax_1

if (rax_1 == 0)
    rcx = nullptr
else
    rax_1[2].d = 0xffffffff
    *(rax_1 + 0x14) = 4
    *rcx = &data_143296700
    rcx[1] = &data_143296750
    rcx[4].d = 0xffffffff
    *(rcx + 0x24) = 4
    rcx[3] = &data_142dda848
    rcx[5] = 0
    rcx[7].d = 0xffffffff
    *(rcx + 0x3c) = 4
    rcx[6] = &data_142dda848
    rcx[8] = 0
    rcx[0xa].d = 0xffffffff
    *(rcx + 0x54) = 4
    rcx[9] = &data_142dda848
    rcx[0xb] = 0
    rcx[0xd].d = 0xffffffff
    *(rcx + 0x6c) = 4
    rcx[0xc] = &data_142dda848
    __builtin_memset(&rcx[0xe], 0, 0x38)
    rcx[0x15].d = arg3
    *(rcx + 0xac) = arg4
    rcx[0x16].b = arg5
    rcx[0x17] = rdi

*(arg1 + 0x10) = rcx
void*** rax_3 = j_sub_140a82f30(0x38)

if (rax_3 == 0)
    *(arg1 + 8) = 0
else
    rax_3[2].d = 0xffffffff
    *(rax_3 + 0x14) = 4
    rax_3[3] = 0
    *rax_3 = &data_143296700
    rax_3[1] = &data_143296710
    rax_3[4] = 0
    rax_3[5] = 0
    rax_3[6] = rdi
    *(arg1 + 8) = rax_3

return arg1
