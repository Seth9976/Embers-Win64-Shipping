// 函数: sub_142264e40
// 地址: 0x142264e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg2
int64_t rdi = 0
int64_t* rbp = *arg3
int64_t* rcx = rbp

if (rsi != 0)
    int64_t rax_2 = (*(*rsi + 0x30))(rsi)
    rcx = *arg3
    rdi = rax_2

int64_t rax_3 = 0

if (rcx != 0)
    int64_t rdx = *rcx
    rax_3 = (*(rdx + 0x30))(rcx, rdx)

void*** rax_5

if (rdi == 0 || rax_3 == 0 || rdi == rax_3)
    float zmm2[0x4] = *arg4
    float zmm3[0x4] = arg4[1]
    int64_t* rcx_2 = data_143ef8520
    float var_54_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float var_44_1 = temp0_2[0]
    float var_58 = zmm2[0]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float var_48_1 = zmm3[0]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    float var_4c_1 = temp0_4[0]
    zmm2 = *arg5
    float var_40_1 = temp0_5[0]
    zmm3 = arg5[1]
    float var_38_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
    float var_50_1 = temp0_3[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float var_3c = zmm2[0]
    float var_2c_1 = zmm3[0]
    float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float var_24_1 = temp0_9[0]
    float var_34_1 = temp0_8[0]
    float var_30_1 = temp0_10[0]
    float var_28_1 = temp0_7[0]
    rax_5 = sub_1427e8f00(rcx_2, rbp, &var_3c, rsi, &var_58)

if ((rdi != 0 && rax_3 != 0 && rdi != rax_3) || rax_5 == 0)
    *arg1 = nullptr
else
    *arg1 = rax_5

return arg1
