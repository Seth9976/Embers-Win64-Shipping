// 函数: sub_141e2a980
// 地址: 0x141e2a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x90))()
arg1[4].d = 0xfffffffe
arg1[5].d = 0xfffffffe
*(arg1 + 0x16) = 0
int64_t result
int32_t zmm6
result, zmm6 = sub_141e1eab0(sub_141e23160(arg1), arg2)
void* const rbx_1 = arg1[6]

if (rbx_1 != 0)
    void* rax_2 = sub_1424641d0()
    void* rdx_1 = *(rbx_1 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        rbx_1 = arg1[6]
    else
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_2 + 0x30)
            rbx_1 = arg1[6]
        else
            rbx_1 = nullptr
            arg1[6] = 0

uint32_t zmm1[0x4] = arg1[0xe].d
*(arg1 + 0x1c) = zmm1[0]
*(arg1 + 0x43) = 0

if (rbx_1 != 0)
    int32_t var_18_1 = zmm6
    float zmm0_1[0x4]
    
    if (zmm1[0] f>= 0f)
        zmm0_1 = _mm_min_ss((*(rbx_1 + 0x90))[0], zmm1[0])
    else
        zmm0_1 = zx.o(0)
    
    float zmm2_1[0x4] = arg1[7].d
    *(arg1 + 0x1c) = zmm0_1[0]
    
    if (__andps_xmmxud_memxud(zmm2_1, data_142d3f770)[0] > 9.99999994e-09f)
        zmm1 = *(arg1 + 0x3c)
        zmm1[0] = zmm1[0] f/ zmm2_1[0]
    else
        zmm1 = zx.o(0)
    
    float zmm0_2
    int32_t zmm6_1
    zmm0_2, zmm6_1 = sub_141e3b530(&arg1[8], zmm1, zx.o(0))
    
    if (not(zmm6_1 f!= arg1[0xe].d))
        result = arg1[6]
        
        if (not(zmm0_2 f* *(result + 0x94) f>= zmm6_1))
            result = zx.q(*(result + 0x90))
            *(arg1 + 0x1c) = result.d

return result
