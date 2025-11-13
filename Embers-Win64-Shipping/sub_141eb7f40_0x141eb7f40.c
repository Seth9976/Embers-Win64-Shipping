// 函数: sub_141eb7f40
// 地址: 0x141eb7f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
int16_t rax_1 = *arg1[7]
int32_t rcx = *(arg1[4] + 0x18)
int16_t r9

if (rcx == 0)
    r9 = 3
else if (rcx == 1)
    r9 = 1
else if (rcx != 2)
    r9 = 3
else
    r9 = (rcx - 1).w + 1

int16_t rdx_1 = rax_1 & 4
int16_t r8_2 = rdx_1 | 8

if ((rax_1 & 8) == 0)
    r8_2 = rdx_1

int16_t rbx = r8_2 | 0x10

if ((rax_1 & 0x10) == 0)
    rbx = r8_2

void var_28
int32_t* rax_2 = sub_140acc970(&var_28, arg1[8])
void* rcx_4 = arg1[5]
int64_t rsi = arg1[1]
int64_t rbp = arg1[6]
int16_t var_2c = rbx | r9
int128_t* rbx_1 = arg1[2]
int128_t var_3c = *rax_2
char var_2a = 0
int64_t* rax_3 = sub_14226e750(rcx_4)
float zmm2[0x4] = *rbx_1
float zmm3[0x4] = rbx_1[1]
float var_58 = zmm2[0]
float var_54 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float var_48 = zmm3[0]
float zmm0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float zmm1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_4c = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
float var_44 = zmm0_1[0]
char result =
    (*(*rax_3 + 0x300))(rax_3, rbp, &var_58, rdi, &var_3c, rsi, var_58, zmm1[0], var_48, zmm3[0])
void* rdx_4 = *arg1
int32_t rcx_6 = *(rdx_4 + 0x8048)

if (rcx_6 s> 0)
    void* rax_5 = *(rdx_4 + 0x8040)
    void* rdx_5 = rdx_4 + 0x4040
    
    if (rax_5 != 0)
        rdx_5 = rax_5
    
    result = sub_141ebe460(rcx_6, rdx_5, arg1[8], arg1[0xa])
    *arg1[9] = result

return result
