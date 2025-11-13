// 函数: sub_140bb3da0
// 地址: 0x140bb3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int128_t var_1d8
__builtin_memset(&var_1d8, 0, 0x18)
int64_t zmm0 = data_143dbb1f8.q
int32_t var_1ac = rax
int32_t var_1b8 = rax
int64_t var_1a0 = 0
int64_t var_198 = 0
sub_1405947f0(&var_1a0, 0xe)
int32_t r15 = var_198:4.d
int32_t r14 = var_198.d + 0xe
var_198.d = r14

if (r14 s> r15)
    sub_140594770(&var_1a0)
    r15 = var_198:4.d
    r14 = var_198.d

int64_t rsi = var_1a0
UnDecorator::getReferenceType(rsi, u"Uncategorized", 0x1c)
__builtin_memset(arg2, 0, 0x18)
int512_t zmm1
zmm1.o = zx.o(zmm0)
*(arg2 + 0x18) = zmm0.o
*(arg2 + 0x28) = (zmm1.o).q
arg2[0xc] = 0.d

if (&arg2[0xe] != &var_1a0)
    int64_t rcx_3 = *(arg2 + 0x38)
    
    if (rcx_3 != 0)
        zmm1 = sub_140a74f90(rcx_3)
    
    *(arg2 + 0x38) = rsi
    rsi = 0
    arg2[0x10] = r14
    arg2[0x11] = r15

*(arg2 + 0x48) = 0
arg2[0x14] = 0
arg2[0x15] = 0xc350
arg2[0x16].b = 1
arg2[0x18].b = 0
void var_170

if (&arg2[0x1a] != &var_170)
    int64_t rcx_4 = *(arg2 + 0x68)
    
    if (rcx_4 != 0)
        zmm1 = sub_140a74f90(rcx_4)
    
    *(arg2 + 0x68) = 0
    *(arg2 + 0x70) = 0

void var_160

if (&arg2[0x1e] != &var_160)
    int64_t rcx_5 = *(arg2 + 0x78)
    
    if (rcx_5 != 0)
        zmm1 = sub_140a74f90(rcx_5)
    
    *(arg2 + 0x78) = 0
    *(arg2 + 0x80) = 0

arg2[0x22] = 0

if (rsi != 0)
    zmm1 = sub_140a74f90(rsi)

sub_140a464c0()
int16_t* const rdx_1

if (arg1[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg1

uint64_t result = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx_1, 0)

if (result == 0)
    return result

int32_t var_148
sub_140cd3be0(&var_148)
int512_t zmm1_1 = sub_140cd4b90(result, &var_148, zmm1)
int64_t var_138
int32_t* rdi

if (var_148 == 0x9e2a83c1)
    int32_t var_50
    int64_t rcx_9 = sx.q(var_50)
    
    if (rcx_9.d != 0)
        (*(*result + 0x178))(result, rcx_9)
        int32_t var_144
        (*(*result + 0xe0))(result, zx.q(var_144))
        void var_a8
        (*(*result + 0xf0))(result, &var_a8)
        int32_t var_140
        (*(*result + 0xe8))(result, zx.q(var_140))
        sub_140b97d30(result, arg2, zmm1_1, (*(*result + 0x50))(result, &var_138))
    
    rdi.b = 1
else
    rdi.b = 0

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t var_108

if (var_108 != 0)
    sub_140a74f90(var_108)

int64_t var_120

if (var_120 != 0)
    sub_140a74f90(var_120)

int64_t rcx_22 = var_138

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t r8_2 = *result
(*r8_2)(result, 1, r8_2)
return zx.q(rdi.b)
