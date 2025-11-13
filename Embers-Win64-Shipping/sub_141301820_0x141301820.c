// 函数: sub_141301820
// 地址: 0x141301820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg4
void* rax = *arg1
int64_t r12
r12.b = arg3.d f> 0f
int64_t rsi
rsi.b = zmm7.d f> 0f
int32_t r13_1

if (r12.b != 0)
    r13_1 = 1

if (r12.b == 0 || rsi.b == 0)
    r13_1 = 0

int128_t zmm8 = *(rax + 0x28)
char arg_18 = 0
char* var_b0 = &arg_18
void*** (* var_b8)() = j_sub_140597fc0
void*** (* rax_2)()
int32_t zmm6_1
rax_2, zmm6_1 = sub_14081d830(0x168, sub_140a756e0(&var_b8, &data_143958018) + 0x10, 1, 0)
void*** (* rbx)() = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    *(rax_2 + 8) = 0
    int64_t i_1 = 2
    *rbx = &data_142f59b30
    void*** (* rax_3)() = rbx + 0x40
    *(rbx + 0x10) = 0
    *(rbx + 0x18) = 0
    *(rbx + 0x20) = 0
    *(rbx + 0x28) = 0
    *(rbx + 0x30) = 0
    *(rbx + 0x38) = 0
    int64_t i
    
    do
        *rax_3 = 1
        __builtin_memset(rax_3 + 8, 0, 0x18)
        *(rax_3 + 0x20) = 1
        *(rax_3 + 0x28) = 1
        *(rax_3 + 0x2c) = 0
        *(rax_3 + 0x34) = 0
        *(rax_3 + 0x38) = 0
        *(rax_3 + 0x40) = u"UnknownTexture"
        *(rax_3 + 0x48) = 1
        *(rax_3 + 0x4a) = 0
        *(rax_3 + 0x50) = 0
        *(rax_3 + 0x58) = 0
        rax_3 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)
    __builtin_memset(rbx + 0x100, 0, 0x60)
    *rbx = &data_142f59bc8
    *(rbx + 0x160) = r12.b
    *(rbx + 0x161) = rsi.b

int64_t* rdi = *(*arg1 + 8)
int64_t r15 = sx.q(rdi[1].d)
int32_t rax_5 = (r15 + 1).d
rdi[1].d = rax_5

if (rax_5 s> *(rdi + 0xc))
    sub_1405a4d70(rdi)

int64_t rax_6 = *rdi
int128_t var_98 = zmm8
*(rax_6 + (r15 << 3)) = rbx
(*(*rbx + 0x18))(rbx, 0, &var_98)
int64_t rax_9 = *rbx
int64_t* var_a8 = *(*arg1 + 0x20)
int32_t var_a0 = 0
(*(rax_9 + 0x18))(rbx, 1, &var_a8)
(*(*rbx + 0x18))(rbx, 2, arg1[2])
var_b8 = rbx
var_98.q = rbx
var_b0.d = 0
var_98:8.d = r13_1
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_c8 = 0
int32_t var_c0 = 0
uint128_t var_88
int128_t var_78
uint128_t zmm1_1

if (r12.b != 0)
    zmm1_1 = data_14399f5c0
    int64_t* rdx_2 = *(rax + 8)
    var_a8 = nullptr
    int32_t var_a0_1 = 0
    int128_t zmm0_1 = var_a8.o
    var_88 = zmm1_1
    uint64_t var_e8_1 = data_143dbb1f0
    var_a8.o = zmm0_1
    var_b8.o = var_b8.o
    zmm7 = sub_14138b310(&var_78, rdx_2, FarDOFBlurX", FarDOFBlurY"
        , &var_b8, zmm6_1, &var_88, &var_a8)
    var_d8.o = var_78

if (rsi.b != 0)
    zmm1_1 = data_14399f5c0
    int64_t* rdx_3 = *(rax + 8)
    var_a8 = nullptr
    var_88 = zmm1_1
    uint64_t var_e8_2 = data_143dbb1f0
    int32_t var_a0_2 = 0
    var_78 = var_a8.o
    var_98 = var_98
    sub_14138b310(&var_a8, rdx_3, NearDOFBlurX", NearDOFBlurY", &var_98, zmm7.d, &var_88, &var_78)
    var_c8.o = var_a8.o

arg_18 = 0
var_98:8.q = &arg_18
var_98.q = j_sub_140597fc0
int64_t* rax_12 = sub_14081d830(0xf8, sub_140a756e0(&var_98, &data_143958018) + 0x10, 1, 0)
int64_t* rbx_2 = rax_12

if (rax_12 == 0)
    rbx_2 = nullptr
else
    memset(rax_12, 0, 0xf8)
    rbx_2[3].d = 0
    rbx_2[4] = 0
    rbx_2[5].d = 0
    rbx_2[6] = 0
    rbx_2[7].d = 0
    rbx_2[8] = 0
    rbx_2[9].d = 0
    rbx_2[0xa] = 0
    rbx_2[0xb].d = 0
    rbx_2[0xc] = 1
    __builtin_memset(&rbx_2[0xd], 0, 0x18)
    rbx_2[0x14] = u"UnknownTexture"
    rbx_2[0x10] = 1
    rbx_2[0x11].w = 1
    *(rbx_2 + 0x8c) = 0
    *(rbx_2 + 0x94) = 0
    rbx_2[0x13].w = 0
    rbx_2[0x15].w = 1
    *(rbx_2 + 0xaa) = 0
    rbx_2[0x16] = 0
    rbx_2[0x17].d = 0
    __builtin_memset(&rbx_2[0x18], 0, 0x38)
    *rbx_2 = &data_142f59cf8

int64_t* rdi_1 = *(*arg1 + 8)
int64_t rsi_1 = sx.q(rdi_1[1].d)
int32_t rax_14 = (rsi_1 + 1).d
rdi_1[1].d = rax_14

if (rax_14 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

*(*rdi_1 + (rsi_1 << 3)) = rbx_2
(*(*rbx_2 + 0x18))(rbx_2, 0, *arg1 + 0x28)
(*(*rbx_2 + 0x18))(rbx_2, 1, &var_d8)
(*(*rbx_2 + 0x18))(rbx_2, 2, &var_c8)
(*(*rbx_2 + 0x18))(rbx_2, 3, arg2)
(*(*rbx_2 + 0x18))(rbx_2, 4, arg1[2])
void* result = *arg1
var_98.q = rbx_2
var_98:8.d = 0
*(result + 0x28) = var_98
return result
