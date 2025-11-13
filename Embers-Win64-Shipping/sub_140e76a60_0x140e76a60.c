// 函数: sub_140e76a60
// 地址: 0x140e76a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143e202c8
int64_t* r14 = data_143e20d18
int64_t r15 = data_143e202b8
int64_t r12 = data_143e202c0
uint128_t zmm7 = zx.o(arg3)
zmm7 = _mm_unpacklo_pd(zmm7, zmm7.q)

if (rdi != 0)
    rdi[1].d += 1

int64_t* rcx = *(arg1 + 0x4e8)
int32_t rax_1 = (**rcx)(rcx)
int64_t r8 = *r14
void arg_10
int16_t var_b0 = *(*(r8 + 0x58))(r14, &arg_10, r8)
void** const var_b8 = &data_142ecfd88
void* var_88 = arg1 + 8
char var_ae = 0
int32_t var_ac = rax_1
int64_t var_a8 = 0
int64_t var_90 = 0
int64_t var_80 = r15
int64_t var_78 = r12
uint128_t var_a0 = zmm7

if (rdi != 0)
    rdi[1].d += 1

int32_t var_60 = 0x3f800000
int32_t var_54 = arg2.d
int32_t var_68 = 0xa
int32_t var_64 = 0
int16_t var_5c = 0
int32_t var_58 = 0
int16_t var_50 = 0
char var_4e = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

char rax_6 = sub_140e7d910(arg1 - 0x118, &var_b8, 0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return zx.q(rax_6)
