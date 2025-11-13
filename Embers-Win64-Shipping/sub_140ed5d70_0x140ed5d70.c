// 函数: sub_140ed5d70
// 地址: 0x140ed5d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x418)
int128_t result_1

if (*(rbx + 0x68) != 0)
    int64_t* rcx = *(rbx + 0x60)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x68) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x60)
        
        (*(*rcx_1 + 0x48))(rcx_1, &result_1)
        *(rbx + 0x48) = result_1

int128_t result = *(rbx + 0x48)
result_1 = result
float zmm1
float zmm2
float zmm3[0x4]

if (arg2 == 0)
    zmm3 = result_1.d
    result = result_1:4.d
    zmm1 = result_1:8.d
    zmm3[0] = zmm3[0] f+ data_1439b3970
    result.d = result.d f+ data_1439b3974
    zmm1 = zmm1 f+ data_1439b3978
    zmm2 = data_1439b397c
else
    if (arg2 != 1)
        return result
    
    zmm3 = result_1.d
    result = result_1:4.d
    zmm1 = result_1:8.d
    zmm3[0] = zmm3[0] f+ data_1439b3960
    result.d = result.d f+ data_1439b3964
    zmm1 = zmm1 f+ data_1439b3968
    zmm2 = data_1439b396c

void* rcx_2 = *(arg1 + 0x418)
zmm2 = zmm2 f+ result_1:0xc.d
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_1[0] = result.d
char var_28_1 = 1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm1
int64_t var_20 = 0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm2
int32_t var_18_1 = 0
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
*(rcx_2 + 0x48) = temp0_4
*(rcx_2 + 0x58) = 1
float var_38_1[0x4] = temp0_4
sub_140692f90(rcx_2 + 0x60, &var_20)
return sub_140745b20(&var_20)
