// 函数: sub_141ecba70
// 地址: 0x141ecba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int64_t* rbx_1

if (((arg1[1].d u>> 4).b & 1) == 0)
    rbx_1 = arg1[4]
else
    rbx_1 = nullptr

int32_t var_38
void var_18
(*(*rbx_1 + 0x6f8))(rbx_1, &var_38, &var_18)
void* rax_3 = rbx_1[0x4a]
int32_t var_28
float zmm1[0x4]
uint128_t zmm2

if (rax_3 == 0)
    int32_t var_34
    zmm1 = var_34
    zmm2 = var_38
else
    void* rax_4 = *(rax_3 + 0x130)
    float var_20_1
    
    if (rax_4 == 0)
        var_28.q = data_143dbb1f8.q
        var_20_1 = data_143dbb200
    else
        zmm1 = *(rax_4 + 0x1d0)
        var_28 = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_24_1 = temp0_1[0]
    
    zmm2 = zx.o(var_28.q)
    zmm1 = zmm2
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_34_1 = zmm1[0]
    var_38 = zmm2.d
    float var_20_2 = var_20_1
    var_28.q = zmm2.q

int32_t rcx_1 = int.d(zmm2.d)
float var_30 = zx.o(0)[0]
int32_t rdi = *(rax_1 + 0x540)
var_28 = rcx_1
int32_t var_20_3 = rdi
var_28.q = var_28.q
int32_t var_24_3 = int.d(zmm1[0]) + *(rax_1 + 0x53c)
var_28 = rcx_1 + *(rax_1 + 0x538)
var_28.q = var_28.q
return sub_142441d00(rax_1, &var_28)
