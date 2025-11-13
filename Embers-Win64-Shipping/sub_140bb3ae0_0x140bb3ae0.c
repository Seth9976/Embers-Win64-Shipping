// 函数: sub_140bb3ae0
// 地址: 0x140bb3ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_d0 = 0
int32_t rbx = 0

if (arg2 != 0)
    rbx = *(arg2 + 0x23c)
    var_d0 = *(arg2 + 0x14)

int32_t rsi = *(arg2 + 0x44)
int32_t rdx

if (data_143e1a350 == 0)
    rdx = *(arg2 + 0x23c)
else
    rdx = sub_140baa830(0x7fffffff)

void** const var_98 = &data_142e345d8
int32_t rax_5 = *(arg1 + 0x328) + 1
int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = j_sub_140b98a80
int32_t var_74 = rdx
int32_t var_c8 = rbx
int128_t zmm0
zmm0.q = var_d0
*(arg1 + 0x328) = rax_5
uint128_t zmm1 = zmm0
zmm0 = var_98.o
zmm1 = _mm_unpacklo_pd(zmm1, arg1)
int32_t var_78 = rsi
int32_t r8
int32_t var_70 = r8
int32_t var_6c = rax_5
int128_t* var_58 = nullptr
void*** var_a8 = nullptr
int128_t var_48 = zmm0
int128_t var_90 = zmm1
uint128_t var_38 = zmm1
uint64_t result = sub_140b93350(arg1 + 0x330, &var_78)

if (var_68 != 0)
    int128_t* rcx_2 = &var_48
    
    if (var_58 != 0)
        rcx_2 = var_58
    
    result = (*(*rcx_2 + 0x10))(rcx_2)

if (nullptr != 0)
    void** const* rcx_3 = &var_98
    
    if (var_a8 != 0)
        rcx_3 = var_a8
    
    result = (*rcx_3)[2](rcx_3)

__security_check_cookie(rax_1 ^ &var_f8)
return result
