// 函数: sub_140e77440
// 地址: 0x140e77440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_a8
int32_t zmm6_1 = sub_140e683e0(arg1 - 0x118, &var_a8, arg6)
int64_t* rdi

if (sub_140e6af80(var_a8, arg4) == 0)
    rdi.b = 0
else
    uint128_t zmm0_1 = zx.o(*arg2)
    int16_t var_90_1 = arg5 & 0xfe00
    zmm0_1 = _mm_unpacklo_pd(zmm0_1, zmm0_1.q)
    void** const var_98 = &data_142ecfd88
    int64_t* var_68_1 = &data_143e20e20
    int64_t var_60_1 = data_143e1e008
    int64_t var_58_1 = data_143e1e010
    int64_t* rax_4 = data_143e1e018
    char var_8e_1 = 0
    int32_t var_8c_1 = arg6
    int64_t var_88_1 = 0
    int64_t var_70_1 = 0
    uint128_t var_80_1 = zmm0_1
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    char var_2e_1 = 0
    int32_t var_40_1 = zmm6_1
    int32_t var_48_1 = arg4
    int16_t var_3c_1 = 1
    int16_t var_30_1 = 0x100
    sub_140e7d5c0(arg1 - 0x118, &var_98, 0)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp3_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_4 + 8))(rax_4, 1)
    
    rdi.b = 1

int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp2_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_a0
            (*(r8_2 + 8))(var_a0, 1, r8_2)

return zx.q(rdi.b)
