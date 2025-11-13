// 函数: sub_140e25960
// 地址: 0x140e25960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg1 + 0x790)
double zmm0 = *(arg1 + 0x794)
float zmm1 = zmm3[0] f+ *(arg1 + 0x7a0)
int32_t rax = *(arg1 + 0x76c)
float zmm2 = zmm0.d f+ *(arg1 + 0x7a4)
*(arg1 + 0x850) |= 1
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0.d
*(arg1 + 0x7c8) = rax
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg1 + 0x7d0) = temp0_3
float var_38[0x4] = temp0_3
sub_140db3580(arg1 + 0x7f0, zmm0)
*(arg1 + 0x2e) |= 4

if (sub_140db3510(arg1 + 0x18) != 0)
    sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

int32_t* result

if (*(arg1 + 0xa68) != 0)
    result = *(arg1 + 0xa70)

if (*(arg1 + 0xa68) == 0 || result == 0 || result[2] s<= 0)
    var_38[2] = 0
    var_38[0].q = sub_140e26f60
    var_38 = var_38
    void var_28
    int64_t* rax_2 = sub_140dd1ff0(&var_28, arg1, &var_38)
    int32_t* rax_3
    float zmm0_2[0x4]
    rax_3, zmm0_2 = j_sub_140a82f30(0x28)
    int32_t* result_2
    
    if (rax_3 == 0)
        result_2 = nullptr
    else
        int64_t* rbx_1 = data_143e20d08
        var_38[0].q = 0
        var_38[2] = 0
        
        if (rax_2 != &var_38 && rax_2[1].d != 0)
            int64_t* rcx_4 = *rax_2
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x40))(rcx_4, &var_38)
        
        (*(*rbx_1 + 0x50))(rbx_1)
        result_2 = sub_140d91260(rax_3, (zx.o(0)).d, &var_38, zmm0_2)
    
    void*** rax_7 = j_sub_140a82f30(0x18)
    
    if (rax_7 != 0)
        rax_7[1].d = 1
        *rax_7 = &data_142ecd2d8
        *(rax_7 + 0xc) = 1
        rax_7[2] = result_2
    
    int32_t* result_1 = result_2
    sub_140db8fd0(data_143e20d08, &result_1)
    int64_t r14_2 = sx.q(*(arg1 + 0x170))
    int32_t rax_8 = (r14_2 + 1).d
    *(arg1 + 0x170) = rax_8
    
    if (rax_8 s> *(arg1 + 0x174))
        sub_1405a4f90(arg1 + 0x168)
    
    void** rcx_11 = (r14_2 << 4) + *(arg1 + 0x168)
    *rcx_11 = result_1
    rcx_11[1] = rax_7
    
    if (rax_7 != 0)
        rax_7[1].d += 1
    
    *(arg1 + 0x2e) |= 8
    
    if (sub_140db3510(arg1 + 0x18) != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
    
    sub_140745b20(rax_2)
    void*** rbx_2 = rax_7
    result = result_1
    void*** rsi_2 = rbx_2
    *(arg1 + 0xa68) = result
    int64_t* rcx_15 = *(arg1 + 0xa70)
    
    if (rbx_2 != rcx_15)
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            rcx_15 = *(arg1 + 0xa70)
            rbx_2 = rax_7
        
        if (rcx_15 != 0)
            int32_t temp2_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rcx_15 + 8))(rcx_15, 1)
            
            rbx_2 = rax_7
        
        *(arg1 + 0xa70) = rsi_2
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*rbx_2)[1](rbx_2, 1)

return result
