// 函数: sub_141dbe4e0
// 地址: 0x141dbe4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x6e0)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_141db5dc0(rax, arg1)

*(result + 0x18c) = 0
char rax_2 = result[0x30].b
*(result + 0x183) &= 0xf7
result[0xa] = arg2
result[0x30].b = (rax_2 & 0x3f) | 0x80
*(result + 0x194) = 0

if (not((zx.o(0)).d f> *(arg1 + 0x204)))
    *(result + 0x204) = 0x3f800000

sub_1409d9c00(&result[0xb])
sub_1408d84f0(&result[0x26])
return result
