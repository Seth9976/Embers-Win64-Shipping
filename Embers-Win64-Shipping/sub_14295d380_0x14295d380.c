// 函数: sub_14295d380
// 地址: 0x14295d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* r10 = arg2 + 4
uint32_t rcx_4 = (zx.d(arg1[4]) << 8 | zx.d(arg1[5])) << 8 | zx.d(arg1[6])
var_48 =
    (((zx.d(*arg1) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[3])) ^ 0xa3b1bac6
int32_t var_44 = (rcx_4 << 8 | zx.d(arg1[7])) ^ 0x56aa3350
int32_t var_40 = (((zx.d(arg1[8]) << 8 | zx.d(arg1[9])) << 8 | zx.d(arg1[0xa])) << 8
    | zx.d(arg1[0xb])) ^ 0x677d9197
int32_t i = 2
int32_t var_3c = (((zx.d(arg1[0xc]) << 8 | zx.d(arg1[0xd])) << 8 | zx.d(arg1[0xe])) << 8
    | zx.d(arg1[0xf])) ^ 0xb27022dc

do
    int32_t rax_15 = (i + 1) & 0x80000003
    
    if (rax_15 s< 0)
        rax_15 = ((rax_15 - 1) | 0xfffffffc) + 1
    
    void* r11_1 = &(&var_48)[sx.q(rax_15)]
    int32_t rax_19 = i & 0x80000003
    
    if (rax_19 s< 0)
        rax_19 = ((rax_19 - 1) | 0xfffffffc) + 1
    
    void* rbx_1 = &(&var_48)[sx.q(rax_19)]
    int32_t rax_24 = (i - 1) & 0x80000003
    
    if (rax_24 s< 0)
        rax_24 = ((rax_24 - 1) | 0xfffffffc) + 1
    
    int64_t rax_27 = sx.q(rax_24)
    int32_t rdx_3 = *(&data_14354a000 - arg2 + r10 - 4) ^ *r11_1 ^ *rbx_1 ^ (&var_48)[rax_27]
    void* rdi_1 = &(&var_48)[rax_27]
    uint32_t r8_14 = ((zx.d(*((zx.q(rdx_3) u>> 0x18) + &data_143549af0)) << 8
        | zx.d(*(zx.q((rdx_3 u>> 0x10).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q((rdx_3 u>> 8).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q(rdx_3.b) + &data_143549af0))
    int32_t rax_38 = (i - 2) & 0x80000003
    
    if (rax_38 s< 0)
        rax_38 = ((rax_38 - 1) | 0xfffffffc) + 1
    
    void* rcx_28 = &(&var_48)[sx.q(rax_38)]
    int32_t rdx_8 = rol.d(r8_14, 0xd) ^ ror.d(r8_14, 9) ^ *rcx_28 ^ r8_14
    *rcx_28 = rdx_8
    *(r10 - 4) = rdx_8
    int32_t rax_45 = (i + 2) & 0x80000003
    
    if (rax_45 s< 0)
        rax_45 = ((rax_45 - 1) | 0xfffffffc) + 1
    
    int64_t rax_48 = sx.q(rax_45)
    void* rsi_1 = &(&var_48)[rax_48]
    int32_t rdx_12 = *(&data_14354a000 - arg2 + r10) ^ (&var_48)[rax_48] ^ *r11_1 ^ *rbx_1
    uint32_t r8_21 = ((zx.d(*((zx.q(rdx_12) u>> 0x18) + &data_143549af0)) << 8
        | zx.d(*(zx.q((rdx_12 u>> 0x10).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q((rdx_12 u>> 8).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q(rdx_12.b) + &data_143549af0))
    int32_t rcx_36 = rol.d(r8_21, 0xd) ^ ror.d(r8_21, 9) ^ *rdi_1 ^ r8_21
    *rdi_1 = rcx_36
    *r10 = rcx_36
    int32_t rax_61 = (i + 3) & 0x80000003
    
    if (rax_61 s< 0)
        rax_61 = ((rax_61 - 1) | 0xfffffffc) + 1
    
    i += 4
    int64_t rax_64 = sx.q(rax_61)
    int32_t rdx_16 = *(&data_14354a004 - arg2 + r10) ^ *rsi_1 ^ (&var_48)[rax_64] ^ *r11_1
    uint32_t r8_28 = ((zx.d(*((zx.q(rdx_16) u>> 0x18) + &data_143549af0)) << 8
        | zx.d(*(zx.q((rdx_16 u>> 0x10).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q((rdx_16 u>> 8).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q(rdx_16.b) + &data_143549af0))
    int32_t rcx_44 = rol.d(r8_28, 0xd) ^ ror.d(r8_28, 9) ^ *rbx_1 ^ r8_28
    *rbx_1 = rcx_44
    *(r10 + 4) = rcx_44
    int32_t rax_77 = i & 0x80000003
    
    if (rax_77 s< 0)
        rax_77 = ((rax_77 - 1) | 0xfffffffc) + 1
    
    int32_t rdx_20 =
        (&var_48)[sx.q(rax_77)] ^ *(r10 + "MF?8ib[T" - arg2) ^ *rsi_1 ^ (&var_48)[rax_64]
    uint32_t r8_35 = ((zx.d(*((zx.q(rdx_20) u>> 0x18) + &data_143549af0)) << 8
        | zx.d(*(zx.q((rdx_20 u>> 0x10).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q((rdx_20 u>> 8).b) + &data_143549af0))) << 8
        | zx.d(*(zx.q(rdx_20.b) + &data_143549af0))
    int32_t rcx_52 = rol.d(r8_35, 0xd) ^ ror.d(r8_35, 9) ^ *r11_1 ^ r8_35
    *(r10 + 8) = rcx_52
    r10 += 0x10
    *r11_1 = rcx_52
while (i != 0x22)

__security_check_cookie(rax_1 ^ &var_48)
return zx.q(i - 0x21)
