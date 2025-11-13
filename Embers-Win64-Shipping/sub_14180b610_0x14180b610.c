// 函数: sub_14180b610
// 地址: 0x14180b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void*** result_1 = arg1
int32_t var_60 = 0
int64_t* rdi = arg2
*arg1 = &data_142fe28e0
void*** result = arg1
sub_140a1d270(&result[1], zx.o(0), sub_140b18f30())
result[4] = 0
result[5] = 0
*result = &data_142fe2a10
result[6].b = 0
result[1] = &data_142fe2b40
sub_140596d10(&result[7], rdi)
sub_140596d10(&result[9], &rdi[2])
result[0xb] = 0
int32_t i_4 = rdi[5].d
int64_t* rsi = rdi[4]
result[0xc].d = i_4

if (i_4 != 0)
    sub_1405a4be0(&result[0xb], i_4, 0)
    int64_t* rbx_1 = result[0xb]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rdi_1 = rsi[1].d
        int64_t r15_1 = *rsi
        rbx_1[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_1, rdi_1, 0)
            memcpy(*rbx_1, r15_1, rdi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rsi = &rsi[2]
        i = i_4
        i_4 -= 1
    while (i != 1)
    rdi = arg2
else
    *(result + 0x64) = 0

sub_140596d10(&result[0xd], &rdi[6])
result[0xf].b = rdi[8].b
*(result + 0x79) = *(rdi + 0x41)
sub_140596d10(&result[0x10], &rdi[9])
sub_140596d10(&result[0x12], &rdi[0xb])
result[0x14].d = rdi[0xd].d
__builtin_memset(&result[0x15], 0, 0x20)
result[0x19].d = 0x14
*(result + 0xcc) = 0x42700000
result[0x1a].d = 0x42f00000
result[0x1b] = 0
result[0x1c].b = 1
*(result + 0xe4) = 0x42700000
result[0x1d].b = 0
result[0x1e] = 0
result[0x1f] = 0
InitializeCriticalSection(&result[0x20])
SetCriticalSectionSpinCount(&result[0x20], 0xfa0)
__builtin_memset(&result[0x25], 0, 0x30)

if (result[8].d s<= 1 || result[0xa].d s<= 1)
    int32_t rax_7
    
    if (result[0xa].d == 0)
        rax_7 = 0x42d40450
    else
        rax_7 = (result[9]).d
    
    int16_t* const r9_1
    
    if (result[8].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = result[7]
    
    int32_t var_158 = rax_7
    sub_140af98a0("Unknown", 0x144, AnalyticsET: APIKey (%s) and APIServer (%s) cannot be empty!", 
        r9_1)
    sub_140afbb40()

int32_t r13 = rdi[5].d
var_60 = r13
char var_50 = 0
char var_5c = 1
void*** rax_8 = j_sub_140a82f30(0x48)
void*** rbx_2 = rax_8
int32_t r14 = 1

if (rax_8 == 0)
    rbx_2 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rbx_2 = &data_142fe2f28
    void var_58
    sub_1417fe630(&rbx_2[2], &var_60, &var_58)

uint128_t zmm0 = (&rbx_2[2]).o
uint128_t var_88 = zmm0
void*** rbx_3 = _mm_bsrli_si128(zmm0, 8).q
int64_t* rdi_2 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = rbx_2

if (&result[0x27] == &var_88)
label_14180b99d:
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d != 1)
            rbx_3 = rbx_2
        else
            (**rdi_2)(rdi_2)
            int32_t temp4_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp4_1 != 1)
                rbx_3 = rbx_2
            else
                (*(*rdi_2 + 8))(rdi_2, 1)
                rbx_3 = rbx_2
else
    result[0x27] = var_88.q
    var_88.q = 0
    int64_t* rsi_1 = result[0x28]
    
    if (rdi_2 == rsi_1)
        goto label_14180b99d
    
    var_88:8.q = 0
    result[0x28] = rdi_2
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d != 1)
            rbx_3 = rbx_2
        else
            (**rsi_1)(rsi_1)
            int32_t temp7_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp7_1 != 1)
                rbx_3 = rbx_2
            else
                (*(*rsi_1 + 8))(rsi_1, 1)
                rbx_3 = rbx_2

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

char var_5c_1 = 0
int64_t rdi_3 = -1
char var_50_1 = 0
int64_t var_138

if (r13 != 0)
    int64_t* rsi_2 = nullptr
    int64_t* var_148 = nullptr
    int32_t i_3 = arg2[5].d
    void* rbx_4 = arg2[4]
    int32_t i_6 = i_3
    int32_t i_7
    
    if (i_3 != 0)
        sub_1405a4be0(&var_148, i_3, 0)
        rsi_2 = var_148
        void* r15_4 = rsi_2 - rbx_4
        int32_t i_1
        
        do
            *(r15_4 + rbx_4) = 0
            void* r12 = r15_4 + rbx_4
            int32_t r14_1 = *(rbx_4 + 8)
            var_138 = *rbx_4
            *(r15_4 + rbx_4 + 8) = r14_1
            
            if (r14_1 != 0)
                sub_1405a4c70(r12, r14_1, 0)
                memcpy(*r12, var_138, r14_1 * 2)
            else
                *(r15_4 + rbx_4 + 0xc) = 0
            
            rbx_4 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_3 = i_7
        result = result_1
    else
        i_7 = i_3
    
    int16_t* var_98
    sub_1418042f0(&var_98, &result[9])
    int64_t* rbx_5 = rsi_2
    void* r15_7 = &rsi_2[sx.q(i_6) * 2]
    int32_t var_90
    
    if (rsi_2 == r15_7)
    label_14180bb18:
        int64_t i_9 = sx.q(i_6)
        int32_t i_8 = (i_9 + 1).d
        i_6 = i_8
        
        if (i_8 s> i_3)
            sub_1405a4f90(&var_148)
            i_3 = i_7
            rsi_2 = var_148
        
        memmove(&rsi_2[2], rsi_2, (i_9 << 4).d)
        *rsi_2 = 0
        int16_t* r15_8 = var_98
        rsi_2[1].d = var_90
        
        if (var_90 != 0)
            sub_1405a4c70(rsi_2, var_90, 0)
            memcpy(*rsi_2, r15_8, var_90 * 2)
        else
            *(rsi_2 + 0xc) = 0
    else
        while (true)
            int16_t* const rdx_14 = &data_142d40450
            
            if (var_90 != 0)
                rdx_14 = var_98
            
            int16_t* const rcx_21
            
            if (rbx_5[1].d == 0)
                rcx_21 = &data_142d40450
            else
                rcx_21 = *rbx_5
            
            if (sub_140a54510(rcx_21, rdx_14) == 0)
                break
            
            rbx_5 = &rbx_5[2]
            
            if (rbx_5 == r15_7)
                goto label_14180bb18
    void*** rax_18 = j_sub_140a82f30(0x28)
    void*** rcx_26 = rax_18
    
    if (rax_18 == 0)
        rcx_26 = nullptr
    else
        rax_18[1].d = 1
        *(rax_18 + 0xc) = 1
        *rcx_26 = &data_142fe2f38
        rcx_26[2] = rsi_2
        rsi_2 = nullptr
        rcx_26[3].d = i_6
        *(rcx_26 + 0x1c) = i_3
        i_6.q = 0
        var_148 = nullptr
        rcx_26[4].d = 0
    
    uint128_t zmm0_1 = (&rcx_26[2]).o
    uint128_t var_d8 = zmm0_1
    void*** rbx_7 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
        rsi_2 = var_148
        rbx_7 = rcx_26
    
    if (&result[0x29] != &var_d8)
        result[0x29] = var_d8.q
        var_d8.q = 0
        sub_1405aeff0(&result[0x2a], &var_d8:8)
        rbx_7 = rcx_26
    
    void* rcx_29 = var_d8:8.q
    
    if (rcx_29 != 0)
        int32_t rax_21 = *(rcx_29 + 8)
        *(rcx_29 + 8) -= 1
        
        if (rax_21 == 1)
            int64_t* rbx_8 = var_d8:8.q
            (**rbx_8)(rbx_8)
            int32_t rax_23 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rax_23 == 1)
                int64_t* rcx_31 = var_d8:8.q
                (*(*rcx_31 + 8))(rcx_31, 1)
        
        rbx_7 = rcx_26
        rsi_2 = var_148
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t rax_27 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*rbx_7)[1](rbx_7, 1)
        
        rsi_2 = var_148
    
    int16_t* rcx_34 = var_98
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    int32_t i_5 = i_6
    int64_t* rbx_9 = rsi_2
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_35 = *rbx_9
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            rbx_9 = &rbx_9[2]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    r14 = 1

sub_140af2b60()
int32_t rdx_21

if (sub_140b21a10(&data_143dbb3f0, u"ANALYTICSDISABLECACHING") != 0)
    result[0x1c].b = 0
    rdx_21 = 2
else if (result[0x1c].b == 0)
    rdx_21 = 2
else
    rdx_21 = result[0x19].d + 1

if (rdx_21 s> *(result + 0xfc))
    sub_1405a5220(&result[0x1e], rdx_21)

int64_t rbx_10 = sx.q(result[0x1f].d)
int32_t rax_30 = (rbx_10 + 1).d
result[0x1f].d = rax_30

if (rax_30 s> *(result + 0xfc))
    sub_1405c4f50(&result[0x1e])

void* rbx_13 = &result[0x1e][rbx_10 * 6]
__builtin_memset(rbx_13, 0, 0x20)
sub_140b29d90(rbx_13 + 0x20)
*(rbx_13 + 0x28) &= 0xfffffffe
*(rbx_13 + 0x28) |= 2
int64_t var_108 = 0
int32_t rbx_14 = rdi[7].d
int64_t rsi_5 = rdi[6]

if (rbx_14 != 0)
    sub_1405a4c70(&var_108, rbx_14, 0)
    memcpy(var_108, rsi_5, rbx_14 * 2)
else
    int32_t var_fc_1 = 0

sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"ANALYTICSAPPVERSION=", &var_108, 0)
int64_t var_70
int64_t* rbx_15

if (rbx_14 s> 1)
    j_sub_140a1b080()
    rbx_15 = sub_140a300d0(&var_108, &var_70, u"%VERSION%", u"++UE4+Release-4.25-CL-14469661", 0)
    r14 = 2
else
    j_sub_140a1b080()
    result_1 = nullptr
    int32_t rdx_26 = 0
    int32_t var_120_1 = 0
    int32_t rcx_42 = 0
    int32_t var_11c_1 = 0
    
    do
        rdi_3 += 1
    while ((*u"++UE4+Release-4.25-CL-14469661")[rdi_3] != 0)
    
    if (rdi_3.d + 1 s> 0)
        sub_1405947f0(&result_1, rdi_3.d + 1)
        rcx_42 = var_11c_1
        rdx_26 = var_120_1
    
    int32_t rax_31 = rdi_3.d + 1 + rdx_26
    int32_t var_120_2 = rax_31
    
    if (rax_31 s> rcx_42)
        sub_140594770(&result_1)
    
    UnDecorator::getReferenceType(result_1, u"++UE4+Release-4.25-CL-14469661", (rdi_3.d + 1) * 2)
    rbx_15 = &result_1

if (&result[0xd] != rbx_15)
    int64_t rcx_47 = result[0xd]
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    result[0xd] = *rbx_15
    *rbx_15 = 0
    result[0xe].d = rbx_15[1].d
    *(result + 0x74) = *(rbx_15 + 0xc)
    rbx_15[1] = 0

if ((r14.b & 2) != 0)
    int64_t rcx_48 = var_70
    r14 &= 0xfffffffd
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)

if ((r14.b & 1) != 0)
    void*** result_2 = result_1
    r14 &= 0xfffffffe
    
    if (result_2 != 0)
        sub_140a74f90(result_2)

if (result[0xf].b == 0)
    uint64_t var_b8
    int64_t* rdx_30
    int32_t rbx_16
    
    if (arg2[0xa].d s> 1)
        int32_t rbx_17 = arg2[0xa].d
        int64_t rdi_6 = arg2[9]
        var_b8 = 0
        int32_t var_b0_1 = rbx_17
        
        if (rbx_17 != 0)
            sub_1405a4c70(&var_b8, rbx_17, 0)
            memcpy(var_b8, rdi_6, rbx_17 * 2)
        else
            int32_t var_ac_1 = 0
        
        rdx_30 = &var_b8
        rbx_16 = 8
    else
        var_138 = 0
        int32_t var_130_1 = 0
        sub_1405947f0(&var_138, 0x15)
        int32_t rax_36 = var_130_1 + 0x15
        var_130_1 = rax_36
        
        if (rax_36 s> 0)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138, u"datacollector-binary", 0x2a)
        rdx_30 = &var_138
        rbx_16 = 4
    
    int32_t rbx_18 = rbx_16 | r14
    sub_140597df0(&result[0x10], rdx_30)
    
    if ((rbx_18.b & 8) != 0)
        uint64_t rcx_55 = var_b8
        rbx_18 &= 0xfffffff7
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
    
    if ((rbx_18.b & 4) != 0)
        int64_t rcx_56 = var_138
        rbx_18 &= 0xfffffffb
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
    
    int64_t var_118
    uint64_t var_a8
    int64_t* rdx_34
    int32_t rdi_7
    
    if (arg2[0xc].d s> 1)
        int32_t rdi_8 = arg2[0xc].d
        int64_t rsi_7 = arg2[0xb]
        var_a8 = 0
        int32_t var_a0_1 = rdi_8
        
        if (rdi_8 != 0)
            sub_1405a4c70(&var_a8, rdi_8, 0)
            memcpy(var_a8, rsi_7, rdi_8 * 2)
        else
            int32_t var_9c_1 = 0
        
        rdx_34 = &var_a8
        rdi_7 = 0x20
    else
        var_118 = 0
        int32_t var_110_1 = 0
        sub_1405947f0(&var_118, 0xe)
        int32_t rax_37 = var_110_1 + 0xe
        var_110_1 = rax_37
        
        if (rax_37 s> 0)
            sub_140594770(&var_118)
        
        UnDecorator::getReferenceType(var_118, u"eteventstream", 0x1c)
        rdx_34 = &var_118
        rdi_7 = 0x10
    
    int32_t rdi_9 = rdi_7 | rbx_18
    sub_140597df0(&result[0x12], rdx_34)
    
    if ((rdi_9.b & 0x20) != 0)
        uint64_t rcx_63 = var_a8
        rdi_9 &= 0xffffffdf
        
        if (rcx_63 != 0)
            sub_140a74f90(rcx_63)
    
    if ((rdi_9.b & 0x10) != 0)
        int64_t rcx_64 = var_118
        
        if (rcx_64 != 0)
            sub_140a74f90(rcx_64)

int64_t rcx_65 = var_108

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

__security_check_cookie(rax_1 ^ &var_178)
return result
