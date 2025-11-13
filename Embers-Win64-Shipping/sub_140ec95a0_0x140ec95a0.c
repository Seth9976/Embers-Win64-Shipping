// 函数: sub_140ec95a0
// 地址: 0x140ec95a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x98) != 0)
    void* result = *(arg1 + 0xa0)
    
    if (result != 0 && *(result + 8) s> 0)
        return result

char rax_1 = sub_140f053d0(*(arg1 + 0x40))
int32_t arg_8
sub_140e13cf0(*(arg1 + 0x40), &arg_8)
float zmm7[0x4] = *(arg2 + 0x18)
int128_t zmm6 = *(arg2 + 0x1c)
int32_t* rcx_2 = &data_1439b3950

if (rax_1 == 0)
    rcx_2 = &data_1439b3958

float zmm1_1 = rcx_2[1]
float temp0_1 = __minss_xmmss_memss(*rcx_2, arg_8)
float temp0_2 = __minss_xmmss_memss(zmm1_1, arg3)
void* rcx_3 = *(arg1 + 0x20)
zmm1_1 = temp0_2 f* *(arg1 + 0x54)
zmm7[0] = zmm7[0] - temp0_1 f* *(arg1 + 0x50)
zmm6.d = zmm6.d f- zmm1_1
float zmm0_1 = zmm7[0]
float var_38 = zmm7[0]
int32_t var_34_1 = zmm6.d
float var_30_1 = zmm0_1 f+ *(arg1 + 0xb0)
float var_2c_1 = zmm6.d f+ *(arg1 + 0xb4)
sub_140e27530(rcx_3, &var_38)
return sub_140e1c780(*(arg1 + 0x20), _mm_unpacklo_ps(zmm7, zmm6.q)[0].q)
