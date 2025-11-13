// 函数: sub_1426ccbd0
// 地址: 0x1426ccbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx_1

if (*(arg1 + 0x40) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x40)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

int64_t result = sub_14273b0e0()

if (result != 0)
    int64_t rdx_1 = result + 0x30
    result = sx.q(*(result + 0x38))
    
    if (result.d s<= *(rbx_1 + 0x38))
        int64_t result_1 = result
        result = *(rbx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rdx_1)
            int64_t* rbx_2 = *(arg1 + 0x78)
            void arg_8
            sub_140d3a3a0(&arg_8, arg2)
            return sub_1426c3720(rbx_2, &arg_8)

if (arg2 == 0)
    return result

void* rax_5 = *(arg2 + 0x130)
int64_t var_28
float var_20_1

if (rax_5 == 0)
    var_28 = data_143dbb1f8.q
    var_20_1 = data_143dbb200
else
    float zmm1[0x4] = *(rax_5 + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_1[0]

int64_t* rcx_3 = *(arg1 + 0x78)
int64_t var_18 = var_28
float var_10_1 = var_20_1
return sub_1426f0420(rcx_3, &var_18)
