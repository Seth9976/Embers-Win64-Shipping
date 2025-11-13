// 函数: sub_1414dbfe0
// 地址: 0x1414dbfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0xfb8
int64_t i_1 = 2
float zmm6[0x4]
float var_18[0x4] = zmm6
int64_t i

do
    void* rdi_1 = *rbx
    
    if (rdi_1 != 0)
        int64_t* rcx = *(rdi_1 + 0x20)
        zmm6 = *(rcx + 0x30)
        (*(*rcx + 0x118))(rcx)
        arg2 = cosf(arg2[0])
        int64_t* rcx_1 = *(rdi_1 + 0x20)
        float zmm1[0x4] = 0x3f800000
        zmm1[0] = 1f - arg2[0]
        float zmm2 = zmm6[0]
        int64_t rax_2 = *rcx_1
        arg2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        float zmm3 = 0.159154937f / zmm1[0]
        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        arg2[0] = arg2[0] * zmm3
        float var_50_1 = arg2[0]
        arg2 = data_14399f5c0
        zmm1[0] = zmm1[0] * zmm3
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        zmm6[0] = zmm6[0] * zmm3
        float var_48[0x4] = arg2
        float var_58 = zmm2 * zmm3
        float var_54_1 = zmm1[0]
        float var_4c_1 = zmm6[0]
        (*(rax_2 + 0x100))(rcx_1, &var_48, &var_58)
    
    rbx = &rbx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
