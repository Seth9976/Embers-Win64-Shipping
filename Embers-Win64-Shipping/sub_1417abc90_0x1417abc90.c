// 函数: sub_1417abc90
// 地址: 0x1417abc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rbx = *(*(*arg2 + 0x50) + (sx.q(arg2[1].d) << 2))
int128_t* rax_4 = sub_1417ae350(arg1 + 0x2b0, rbx)
int64_t* var_b0 = arg2
int64_t var_9c = 0
int32_t r9 = 0
int64_t var_a4 = 0
*(rax_4 + 0x2a) = 1
int32_t r10 = 0
int32_t r11 = 0
int32_t rdi = 0
*(rax_4 + 0x28) = *(*(*arg2 + 0x170) + (sx.q(arg2[1].d) << 1))
int64_t rdx_2 = sx.q(arg2[1].d)
void* r8_1 = *arg2
int64_t var_b8 = *(*(r8_1 + 0xe0) + (rdx_2 << 3))
int64_t rcx_7 = *(r8_1 + 0xf8)
int32_t var_a8 = *(*(r8_1 + 0x50) + (rdx_2 << 2))
int64_t rax_6 = rdx_2 * 3
void* rdx_3 = rcx_7 + (rax_6 << 3)
void* rax_7 = *(rcx_7 + (rax_6 << 3) + 8)
void* rcx_8 = rdx_3

if (rax_7 != 0)
    rcx_8 = rax_7

void* rdx_4 = rcx_8 + (sx.q(*(rdx_3 + 0x10)) << 3)

if (rcx_8 != rdx_4)
    do
        int64_t rax_9 = *rcx_8
        rcx_8 += 8
        rdi |= *rax_9
        r11 |= *(rax_9 + 4)
        r10 |= *(rax_9 + 8)
        r9 |= *(rax_9 + 0xc)
    while (rcx_8 != rdx_4)
    
    var_9c:4.d = r9
    var_9c.d = r10
    var_a4:4.d = r11
    var_a4.d = rdi

char var_94 = 1
int128_t zmm1 = var_a8.o
*rax_4 = var_b8.o
rax_4[1] = zmm1
rax_4[2].q = var_9c
int128_t zmm6 = *rax_4
int128_t zmm7 = rax_4[1]
int128_t zmm8 = rax_4[2]
int128_t* rax_10
int32_t* r8_2
rax_10, r8_2 = sub_1417ae350(arg1 + 0x2d0, rbx)
*rax_10 = zmm6
rax_10[1] = zmm7
rax_10[2] = zmm8
sub_1417b4030(arg1 + 0x290, rbx, r8_2)
int64_t* rcx_11 = *(arg1 + 0x268)
(*(*rcx_11 + 0x48))(rcx_11, rax_4, zx.q(*(rax_4 + 0x28)))
sub_1417abb10(*(arg1 + 0x260), arg2)
sub_141777130(arg1 + 0x110, arg2)
int64_t* var_d8 = arg2
__builtin_memset(&var_b8, 0, 0x2c)
int32_t var_8c = 0x80
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int64_t var_78 = 0
int32_t var_70 = 0
sub_1409d96c0(&var_b8, 1)

if (var_70 s<= 0)
    int32_t var_70_1 = 1
    sub_1408370c0(&var_b8)

int64_t** i = &var_d8
void var_d0

do
    int32_t var_c8
    sub_140b9b5d0(&var_b8, &var_c8)
    int64_t* rax_12 = *i
    uint32_t rcx_18 = (rax_12 u>> 4).d
    char* var_e0_1 = nullptr
    int64_t** var_c0
    *var_c0 = rax_12
    int32_t rdx_12 = (0x9e3779b9 - rcx_18) ^ rcx_18 << 8
    var_c0[1].d = 0xffffffff
    int32_t r8_6 = neg.d(rdx_12 + rcx_18) ^ rdx_12 u>> 0xd
    int32_t rcx_21 = (rcx_18 - rdx_12 - r8_6) ^ r8_6 u>> 0xc
    int32_t rdx_15 = (rdx_12 - rcx_21 - r8_6) ^ rcx_21 << 0x10
    int32_t r8_9 = (r8_6 - rdx_15 - rcx_21) ^ rdx_15 u>> 5
    int32_t rcx_24 = (rcx_21 - rdx_15 - r8_9) ^ r8_9 u>> 3
    int32_t rdx_18 = (rdx_15 - rcx_24 - r8_9) ^ rcx_24 << 0xa
    sub_140824480(&var_b8, &var_d0, (r8_9 - rdx_18 - rcx_24) ^ rdx_18 u>> 0xf, var_c0, var_c8, 
        var_e0_1)
    i = &i[1]
while (i != &var_d0)

if (not(data_1439b8e60 f>= 1f))
    int64_t rdi_1 = 0
    int64_t* rbx_1 = *(arg1 + 0xf0)
    uint64_t rsi_2 = sx.q(*(arg1 + 0xf8)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0xf8))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_26 = *rbx_1
            (*(*rcx_26 + 0x58))(rcx_26, &var_b8)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)

int32_t var_70_2 = 0

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t var_b0_1
var_b0_1.d = 0
int32_t var_88_1 = 0xffffffff
int32_t var_84_1 = 0
void* result = sub_14059a8e0(&var_a8, 0)

if (var_9c != 0)
    result = sub_140a74f90(var_9c)

int64_t rcx_31 = var_b8

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

__security_check_cookie(rax_1 ^ &var_108)
return result
