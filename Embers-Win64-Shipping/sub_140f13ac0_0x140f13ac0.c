// 函数: sub_140f13ac0
// 地址: 0x140f13ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
float zmm2 = arg2[0xa]
float zmm4 = arg2[9]
float zmm6[0x4] = arg2[7]
float zmm1 = zmm6[0]
float zmm7[0x4] = arg2[8]
float zmm8[0x4] = *(arg3 + 0x18)
zmm7[0] = zmm7[0] * zmm4
int128_t zmm9 = 0x3f800000
float zmm10[0x4] = *(arg3 + 0x1c)
zmm8[0] = zmm8[0] f- arg2[0xb]
zmm8[0] = zmm8[0] f- arg2[0xb]
zmm1 = zmm1 * zmm2 - zmm7[0]
zmm10[0] = zmm10[0] f- arg2[0xc]
zmm10[0] = zmm10[0] f- arg2[0xc]
float zmm5 = 1f / zmm1
zmm6[0] = zmm6[0] * zmm5
zmm7[0] = zmm7[0] * zmm5
zmm10[0] = zmm10[0] * zmm6[0]
zmm6 = zx.o(0)
zmm8[0] = zmm8[0] * zmm7[0]
zmm10[0] = zmm10[0] - zmm8[0]
zmm8[0] = zmm8[0] * zmm2 * zmm5
zmm10[0] = zmm10[0] * zmm4 * zmm5
zmm10[0] = zmm10[0] f/ arg2[1]
zmm8[0] = zmm8[0] - zmm10[0]
bool cond:0 = zmm10[0] >= 0f
zmm8[0] = zmm8[0] f/ *arg2

if (cond:0)
    zmm10 = _mm_min_ss(zmm10[0], 0x3f800000)
else
    zmm10 = zx.o(0)

if (not(zmm8[0] < 0f))
    zmm6 = _mm_min_ss(zmm8[0], 0x3f800000)

int64_t* rdi = nullptr
float var_88

if (*(arg1 + 0x2d0) != 0)
    int64_t* rcx = *(arg1 + 0x2c8)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x2d0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x2c8)
            
            result = (*(*rcx_1 + 0x48))(rcx_1, &var_88)
            *(arg1 + 0x2b0) = var_88.o

bool cond:1 = zmm10[0] <= 0.5f
float zmm0[0x4] = *(arg1 + 0x2b0)
zmm6[0] = zmm6[0] * 360f
float var_78[0x4] = zmm0

if (cond:1)
    zmm0 = zmm10
    zmm0[0] = zmm0[0] + zmm10[0]
else
    zmm0 = 0x3f800000
    zmm9.d = 1f - zmm10[0]
    zmm9.d = zmm9.d f+ zmm9.d

float var_84 = zmm0[0]
float var_7c = var_78[3][0]
var_88 = zmm6[0]
int32_t var_80 = zmm9.d

if (*(arg1 + 0x308) != 0)
    int64_t* rcx_2 = *(arg1 + 0x300)
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (result != 0)
            var_78 = var_88.o
            
            if (*(arg1 + 0x308) != 0)
                rdi = *(arg1 + 0x300)
            
            return (*(*rdi + 0x50))(rdi, &var_78)

return result
