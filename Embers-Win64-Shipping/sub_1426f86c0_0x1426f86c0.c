// 函数: sub_1426f86c0
// 地址: 0x1426f86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rax_2 = arg2[1]
int32_t rcx = *arg2
int32_t rdi_1

if (rcx s>= 0 && rcx s< *(arg1 + 0x3c) && rax_2 s>= 0)
    rdi_1 = *(arg1 + 0x40)

int32_t rdi_3

if (rcx s< 0 || rcx s>= *(arg1 + 0x3c) || rax_2 s< 0 || rax_2 s>= rdi_1)
    rdi_3 = -1
else
    rdi_3 = rdi_1 * rcx + rax_2

int32_t rcx_1 = *arg3
int32_t rax_3 = arg3[1]
int32_t rbx_1

if (rcx_1 s>= 0 && rcx_1 s< *(arg1 + 0x3c) && rax_3 s>= 0)
    rbx_1 = *(arg1 + 0x40)

int32_t rbx_3

if (rcx_1 s< 0 || rcx_1 s>= *(arg1 + 0x3c) || rax_3 s< 0 || rax_3 s>= rbx_1)
    rbx_3 = -1
else
    rbx_3 = rbx_1 * rcx_1 + rax_3

void* var_e8 = arg1
int64_t var_108 = 0
int32_t var_100 = 0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x3c)
int32_t var_a4 = 0x80
int32_t var_a0 = 0xffffffff
int32_t var_9c = 0
int64_t var_90 = 0
int32_t var_88 = 0
sub_1413f6f70(&var_e0, 0x40)
uint64_t var_78 = 0
int64_t* var_80 = &var_e0
int64_t var_70 = 0
int64_t* var_68 = &var_e0
int64_t** var_60 = &var_80
sub_1405dadb0(&var_78, 0x40)
int64_t var_d8

if (var_d8:4.d s< 0x40)
    sub_1413f6f70(&var_e0, 0x40)

void* var_f8 = arg1
sub_1426f0ce0(&var_e8, rdi_3, rbx_3, &var_f8, &var_108)

if (var_100 == 0)
    rbx_3.b = 0
else
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) s<= 0xffffffff)
        sub_14083ad30(arg4, 0)
    
    sub_142707620(arg1, arg2, arg3, &var_108, arg4)
    rbx_3.b = 1

uint64_t rcx_8 = var_78

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t var_d0
sub_1405ae180(&var_d0)
int64_t rcx_10 = var_e0

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_108

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rbx_3.b)
