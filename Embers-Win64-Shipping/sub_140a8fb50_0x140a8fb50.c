// 函数: sub_140a8fb50
// 地址: 0x140a8fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char r14 = 0
int32_t var_168 = 0
int64_t r13 = sx.q(arg2)
char* rax_2 = sub_140a752e0()
int64_t* r15 = *arg5
int64_t* rbx

if (r15 == 0)
    rbx = *(rax_2 + 0x40)
    r15 = *(rax_2 + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r14 = 1
else
    rbx = arg4

if ((r14 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rax_7 = sub_140a78440(r15, arg3)
int64_t var_190 = 0
int64_t var_188 = 0
uint8_t rcx_4 = (r13.d u>> 0x1f).b
void* rdx_1 = arg4

if (arg4 == 0)
    rdx_1 = rax_7 + 0x8c

int64_t* var_1a8 = &var_190
int64_t zmm1 = *(rdx_1 + 0x10)
int64_t rdx_3 = neg.q(r13)
int128_t var_138 = *rdx_1
int64_t var_128 = zmm1

if (rcx_4 == 0)
    rdx_3 = r13

sub_140a80970(rcx_4, rdx_3, rax_7, &var_138, var_1a8)
int64_t var_158 = *arg5
void* rax_10 = arg5[1]
void* var_150 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int32_t var_118 = 0
char var_f0 = 0
int64_t var_110 = r13
void var_e8
void** var_d8
void*** rax_13 = sub_140a931a0(&var_190, 
    sub_140a974b0(&var_d8, &var_118, sub_140596d10(&var_e8, arg3), arg4, &var_158))
uint128_t zmm0_1 = (&rax_13[2]).o
uint128_t var_148 = zmm0_1
void* rax_14 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_140a95d80(arg1, &var_148)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        (**rax_13)(rax_13)
        int32_t rdi_1 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*rax_13)[1](rax_13, zx.q(rdi_1))

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140a99420(&var_d8)
int64_t rcx_13 = var_190
arg1[2].d |= 1

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
