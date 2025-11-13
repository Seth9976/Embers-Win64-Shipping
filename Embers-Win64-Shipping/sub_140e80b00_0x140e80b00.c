// 函数: sub_140e80b00
// 地址: 0x140e80b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void* var_c8
(*(*rcx + 0x10))(rcx, &var_c8)
int128_t var_b8
int64_t* rax_1
uint128_t zmm0
rax_1, zmm0 = sub_140e15ab0(var_c8, &var_b8)
int128_t zmm8 = *rax_1
int128_t zmm10 = *(rax_1 + 4)
int64_t (* result_1)(int64_t* arg1, int64_t* arg2)
int32_t* rax_2
uint128_t zmm0_1
int512_t zmm6
rax_2, zmm0_1, zmm6 = sub_140e14fe0(var_c8, &result_1, zmm0)
int128_t zmm9 = *rax_2
zmm6.o = rax_2[1]
int128_t zmm7 = rax_2[2]
int32_t* rax_3
float zmm6_1
rax_3, zmm6_1 = sub_140e14fe0(var_c8, &result_1, zmm0_1)
zmm8.d = zmm8.d f- zmm6_1
zmm10.d = zmm10.d f- zmm7.d
int64_t* rcx_4 = *arg2
int128_t zmm11
zmm11.d = (*arg3).d f- rax_3[1]
zmm8.d = zmm8.d f/ zmm9.d
zmm11.d = zmm11.d f/ *rax_3
zmm11.d = zmm11.d f- zmm8.d
zmm10.d = zmm10.d f/ zmm9.d
zmm6_1 = (*(arg3 + 4) f- rax_3[2]) f/ *rax_3 f- zmm10.d
int64_t* rax_5 = (*(*rcx_4 + 0x20))(rcx_4, &var_b8)
int64_t* rdi = rax_5[1]
result_1 = *rax_5
rax_5[1] = 0
int32_t var_d0 = rdi.d
*rax_5 = 0
void*** rax_6 = sub_140de7320(arg1, 0xffffffff)
int64_t var_a0 = 0
char var_98 = 1
*(rax_6 + 0x24) = 0x101
float var_a8[0x4]
var_a8[0] = zmm11.d
int64_t var_90 = 0
float temp0[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
temp0[0] = zmm6_1
int32_t var_88 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
float var_a8_1[0x4] = temp0_1
rax_6[7].b = 1
*(rax_6 + 0x28) = temp0_1
sub_1407473e0(&rax_6[8], &var_90)
sub_140745b20(&var_90)
sub_140de1aa0(rax_6, &result_1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t temp3_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

int64_t* rcx_14 = *arg2
result_1 = sub_140e758f0
var_d0 = 0
uint64_t* rax_12 = (*(*rcx_14 + 0x28))(rcx_14)
var_b8 = result_1.o
void arg_10
int64_t (* result)(int64_t* arg1, int64_t* arg2) =
    sub_140a3dfa0(rax_12, &arg_10, sub_140e45a60(&result_1, arg1, &var_b8))

if (var_d0 == 0)
    result = result_1
label_140e80d2b:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    int64_t (* result_2)(int64_t* arg1, int64_t* arg2) = result_1
    
    if (result_2 != 0)
        (*(*result_2 + 0x38))(result_2, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        var_d0 = 0
        goto label_140e80d2b

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        result = (**var_c0)(var_c0)
        int32_t temp6_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*var_c0 + 8))(var_c0, 1)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp7_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
