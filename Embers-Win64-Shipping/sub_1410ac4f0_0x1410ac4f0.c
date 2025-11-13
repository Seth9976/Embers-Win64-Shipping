// 函数: sub_1410ac4f0
// 地址: 0x1410ac4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = 0
char* var_100 = &arg_20
void*** (* var_108)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_108, &data_143958018) + 0x10
int64_t* var_f8 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_e0 = 0
int64_t result_1 = rax_1[3]
rax_1[3] = &var_f8
int64_t* rax_2 = var_f8
rax_2[4].d += 1
void var_98
sub_141385550(&var_98, arg2, arg3)
void var_d0
void var_68
sub_1412ff950(&var_d0, arg2, &var_68, arg3)
void*** rax_3 = j_sub_140a82f30(0xc0)
void*** rsi

if (rax_3 == 0)
    rsi = nullptr
else
    rsi = sub_141346640(rax_3, &data_143ec4d20)

int64_t* var_c8
int64_t rdi_1 = sx.q(var_c8[1].d)
int32_t rax_5 = (rdi_1 + 1).d
var_c8[1].d = rax_5

if (rax_5 s> *(var_c8 + 0xc))
    sub_1405a4d70(var_c8)

*(*var_c8 + (rdi_1 << 3)) = rsi
void*** (* rax_7)() = j_sub_140a82f30(0xc8)
void*** (* rbx_2)() = rax_7

if (rax_7 == 0)
    rbx_2 = nullptr
else
    memset(rax_7, 0, 0xc8)
    *(rbx_2 + 0x18) = 0
    *(rbx_2 + 0x20) = 0
    *(rbx_2 + 0x28) = 0
    *(rbx_2 + 0x30) = 1
    __builtin_memset(rbx_2 + 0x38, 0, 0x18)
    *(rbx_2 + 0x70) = u"UnknownTexture"
    *(rbx_2 + 0x50) = 1
    *(rbx_2 + 0x58) = 1
    *(rbx_2 + 0x5c) = 0
    *(rbx_2 + 0x64) = 0
    *(rbx_2 + 0x68) = 0
    *(rbx_2 + 0x78) = 1
    *(rbx_2 + 0x7a) = 0
    *(rbx_2 + 0x80) = 0
    *(rbx_2 + 0x88) = 0
    __builtin_memset(rbx_2 + 0x90, 0, 0x38)
    *rbx_2 = &data_142f12060

int64_t r14 = sx.q(var_c8[1].d)
int32_t rax_8 = (r14 + 1).d
var_c8[1].d = rax_8

if (rax_8 s> *(var_c8 + 0xc))
    sub_1405a4d70(var_c8)

*(*var_c8 + (r14 << 3)) = rbx_2
int128_t var_a8
(*(*rbx_2 + 0x18))(rbx_2, 0, &var_a8)
int64_t rax_11 = *rbx_2
var_108 = rsi
var_100.d = 0
(*(rax_11 + 0x18))(rbx_2, 1, &var_108)
var_108 = rbx_2
var_100.d = 0
int128_t zmm0 = var_108.o
var_108 = nullptr
int64_t var_100_1 = 1
var_a8 = zmm0
sub_1405a4d70(&var_108)
*var_108 = rbx_2
sub_1413a1370(&var_98, &var_108)
void*** (* rcx_14)() = var_108

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t result = sub_141386800(&var_98)

if (var_e0 == 0)
    int64_t* rax_13 = var_f8
    char var_e0_1 = 1
    rax_13[4].d -= 1
    int64_t* rcx_16 = var_f8
    
    if (rcx_2 != rcx_16[2])
        sub_140b16b40(rcx_16, rcx_2)
        rcx_16 = var_f8
    
    *rcx_16 = rcx_1
    result = result_1
    var_f8[3] = result

return result
