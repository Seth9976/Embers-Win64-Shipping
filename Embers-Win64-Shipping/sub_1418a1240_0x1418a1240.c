// 函数: sub_1418a1240
// 地址: 0x1418a1240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x30)

if (result == 0)
    return 0

*result = &data_142fe9658
int64_t* rax = j_sub_140a82f30(0x28)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[4].b = 0xff

result[3] = rax
result[2] = rax
int64_t* rax_1 = j_sub_140a82f30(0x70)

if (rax_1 == 0)
    result[5] = 0
    result[4] = 0
    return result

*rax_1 = 0
__builtin_memset(&rax_1[2], 0, 0x28)
rax_1[8] = 0
result[5] = rax_1
result[4] = rax_1
return result
