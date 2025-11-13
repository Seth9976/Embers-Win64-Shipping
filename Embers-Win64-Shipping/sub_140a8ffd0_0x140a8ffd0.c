// 函数: sub_140a8ffd0
// 地址: 0x140a8ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char r14 = 0
int32_t var_160 = 0
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
    rbx = var_160.q

if ((r14 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rax_7 = sub_140a797c0(r15)
uint64_t rbx_1 = zx.q(arg2)
var_160.q = 0
int64_t var_158 = 0
void* rcx_3 = arg3

if (arg3 == 0)
    rcx_3 = rax_7 + 0x8c

int32_t* var_178 = &var_160
int64_t zmm1 = *(rcx_3 + 0x10)
int128_t var_118 = *rcx_3
int64_t var_108 = zmm1
sub_140a80970(0, zx.q(rbx_1.d), rax_7, &var_118, var_178)
int64_t var_138 = *arg4
void* rax_10 = arg4[1]
void* var_130 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int32_t var_f8 = 0
char var_d0 = 0
uint64_t var_f0 = rbx_1
void** var_c8
void*** rax_12 = sub_140a93520(&var_160, sub_140a97620(&var_c8, &var_f8, arg3, &var_138))
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
int64_t rcx_10 = var_160.q
arg1[2].d |= 1

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
