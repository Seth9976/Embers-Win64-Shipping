// 函数: sub_141ca1cc0
// 地址: 0x141ca1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
float zmm0[0x4]
int128_t zmm8
rax, zmm0, zmm8 = sub_140b6b610()
int32_t rdi

rdi = arg3 == 0 ? 0 : 1

int32_t* rbx_1 = *(arg2 + 0x38)
float zmm6[0x4] = 0x7f7fffff
float zmm7[0x4] = 0x42c80000
void* rsi_1 = &rbx_1[sx.q(*(arg2 + 0x40))]

if (rbx_1 != rsi_1)
    int128_t var_38_1 = zmm8
    
    do
        (*(*rax + 0x18))(rax, zx.q(*rbx_1), zx.q(rdi))
        float zmm1_1[0x4] = zmm0
        
        if (rdi.b != 0)
            zmm0 = 0x42c80000
            zmm0[0] = 100f - zmm1_1[0]
            zmm1_1 = zmm0
        
        if (zmm1_1[0] <= 0f)
            zmm6 = zx.o(0)
            break
        
        rbx_1 = &rbx_1[1]
        zmm6 = _mm_min_ss(zmm1_1[0], zmm6[0])
    while (rbx_1 != rsi_1)

if (rdi.b == 0)
    return zmm6

zmm7[0] = 100f - zmm6[0]
return zmm7
