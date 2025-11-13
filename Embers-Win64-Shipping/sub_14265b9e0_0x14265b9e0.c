// 函数: sub_14265b9e0
// 地址: 0x14265b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143b51518
*arg2 = data_143b51510
arg2[1].d = rax
int64_t rax_1 = sx.q(*(arg1 + 0x30))

if (rax_1.d s<= 1)
    return arg2

uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
bool cond:0

if (arg3 s>= 0)
    cond:0 = arg3 u< rax_1.d
    
    if (arg3 s>= rax_1.d)
        goto label_14265ba8a
    
    int32_t* rdx = *(arg1 + 0x28)
    
    if (arg3 == 0)
        zmm6.d = rdx[8].d f- *rdx
        zmm7.d = rdx[9].d f- rdx[1]
        zmm8.d = rdx[0xa].d f- rdx[2]
    else
        int64_t rcx = sx.q(arg3)
        zmm6.d = rdx[rcx * 8].d f- rdx[rcx * 8 - 8]
        zmm7.d = rdx[rcx * 8 + 1].d f- rdx[rcx * 8 - 7]
        zmm8.d = rdx[rcx * 8 + 2].d f- rdx[rcx * 8 - 6]
    
    goto label_14265bace

cond:0 = arg3 u< rax_1.d
label_14265ba8a:

if (not(cond:0))
    int64_t rax_4 = *(arg1 + 0x28)
    int64_t rcx_3 = (rax_1 - 2) << 5
    int64_t rdx_2 = rax_1 << 5
    zmm6.d = (*(rdx_2 + rax_4 - 0x20)).d f- *(rcx_3 + rax_4)
    zmm7.d = (*(rdx_2 + rax_4 - 0x1c)).d f- *(rcx_3 + rax_4 + 4)
    zmm8.d = (*(rdx_2 + rax_4 - 0x18)).d f- *(rcx_3 + rax_4 + 8)
label_14265bace:
    uint128_t zmm2
    zmm2.d = zmm7.d f* zmm7.d
    uint128_t zmm0
    zmm0.d = zmm6.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
    
    if (zmm2.d f== 1f)
        goto label_14265bb89
    
    int32_t var_48_1
    int32_t var_40_1
    
    if (zmm2.d f>= 9.99999994e-09f)
        float zmm3 = zmm2.d
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0.d = temp0_1.d f* temp0_1[0]
        zmm2.d = 0.5f - zmm3 f* zmm0.d
        zmm0.d = temp0_1.d f* zmm2.d
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        zmm0.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        zmm6.d = zmm6.d f* temp0_1[0]
        zmm7.d = zmm7.d f* temp0_1[0]
        zmm8.d = zmm8.d f* temp0_1[0]
    label_14265bb89:
        var_40_1 = zmm8.d
        int32_t var_44_2 = zmm7.d
        var_48_1 = zmm6.d
    else
        var_48_1 = data_143dbb1f8.d
        var_40_1 = data_143dbb200.d
        float var_44_1 = data_143dbb1fc
    
    *arg2 = var_48_1.q
    arg2[1].d = var_40_1

return arg2
