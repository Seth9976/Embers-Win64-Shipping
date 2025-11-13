// 函数: sub_142659970
// 地址: 0x142659970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t var_148 = 0
int32_t var_140 = 0
int64_t var_f8
(*(*(arg1 - 0xb0) + 0x3f0))(arg1 - 0xb0, &var_f8)
int64_t rdi = sx.q(var_140)
var_f8 = 0
int32_t rax_3 = (rdi + 1).d

if (rax_3 s> 0)
    sub_140775520(&var_148)

int64_t rax_4 = var_148
int64_t rcx_2 = rdi * 9
int128_t* rdi_1 = &data_143dbb0c0
*(rax_4 + (rcx_2 << 3)) = var_f8.o
int128_t var_e8
*(rax_4 + (rcx_2 << 3) + 0x10) = var_e8
uint128_t var_d8
*(rax_4 + (rcx_2 << 3) + 0x20) = var_d8
int128_t var_c8
*(rax_4 + (rcx_2 << 3) + 0x30) = var_c8
int64_t var_b8
*(rax_4 + (rcx_2 << 3) + 0x40) = var_b8
void* result = *(arg1 - 0x10)
void* result_1
uint128_t var_78

if (result != 0)
    result_1 = result
    void* rax_5 = *(result + 0x130)
    
    if (rax_5 == 0)
        result = &data_143dbb0c0
    else
        result = rax_5 + 0x1c0
    
    uint128_t var_98_1 = *result
    int128_t var_88_1 = *(result + 0x10)
    var_78 = *(result + 0x20)
    
    if (rax_3 != 0)
        int64_t* rcx_3 = nullptr
        
        if (data_143f71570 != 0)
            rcx_3 = data_143f71568
        
        result = (*(*rcx_3 + 0x48))(rcx_3, arg2 + 0x70, &result_1, &var_148)

if ((*(arg1 + 0x70) & 8) != 0)
    void* r9_2
    
    if (*(arg1 + 0x90) == 0)
        r9_2 = nullptr
    else
        void* rax_7 = sub_14269ce80()
        
        if (rax_7 == 0)
            r9_2 = nullptr
        else
            r9_2 = *(arg1 + 0x90)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(r9_2 + 0x38) || *(*(r9_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                r9_2 = nullptr
    
    void* rcx_5 = *(*(arg1 - 0x10) + 0x130)
    
    if (rcx_5 != 0)
        rdi_1 = rcx_5 + 0x1c0
    
    uint128_t zmm6 = *(arg1 + 0x74)
    uint128_t zmm2 = *(arg1 + 0x7c)
    int128_t zmm1 = *(arg1 + 0x88)
    int32_t zmm4_1 = *(arg1 + 0x80)
    uint128_t zmm0
    zmm0.d = zmm2.d f+ zmm1.d
    int128_t zmm5_1 = *(arg1 + 0x78)
    zmm2.d = zmm2.d f- zmm1.d
    int32_t zmm3 = *(arg1 + 0x84)
    uint128_t zmm8 = zmm6
    int128_t zmm7 = zmm5_1
    char var_120_1 = 1
    zmm6.d = zmm6.d f- zmm4_1
    int32_t var_108_1 = zmm0.d
    zmm5_1.d = zmm5_1.d f- zmm3
    zmm8.d = zmm8.d f+ zmm4_1
    zmm7.d = zmm7.d f+ zmm3
    int32_t var_130_1 = zmm2.d
    uint64_t var_138 = (_mm_unpacklo_ps(zmm6, zmm5_1.q)).q
    uint64_t var_12c_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
    int32_t var_124_1 = var_108_1
    result = sub_141db9ae0(arg2 + 0x70, sub_141db6dd0(&result_1, &var_138, rdi_1, r9_2))
    int64_t rcx_8 = var_78:8.q
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_148

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_168)
return result
