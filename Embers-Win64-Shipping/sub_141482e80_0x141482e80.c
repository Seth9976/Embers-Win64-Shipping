// 函数: sub_141482e80
// 地址: 0x141482e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = j_sub_140a82f30(0x140)

if (result == 0)
    return result

sub_1414415d0(result, arg1)

if (*(result + 0x138) == 0xffff)
    sub_1419c75a0(result + 0x138, arg1[3], data_143ec50b0, 0)

int32_t rax_2 = arg1[1].d u>> 4 & 0x7f
bool cond:0_1

switch (rax_2)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        sub_1419c75a0(result + 0x138, arg1[3], data_143ed90a0, 0)
        cond:0_1 = 3 s>= 3
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        cond:0_1 = 1 s>= 3
    default
        int32_t rbx = *(zx.q(rax_2) * 0x14 + 0x143f025f8)
        cond:0_1 = rbx s>= 3
        
        if (rbx s>= 3)
            sub_1419c75a0(result + 0x138, arg1[3], data_143ed90a0, 0)
            cond:0_1 = rbx s>= 3

if (not(cond:0_1))
    sub_1419c75a0(result + 0x138, arg1[3], data_143ed9150, 0)

return result
