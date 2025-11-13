// 函数: ?OpenSrc@PDB1@@UEAAHPEAPEAUSrc@@@Z
// 地址: 0x141776f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xb8)
void*** rbx = rax

if (rax == 0)
    rbx = rax
else
    sub_1417048d0(rax, 2, 6)
    *rbx = &data_142fc54b0
    __builtin_memset(&rbx[0xa], 0, 0x1c)
    rbx[8] = 0
    rbx[9].d = 0
    rbx[0xe] = 0
    rbx[0xf] = 0
    __builtin_memcpy(&rbx[0x10], 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x"
    "ff\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f"
    "ff", 
        0x30)

rbx[2] = *(arg1 + 0x10)
rbx[3].d = *(arg1 + 0x18)
*(rbx + 0x1c) = *(arg1 + 0x1c)
*(rbx + 0x24) = *(arg1 + 0x24)
rbx[5].d = *(arg1 + 0x28)
*(rbx + 0x2c) = *(arg1 + 0x2c)
rbx[6].d = *(arg1 + 0x30)
*(rbx + 0x34) = *(arg1 + 0x34)
*(rbx + 0x3c) = *(arg1 + 0x3c)
rbx[8].d = *(arg1 + 0x40)
*(rbx + 0x44) = *(arg1 + 0x44)
rbx[9].d = *(arg1 + 0x48)
sub_140627690(&rbx[0xa], arg1 + 0x50)
rbx[0xc].d = *(arg1 + 0x60)
*(rbx + 0x64) = *(arg1 + 0x64)
rbx[0xd].d = *(arg1 + 0x68)
sub_141762920(&rbx[0xe], arg1 + 0x70)
rbx[0x10] = *(arg1 + 0x80)
rbx[0x11].d = *(arg1 + 0x88)
*(rbx + 0x8c) = *(arg1 + 0x8c)
*(rbx + 0x94) = *(arg1 + 0x94)
rbx[0x13] = *(arg1 + 0x98)
rbx[0x14].d = *(arg1 + 0xa0)
*(rbx + 0xa4) = *(arg1 + 0xa4)
*(rbx + 0xac) = *(arg1 + 0xac)
rbx[0x16].d = *(arg1 + 0xb0)
*arg2 = rbx
return arg2
