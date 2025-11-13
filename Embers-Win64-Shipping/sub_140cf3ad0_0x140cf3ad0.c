// 函数: sub_140cf3ad0
// 地址: 0x140cf3ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_140a82f30(0x80, 0)

if (result == 0)
    return result

sub_140d11050()
sub_140cacf30(result, 0, &data_143e1b9d0)
result[0xa] = 0
*result = &data_142ea8530
int128_t var_28 = *arg1
sub_140cd3ee0(result, &var_28, arg2, arg3)
*result = &data_142ea8530
result[0xf].d = 0x1010000
int64_t rax_1 = result[8] & 0xffffffffbffffdff
int32_t arg_20 = 1
result[8] = rax_1 | 0x1000000000
char i = 0
*(result + 0x3c) = 1
result[0xf].w = 1
char rdx_1

do
    rdx_1 = *(&arg_20 + zx.q(i))
    *(result + 0x7a) = rdx_1
    
    if (rdx_1 != 0)
        break
    
    i += 1
    *(result + 0x79) = i
while (i u< 1)

*(result + 0x7b) = rdx_1
return result
