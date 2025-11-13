// 函数: sub_140f6c830
// 地址: 0x140f6c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78 = arg1 + 0x2a8
void* var_70 = arg1 + 0x548
int64_t* rdi = nullptr
void* var_68 = arg1 + 0x578
void* var_60 = arg1 + 0x590
char var_58 = *(arg1 + 0x5a8)
char var_57 = *(arg1 + 0x5a9)
int64_t var_50 = 0
int32_t var_48 = 0
int32_t zmm0 = sub_1407473e0(&var_50, arg1 + 0x5b0)
float zmm7[0x4] = *(arg1 + 0x630)
int64_t* rcx_1 = *(arg1 + 0x2d8)
void* var_40 = arg1 + 0x5c0
void* var_38 = arg1 + 0x600
void* var_30 = arg1 + 0x5e8
zmm7[0] = zmm7[0] f* arg3.d
float arg_8
float* rax_10
float zmm7_1
rax_10, zmm7_1 = sub_140f6c1f0(rcx_1, &arg_8, &var_78, zmm7, zmm0, arg1 + 0x2e0)
float zmm6_1 = zmm7_1 * *rax_10
zmm7_1 = zmm7_1 * rax_10[1]
int32_t zmm0_1 = sub_140745b20(&var_50)

if (*(arg1 + 0x628) != 0)
    int64_t* rcx_3 = *(arg1 + 0x620)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        if (*(arg1 + 0x628) != 0)
            rdi = *(arg1 + 0x620)
        
        (*(*rdi + 0x48))(rdi)
        *(arg1 + 0x618) = zmm0_1

int32_t temp0 = _mm_max_ss(*(arg1 + 0x618), zmm6_1)
arg2[1] = zmm7_1
*arg2 = temp0
return arg2
