// 函数: sub_140698a90
// 地址: 0x140698a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x88)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_14068e490(result_1)
    *result = &data_142d8add0

if (arg1[0x59].b == 0)
    int64_t rbp_1 = sx.q(arg1[0x58].d)
    int32_t rax = (rbp_1 + 1).d
    arg1[0x58].d = rax
    
    if (rax s> *(arg1 + 0x2c4))
        sub_140638870(&arg1[0x57])
    
    *(arg1[0x57] + (rbp_1 << 3)) = result
    int64_t rax_2 = arg1[0x56]
    
    if (rax_2 != 0 && result[1] != rax_2)
        result[1] = rax_2
        sub_140de7bf0(result)

sub_140e19ef0(arg1, 1)
return result
