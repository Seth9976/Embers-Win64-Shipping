// 函数: sub_14225ae40
// 地址: 0x14225ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_1433108b0
arg1[5] = &data_143310de8
__builtin_memset(&arg1[0x41], 0, 0x15)
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x80
arg1[7].b = 0
arg1[0x3e].d = 0x43480000
*(arg1 + 0x1f4) = 0
arg1[0x3f].d = 0x447a0000
arg1[0x40].d = 0x41200000
int32_t rax = sub_141ffdeb0(2)

if (rax != 0x20)
    void** r8_1 = *arg1
    r8_1[0xa5](arg1, zx.q(rax.b), r8_1)

int32_t rax_1 = sub_141ffdeb0(5)

if (rax_1 != 0x20)
    void** r8_2 = *arg1
    r8_2[0xa5](arg1, zx.q(rax_1.b), r8_2)

int32_t rax_2 = sub_141ffdeb0(6)

if (rax_2 != 0x20)
    void** r8_3 = *arg1
    r8_3[0xa5](arg1, zx.q(rax_2.b), r8_3)

int32_t rax_3 = sub_141ffdeb0(7)

if (rax_3 != 0x20)
    void** r8_4 = *arg1
    r8_4[0xa5](arg1, zx.q(rax_3.b), r8_4)

sub_14227fbf0(arg1)
return arg1
