// 函数: sub_140aacd30
// 地址: 0x140aacd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_a8 = arg5
int64_t var_98
sub_140aad3c0(&var_98, arg2, arg3, arg4)
void* rax_1 = sub_140aae970()
int64_t* r15 = arg2[1]
int16_t r14 = *(rax_1 + 0x120)
void** const var_68 = &data_142e63858
int64_t rax_2 = *arg2
int64_t var_58 = rax_2

if (r15 != 0)
    r15[1].d += 1

int64_t r12 = *arg3
*arg3 = 0
int32_t rax_3 = *(arg3 + 0xc)
int32_t r13 = arg3[1].d
arg3[1] = 0
int64_t var_48 = r12
int32_t var_40 = r13
int32_t var_3c = rax_3
void*** rax_4 = j_sub_140a82f30(0x90)
void*** rdi_1 = rax_4

if (rax_4 == 0)
    rdi_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rdi_1 = &data_142e667e8
    rdi_1[2] = &data_142e64388
    rdi_1[3] = 0
    rdi_1[4] = 0
    rdi_1[5] = &data_142e63858
    rdi_1[6].w = r14
    rdi_1[7] = rax_2
    rdi_1[8] = r15
    
    if (r15 != 0)
        r15[1].d += 1
    
    rdi_1[9] = r12
    *(rdi_1 + 0x54) = rax_3
    rdi_1[0xa].d = r13
    rdi_1[2] = &data_142e64cf8
    rdi_1[0xb] = var_98
    int32_t var_90
    rdi_1[0xc].d = var_90
    var_48 = 0
    var_40.q = 0
    var_98 = 0
    int32_t var_8c
    *(rdi_1 + 0x64) = var_8c
    InitializeCriticalSection(&rdi_1[0xd])
    SetCriticalSectionSpinCount(&rdi_1[0xd], 0xfa0)

uint128_t zmm0 = (&rdi_1[2]).o
uint128_t var_78 = zmm0
void* rax_10 = _mm_bsrli_si128(zmm0, 8).q

if (rax_10 != 0)
    *(rax_10 + 8) += 1

sub_140a95d80(arg1, &var_78)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_13 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140a98040(&var_48)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t rdi_2 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*r15 + 8))(r15, zx.q(rdi_2))

arg1[2].d |= 1
int64_t rcx_10 = var_98

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return arg1
