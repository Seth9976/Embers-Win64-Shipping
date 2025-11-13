// 函数: sub_1413f9f40
// 地址: 0x1413f9f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t* var_2f8 = nullptr
void* rcx = *(arg2 + 8)
int64_t* rdx

if (rcx != 0)
    rdx = *(rcx + 0xcb0)

int32_t var_2e8
int32_t var_2e0
int32_t* var_2d0
int32_t r12
int32_t r13
int32_t r15

if (rcx == 0 || rdx == 0 || *(data_143ec9128 + 4) != 1)
    void var_2b8
    sub_1419928d0(&var_2b8, *arg1)
    int32_t var_2dc_1 = 2
    int32_t var_2e0_1 = 0x209
    var_2e8 = 0x10
    int32_t var_2e4_1 = 1
    int64_t* var_2b0
    int32_t* rax_3 = sub_14081d830(0x48, var_2b0, 1, 0)
    int32_t* rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        int128_t zmm0_1 = var_2e8.o
        *(rbx_1 + 0x10) = 0
        *(rbx_1 + 8) = u"DummySkyLightVisibilityRays"
        rbx_1[6].b = 0
        rbx_1[7] = 0
        *(rbx_1 + 0x20) = 0
        rbx_1[0xa].w = 0x200
        *rbx_1 = &data_142f285d0
        *(rbx_1 + 0x30) = zmm0_1
        *(rbx_1 + 0x40) = 0
    
    var_2e8.q = rbx_1
    var_2e0 = 0x1c
    var_2dc_1.w = 0
    void*** rax_4 = sub_14081d830(0x28, var_2b0, 1, 0)
    void*** rdx_4 = rax_4
    
    if (rax_4 == 0)
        rdx_4 = nullptr
    else
        int128_t zmm0_2 = var_2e8.o
        rdx_4[1] = *(rbx_1 + 8)
        *rdx_4 = &data_142f285c0
        rdx_4[2] = 0
        *(rdx_4 + 0x18) = zmm0_2
    
    sub_1419965b0(&var_2b8, rdx_4)
    var_2d0 = rbx_1
    int32_t var_140
    int64_t rbx_2 = sx.q(var_140)
    int64_t** var_2c8_1 = &var_2f8
    int16_t var_2c0_1 = 0x100
    int32_t rax_6 = (rbx_2 + 1).d
    int32_t var_140_1 = rax_6
    int64_t var_148
    int32_t var_13c
    
    if (rax_6 s> var_13c)
        sub_14119a720(&var_148, rbx_2.d)
    
    int64_t rax_7 = var_148
    int64_t rcx_4 = rbx_2 * 3
    *(rax_7 + (rcx_4 << 3)) = var_2d0.o
    *(rax_7 + (rcx_4 << 3) + 0x10) = var_2c0_1.q
    sub_14199ef00(&var_2b8)
    r15 = 1
    r12 = 1
    r13 = 1
    sub_1410eb9e0(&var_2b8)
else
    var_2f8 = rdx
    rdx[0x1a].d += 1
    r15 = *(rcx + 0xcb8)
    r12 = *(rcx + 0xcbc)
    r13 = *(rcx + 0xcc0)

int64_t* rbx_3 = var_2f8
int32_t var_2f0
sub_140865c40(&arg1[0x22], &var_2f0, rbx_3)
int64_t rax_8 = sx.q(var_2f0)
void* const rcx_8

if (rax_8.d == 0xffffffff)
    rcx_8 = nullptr
else
    rcx_8 = arg1[0x22] + rax_8 * 0x18

int64_t* rax_10 = rcx_8 + 8

if (rcx_8 == 0)
    rax_10 = nullptr

void*** rdx_8

if (rax_10 == 0)
    void*** rax_11 = sub_14081d830(0x48, arg1[1], 1, 0)
    void*** rcx_9 = rax_11
    
    if (rax_11 == 0)
        rcx_9 = rax_11
    else
        rcx_9[1] = u"External"
        rcx_9[2] = 0
        rcx_9[3].b = 0
        *(rcx_9 + 0x1c) = 0
        rcx_9[4] = 0
        rcx_9[5].w = 0x200
        *rcx_9 = &data_142f285d0
        int128_t zmm0_4 = *(rbx_3 + 0xb8)
        rcx_9[8] = 0
        *(rcx_9 + 0x30) = zmm0_4
    
    int64_t* rax_12 = var_2f8
    void*** var_2d8 = rcx_9
    rcx_9[8] = rax_12
    void*** rdx_10 = var_2d8
    int32_t rcx_10 = *(rdx_10 + 0x3c)
    
    if (rcx_10 == 0)
        rdx_10[2] = *var_2f8
    else if (rcx_10 == 1)
        rdx_10[2] = var_2f8[1]
    else if (rcx_10 == 2)
        rdx_10[2] = var_2f8[2]
    
    var_2e8.q = &var_2d8
    var_2e0.q = &var_2f8
    sub_1411610a0(&arg1[0xe], &var_2f0, &var_2e8, nullptr)
    var_2e8.q = var_2f8
    var_2d0 = &var_2e8
    void** var_2c8_2 = &var_2d8
    sub_14107baa0(&arg1[0x22], &var_2f0, &var_2d0, nullptr)
    rdx_8 = var_2d8
else
    rdx_8 = *rax_10

void*** result = sub_141188b30(arg1, rdx_8, 0x1c)
int64_t* rcx_16 = var_2f8
*arg3 = result
arg3[2].d = r15
*(arg3 + 0x14) = r12
arg3[3].d = r13

if (rcx_16 != 0)
    result = sub_1411e8d60(rcx_16)

__security_check_cookie(rax_1 ^ &var_318)
return result
