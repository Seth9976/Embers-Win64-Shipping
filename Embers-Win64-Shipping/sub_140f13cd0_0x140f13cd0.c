// 函数: sub_140f13cd0
// 地址: 0x140f13cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = arg2[2].d
zmm0[0] = zmm0[0] f* *(arg2 + 0x24)
float zmm7[0x4] = *(arg2 + 0x1c)
uint32_t zmm1[0x4] = zmm7
zmm1[0] = zmm1[0] f* *(arg2 + 0x28)
uint32_t zmm6[0x4] = 0x3f800000
uint32_t zmm11[0x4] = *(arg3 + 0x1c)
zmm1[0] = zmm1[0] f- zmm0[0]
uint32_t zmm9[0x4] = *(arg3 + 0x18)
void* result = *(arg1 + 0x2d8)
zmm9[0] = zmm9[0] f- *(arg2 + 0x2c)
zmm9[0] = zmm9[0] f- *(arg2 + 0x2c)
zmm6[0] = 1f f/ zmm1[0]
zmm11[0] = zmm11[0] f- arg2[3].d
zmm11[0] = zmm11[0] f- arg2[3].d
zmm6[0] = zmm6[0] f* *(arg2 + 0x28)
zmm9[0] = zmm9[0] f* zmm6[0]
zmm6[0] = zmm6[0] f* *(arg2 + 0x24)
zmm11[0] = zmm11[0] f* zmm6[0]
zmm6[0] = zmm6[0] f* arg2[2].d
zmm9[0] = zmm9[0] f- zmm11[0]
zmm6[0] = zmm6[0] f* zmm7[0]
zmm1 = *(arg2 + 4)
zmm9[0] = zmm9[0] f* zmm6[0]
zmm11[0] = zmm11[0] f* zmm6[0]
zmm9[0] = zmm9[0] f+ zmm9[0]
zmm0 = *arg2
zmm11[0] = zmm11[0] f- zmm9[0]
zmm9[0] = zmm9[0] f- zmm0[0]
zmm0[0] = zmm0[0] f- *(result + 8)
zmm11[0] = zmm11[0] f+ zmm11[0]
zmm9[0] = zmm9[0] f/ zmm0[0]
zmm11[0] = zmm11[0] f- zmm1[0]
zmm1[0] = zmm1[0] f- *(result + 0xc)
float zmm2 = zmm9[0] f* zmm9[0]
zmm11[0] = zmm11[0] f/ zmm1[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm11[0] f* zmm11[0] + zmm2)

if (temp0[0] <= 1f || arg4 != 0)
    float zmm0_1[0x4]
    zmm0_1, result = sub_140a3f4a0(zmm11, zmm9)
    float zmm6_1 = zmm0_1[0]
    
    if (not(zmm6_1 >= 0f))
        zmm6_1 = zmm6_1 + 6.28318548f
    
    int64_t* rdi_1 = nullptr
    float var_78[0x4]
    
    if (*(arg1 + 0x2d0) != 0)
        int64_t* rcx = *(arg1 + 0x2c8)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x2d0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x2c8)
            
            (*(*rcx_1 + 0x48))(rcx_1, &var_78)
            *(arg1 + 0x2b0) = var_78
    
    bool cond:1_1 = temp0[0] > 1f
    var_78 = *(arg1 + 0x2b0)
    
    zmm0_1 = cond:1_1 ? 0x3f800000 : temp0
    
    float var_84_1 = zmm0_1[0]
    float var_80_1 = var_78[2][0]
    int32_t var_7c_1 = var_78[3]
    
    if (*(arg1 + 0x308) != 0)
        int64_t* rcx_2 = *(arg1 + 0x300)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2).b != 0)
            var_78 = (zmm6_1 * 57.2957764f).o
            
            if (*(arg1 + 0x308) != 0)
                rdi_1 = *(arg1 + 0x300)
            
            (*(*rdi_1 + 0x50))(rdi_1, &var_78)

result.b = temp0[0] <= 1f
return result
