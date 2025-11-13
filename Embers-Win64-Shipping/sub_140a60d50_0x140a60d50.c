// 函数: sub_140a60d50
// 地址: 0x140a60d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = arg1
sub_142a71720(arg1)
*result = &data_142e62778
result[4] = 0
result[5] = 0

if (arg2 != 0 && *arg2 != 0 && arg3 s> 0)
    int32_t rdx = 0
    
    if (arg3 + 1 s> 0)
        sub_1405947f0(&result[4], arg3 + 1)
        rdx = result[5].d
    
    int32_t rax_3 = arg3 + 1 + rdx
    result[5].d = rax_3
    
    if (rax_3 s> *(result + 0x2c))
        sub_140594770(&result[4])
    
    UnDecorator::getReferenceType(result[4], arg2, arg3 * 2)
    *(result[4] + (sx.q(result[5].d) << 1) - 2) = 0

result[6] = &result[4]
int32_t rax_5 = result[5].d
int32_t r8_2 = rax_5 - 1

if (rax_5 == 0)
    r8_2 = 0

int16_t* const rdx_3

if (rax_5 == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = result[4]

sub_142a72230(result, rdx_3, r8_2)
return result
