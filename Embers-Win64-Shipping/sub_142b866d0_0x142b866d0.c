// 函数: sub_142b866d0
// 地址: 0x142b866d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rbx = arg4
struct icu_64::ResourceSink::xdd41f32b::PluralTableSink::operator[]::PluralTableSink::VTable* const 
    var_b8 =
    &xdd41f32b::PluralTableSink::operator[]::PluralTableSink::`vftable'{for `icu_64::ResourceSink'}
void* var_b0 = rbx
int64_t i_2 = 8
int64_t i

do
    sub_142a4ab40(rbx)
    rbx += 0x40
    i = i_2
    i_2 -= 1
while (i != 1)
char** rax_2 = sub_142a641c0("icudt64l-unit", *(arg1 + 0x28), arg5)
char** var_a0 = rax_2

if (*arg5 s<= i_2.d)
    void* rax_3 = sub_142ab6380(arg2)
    int64_t rdi = -1
    
    do
        rdi += 1
    while (*(rax_3 + rdi) != 0)
    
    uint128_t zmm0_1
    
    if (rdi.d s<= 7)
    label_142b867cc:
        uint128_t var_98
        sub_142a85330(&var_98, sub_142ab6380(arg2))
        zmm0_1 = var_98
    else
        void* rdx_2 = sx.q(rdi.d) + sub_142ab6380(arg2)
        
        for (int64_t i_1 = 0; i_1 != 8; )
            char rcx_3 = *(rdx_2 + i_1 - 7)
            i_1 += 1
            
            if (rcx_3 != *(i_1 + 0x14367e4b7))
                goto label_142b867cc
        
        uint128_t var_c8
        var_c8.q = sub_142ab6380(arg2)
        var_c8:8.d = (rdi - 7).d
        zmm0_1 = var_c8
    
    int96_t var_c8_1 = zmm0_1.12
    int16_t var_7c
    void* var_88 = &var_7c:1
    int32_t var_80_1 = 0x28
    var_7c = 0
    int32_t var_50_1 = 0
    void var_e0
    uint128_t zmm1_1 = *sub_142a85330(&var_e0, "units")
    sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    int32_t rax_9 = *arg3
    
    if (rax_9 == 0)
        zmm1_1 = *sub_142a85330(&var_e0, "Narrow")
        sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    else if (rax_9 == 1)
        zmm1_1 = *sub_142a85330(&var_e0, "Short")
        sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    
    zmm1_1 = *sub_142a85330(&var_e0, &data_14363dfe8)
    sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    zmm1_1 = *sub_142a85330(&var_e0, sub_142ab63b0(arg2))
    sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    zmm1_1 = *sub_142a85330(&var_e0, &data_14363dfe8)
    sub_142a8cbd0(&var_88, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
    int32_t rdi_1 = var_c8_1:8.d
    int64_t r15_1 = var_c8_1.q
    sub_142a8cbd0(&var_88, r15_1, rdi_1, arg5)
    int32_t var_e8 = 0
    sub_142a61e60(rax_2, var_88, &var_b8, &var_e8)
    
    if (*arg3 != 1)
        int32_t var_50_2 = 0
        *var_88 = 0
        uint128_t zmm1_2 = *sub_142a85330(&var_e0, "unitsShort/")
        sub_142a8cbd0(&var_88, zmm1_2.q, _mm_bsrli_si128(zmm1_2, 8).d, arg5)
        zmm1_2 = *sub_142a85330(&var_e0, sub_142ab63b0(arg2))
        sub_142a8cbd0(&var_88, zmm1_2.q, _mm_bsrli_si128(zmm1_2, 8).d, arg5)
        zmm1_2 = *sub_142a85330(&var_e0, &data_14363dfe8)
        sub_142a8cbd0(&var_88, zmm1_2.q, _mm_bsrli_si128(zmm1_2, 8).d, arg5)
        sub_142a8cbd0(&var_88, r15_1, rdi_1, arg5)
        sub_142a61e60(rax_2, var_88, &var_b8, arg5)
    else
        int32_t rax_15 = var_e8
        
        if (rax_15 s> 0)
            *arg5 = rax_15
    
    if (var_7c.b != 0)
        sub_142a7dcd0(var_88)

if (rax_2 != 0)
    sub_142a5f860(rax_2)

sub_142ac3f40(&var_b8)
__security_check_cookie(rax_1 ^ &var_108)
return &icu_64::UObject::`vftable'
