// 函数: sub_141ec7b00
// 地址: 0x141ec7b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rbx = arg1[4]

int64_t var_68
int64_t var_48
(*(*rbx + 0x6f8))(rbx, &var_68, &var_48)
void* rax_3 = rbx[0x4a]
int64_t var_58
float rcx_1
float zmm1[0x4]

if (rax_3 == 0)
    float var_60
    rcx_1 = var_60
    zmm1 = zx.o(var_68)
else
    void* rax_4 = *(rax_3 + 0x130)
    float var_50_1
    
    if (rax_4 == 0)
        float rax_5 = data_143dbb200
        var_58 = data_143dbb1f8.q
        var_50_1 = rax_5
    else
        zmm1 = *(rax_4 + 0x1d0)
        var_58.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_50_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_58:4.d = temp0_1[0]
    
    zmm1 = zx.o(var_58)
    rcx_1 = var_50_1
    var_68 = zmm1.q
    float var_60_1 = rcx_1

float zmm0[0x4] = zx.o(var_48)
float var_30 = rcx_1
int32_t var_40
int32_t var_50_2 = var_40
int64_t rax_7 = *arg1
int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
var_58 = zmm0.q
int64_t var_38 = zmm1.q
int64_t var_18
int64_t result = (*(rax_7 + 0x3b0))(arg1, zmm1, &var_58, &var_18, &var_28)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
