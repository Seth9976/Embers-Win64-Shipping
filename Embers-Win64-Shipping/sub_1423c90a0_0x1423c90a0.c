// 函数: sub_1423c90a0
// 地址: 0x1423c90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
void arg_10
sub_141ff4780(&arg_10, arg2, 0, 0xd6)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)

if (sub_140b4e7c0(arg2, &data_1439a9478) s< 0x11)
    *(arg1 + 0xdb) = ((*(arg1 + 0xda) & 2) | 1) * 2

uint32_t result
uint32_t zmm6[0x4]
result, zmm6 = sub_140b4e7c0(arg2, &data_1439a9478)

if (result s< 0x21)
    char result_1 = *(arg1 + 0xe0)
    char rdi_1 = *(arg1 + 0xdb)
    uint32_t var_18_1[0x4] = zmm6
    zmm6 = 0x400ccccd
    
    if (result_1 != 0)
        result = zx.d(result_1)
    else
        result = sub_1405d9520(zx.d(rdi_1))
    
    uint32_t zmm0_1[0x4] = *(arg1 + 0xb8)
    
    if (zmm0_1[0] f<= 0.000999999931f)
        result -= 9
        
        if (result u<= 1 || (*(arg1 + 0xda) & 1) != 0)
            zmm6 = 0x3f800000
    else
        zmm6 = zmm0_1
    
    if (rdi_1 == 2)
        zmm6[0] = zmm6[0] f- 1f
        
        if (not(__andps_xmmxud_memxud(zmm6, data_142d3f770)[0] f<= 9.99999975e-05f))
            *(arg1 + 0x60) |= 1
            *(arg1 + 0xdb) = 3

return result
