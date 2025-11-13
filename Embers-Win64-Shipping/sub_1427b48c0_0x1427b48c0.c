// 函数: sub_1427b48c0
// 地址: 0x1427b48c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* r15 = arg3

if (arg1[8] != 0)
    (*(*arg1 + 0x2b8))()

void* rax_3 = arg1[0x23]
arg1[8] = arg2
int64_t* r14 = *(rax_3 + 0x130)
float var_78[0x4]
(*(*arg2 + 0x268))(arg2, &var_78)
float var_a8[0x4] = var_78
float var_88[0x4] = data_142e6da00
int128_t var_68
int128_t var_98 = var_68
sub_141f4a580(r14, &var_a8, 0, 0, 0)
float var_58[0x4]
float var_1d8[0x4] = var_58
float var_210 = _mm_shuffle_ps(var_58, var_58, 0xaa)[0]
float temp0_2[0x4] = _mm_unpacklo_ps(var_58, _mm_shuffle_ps(var_58, var_58, 0x55)[0].q)
arg1[0x2d] = temp0_2.q
arg1[0x2e].d = var_210
int64_t var_218 = temp0_2.q
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_228 = 0
char var_258
var_258.d = 0
void* rax_7 = sub_140d2dfc0(sub_1427c5320(), arg1, 0, 0, var_258, 0, 0, 0, 0)
int64_t var_198 = 0
void* const var_1a8 = &data_1427a24d0
*(rax_7 + 0x48) = r14
void** const var_108 = &data_142da2668
void** const var_c8 = &data_142da2668
void* const var_e8 = &data_1427a24b0
void* const var_128 = &data_1427a24d0
void*** var_118 = nullptr
int64_t* var_100 = arg1
void*** var_d8 = nullptr
int64_t* var_c0 = arg1
sub_14074cce0(&var_108, &var_198)
void* const var_168 = var_e8
int64_t var_158 = 0

if (var_e8 != 0)
    void** const* rcx_5 = &var_c8
    
    if (var_d8 != 0)
        rcx_5 = var_d8
    
    (**rcx_5)(rcx_5, &var_158)

arg1[0x2c] = sub_1427a3540(rax_7 + 0x28, &var_1a8, arg1)
void*** rax_12 = sub_140a84c80(0, 0x20, 0)
void*** var_1c8 = rax_12

if (rax_12 != 0)
    rax_12[1] = arg1
    *rax_12 = &data_1434b9fd0
    rax_12[3] = sub_140a387b0()
    *rax_12 = &data_1434ba028

if (rax_12 != 0)
    sub_140599630(&r14[0x2b], 1)
    void var_208
    (*rax_12)[6](rax_12, &var_208)
    int64_t r13_1 = sx.q(r14[0x2c].d)
    int32_t rax_15 = (r13_1 + 1).d
    r14[0x2c].d = rax_15
    
    if (rax_15 s> *(r14 + 0x164))
        sub_1405a4f90(&r14[0x2b])
    
    void** rax_18 = (r13_1 << 4) + r14[0x2b]
    *rax_18 = rax_12
    rax_18[1].d = 2

void* rdi_1 = arg1[0x2c]
void*** rax_19 = sub_140a84c80(0, 0x20, 0)
void*** var_1b8 = rax_19

if (rax_19 != 0)
    rax_19[1] = arg1
    *rax_19 = &data_1434b9fd0
    rax_19[3] = sub_140a387b0()
    *rax_19 = &data_1434ba028

if (rax_19 != 0)
    sub_140599630(rdi_1 + 0x30, 1)
    void var_200
    (*rax_19)[6](rax_19, &var_200)
    int64_t r13_2 = sx.q(*(rdi_1 + 0x38))
    int32_t rax_22 = (r13_2 + 1).d
    *(rdi_1 + 0x38) = rax_22
    
    if (rax_22 s> *(rdi_1 + 0x3c))
        sub_1405a4f90(rdi_1 + 0x30)
    
    void** rax_25 = (r13_2 << 4) + *(rdi_1 + 0x30)
    *rax_25 = rax_19
    rax_25[1].d = 2

if (r15 == 0)
    void* rax_27 = (*(*arg1 + 0x280))(arg1)
    
    if (rax_27 == 0)
        r15 = nullptr
    else
        r15 = rax_27 + 0x28

void var_1f8
arg1[0x2b] = sub_1427a3790(r14, _vfprintf_p_l(&var_1f8, Transform", UTransformGizmo"), r15, arg1)
int64_t* var_1f0

if (var_1f0 != 0)
    var_1f0[1].d -= 1
    
    if (var_1f0[1].d == 1)
        (**var_1f0)(var_1f0)
        int32_t rax_32 = *(var_1f0 + 0xc)
        *(var_1f0 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*var_1f0 + 8))(var_1f0, 1)

void*** rax_34 = j_sub_140a82f30(0x18)
void*** rdi_2 = rax_34

if (rax_34 == 0)
    rdi_2 = nullptr
else
    *rdi_2 = &data_1434b5b18
    rdi_2[1].d = 0xffffffff
    *(rdi_2 + 0xc) = 0
    rdi_2[2] = 0
    sub_140d3a3a0(&rdi_2[1], arg2)

void* rbx_4 = arg1[0x2b]
int64_t r15_1 = sx.q(*(rbx_4 + 0xc8))
int32_t rax_35 = (r15_1 + 1).d
*(rbx_4 + 0xc8) = rax_35

if (rax_35 s> *(rbx_4 + 0xcc))
    sub_1405a4d70(rbx_4 + 0xc0)

*(*(rbx_4 + 0xc0) + (r15_1 << 3)) = rdi_2
void* r15_2 = &arg1[7]
void* rbx_5 = arg1[0x2b]

if (arg1 == 0)
    r15_2 = nullptr

int64_t rdi_3 = sx.q(*(rbx_5 + 0xd8))
int32_t rax_37 = (rdi_3 + 1).d
*(rbx_5 + 0xd8) = rax_37

if (rax_37 s> *(rbx_5 + 0xdc))
    sub_1405a4d70(rbx_5 + 0xd0)

*(*(rbx_5 + 0xd0) + (rdi_3 << 3)) = r15_2
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_258.d = 0
arg1[0x24] = sub_140d2dfc0(sub_1427bb1e0(), arg1, 0, 0, var_258, 0, 0, 0, 0)
arg1[0x25] = sub_1427a3440(r14, 0, 1, arg1)
arg1[0x26] = sub_1427a3440(r14, 1, 1, arg1)
arg1[0x27] = sub_1427a3440(r14, 2, 1, arg1)
void* rax_44 = arg1[0x23]
int64_t rdx_17 = *(rax_44 + 0x220)

if (rdx_17 != 0)
    int64_t rax_45 = arg1[0x2b]
    int64_t rcx_26 = arg1[0x2c]
    int64_t r10_1 = arg1[0x25]
    int64_t r8_6 = rax_45 + 0x28
    
    if (rax_45 == 0)
        r8_6 = 0
    
    int64_t rax_46 = rcx_26 + 0x28
    int64_t r9_5 = r10_1 + 0x28
    
    if (rcx_26 == 0)
        rax_46 = 0
    
    var_258.q = rax_46
    
    if (r10_1 == 0)
        r9_5 = 0
    
    (*(*arg1 + 0x2d8))(arg1, rdx_17, r14, r9_5, var_258, r8_6)
    int64_t rdi_4 = sx.q(arg1[0x1d].d)
    void* r15_3 = arg1[0x23]
    int32_t rax_47 = (rdi_4 + 1).d
    arg1[0x1d].d = rax_47
    
    if (rax_47 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_4 << 3)) = *(r15_3 + 0x220)
    rax_44 = arg1[0x23]

int64_t rdx_19 = *(rax_44 + 0x228)

if (rdx_19 != 0)
    int64_t rax_49 = arg1[0x2b]
    int64_t rcx_30 = arg1[0x2c]
    int64_t r10_2 = arg1[0x26]
    int64_t r8_8 = rax_49 + 0x28
    
    if (rax_49 == 0)
        r8_8 = 0
    
    int64_t rax_50 = rcx_30 + 0x28
    int64_t r9_6 = r10_2 + 0x28
    
    if (rcx_30 == 0)
        rax_50 = 0
    
    var_258.q = rax_50
    
    if (r10_2 == 0)
        r9_6 = 0
    
    (*(*arg1 + 0x2d8))(arg1, rdx_19, r14, r9_6, var_258, r8_8)
    int64_t rdi_5 = sx.q(arg1[0x1d].d)
    void* r15_4 = arg1[0x23]
    int32_t rax_51 = (rdi_5 + 1).d
    arg1[0x1d].d = rax_51
    
    if (rax_51 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_5 << 3)) = *(r15_4 + 0x228)
    rax_44 = arg1[0x23]

int64_t rdx_21 = *(rax_44 + 0x230)

if (rdx_21 != 0)
    int64_t rax_53 = arg1[0x2b]
    int64_t rcx_34 = arg1[0x2c]
    int64_t r10_3 = arg1[0x27]
    int64_t r8_10 = rax_53 + 0x28
    
    if (rax_53 == 0)
        r8_10 = 0
    
    int64_t rax_54 = rcx_34 + 0x28
    int64_t r9_7 = r10_3 + 0x28
    
    if (rcx_34 == 0)
        rax_54 = 0
    
    var_258.q = rax_54
    
    if (r10_3 == 0)
        r9_7 = 0
    
    (*(*arg1 + 0x2d8))(arg1, rdx_21, r14, r9_7, var_258, r8_10)
    int64_t rdi_6 = sx.q(arg1[0x1d].d)
    void* r15_5 = arg1[0x23]
    int32_t rax_55 = (rdi_6 + 1).d
    arg1[0x1d].d = rax_55
    
    if (rax_55 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_6 << 3)) = *(r15_5 + 0x230)
    rax_44 = arg1[0x23]

int64_t rdx_23 = *(rax_44 + 0x238)

if (rdx_23 != 0)
    int64_t rax_57 = arg1[0x2b]
    int64_t rcx_38 = arg1[0x2c]
    int64_t r10_4 = arg1[0x25]
    int64_t r8_12 = rax_57 + 0x28
    
    if (rax_57 == 0)
        r8_12 = 0
    
    int64_t rax_58 = rcx_38 + 0x28
    int64_t r9_8 = r10_4 + 0x28
    
    if (rcx_38 == 0)
        rax_58 = 0
    
    var_258.q = rax_58
    
    if (r10_4 == 0)
        r9_8 = 0
    
    (*(*arg1 + 0x2e0))(arg1, rdx_23, r14, r9_8, var_258, r8_12)
    int64_t rdi_7 = sx.q(arg1[0x1d].d)
    void* r15_6 = arg1[0x23]
    int32_t rax_59 = (rdi_7 + 1).d
    arg1[0x1d].d = rax_59
    
    if (rax_59 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_7 << 3)) = *(r15_6 + 0x238)
    rax_44 = arg1[0x23]

int64_t rdx_25 = *(rax_44 + 0x240)

if (rdx_25 != 0)
    int64_t rax_61 = arg1[0x2b]
    int64_t rcx_42 = arg1[0x2c]
    int64_t r10_5 = arg1[0x26]
    int64_t r8_14 = rax_61 + 0x28
    
    if (rax_61 == 0)
        r8_14 = 0
    
    int64_t rax_62 = rcx_42 + 0x28
    int64_t r9_9 = r10_5 + 0x28
    
    if (rcx_42 == 0)
        rax_62 = 0
    
    var_258.q = rax_62
    
    if (r10_5 == 0)
        r9_9 = 0
    
    (*(*arg1 + 0x2e0))(arg1, rdx_25, r14, r9_9, var_258, r8_14)
    int64_t rdi_8 = sx.q(arg1[0x1d].d)
    void* r15_7 = arg1[0x23]
    int32_t rax_63 = (rdi_8 + 1).d
    arg1[0x1d].d = rax_63
    
    if (rax_63 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_8 << 3)) = *(r15_7 + 0x240)
    rax_44 = arg1[0x23]

int64_t rdx_27 = *(rax_44 + 0x248)

if (rdx_27 != 0)
    int64_t rax_65 = arg1[0x2b]
    int64_t rcx_46 = arg1[0x2c]
    int64_t r10_6 = arg1[0x27]
    int64_t r8_16 = rax_65 + 0x28
    
    if (rax_65 == 0)
        r8_16 = 0
    
    int64_t rax_66 = rcx_46 + 0x28
    int64_t r9_10 = r10_6 + 0x28
    
    if (rcx_46 == 0)
        rax_66 = 0
    
    var_258.q = rax_66
    
    if (r10_6 == 0)
        r9_10 = 0
    
    (*(*arg1 + 0x2e0))(arg1, rdx_27, r14, r9_10, var_258, r8_16)
    int64_t rdi_9 = sx.q(arg1[0x1d].d)
    void* r15_8 = arg1[0x23]
    int32_t rax_67 = (rdi_9 + 1).d
    arg1[0x1d].d = rax_67
    
    if (rax_67 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_9 << 3)) = *(r15_8 + 0x248)
    rax_44 = arg1[0x23]

int64_t rdx_29 = *(rax_44 + 0x250)

if (rdx_29 != 0)
    int64_t rax_69 = arg1[0x2b]
    int64_t rcx_50 = arg1[0x2c]
    int64_t r10_7 = arg1[0x25]
    int64_t r8_18 = rax_69 + 0x28
    
    if (rax_69 == 0)
        r8_18 = 0
    
    int64_t rax_70 = rcx_50 + 0x28
    int64_t r9_11 = r10_7 + 0x28
    
    if (rcx_50 == 0)
        rax_70 = 0
    
    var_258.q = rax_70
    
    if (r10_7 == 0)
        r9_11 = 0
    
    (*(*arg1 + 0x2e8))(arg1, rdx_29, r14, r9_11, var_258, r8_18)
    int64_t rdi_10 = sx.q(arg1[0x1d].d)
    void* r15_9 = arg1[0x23]
    int32_t rax_71 = (rdi_10 + 1).d
    arg1[0x1d].d = rax_71
    
    if (rax_71 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_10 << 3)) = *(r15_9 + 0x250)
    rax_44 = arg1[0x23]

int64_t rdx_31 = *(rax_44 + 0x258)

if (rdx_31 != 0)
    int64_t rax_73 = arg1[0x2b]
    int64_t rcx_54 = arg1[0x2c]
    int64_t r10_8 = arg1[0x26]
    int64_t r8_20 = rax_73 + 0x28
    
    if (rax_73 == 0)
        r8_20 = 0
    
    int64_t rax_74 = rcx_54 + 0x28
    int64_t r9_12 = r10_8 + 0x28
    
    if (rcx_54 == 0)
        rax_74 = 0
    
    var_258.q = rax_74
    
    if (r10_8 == 0)
        r9_12 = 0
    
    (*(*arg1 + 0x2e8))(arg1, rdx_31, r14, r9_12, var_258, r8_20)
    int64_t rdi_11 = sx.q(arg1[0x1d].d)
    void* r15_10 = arg1[0x23]
    int32_t rax_75 = (rdi_11 + 1).d
    arg1[0x1d].d = rax_75
    
    if (rax_75 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_11 << 3)) = *(r15_10 + 0x258)
    rax_44 = arg1[0x23]

int64_t rdx_33 = *(rax_44 + 0x260)

if (rdx_33 != 0)
    int64_t rax_77 = arg1[0x2b]
    int64_t rcx_58 = arg1[0x2c]
    int64_t r10_9 = arg1[0x27]
    int64_t r8_22 = rax_77 + 0x28
    
    if (rax_77 == 0)
        r8_22 = 0
    
    int64_t rax_78 = rcx_58 + 0x28
    int64_t r9_13 = r10_9 + 0x28
    
    if (rcx_58 == 0)
        rax_78 = 0
    
    var_258.q = rax_78
    
    if (r10_9 == 0)
        r9_13 = 0
    
    (*(*arg1 + 0x2e8))(arg1, rdx_33, r14, r9_13, var_258, r8_22)
    int64_t rdi_12 = sx.q(arg1[0x1d].d)
    void* r15_11 = arg1[0x23]
    int32_t rax_79 = (rdi_12 + 1).d
    arg1[0x1d].d = rax_79
    
    if (rax_79 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_12 << 3)) = *(r15_11 + 0x260)

arg1[0x28] = sub_1427a3440(r14, 0, 0, arg1)
arg1[0x29] = sub_1427a3440(r14, 1, 0, arg1)
arg1[0x2a] = sub_1427a3440(r14, 2, 0, arg1)
void* result = arg1[0x23]
int64_t rdx_35 = *(result + 0x268)
char var_248_1

if (rdx_35 != 0)
    int64_t rax_84 = arg1[0x24]
    int64_t r8_24 = arg1[0x2b]
    int64_t r10_10 = arg1[0x2c]
    int64_t r9_17 = rax_84 + 0x28
    
    if (rax_84 == 0)
        r9_17 = 0
    
    int64_t rcx_65 = r8_24 + 0x28
    int64_t rax_85 = r10_10 + 0x28
    
    if (r8_24 == 0)
        rcx_65 = 0
    
    var_248_1.q = rcx_65
    
    if (r10_10 == 0)
        rax_85 = 0
    
    var_258.q = r9_17
    (*(*arg1 + 0x300))(arg1, rdx_35, r14, r9_17, var_258, rax_85, var_248_1)
    int64_t rdi_13 = sx.q(arg1[0x1d].d)
    void* r15_12 = arg1[0x23]
    int32_t rax_86 = (rdi_13 + 1).d
    arg1[0x1d].d = rax_86
    
    if (rax_86 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_13 << 3)) = *(r15_12 + 0x268)
    result = arg1[0x23]

int64_t rdx_37 = *(result + 0x270)

if (rdx_37 != 0)
    int64_t rax_88 = arg1[0x2b]
    int64_t rcx_69 = arg1[0x2c]
    int64_t r9_18 = arg1[0x28]
    int64_t r11_11 = arg1[0x25]
    int64_t r10_11 = rax_88 + 0x28
    
    if (rax_88 == 0)
        r10_11 = 0
    
    int64_t r8_26 = rcx_69 + 0x28
    var_248_1.q = r10_11
    int64_t rax_89 = r9_18 + 0x28
    
    if (rcx_69 == 0)
        r8_26 = 0
    
    int64_t r9_19 = r11_11 + 0x28
    
    if (r9_18 == 0)
        rax_89 = 0
    
    var_258.q = rax_89
    
    if (r11_11 == 0)
        r9_19 = 0
    
    (*(*arg1 + 0x2f0))(arg1, rdx_37, r14, r9_19, var_258, r8_26, var_248_1)
    int64_t rdi_14 = sx.q(arg1[0x1d].d)
    void* r15_13 = arg1[0x23]
    int32_t rax_90 = (rdi_14 + 1).d
    arg1[0x1d].d = rax_90
    
    if (rax_90 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_14 << 3)) = *(r15_13 + 0x270)
    int64_t rdi_15 = sx.q(arg1[0x1f].d)
    void* r15_14 = arg1[0x23]
    int32_t rax_92 = (rdi_15 + 1).d
    arg1[0x1f].d = rax_92
    
    if (rax_92 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    *(arg1[0x1e] + (rdi_15 << 3)) = *(r15_14 + 0x270)
    result = arg1[0x23]

int64_t rdx_40 = *(result + 0x278)

if (rdx_40 != 0)
    int64_t rax_94 = arg1[0x2b]
    int64_t rcx_75 = arg1[0x2c]
    int64_t r9_20 = arg1[0x29]
    int64_t r11_12 = arg1[0x26]
    int64_t r10_12 = rax_94 + 0x28
    
    if (rax_94 == 0)
        r10_12 = 0
    
    int64_t r8_28 = rcx_75 + 0x28
    var_248_1.q = r10_12
    int64_t rax_95 = r9_20 + 0x28
    
    if (rcx_75 == 0)
        r8_28 = 0
    
    int64_t r9_21 = r11_12 + 0x28
    
    if (r9_20 == 0)
        rax_95 = 0
    
    var_258.q = rax_95
    
    if (r11_12 == 0)
        r9_21 = 0
    
    (*(*arg1 + 0x2f0))(arg1, rdx_40, r14, r9_21, var_258, r8_28, var_248_1)
    int64_t rdi_16 = sx.q(arg1[0x1d].d)
    void* r15_15 = arg1[0x23]
    int32_t rax_96 = (rdi_16 + 1).d
    arg1[0x1d].d = rax_96
    
    if (rax_96 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_16 << 3)) = *(r15_15 + 0x278)
    int64_t rdi_17 = sx.q(arg1[0x1f].d)
    void* r15_16 = arg1[0x23]
    int32_t rax_98 = (rdi_17 + 1).d
    arg1[0x1f].d = rax_98
    
    if (rax_98 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    *(arg1[0x1e] + (rdi_17 << 3)) = *(r15_16 + 0x278)
    result = arg1[0x23]

int64_t rdx_43 = *(result + 0x280)

if (rdx_43 != 0)
    int64_t rax_100 = arg1[0x2b]
    int64_t rcx_81 = arg1[0x2c]
    int64_t r9_22 = arg1[0x2a]
    int64_t r11_13 = arg1[0x27]
    int64_t r10_13 = rax_100 + 0x28
    
    if (rax_100 == 0)
        r10_13 = 0
    
    int64_t r8_30 = rcx_81 + 0x28
    var_248_1.q = r10_13
    int64_t rax_101 = r9_22 + 0x28
    
    if (rcx_81 == 0)
        r8_30 = 0
    
    int64_t r9_23 = r11_13 + 0x28
    
    if (r9_22 == 0)
        rax_101 = 0
    
    var_258.q = rax_101
    
    if (r11_13 == 0)
        r9_23 = 0
    
    (*(*arg1 + 0x2f0))(arg1, rdx_43, r14, r9_23, var_258, r8_30, var_248_1)
    int64_t rdi_18 = sx.q(arg1[0x1d].d)
    void* r15_17 = arg1[0x23]
    int32_t rax_102 = (rdi_18 + 1).d
    arg1[0x1d].d = rax_102
    
    if (rax_102 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_18 << 3)) = *(r15_17 + 0x280)
    int64_t rdi_19 = sx.q(arg1[0x1f].d)
    void* r15_18 = arg1[0x23]
    int32_t rax_104 = (rdi_19 + 1).d
    arg1[0x1f].d = rax_104
    
    if (rax_104 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    *(arg1[0x1e] + (rdi_19 << 3)) = *(r15_18 + 0x280)
    result = arg1[0x23]

int64_t rdx_46 = *(result + 0x288)

if (rdx_46 != 0)
    int64_t rax_106 = arg1[0x2b]
    int64_t rcx_87 = arg1[0x2c]
    int64_t r9_24 = arg1[0x28]
    int64_t r11_14 = arg1[0x25]
    int64_t r10_14 = rax_106 + 0x28
    
    if (rax_106 == 0)
        r10_14 = 0
    
    int64_t r8_32 = rcx_87 + 0x28
    var_248_1.q = r10_14
    int64_t rax_107 = r9_24 + 0x28
    
    if (rcx_87 == 0)
        r8_32 = 0
    
    int64_t r9_25 = r11_14 + 0x28
    
    if (r9_24 == 0)
        rax_107 = 0
    
    var_258.q = rax_107
    
    if (r11_14 == 0)
        r9_25 = 0
    
    (*(*arg1 + 0x2f8))(arg1, rdx_46, r14, r9_25, var_258, r8_32, var_248_1)
    int64_t rdi_20 = sx.q(arg1[0x1d].d)
    void* r15_19 = arg1[0x23]
    int32_t rax_108 = (rdi_20 + 1).d
    arg1[0x1d].d = rax_108
    
    if (rax_108 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_20 << 3)) = *(r15_19 + 0x288)
    int64_t rdi_21 = sx.q(arg1[0x1f].d)
    void* r15_20 = arg1[0x23]
    int32_t rax_110 = (rdi_21 + 1).d
    arg1[0x1f].d = rax_110
    
    if (rax_110 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    *(arg1[0x1e] + (rdi_21 << 3)) = *(r15_20 + 0x288)
    result = arg1[0x23]

int64_t rdx_49 = *(result + 0x290)

if (rdx_49 != 0)
    int64_t rax_112 = arg1[0x2b]
    int64_t rcx_93 = arg1[0x2c]
    int64_t r9_26 = arg1[0x29]
    int64_t r11_15 = arg1[0x26]
    int64_t r10_15 = rax_112 + 0x28
    
    if (rax_112 == 0)
        r10_15 = 0
    
    int64_t r8_34 = rcx_93 + 0x28
    var_248_1.q = r10_15
    int64_t rax_113 = r9_26 + 0x28
    
    if (rcx_93 == 0)
        r8_34 = 0
    
    int64_t r9_27 = r11_15 + 0x28
    
    if (r9_26 == 0)
        rax_113 = 0
    
    var_258.q = rax_113
    
    if (r11_15 == 0)
        r9_27 = 0
    
    *((*(*arg1 + 0x2f8))(arg1, rdx_49, r14, r9_27, var_258, r8_34, var_248_1) + 0x89) = 1
    int64_t rdi_22 = sx.q(arg1[0x1d].d)
    void* r15_21 = arg1[0x23]
    int32_t rax_115 = (rdi_22 + 1).d
    arg1[0x1d].d = rax_115
    
    if (rax_115 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_22 << 3)) = *(r15_21 + 0x290)
    int64_t rdi_23 = sx.q(arg1[0x1f].d)
    void* r15_22 = arg1[0x23]
    int32_t rax_117 = (rdi_23 + 1).d
    arg1[0x1f].d = rax_117
    
    if (rax_117 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    *(arg1[0x1e] + (rdi_23 << 3)) = *(r15_22 + 0x290)
    result = arg1[0x23]

int64_t rdx_52 = *(result + 0x298)

if (rdx_52 != 0)
    int64_t rax_119 = arg1[0x2b]
    int64_t rcx_99 = arg1[0x2c]
    int64_t r9_28 = arg1[0x2a]
    int64_t rbx_11 = arg1[0x27]
    int64_t r11_16 = rax_119 + 0x28
    
    if (rax_119 == 0)
        r11_16 = 0
    
    int64_t r10_16 = rcx_99 + 0x28
    var_248_1.q = r11_16
    int64_t rax_120 = r9_28 + 0x28
    
    if (rcx_99 == 0)
        r10_16 = 0
    
    int64_t r9_29 = rbx_11 + 0x28
    
    if (r9_28 == 0)
        rax_120 = 0
    
    var_258.q = rax_120
    
    if (rbx_11 == 0)
        r9_29 = 0
    
    (*(*arg1 + 0x2f8))(arg1, rdx_52, r14, r9_29, var_258, r10_16, var_248_1)
    int64_t rdi_25 = sx.q(arg1[0x1d].d)
    void* r14_1 = arg1[0x23]
    int32_t rax_121 = (rdi_25 + 1).d
    arg1[0x1d].d = rax_121
    
    if (rax_121 s> *(arg1 + 0xec))
        sub_1405a4d70(&arg1[0x1c])
    
    *(arg1[0x1c] + (rdi_25 << 3)) = *(r14_1 + 0x298)
    int64_t rbx_12 = sx.q(arg1[0x1f].d)
    void* rdi_26 = arg1[0x23]
    int32_t rax_123 = (rbx_12 + 1).d
    arg1[0x1f].d = rax_123
    
    if (rax_123 s> *(arg1 + 0xfc))
        sub_1405a4d70(&arg1[0x1e])
    
    result = *(rdi_26 + 0x298)
    *(arg1[0x1e] + (rbx_12 << 3)) = result

if (var_e8 != 0)
    void** const* rcx_105 = &var_c8
    
    if (var_d8 != 0)
        rcx_105 = var_d8
    
    result = (*rcx_105)[2](rcx_105)

if (var_128 != 0)
    void** const* rcx_106 = &var_108
    
    if (var_118 != 0)
        rcx_106 = var_118
    
    result = (*rcx_106)[2](rcx_106)

__security_check_cookie(rax_1 ^ &var_278)
return result
