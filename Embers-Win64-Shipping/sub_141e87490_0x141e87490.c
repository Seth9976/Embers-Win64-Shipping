// 函数: sub_141e87490
// 地址: 0x141e87490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int128_t* rsi = arg2

if (*arg2 == 0)
    return 

void* rax = *(arg1 + 0x18)
uint32_t temp0_1[0x4]

if (*(arg2 + 8) == rax && arg3 == 0)
    uint32_t zmm0[0x4] = *(arg2 + 0x18)
    zmm0[0] = zmm0[0] f- *(arg1 + 0x158)
    temp0_1 = __andps_xmmxud_memxud(zmm0, data_142d3f770)

if (*(arg2 + 8) == rax && arg3 == 0 && temp0_1[0] f<= 9.99999994e-09f)
    return 

int64_t var_48
int64_t var_38
int64_t* rax_2
int32_t r14_1

if (rax == 0)
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 5)
    int32_t rax_3 = var_40_1 + 5
    var_40_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"None", 0xa)
    rax_2 = &var_48
    r14_1 = 2
else
    arg_10.q = *(rax + 0x18)
    sub_140b63b70(&arg_10, &var_38)
    rax_2 = &var_38
    r14_1 = 1

int64_t r15_1 = *rax_2
*rax_2 = 0
rax_2[1] = 0

if ((r14_1.b & 2) != 0)
    int64_t rcx_4 = var_48
    r14_1 &= 0xfffffffd
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

if ((r14_1.b & 1) != 0)
    int64_t rcx_5 = var_38
    r14_1 &= 0xfffffffe
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

void* rax_4 = *(rsi + 8)
int64_t* rax_6
int32_t rdi_1

if (rax_4 == 0)
    var_48 = 0
    int32_t var_40_2 = 0
    sub_1405947f0(&var_48, 5)
    int32_t rax_7 = var_40_2 + 5
    var_40_2 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"None", 0xa)
    rax_6 = &var_48
    rdi_1 = 8
else
    arg_10.q = *(rax_4 + 0x18)
    sub_140b63b70(&arg_10, &var_38)
    rax_6 = &var_38
    rdi_1 = 4

int32_t rdi_2 = rdi_1 | r14_1
int64_t r14_2 = *rax_6
*rax_6 = 0
rax_6[1] = 0

if ((rdi_2.b & 8) != 0)
    int64_t rcx_10 = var_48
    rdi_2 &= 0xfffffff7
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rdi_2.b & 4) != 0)
    int64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

*(arg1 + 0x140) = *rsi
*(arg1 + 0x150) = rsi[1]
*(arg1 + 0x28) = *(arg1 + 0x70)
*(arg1 + 0x30) = *(arg1 + 0x78)
*(arg1 + 0x34) = *(arg1 + 0x7c)
*(arg1 + 0x38) = *(arg1 + 0x80)
*(arg1 + 0x3c) = *(arg1 + 0x84)
*(arg1 + 0x40) = *(arg1 + 0x88)
*(arg1 + 0x44) = *(arg1 + 0x8c)
*(arg1 + 0x48) = *(arg1 + 0x90)
*(arg1 + 0x4c) = *(arg1 + 0x94)
*(arg1 + 0x50) = *(arg1 + 0x98)
*(arg1 + 0x54) = *(arg1 + 0x9c)
*(arg1 + 0x58) = *(arg1 + 0xa0)
*(arg1 + 0x5c) = *(arg1 + 0xa4)
*(arg1 + 0x60) = *(arg1 + 0xa8)
*(arg1 + 0x28) = data_143dbb3b8
void* rcx_12 = *(rsi + 8)

if (rcx_12 != 0)
    *(arg1 + 0x10c) = *(rcx_12 + 0x28)
    *(arg1 + 0x110) = *(rcx_12 + 0x2c)
    *(arg1 + 0x114) = *(rcx_12 + 0x30)
    *(arg1 + 0x118) = *(rcx_12 + 0x34)
    *(arg1 + 0x11c) = *(rcx_12 + 0x38)
    *(arg1 + 0x120) = *(rcx_12 + 0x3c)
    *(arg1 + 0x124) = *(rcx_12 + 0x40)
    *(arg1 + 0x128) = *(rcx_12 + 0x44)
    *(arg1 + 0x12c) = *(rcx_12 + 0x48)
    *(arg1 + 0x130) = *(rcx_12 + 0x4c)
    *(arg1 + 0x134) = *(rcx_12 + 0x50)
    *(arg1 + 0x138) = *(rcx_12 + 0x54)

*(arg1 + 0x22a) = 1
uint128_t zmm0_1

if (arg3 == 0)
    zmm0_1.q = _mm_cvtps_pd((*(rsi + 0x1c)).q).q f+ data_143dbb3b8
else
    zmm0_1 = zx.o(data_143dbb3b8)

*(arg1 + 0x100) = zmm0_1.q
*(arg1 + 0x108) = *(rsi + 0x18)
rax = *(rsi + 8)

if (rax == 0)
    *(arg1 + 0x108) = 0
    rax = *(rsi + 8)

*(arg1 + 0x18) = rax

if (r14_2 != 0)
    sub_140a74f90(r14_2)

if (r15_1 != 0)
    sub_140a74f90(r15_1)
