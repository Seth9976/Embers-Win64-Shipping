// 函数: sub_142264ca0
// 地址: 0x142264ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x10)
float zmm3[0x4] = *(arg1 + 0x20)
bool cond:0 = *(arg1 + 0x40) == 0
int64_t* rcx = data_143ef8520
float var_38
int32_t* rdx = &var_38
float var_34 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
var_38 = zmm2[0]
float var_28 = zmm3[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float var_20 = temp0_3[0]
float var_30 = temp0_2[0]
float var_2c = temp0_4[0]
float var_24 = temp0_1[0]
int64_t rax = *rcx
char arg_8
char arg_10

if (not(cond:0))
    int64_t* rax_1 = (*(rax + 0xa8))(rcx, rdx)
    
    if (*(arg1 + 0x41) != 0)
        (*(*rax_1 + 0x60))(rax_1, &arg_8)
        char rax_3 = arg_8 | 8
        arg_8 = rax_3
        arg_10 = rax_3
        (*(*rax_1 + 0x58))(rax_1, &arg_10)
    
    int64_t rax_6 = (*(*rax_1 + 0x38))(rax_1, *(arg1 + 0x48))
    *arg2 = rax_1
    return rax_6

int64_t* rax_7 = (*(rax + 0xb0))(rcx, rdx)
(*(*rax_7 + 0x38))(rax_7, *(arg1 + 0x48))
(*(*rax_7 + 0x178))(rax_7, &arg_8)
char rax_10 = arg_8 | 2
arg_8 = rax_10
arg_10 = rax_10
int64_t rax_12 = (*(*rax_7 + 0x170))(rax_7, &arg_10)

if (*(arg1 + 0x41) != 0)
    (*(*rax_7 + 0x60))(rax_7, &arg_8)
    char rax_14 = arg_8 | 8
    arg_8 = rax_14
    arg_10 = rax_14
    rax_12 = (*(*rax_7 + 0x58))(rax_7, &arg_10)

if (*(arg1 + 0x42) == 0)
    (*(*rax_7 + 0x60))(rax_7, &arg_8)
    char rax_17 = arg_8 | 2
    arg_8 = rax_17
    arg_10 = rax_17
    rax_12 = (*(*rax_7 + 0x58))(rax_7, &arg_10)

*arg2 = rax_7
return rax_12
