// 函数: sub_140e77130
// 地址: 0x140e77130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_98
sub_140e683e0(arg1 - 0x118, &var_98, arg4)
int64_t* rdi

if (sub_140e6af80(var_98, arg3) == 0)
    rdi.b = 0
else
    uint128_t zmm0_1 = zx.o(*arg2)
    int16_t var_80_1 = arg5 & 0xfe00
    zmm0_1 = _mm_unpacklo_pd(zmm0_1, zmm0_1.q)
    void** const var_88 = &data_142ecfd88
    int64_t* var_58_1 = &data_143e20e20
    int64_t var_50_1 = data_143e1e008
    int64_t var_48_1 = data_143e1e010
    int64_t* rax_4 = data_143e1e018
    char var_7e_1 = 0
    int32_t var_7c_1 = arg4
    int64_t var_78_1 = 0
    int64_t var_60_1 = 0
    uint128_t var_70_1 = zmm0_1
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int64_t var_34_1 = 0
    int64_t var_28_1 = 0
    int16_t var_20_1 = 0
    char var_1e_1 = 0
    int32_t var_38_1 = arg3
    int16_t var_2c_1 = 1
    sub_140e7d370(arg1 - 0x118, &var_88)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp3_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rax_4 + 8))(rax_4, 1)
    
    rdi.b = 1

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp2_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_90
            (*(r8_2 + 8))(var_90, 1, r8_2)

return zx.q(rdi.b)
