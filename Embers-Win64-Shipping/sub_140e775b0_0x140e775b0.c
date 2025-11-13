// 函数: sub_140e775b0
// 地址: 0x140e775b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
(*(*(arg1 - 0x118) + 0x58))(arg1 - 0x118, &arg_8)
int64_t* rcx_1 = data_143e20d18
void arg_10
int16_t* rax_2 = (*(*rcx_1 + 0x58))(rcx_1, &arg_10)
uint128_t zmm0 = zx.o(arg_8)
int64_t* rbx = data_143e202c8
int64_t* rcx_2 = data_143e20d18
int16_t rdx_2 = *rax_2
char arg_28
char rax_3 = arg_28
zmm0 = _mm_unpacklo_pd(zmm0, zmm0.q)
char var_5b = arg2
int64_t rdi_1 = data_143e202b8
int16_t var_b0 = rdx_2
char var_ae = 0
int32_t var_ac = 0
int64_t var_a8 = 0
void** const var_b8 = &data_142ecfd88
int64_t var_90 = 0
void* var_88 = arg1 + 8
int64_t var_80
__builtin_memset(&var_80, 0, 0x1c)
int32_t var_60 = 0x3f800000
char var_5c = 0
char var_50 = rax_3
int16_t var_4f = 0
uint128_t var_a0 = zmm0
int64_t rsi_1 = data_143e202c0
uint64_t var_58 = *arg3

if (rbx != 0)
    rbx[1].d += 1

int16_t* rax_5 = (*(*rcx_2 + 0x58))(rcx_2, &arg_28)
zmm0 = zx.o(arg_8)
zmm0 = _mm_unpacklo_pd(zmm0, zmm0.q)
int16_t var_120 = *rax_5
char var_11e = 0
int32_t var_11c = 0
int64_t var_118 = 0
void** const var_128 = &data_142ecfd88
int64_t var_100 = 0
void* var_f8 = arg1 + 8
int64_t var_f0 = rdi_1
int64_t var_e8 = rsi_1
uint128_t var_110 = zmm0

if (rbx != 0)
    rbx[1].d += 1

int32_t var_c4 = arg4.d
int32_t var_d8 = 0xa
int32_t var_d4 = 0
int32_t var_d0 = 0x3f800000
int16_t var_cc = 0
int32_t var_c8 = 0
int16_t var_c0 = 0
char var_be = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char rax_9 = sub_140e7d910(arg1 - 0x118, &var_128, &var_b8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_5 = *rbx
        (*rdx_5)(rbx, rdx_5)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int128_t var_78
int64_t* rbx_2 = var_78:8.q
var_128 = &data_142d7f690

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return zx.q(rax_9)
