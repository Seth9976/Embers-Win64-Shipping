// 函数: sub_140ac6320
// 地址: 0x140ac6320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140abd990(arg1)
int64_t* rcx = *arg1
int64_t var_58
sub_140a8e690(&var_58, (*(*rcx + 0x10))(rcx))
int64_t* rdi = arg1[1]
int64_t r13 = *arg1

if (rdi != 0)
    rdi[1].d += 1

int32_t r12 = arg1[2].d
int16_t rbx_1 = *(sub_140aae970() + 0x120)

if (rdi != 0)
    rdi[1].d += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_5 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rdi + 8))(rdi, 1)

void*** rax_7 = j_sub_140a82f30(0x90)
void*** r14 = rax_7

if (rax_7 == 0)
    r14 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *r14 = &data_142e665e8
    r14[2] = &data_142e63e68
    r14[3] = 0
    r14[4] = 0
    r14[6].w = rbx_1
    r14[5] = &data_142e63bd8
    r14[7] = r13
    r14[8] = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    r14[9].d = r12
    r14[0xa].b = 0
    r14[2] = &data_142e63eb8
    r14[0xb] = 0
    r14[0xb] = var_58
    var_58 = 0
    int32_t var_50
    r14[0xc].d = var_50
    int32_t var_4c
    *(r14 + 0x64) = var_4c
    var_50.q = 0
    InitializeCriticalSection(&r14[0xd])
    SetCriticalSectionSpinCount(&r14[0xd], 0xfa0)

uint128_t zmm0 = (&r14[2]).o
uint128_t var_38 = zmm0
void* rax_11 = _mm_bsrli_si128(zmm0, 8).q

if (rax_11 != 0)
    *(rax_11 + 8) += 1

sub_140a95d80(arg2, &var_38)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t rax_14 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*r14)[1](r14, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rbp_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rbp_1))

arg2[2].d |= 1
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg2
