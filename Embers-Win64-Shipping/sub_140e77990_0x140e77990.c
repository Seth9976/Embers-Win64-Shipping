// 函数: sub_140e77990
// 地址: 0x140e77990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s>= 0xa)
    int64_t rax
    rax.b = 0
    return rax

uint128_t zmm0 = zx.o(*arg3)
int16_t var_70 = arg4.w & 0xfe00
void** const var_78 = &data_142ecfd88
int64_t* var_48 = &data_143e20e20
int64_t var_40 = data_143e1e008
int64_t var_38 = data_143e1e010
int64_t* rax_4 = data_143e1e018
char var_6e = 0
int64_t var_68 = 0
int64_t var_50 = 0
uint128_t var_60 = _mm_unpacklo_pd(zmm0, zmm0.q)

if (rax_4 != 0)
    rax_4[1].d += 1

int32_t var_24 = 0
int64_t var_18 = 0
int16_t var_10 = 0
char var_e = 0
int32_t zmm3
int32_t var_20 = zmm3
int32_t var_28 = arg4
int16_t var_1c = 1
void* var_88
sub_140e683e0(arg1 - 0x118, &var_88, arg5)
sub_140e73a40(var_88, &var_78)
int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp2_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

sub_140e7ce00(arg1 - 0x118, arg2, &var_78)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp3_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rax_4 + 8))(rax_4, 1)

int64_t rax_7
rax_7.b = 1
return rax_7
