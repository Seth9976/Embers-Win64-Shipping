// 函数: sub_142271830
// 地址: 0x142271830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if ((*(arg1 + 0x264) & 2) != 0)
    result.b = 1
    return result

int64_t* rbx = *(arg1 + 0x130)
int64_t var_38 = 0
int32_t var_30 = 0

if (rbx != 0)
    void* rax = sub_142577430()
    void* rdx = rbx[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result << 3)) == rax + 0x30)
        float zmm1[0x4] = *(arg2 + 0x1d0)
        int64_t rax_1 = *rbx
        int32_t arg_8 = 0xbf800000
        float var_28 = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_24_1 = temp0_1[0]
        
        if ((*(rax_1 + 0x6b0))(rbx, &var_28, &arg_8, &var_38).b == 0 || not(arg_8[0] == 0f))
            result.b = 0
            return result

result.b = 1
return result
