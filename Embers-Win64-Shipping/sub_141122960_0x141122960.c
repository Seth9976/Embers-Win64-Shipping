// 函数: sub_141122960
// 地址: 0x141122960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x140)

if (result == 0)
    return result

sub_1414415d0(result, arg1)
int32_t rdx_3 = arg1[1].d u>> 4 & 0x7f
int16_t* r8_1

switch (rdx_3)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        r8_1 = data_143e57c20
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        r8_1 = data_143e57cc0
    default
        if (*(zx.q(rdx_3) * 0x14 + 0x143f025f8) s< 3)
            r8_1 = data_143e57cc0
        else
            r8_1 = data_143e57c20

sub_1419c75a0(result + 0x138, arg1[3], r8_1, 0)
return result
