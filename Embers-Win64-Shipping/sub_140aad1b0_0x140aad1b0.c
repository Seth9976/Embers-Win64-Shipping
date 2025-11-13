// 函数: sub_140aad1b0
// 地址: 0x140aad1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_d8
sub_140aad6f0(&var_d8, arg2, arg3, arg4, arg5)
int16_t rcx_1 = *(sub_140aae970() + 0x120)
int64_t rax_4 = *arg2
void* rax_5 = arg2[1]
void** var_a8 = &data_142e63778

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void var_88
sub_140a954b0(&var_88, arg3)
void*** rax_6 = j_sub_140a82f30(0xd0)
void*** rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi_1 = &data_142e667c8
    rdi_1[2] = &data_142e64248
    rdi_1[3] = 0
    rdi_1[4] = 0
    rdi_1[5] = &data_142e63698
    rdi_1[6].w = rcx_1
    rdi_1[5] = &data_142e63778
    rdi_1[7] = rax_4
    rdi_1[8] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    sub_140a954b0(&rdi_1[9], &var_88)
    rdi_1[2] = &data_142e64c58
    rdi_1[0x13] = var_d8
    int32_t var_d0
    rdi_1[0x14].d = var_d0
    int32_t var_cc
    *(rdi_1 + 0xa4) = var_cc
    var_d8 = 0
    InitializeCriticalSection(&rdi_1[0x15])
    SetCriticalSectionSpinCount(&rdi_1[0x15], 0xfa0)

uint128_t zmm0 = (&rdi_1[2]).o
uint128_t var_b8 = zmm0
void* rax_14 = _mm_bsrli_si128(zmm0, 8).q

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_140a95d80(arg1, &var_b8)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rdi_2 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rdi_2 == 1)
            void** r8_1 = *rdi_1
            r8_1[1](rdi_1, zx.q(rdi_2), r8_1)

sub_140a994d0(&var_a8)
int64_t rcx_10 = var_d8
arg1[2].d |= 1

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
