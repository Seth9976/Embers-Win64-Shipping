// 函数: sub_1426fe090
// 地址: 0x1426fe090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t* rax_2 = sub_140ac6680(sub_140bddc50(sub_14273bc30(), &var_58, zx.q(*(arg1 + 0x211))))
uint64_t var_a8 = 0
int32_t rbx = rax_2[1].d
int64_t rdi = *rax_2

if (rbx != 0)
    sub_1405a4c70(&var_a8, rbx, 0)
    memcpy(var_a8, rdi, rbx * 2)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_5 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_50 + 8))(var_50, 1)

void var_40
int64_t* rax_9 = sub_140ac6680(sub_140bddc50(sub_1424a60f0(), &var_40, zx.q(*(arg1 + 0x210))))
uint64_t r14 = 0
uint64_t var_b8 = 0
int32_t rbx_2 = rax_9[1].d
int64_t r12 = *rax_9

if (rbx_2 != 0)
    sub_1405a4c70(&var_b8, rbx_2, 0)
    r14 = var_b8
    memcpy(r14, r12, rbx_2 * 2)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t rdi_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_38 + 8))(var_38, zx.q(rdi_1))
    
    r14 = var_b8

uint32_t rcx_12 = zx.d(*(arg1 + 0x211))
int64_t rbx_4
float zmm2_1[0x2]

if (rcx_12 == 0)
    zmm2_1 = *(arg1 + 0x1f8)
    float zmm0_1[0x2] = *(arg1 + 0x200)
    _mm_cvtps_pd(*(arg1 + 0x1fc))
    zmm2_1 = _mm_cvtps_pd(zmm2_1).q
    float var_d8_1[0x2] = _mm_cvtps_pd(zmm0_1).q
    int64_t var_78
    sub_140a2e390(&var_78, u"X = %f, Y = %f, Z = %f", zmm2_1)
    rbx_4 = var_78
else if (rcx_12 == 1)
    int64_t var_88
    sub_140a2e390(&var_88, u"Radius = %f", _mm_cvtps_pd(*(arg1 + 0x1f8)).q)
    rbx_4 = var_88
else if (rcx_12 == 2)
    zmm2_1 = *(arg1 + 0x1f8)
    _mm_cvtps_pd(*(arg1 + 0x200))
    int64_t var_98
    sub_140a2e390(&var_98, u"Width = %f, Height = %f", _mm_cvtps_pd(zmm2_1).q)
    rbx_4 = var_98
else
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    sub_1405947f0(&var_c8, 9)
    
    if (var_c0_1 + 9 s> 0)
        sub_140594770(&var_c8)
    
    rbx_4 = var_c8
    sub_1405a7220(rbx_4, 9, "Invalid.", 9, 0x3f)
int16_t* const r8_9 = &data_142d40450
uint64_t rax_13 = &data_142d40450

if (rbx_2 != 0)
    rax_13 = r14

uint64_t var_d8_2 = rax_13

if (rbx != 0)
    r8_9 = var_a8

int64_t var_68
sub_140a2e390(&var_68, u"Using a %s where %s in channel: %s", r8_9)
sub_140aae2f0(arg2, &var_68)
int64_t rcx_22 = var_68

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

if (r14 != 0)
    sub_140a74f90(r14)

uint64_t rcx_25 = var_a8

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg2
