// 函数: sub_140a90a00
// 地址: 0x140a90a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
char r14 = 0
int32_t var_148 = 0
char* rax_2 = sub_140a752e0()
int64_t* r15 = *arg4
int64_t* rbx

if (r15 == 0)
    rbx = *(rax_2 + 0x40)
    r15 = *(rax_2 + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r14 = 1
else
    rbx = arg3

if ((r14 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rax_7 = sub_140a797c0(r15)
int64_t var_170 = 0
int64_t var_168 = 0
uint8_t rcx_4 = (arg2 u>> 0x3f).b
void* rdx = arg3

if (arg3 == 0)
    rdx = rax_7 + 0x8c

int64_t* var_188 = &var_170
int64_t zmm1 = *(rdx + 0x10)
uint64_t rdx_2 = neg.q(arg2)
int128_t var_118 = *rdx
int64_t var_108 = zmm1

if (rcx_4 == 0)
    rdx_2 = arg2

sub_140a80970(rcx_4, rdx_2, rax_7, &var_118, var_188)
int64_t var_140 = *arg4
void* rax_10 = arg4[1]
void* var_138 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int32_t var_f8 = 0
char var_d0 = 0
uint64_t var_f0 = arg2
void** var_c8
void*** rax_12 = sub_140a93520(&var_170, sub_140a97620(&var_c8, &var_f8, arg3, &var_140))
uint128_t zmm0_1 = (&rax_12[2]).o
uint128_t var_128 = zmm0_1
void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_13 != 0)
    *(rax_13 + 8) += 1

sub_140a95d80(arg1, &var_128)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t rdi_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void** r8_3 = *rax_12
            r8_3[1](rax_12, zx.q(rdi_1), r8_3)

sub_140a99420(&var_c8)
int64_t rcx_11 = var_170
arg1[2].d |= 1

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
