// 函数: sub_141d594d0
// 地址: 0x141d594d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_141d5ca50(arg1 - 0x10)
int64_t result = sub_141d53d80(arg1 - 0x10, arg1 + 0x4c, *(*(arg1 + 0x80) + 0x60) & 1, zmm3, zmm2)

if (*(arg1 + 0x48) != 0)
    return result

void* rcx_2 = *(*(arg1 + 0x80) + 0x90)
void* arg_8 = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int128_t zmm1_1 = data_142d8c9b0
int128_t var_28 = zx.o(0)
int128_t var_18 = zmm1_1
sub_14200d210(sub_142003380(), arg1 + 0x5c, &arg_8, arg1 + 0x18, &var_18, &var_28)
return sub_1405d1550(&arg_8)
