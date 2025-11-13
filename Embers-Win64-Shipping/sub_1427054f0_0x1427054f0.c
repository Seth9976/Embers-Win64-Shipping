// 函数: sub_1427054f0
// 地址: 0x1427054f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xa8)

if (result == 0)
    result = sub_141ee69e0(arg1)

if (*(arg1 + 0xe8) == 0 || result == 0)
    return result

int64_t* rdi_1 = *(result + 0x120)
void* rax
int64_t rax_1
void* rdx_1

if (rdi_1 != 0)
    rax = sub_14269bba0()
    rdx_1 = rdi_1[2]
    rax_1 = sx.q(*(rax + 0x38))

if (rdi_1 == 0 || rax_1.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
    rdi_1 = nullptr

void* rcx_1 = *(*(arg1 + 0xe8) + 0xb0)
float var_28_1
float var_20_1

if (rcx_1 == 0)
    var_28_1 = 3.40282347e+38f
    int32_t var_24_2 = 0x7f7fffff
    var_20_1 = 3.40282347e+38f
else
    arg2 = *(rcx_1 + 0x1d0)
    var_28_1 = arg2[0]
    float temp0_1[0x4] = _mm_shuffle_ps(arg2, arg2, 0x55)
    arg2 = _mm_shuffle_ps(arg2, arg2, 0xaa)
    var_20_1 = arg2[0]
    float var_24_1 = temp0_1[0]

float var_14_1 = var_20_1
int64_t rax_5 = *rdi_1
int64_t var_1c = var_28_1.q
*(arg1 + 0xf8) = (*(rax_5 + 0x2b0))(rdi_1, arg2, &var_1c, &data_143dbb1f8, var_28_1, var_20_1)
return sub_1405a46b0(&rdi_1[0x1c], arg1)
