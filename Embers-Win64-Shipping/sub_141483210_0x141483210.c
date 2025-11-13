// 函数: sub_141483210
// 地址: 0x141483210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x140)

if (result == 0)
    return result

sub_1414415d0(result, arg1)
int32_t rdx_3 = arg1[1].d u>> 4 & 0x7f
int32_t rbx
int16_t* rsi

switch (rdx_3)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        rbx = 3
        rsi = result + 0x138
        sub_1419c75a0(rsi, arg1[3], data_143ed90a0, 0)
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        rbx = 1
        rsi = result + 0x138
    default
        rbx = *(zx.q(rdx_3) * 0x14 + 0x143f025f8)
        
        if (rbx s< 3)
            rsi = result + 0x138
        else
            rsi = result + 0x138
            sub_1419c75a0(rsi, arg1[3], data_143ed90a0, 0)

if (rbx s< 3)
    sub_1419c75a0(rsi, arg1[3], data_143ed9150, 0)

return result
