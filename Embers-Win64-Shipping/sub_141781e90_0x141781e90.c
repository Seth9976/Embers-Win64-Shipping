// 函数: sub_141781e90
// 地址: 0x141781e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbx = *(arg1 + 0x30)
int64_t rax_2 = sx.q(*(arg1 + 0x38))
int64_t zmm1 = data_14399f670
float zmm3[0x4] = data_14399f668
float var_c8[0x4] = data_142d3f660
int128_t var_b8 = zx.o(0)
float result[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
void* rsi_2 = rax_2 * 0x140 + rbx
float var_a8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm1), result[0].q)
char var_98 = 1

if (rbx != rsi_2)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    do
        zmm6 = *(arg1 + 0x70)
        void var_58
        sub_141682450(&var_58, *(rbx + 0x60))
        void var_88
        sub_141682450(&var_88, *(rbx + 0x68))
        sub_1417000b0(rbx, &var_58, &var_88, zmm6, &var_c8)
        result = *(arg1 + 0x70)
        
        if (not(result[0] f<= *(rbx + 0x9c)))
            *(rbx + 0xc0) = *(arg1 + 0x80)
        
        rbx += 0x140
    while (rbx != rsi_2)

__security_check_cookie(rax_1 ^ &var_f8)
return result
