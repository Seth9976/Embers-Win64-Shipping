// 函数: sub_142321e20
// 地址: 0x142321e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x510)
void*** rdi = rax

if (rax == 0)
    rdi = rax
else
    int32_t r8 = *(arg2 + 0x28)
    *rdi = &data_1432aa138
    rdi[2].d = 0x3f800000
    __builtin_memset(&rdi[3], 0, 0x28)
    rdi[8] = -1
    *(rdi + 0x50) = data_14399f6e0
    *(rdi + 0x60) = data_14399f6f0
    *(rdi + 0x70) = data_14399f700
    *(rdi + 0x80) = data_14399f710
    *(rdi + 0x90) = data_14399f6e0
    *(rdi + 0xa0) = data_14399f6f0
    *(rdi + 0xb0) = data_14399f700
    *(rdi + 0xc0) = data_14399f710
    sub_142048200(&rdi[0x1a], arg3, r8)
    sub_142048030(&rdi[0x4e])
    *rdi = &data_1432aab28
    rdi[0x1a] = &data_1432aab40
    sub_142047fc0(&rdi[0x72])

int64_t rbx = sx.q(arg1[1].d)
int32_t rax_1 = (rbx + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx << 3)) = rdi
double var_d0[0x2] = *arg2
double zmm0_1[0x2] = arg2[2]
uint128_t var_c0 = arg2[1]
double var_b0[0x2] = zmm0_1
uint128_t var_a0 = rdi.o
uint128_t var_90 = var_d0
int64_t var_70 = (_mm_unpackhi_pd(zmm0_1, zmm0_1[0])).q
uint128_t var_80 = var_c0

if (sub_140a80f40() != 0)
    return sub_14232dbb0(&var_a0)

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        double var_68[0x2] = rdi.o
        uint64_t var_38_1 = var_70
        double var_58_1[0x2] = var_d0
        double var_48_1[0x2] = var_c0
        return sub_14232dbb0(&var_68)

void var_30
void** rax_5 = sub_142332040(&var_30, nullptr, 0xff)
void* rcx_7 = *rax_5
*(rcx_7 + 0x10) = rdi.o
*(rcx_7 + 0x20) = var_d0
*(rcx_7 + 0x30) = var_c0
*(rcx_7 + 0x40) = var_70
void* rcx_8 = *rax_5
int32_t r8_1 = rax_5[2].d
int64_t* rdx_4 = rax_5[1]
int64_t* rbx_1 = *(rcx_8 + 0x50)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

int32_t result = sub_14080ccb0(rcx_8, rdx_4, r8_1, 1)

if (rbx_1 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
