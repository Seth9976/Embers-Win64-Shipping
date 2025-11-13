// 函数: sub_140a8fd90
// 地址: 0x140a8fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char r14 = 0
int32_t var_178 = 0
char* rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_140a752e0()
int64_t* r15 = *arg5
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

int64_t* rax_7 = sub_140a78440(r15, arg3)
int64_t var_1a0 = 0
int64_t var_198 = 0
void* rcx_3 = arg4

if (arg4 == 0)
    rcx_3 = rax_7 + 0x8c

int64_t zmm1_1 = *(rcx_3 + 0x10)
uint128_t var_148 = *rcx_3
uint128_t zmm0
zmm0.q = fconvert.d(zmm6_1)
int64_t var_138 = zmm1_1
int32_t zmm6_2 = sub_140a745d0(zmm0, rax_7, &var_148, &var_1a0)
int64_t var_170 = *arg5
void* rax_10 = arg5[1]
void* var_168 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int32_t var_120 = zmm6_2
int32_t var_128 = 2
char var_100 = 0
void var_f8
void** var_e8
void*** rax_13 = sub_140a931a0(&var_1a0, 
    sub_140a974b0(&var_e8, &var_128, sub_140596d10(&var_f8, arg3), arg4, &var_170))
uint128_t zmm0_1 = (&rax_13[2]).o
uint128_t var_158 = zmm0_1
void* rax_14 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_140a95d80(arg1, &var_158)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        (**rax_13)(rax_13)
        int32_t rdi_1 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rax_13)[1](rax_13, zx.q(rdi_1))

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_140a99420(&var_e8)
int64_t rcx_12 = var_1a0
arg1[2].d |= 1

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
