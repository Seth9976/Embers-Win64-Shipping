// 函数: sub_14188ade0
// 地址: 0x14188ade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void var_1f8

if (*sub_140910250(arg1 + 0x130, &var_1f8, arg2) == 0xffffffff)
    goto label_14188b39c

int64_t* rcx_1 = *(arg1 + 0x68)
(*(*rcx_1 + 0x10))(rcx_1, arg2)
int32_t var_238
sub_140910250(arg1 + 0x130, &var_238, arg2)
int64_t rax_4 = sx.q(var_238)
void* const rax_6

if (rax_4.d == 0xffffffff)
    rax_6 = nullptr
else
    rax_6 = *(arg1 + 0x130) + rax_4 * 0x28

void* r13_1 = *(rax_6 + 0x10)
int64_t* r15_2 = *(rax_6 + 0x18) + 0x20
void* var_200 = r13_1
int64_t* rdi_1 = *r15_2
char rsi_1 = not.b(*(rdi_1 + 0x29)) & 1

if (rsi_1 != 0)
    goto label_14188b202

int128_t zmm0_1 = sub_141840270()
int64_t var_190
int64_t* rax_8 = (*(*rdi_1 + 0x10))(rdi_1, &var_190)
int16_t* const r13_2 = &data_142d40450
int32_t rcx_4 = rax_8[1].d
int16_t* rdx_5

if (rcx_4 == 0)
    rdx_5 = &data_142d40450
else
    rdx_5 = *rax_8

int32_t rcx_5

if (rcx_4 == 0)
    rcx_5 = 0
else
    rcx_5 = rcx_4 - 1

int32_t* rax_10 = sub_14185c7c0(arg1 + 0x180, sub_1405969c0(rcx_5, rdx_5), rax_8)
int64_t rcx_7 = var_190

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (*rax_10 != 0)
    if (zmm0_1.q f- *(rax_10 + 8) f< _mm_cvtps_pd(*(arg1 + 0x28)))
        goto label_14188b39c
else
    int64_t r8_3 = *rdi_1
    int32_t var_230_1 = 0
    int64_t var_228
    (*(r8_3 + 0x10))(rdi_1, &var_228, r8_3)
    int32_t var_1e8 = var_230_1
    int64_t var_1e0_1 = var_228
    int32_t var_220
    int32_t var_1d8_1 = var_220
    var_220.q = 0
    var_228 = 0
    int64_t* rcx_9 = *(arg1 + 0x58)
    int32_t var_21c
    int32_t var_1d4_1 = var_21c
    (*(*rcx_9 + 0x10))(rcx_9, &var_1e8)
    int64_t rcx_10 = var_228
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
    void* var_f0_1 = arg1
    void*** var_108_1 = nullptr
    void** const var_f8 = &data_142da2668
    void*** var_148_1 = nullptr
    int64_t (* var_118)(int64_t* arg1, int64_t* arg2, char* arg3) = sub_14187afa0
    void* var_130_1 = arg1
    void** const var_138 = &data_142da2668
    char (* var_158)(int64_t, void* arg2) = sub_14187aea0
    sub_14189ae70(arg1, &var_158, &var_118)
    
    if (var_158 != 0)
        void** const* rcx_12 = &var_138
        
        if (var_148_1 != 0)
            rcx_12 = var_148_1
        
        (*rcx_12)[2](rcx_12)
    
    if (var_118 != 0)
        void** const* rcx_13 = &var_f8
        
        if (var_108_1 != 0)
            rcx_13 = var_108_1
        
        (*rcx_13)[2](rcx_13)
    
    SetErrorMode(uMode)

*(rax_10 + 8) = zmm0_1.q
uint32_t uMode_1 = SetErrorMode(SEM_FAILCRITICALERRORS)
int64_t r8_5 = *rdi_1
int64_t var_180
int16_t** rax_20 = (*(r8_5 + 0x10))(rdi_1, &var_180, r8_5)

if (rax_20[1].d != 0)
    r13_2 = *rax_20

int64_t* rcx_16 = *(arg1 + 0x38)
int64_t* var_240
(*(*rcx_16 + 0x48))(rcx_16, &var_240, r13_2, 0)
int64_t rcx_17 = var_180

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t* rax_22 = var_240

if (rax_22 == 0)
    *rax_10 += 1
else
    if (r15_2 != &var_240)
        int64_t* rcx_18 = *r15_2
        *r15_2 = rax_22
        var_240 = nullptr
        
        if (rcx_18 != 0)
            (**rcx_18)(rcx_18, 1)
    
    rdi_1 = *r15_2
    int32_t var_218_1 = 1
    *rax_10 = 0
    rsi_1 = 1
    int64_t var_210
    (*(*rdi_1 + 0x10))(rdi_1, &var_210)
    int64_t* rcx_20 = *(arg1 + 0x58)
    int32_t var_1d0 = var_218_1
    int64_t var_1c8_1 = var_210
    int32_t var_208
    int32_t var_1c0_1 = var_208
    int32_t var_204
    int32_t var_1bc_1 = var_204
    var_208.q = 0
    var_210 = 0
    (*(*rcx_20 + 0x10))(rcx_20, &var_1d0)
    int64_t rcx_21 = var_210
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    void*** var_88_1 = nullptr
    void** const var_78 = &data_142da2668
    void* var_70_1 = arg1
    int64_t (* var_98)(int64_t* arg1, int64_t* arg2, char* arg3) = sub_14187ad00
    void*** var_c8_1 = nullptr
    void** const var_b8 = &data_142da2668
    void* var_b0_1 = arg1
    int64_t (* var_d8)(int64_t, void* arg2) = sub_14187aeb0
    sub_14189ae70(arg1, &var_d8, &var_98)
    
    if (var_d8 != 0)
        void** const* rcx_23 = &var_b8
        
        if (var_c8_1 != 0)
            rcx_23 = var_c8_1
        
        (*rcx_23)[2](rcx_23)
    
    if (var_98 != 0)
        void** const* rcx_24 = &var_78
        
        if (var_88_1 != 0)
            rcx_24 = var_88_1
        
        (*rcx_24)[2](rcx_24)

SetErrorMode(uMode_1)
int64_t* rcx_26 = var_240

if (rcx_26 != 0)
    (**rcx_26)(rcx_26, 1)

if (rsi_1 == 0)
    goto label_14188b39c

r13_1 = var_200
label_14188b202:
int64_t rax_36
int64_t r8_8
rax_36, r8_8 = (*(*rdi_1 + 0x28))(rdi_1)
int64_t rsi_3 = zx.q(*(r13_1 + 0x18)) + *(r13_1 + 0x10)
int64_t* result

if (rax_36 s< rsi_3)
    int64_t rbx_5 = **(arg1 + 0x68)
    void var_170
    int64_t rax_51 = sub_140a98020(&var_170)
    r8_8.b = 3
    (*(rbx_5 + 0x18))(*(arg1 + 0x68), arg2, r8_8, rax_51)
label_14188b39c:
    result = j_sub_140a82f30(0x18)
    
    if (result != 0)
        *result = 0
        *(result + 8) = *arg2
        int64_t** rcx_44 = *(arg1 + 0x270)
        *(arg1 + 0x270) = result
        *rcx_44 = result
else
    int64_t var_1b8
    sub_140a98020(&var_1b8)
    int64_t rax_37 = _Query_perf_frequency()
    int64_t rbx_3 = *(r13_1 + 0x10)
    var_1b8 = rax_37
    
    if ((*(*rdi_1 + 0x20))(rdi_1) != rbx_3)
        (*(*rdi_1 + 0x178))(rdi_1, rbx_3)
    
    int64_t* rcx_31 = *(arg1 + 0x50)
    char var_248
    int64_t* rax_42 = (*(*rcx_31 + 0x18))(rcx_31, rdi_1, &var_248)
    int64_t var_1b0_1 = _Query_perf_frequency()
    int64_t rax_45 = (*(*rdi_1 + 0x20))(rdi_1)
    int64_t var_1a8_1 = rax_45 - *(r13_1 + 0x10)
    char rcx_35 = var_248
    char rdx_17
    
    if (rcx_35 != 0 || rax_42 == 0 || rax_45 != rsi_3)
        r15_2.b = 0
        
        if (rcx_35 == 0)
            rdx_17 = 0
        else if (rcx_35 == 6)
            rdx_17 = 1
        else
            rdx_17 = 2
            
            if (rcx_35 != 9)
                rdx_17 = 4
    else
        r15_2.b = 1
        rdx_17 = 0
    
    int64_t* rcx_36 = *(arg1 + 0x68)
    result = (*(*rcx_36 + 0x18))(rcx_36, arg2, zx.q(rdx_17), &var_1b8)
    
    if (r15_2.b != 0)
        int32_t var_1a0
        sub_140598750(arg1 + 0x220, &var_1a0)
        int32_t* var_198
        *var_198 = *arg2
        var_198[4] = 0xffffffff
        int32_t rax_47 = sub_140a6b260(var_198, 0x10)
        int32_t rdx_20 = var_1a0
        int32_t var_244_3 = rdx_20
        sub_14093ebb0(arg1 + 0x220, &var_200, rax_47, var_198, rdx_20, nullptr)
        int64_t* rcx_40 = *(arg1 + 0x40)
        int64_t* var_1f0 = rax_42
        result = (*(*rcx_40 + 8))(rcx_40, arg2, &var_1f0)
    else if (rax_42 != 0)
        result = (**rax_42)(rax_42, 1)
    
    if (r15_2.b == 0)
        goto label_14188b39c

__security_check_cookie(rax_1 ^ &var_278)
return result
