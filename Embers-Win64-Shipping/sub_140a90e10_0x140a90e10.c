// 函数: sub_140a90e10
// 地址: 0x140a90e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char r14 = 0
int32_t var_168 = 0
char* rax_2
uint128_t zmm6_1
rax_2, zmm6_1 = sub_140a752e0()
int64_t* r15 = *arg4
int64_t* rbx

if (r15 == 0)
    rbx = *(rax_2 + 0x40)
    r15 = *(rax_2 + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r14 = 1
else
    rbx = var_168.q

if ((r14 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_7 = sub_140a7b0b0(r15)
var_168.q = 0
int64_t var_160 = 0
void* rcx_3 = arg3

if (arg3 == 0)
    rcx_3 = rax_7 + 0x8c

int64_t zmm1_1 = *(rcx_3 + 0x10)
uint128_t var_128 = *rcx_3
uint128_t zmm0
zmm0.d = zmm6_1.d f* 100f
int64_t var_118 = zmm1_1
zmm0.q = fconvert.d(zmm0.d)
int32_t zmm6_2 = sub_140a745d0(zmm0, rax_7, &var_128, &var_168)
int64_t var_148 = *arg4
void* rax_10 = arg4[1]
void* var_140 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int32_t var_100 = zmm6_2
int32_t var_108 = 2
char var_e0 = 0
void** var_d8
void*** rax_12 = sub_140a93620(&var_168, sub_140a97750(&var_d8, &var_108, arg3, &var_148))
uint128_t zmm0_1 = (&rax_12[2]).o
uint128_t var_138 = zmm0_1
void* rax_13 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_13 != 0)
    *(rax_13 + 8) += 1

sub_140a95d80(arg1, &var_138)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t rdi_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void** r8_3 = *rax_12
            r8_3[1](rax_12, zx.q(rdi_1), r8_3)

sub_140a99420(&var_d8)
int64_t rcx_10 = var_168.q
arg1[2].d |= 1

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_188)
return arg1
