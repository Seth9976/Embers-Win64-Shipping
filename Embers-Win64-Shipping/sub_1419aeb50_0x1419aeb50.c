// 函数: sub_1419aeb50
// 地址: 0x1419aeb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rax_2 = j_sub_140a82f30(0x38)
int64_t rdi = rax_2

if (rax_2 == 0)
    rdi = 0
else
    __builtin_memset(rax_2, 0, 0x38)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_14300aad0
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi

*arg1 = rdi
arg1[1] = rax_3
int64_t var_118 = 1
int64_t var_110 = 0
int32_t var_108 = 0
int32_t var_fc = 0
int32_t var_f8 = 1
int16_t var_f4 = 0
int16_t var_f0 = 1
int32_t var_e8 = 0
int16_t var_e0 = 0
int16_t var_d0 = 1
char var_ce = 0
int64_t var_138
int32_t var_104 = *(*(*arg2 + 0x30))(arg2, &var_138, rdi)
void* rax_7 = (*(*arg2 + 0x30))(arg2, &var_138)
uint32_t r15 = zx.d(*(arg2 + 0x34))
int32_t var_e4 = 0x10009
int16_t var_f2 = r15.w
int32_t var_ec = *(arg2 + 0x3c)
int32_t var_100 = *(rax_7 + 4)
wchar16 const* const var_d8 = u"GenerateMipPooledRTTexture"
int128_t var_c0
__builtin_memset(&var_c0, 0, 0x18)
void* var_a0 = nullptr
int32_t var_98 = 0
int32_t var_94 = 1
void* var_78 = nullptr
int32_t i_2 = 0
int32_t var_6c = 1
int128_t var_68
__builtin_memset(&var_68, 0, 0x20)
sub_1408c8cf0(&var_c0, arg2)
sub_1408c8cf0(&var_c0:8, arg2)
void var_90
void* rdi_1 = &var_90
int32_t i_1 = i_2

if (var_78 != 0)
    rdi_1 = var_78

if (i_1 != 0)
    rdi_1 += 0x10
    int32_t i
    
    do
        sub_1405ec8a0(rdi_1)
        rdi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_70 = 0

if (var_6c != r15)
    sub_1409dabf0(&var_90, r15)

void var_a8
sub_14199e770(&var_a8, zx.d(r15.w))
rdi_1.b = 0

if (0 u< r15.w)
    do
        int64_t* rcx_10 = data_143f0f180
        char var_148 = 0
        char var_146_1 = 1
        int64_t var_144_1 = 0
        int32_t var_13c_1 = 0
        char var_147_1 = rdi_1.b
        int64_t var_128
        (*(*rcx_10 + 0x5d0))(rcx_10, &var_128, &data_143f02b98, arg2, &var_148)
        int64_t rsi = sx.q(var_70)
        int32_t rax_11 = (rsi + 1).d
        var_70 = rax_11
        
        if (rax_11 s> var_6c)
            sub_1409da440(&var_90, rsi.d)
        
        int64_t rcx_12 = rsi * 3
        void* rdx_9 = &var_90
        
        if (var_78 != 0)
            rdx_9 = var_78
        
        *(rdx_9 + (rcx_12 << 3)) = var_148.o
        *(rdx_9 + (rcx_12 << 3) + 0x10) = var_128
        int64_t* rcx_13 = data_143f0f180
        var_128 = 0
        char* var_158_1
        var_158_1.d = zx.d(rdi_1.b)
        (*(*rcx_13 + 0x5a0))(rcx_13, &var_138, &data_143f02b98, arg2, var_158_1)
        int64_t rsi_1 = sx.q(var_98)
        int32_t rax_15 = (rsi_1 + 1).d
        var_98 = rax_15
        
        if (rax_15 s> var_94)
            sub_140809610(&var_a8, rsi_1.d)
        
        void* rdx_12 = &var_a8
        
        if (var_a0 != 0)
            rdx_12 = var_a0
        
        rdi_1.b += 1
        *(rdx_12 + (rsi_1 << 3)) = var_138
        var_138 = 0
    while (zx.w(rdi_1.b) u< r15.w)

int64_t* rcx_15 = data_143f0f180
(*(*rcx_15 + 0x2e8))(rcx_15, var_c0.q, u"GenerateMipPooledRTTexture")
void* rdx_14 = &var_a8

if (var_a0 != 0)
    rdx_14 = var_a0

int64_t var_b0
sub_1405d16e0(&var_b0, *rdx_14)
int64_t* rsi_2 = *arg1
int64_t* rcx_17 = *rsi_2
*rsi_2 = 0

if (rcx_17 != 0)
    (*(*rcx_17 + 0x38))(rcx_17)

void*** rax_22 = j_sub_140a82f30(0xf8)
void*** rdi_2 = rax_22

if (rax_22 == 0)
    rdi_2 = nullptr
else
    __builtin_memset(&rax_22[1], 0, 0x18)
    rax_22[5] = 0
    rax_22[6].d = 0
    *(rax_22 + 0x34) = 1
    rax_22[0xa] = 0
    rax_22[0xb].d = 0
    *(rax_22 + 0x5c) = 1
    __builtin_memset(&rax_22[0xc], 0, 0x30)
    *rdi_2 = &data_143009f38
    *(rdi_2 + 0x90) = var_118.o
    *(rdi_2 + 0xa0) = var_108.o
    rdi_2[0x1c].b = 0
    *(rdi_2 + 0xb0) = var_f8.o
    rdi_2[0x1d] = 0
    *(rdi_2 + 0xc0) = var_e8.o
    rdi_2[0x1e].d = 0xffffffff
    *(rdi_2 + 0xd0) = var_d8.o

sub_14117bb20(&rdi_2[1], &var_c0)
int64_t* rbx = *rsi_2
*rsi_2 = rdi_2

if (rdi_2 != 0)
    (*rdi_2)[6](rdi_2)

if (rbx != 0)
    (*(*rbx + 0x38))(rbx)

*(*arg1 + 0x18) = *arg3
*(*arg1 + 0x19) = arg3[4]
*(*arg1 + 0x1a) = arg3[8]
*(*arg1 + 0x1b) = arg3[0xc]
int128_t var_58
sub_1405ec8a0(&var_58:8)
sub_1405d1550(&var_58)
sub_1405ec8a0(&var_68:8)
sub_1405ec8a0(&var_68)
sub_14117b380(&var_90)
sub_14117b570(&var_a8)
sub_1405d1550(&var_b0)
sub_1405d1550(&var_c0:8)
sub_1405d1550(&var_c0)
__security_check_cookie(rax_1 ^ &var_178)
return arg1
