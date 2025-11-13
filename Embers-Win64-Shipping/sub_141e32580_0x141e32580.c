// 函数: sub_141e32580
// 地址: 0x141e32580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int32_t zmm6
result, zmm6 = sub_141e1eab0(sub_141e23160(arg1), arg2)
void* rbx = *(arg1 + 0x30)

if (rbx != 0)
    void* rax_1 = sub_1424641d0()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    void* rbx_1
    
    if (result.d s> *(rdx_1 + 0x38))
        rbx_1 = *(arg1 + 0x30)
    else
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_1 + 0x30)
            rbx_1 = *(arg1 + 0x30)
        else
            rbx_1 = nullptr
            *(arg1 + 0x30) = 0
    
    if (rbx_1 != 0)
        int64_t rcx_1 = *(*arg2 + 0xb0)
        
        if (rcx_1 == 0 || *(rbx_1 + 0x38) != rcx_1)
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0)
            float zmm2_1[0x4] = *(arg1 + 0x1c)
            uint32_t zmm1_1[0x4] = zx.o(0)
            int32_t var_28_1 = zmm6
            uint32_t zmm0_1[0x4]
            
            if (zmm2_1[0] >= 0f)
                zmm0_1 = _mm_min_ss((*(rbx_1 + 0x90))[0], zmm2_1[0])
            else
                zmm0_1 = zx.o(0)
            
            zmm2_1 = *(arg1 + 0x38)
            *(arg1 + 0x1c) = zmm0_1[0]
            
            if (not(__andps_xmmxud_memxud(zmm2_1, data_142d3f770)[0] f<= 9.99999994e-09f))
                zmm0_1 = *(arg1 + 0x3c)
                zmm0_1[0] = zmm0_1[0] f/ zmm2_1[0]
                zmm1_1 = zmm0_1
            
            int32_t zmm0_2 = sub_141e3b530(arg1 + 0x40, zmm1_1, arg2[3].d)
            char r14_1 = *(arg1 + 0x74)
            int64_t r15_1 = *(arg1 + 0x30)
            int32_t zmm7_1 = arg2[2].d
            int32_t rdx_2
            
            if (*(arg1 + 0x14) u>= 3)
                rdx_2 = -1
            
            if (*(arg1 + 0x14) u< 3 || *(arg1 + 0x16) != 0)
                rdx_2 = *(arg1 + 0x10)
            
            int64_t* arg_8
            int64_t* rax_2 = sub_141df60d0(*arg2, rdx_2, &arg_8)
            result =
                sub_141e06760(*arg2, rax_2, r15_1, r14_1, zmm0_2, zmm7_1, arg1 + 0x1c, arg1 + 0x20)
            rax_2[3].d = *(arg2 + 0x14)
            int64_t* rcx_7 = arg_8
            
            if (rcx_7 != 0)
                return sub_141e6c450(rcx_7, zx.d(*(arg1 + 0x14)))

return result
