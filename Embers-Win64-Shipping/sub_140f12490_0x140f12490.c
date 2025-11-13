// 函数: sub_140f12490
// 地址: 0x140f12490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140f76fa0(*(arg1 + 0x2c0))
uint32_t rcx_1 = zx.d(*(rax + 0x68))
void* rax_1 = rax + 0x58

if (rcx_1 != 0)
    if (rcx_1 == 1)
        rax_1 = *(rax_1 + 0x18)
    else if (rcx_1 == 3)
        rax_1 = &arg7[2]
    else
        rax_1 = &arg7[1]

float zmm6[0x4] = *rax_1
int128_t zmm4 = *arg7
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float var_38[0x4] = zmm6
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_5[0] = temp0_2[0]
float zmm5 = 0.600000024f * temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = temp0_4[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = zmm5
float var_28[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
int128_t var_48 = zmm4

if (arg8 == 0)
    rax_1.b = 0
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx_3 = *(arg1 + 0x198)
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3).b != 0)
            int64_t* rcx_4
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_4 + 0x48))(rcx_4).b
    
    if (*(arg1 + 0x190) == 0)
        rax_1.b = 0
    else
        rax_1.b = 1

return sub_140f81da0(*(arg1 + 0x2c0), arg2, arg3, arg4, arg5, arg6, &var_48, rax_1.b)
