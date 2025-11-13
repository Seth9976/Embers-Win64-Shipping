// 函数: sub_1427b24a0
// 地址: 0x1427b24a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t var_138 = 0
int64_t var_130 = 0
void var_128
sub_140a96170(&var_128)
void var_110
sub_140a96170(&var_110)
int64_t var_148 = *(arg2 + 0x10)
int64_t var_f0
__builtin_memset(&var_f0, 0, 0x20)
int64_t var_c8 = 0
int32_t var_140 = arg3

if (&var_138 != arg4)
    int32_t rbx_1 = arg4[1].d
    int64_t rdi_1 = *arg4
    int32_t r8 = var_130:4.d
    var_130.d = rbx_1
    
    if (rbx_1 != 0 || r8 != 0)
        sub_1405a4c70(&var_138, rbx_1, r8)
        memcpy(var_138, rdi_1, rbx_1 * 2)
    else
        var_130:4.d = 0

sub_14065da90(&var_128, arg5)
sub_14065da90(&var_110, arg6)
char var_f8 = arg7
int64_t var_f0_1 = *arg8
int64_t rax_5 = arg8[1]
void* rax_6 = arg8[2]
void* var_150 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

uint128_t var_e8
int64_t* rbx_2 = _mm_bsrli_si128(var_e8, 8).q
int128_t var_e8_1 = rax_5.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rax_9 = *arg9
int128_t* var_88 = nullptr

if (rax_9 != 0)
    void* rax_10 = arg9[2]
    void* rcx_9 = &arg9[4]
    
    if (rax_10 != 0)
        rcx_9 = rax_10
    
    (**rcx_9)(rcx_9, &var_88)

int64_t var_d8
int128_t zmm5 = var_d8.o
int64_t var_98
var_98.o = zmm5
int128_t zmm2 = var_c8.o
var_d8.o = rax_9.o
var_c8.o = var_88.o
int128_t var_78
int128_t var_b8_1 = var_78
uint128_t var_68
uint128_t var_a8_1 = var_68
var_88.o = zmm2
int128_t var_b8
var_78 = var_b8
int128_t var_a8
int128_t var_68_1 = var_a8

if (zmm5.q != 0)
    int128_t* rax_13 = var_88
    int128_t* rcx_10 = &var_78
    
    if (rax_13 != 0)
        rcx_10 = rax_13
    
    (*(*rcx_10 + 0x10))(rcx_10)

int64_t rbx_3 = sx.q(arg1[1].d)
int32_t rax_15 = (rbx_3 + 1).d
arg1[1].d = rax_15

if (rax_15 s> *(arg1 + 0xc))
    sub_140a05e50(arg1)

sub_14279c450(rbx_3 * 0xb0 + *arg1, &var_148)
int64_t result = sub_14279d310(&var_148)

if (*arg9 != 0)
    void* rax_16 = arg9[2]
    void* rcx_15 = &arg9[4]
    
    if (rax_16 != 0)
        rcx_15 = rax_16
    
    result = (*(*rcx_15 + 0x10))(rcx_15)

__security_check_cookie(rax_1 ^ &var_178)
return result
