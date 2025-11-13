// 函数: sub_1427b4220
// 地址: 0x1427b4220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rbp = arg6

if (arg1[0xa] != 0)
    (*(*arg1 + 0x2c0))()
    (*(*arg1 + 0x2b8))(arg1)

if (rbp == 0)
    void* rax_5 = (*(*arg1 + 0x280))(arg1)
    rbp = rax_5 + 0x28
    
    if (rax_5 == 0)
        rbp = nullptr

arg1[0x11] = arg5
void* rax_7 = arg1[9]
arg1[0xa] = arg2
arg1[0xf] = arg3
arg1[0x10] = arg4
int64_t* r15 = *(rax_7 + 0x130)
float var_98[0x2][0x4]
(*(*arg2 + 0x268))(arg2, &var_98)
float var_78[0x4]
float var_b8[0x4] = var_78
float var_d0 = _mm_shuffle_ps(var_78, var_78, 0xaa)[0]
float var_78_1[0x4] = data_142e6da00
_mm_shuffle_ps(var_78, var_78, 0x55)
int64_t zmm6_1
float zmm7_1[0x4]
zmm6_1, zmm7_1 = sub_141f4a580(r15, &var_98, 0, 0, 0)
int64_t* var_f0 = arg1
float temp0_2[0x4] = _mm_unpacklo_ps(zmm7_1, zmm6_1)
int64_t var_d8 = temp0_2.q
int64_t var_e8 = temp0_2.q
void*** rax_10 = sub_140a84c80(0, 0x30, 0)
void*** var_a8 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) = var_f0.o
    *rax_10 = &data_1434b9f20
    rax_10[3] = var_d0.q
    rax_10[5] = sub_140a387b0()
    *rax_10 = &data_1434b9f78

if (rax_10 != 0)
    sub_140599630(&r15[0x2b], 1)
    void var_c8
    (*rax_10)[6](rax_10, &var_c8)
    int64_t r14_1 = sx.q(r15[0x2c].d)
    int32_t rax_13 = (r14_1 + 1).d
    r15[0x2c].d = rax_13
    
    if (rax_13 s> *(r15 + 0x164))
        sub_1405a4f90(&r15[0x2b])
    
    void** rax_16 = (r14_1 << 4) + r15[0x2b]
    *rax_16 = rax_10
    rax_16[1].d = 3

arg1[7] = sub_1427a3790(r15, _vfprintf_p_l(&var_f0, u"Interval", u"UIntervalGizmo"), rbp, arg1)

if (var_e8 != 0)
    int32_t rax_19 = *(var_e8 + 8)
    *(var_e8 + 8) -= 1
    
    if (rax_19 == 1)
        (**var_e8)(var_e8)
        int32_t rax_21 = *(var_e8 + 0xc)
        *(var_e8 + 0xc) -= 1
        
        if (rax_21 == 1)
            (*(*var_e8 + 8))(var_e8, 1)

void*** rax_23 = j_sub_140a82f30(0x18)
void*** rsi_2 = rax_23

if (rax_23 == 0)
    rsi_2 = nullptr
else
    void* rdx_6 = arg1[0xa]
    *rsi_2 = &data_1434b5b18
    rsi_2[1].d = 0xffffffff
    *(rsi_2 + 0xc) = 0
    rsi_2[2] = 0
    sub_140d3a3a0(&rsi_2[1], rdx_6)

void* rbx_3 = arg1[7]
int64_t rbp_1 = sx.q(*(rbx_3 + 0xc8))
int32_t rax_24 = (rbp_1 + 1).d
*(rbx_3 + 0xc8) = rax_24

if (rax_24 s> *(rbx_3 + 0xcc))
    sub_1405a4d70(rbx_3 + 0xc0)

*(*(rbx_3 + 0xc0) + (rbp_1 << 3)) = rsi_2
void*** rax_26 = j_sub_140a82f30(0x18)
void*** rsi_3 = rax_26

if (rax_26 == 0)
    rsi_3 = nullptr
else
    void* rdx_8 = arg1[0xf]
    *rax_26 = &data_1434b6a50
    rax_26[1].d = 0xffffffff
    *(rax_26 + 0xc) = 0
    rax_26[2] = 0
    sub_140d3a3a0(&rax_26[1], rdx_8)

void* rbx_4 = arg1[7]
int64_t rbp_2 = sx.q(*(rbx_4 + 0xc8))
int32_t rax_27 = (rbp_2 + 1).d
*(rbx_4 + 0xc8) = rax_27

if (rax_27 s> *(rbx_4 + 0xcc))
    sub_1405a4d70(rbx_4 + 0xc0)

*(*(rbx_4 + 0xc0) + (rbp_2 << 3)) = rsi_3
void*** rax_29 = j_sub_140a82f30(0x18)
void*** rsi_4 = rax_29

if (rax_29 == 0)
    rsi_4 = nullptr
else
    void* rdx_10 = arg1[0x10]
    *rax_29 = &data_1434b6a50
    rax_29[1].d = 0xffffffff
    *(rax_29 + 0xc) = 0
    rax_29[2] = 0
    sub_140d3a3a0(&rax_29[1], rdx_10)

void* rbx_5 = arg1[7]
int64_t rbp_3 = sx.q(*(rbx_5 + 0xc8))
int32_t rax_30 = (rbp_3 + 1).d
*(rbx_5 + 0xc8) = rax_30

if (rax_30 s> *(rbx_5 + 0xcc))
    sub_1405a4d70(rbx_5 + 0xc0)

*(*(rbx_5 + 0xc0) + (rbp_3 << 3)) = rsi_4
void*** rax_32 = j_sub_140a82f30(0x18)
void*** rsi_5 = rax_32

if (rax_32 == 0)
    rsi_5 = nullptr
else
    void* rdx_12 = arg1[0x11]
    *rax_32 = &data_1434b6a50
    rax_32[1].d = 0xffffffff
    *(rax_32 + 0xc) = 0
    rax_32[2] = 0
    sub_140d3a3a0(&rax_32[1], rdx_12)

void* rbx_6 = arg1[7]
int64_t rbp_4 = sx.q(*(rbx_6 + 0xc8))
int32_t rax_33 = (rbp_4 + 1).d
*(rbx_6 + 0xc8) = rax_33

if (rax_33 s> *(rbx_6 + 0xcc))
    sub_1405a4d70(rbx_6 + 0xc0)

*(*(rbx_6 + 0xc0) + (rbp_4 << 3)) = rsi_5
int64_t rbx_7 = arg1[0xa]
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_f8 = 0
char var_128
var_128.d = 0
*(sub_140d2dfc0(sub_1427c54a0(), arg1, 0, 0, var_128, 0, 0, 0, 0) + 0x48) = rbx_7
arg1[0x12] = sub_1427a3440(r15, 1, 1, arg1)
void* result = sub_1427a3440(r15, 2, 1, arg1)
void* rcx_23 = arg1[9]
arg1[0x13] = result
int64_t r8_3 = *(rcx_23 + 0x220)
int64_t var_120
char var_118

if (r8_3 != 0)
    int64_t rcx_24 = arg1[7]
    void* r9_4 = result + 0x28
    int64_t rdx_15 = arg1[0xf]
    int64_t rax_38 = rcx_24 + 0x28
    
    if (rcx_24 == 0)
        rax_38 = 0
    
    int64_t rcx_25 = rdx_15 + 0x28
    var_118.d = 0x7f7fffff
    
    if (rdx_15 == 0)
        rcx_25 = 0
    
    var_120.d = 0
    var_128.q = rcx_25
    
    if (result == 0)
        r9_4 = nullptr
    
    (*(*arg1 + 0x2c8))(arg1, r15, r8_3, r9_4, var_128, var_120, var_118, rax_38)
    int64_t rsi_6 = sx.q(arg1[0xc].d)
    int64_t rbp_5 = *(arg1[9] + 0x220)
    int32_t rax_40 = (rsi_6 + 1).d
    arg1[0xc].d = rax_40
    
    if (rax_40 s> *(arg1 + 0x64))
        sub_1405a4d70(&arg1[0xb])
    
    result = arg1[0xb]
    *(result + (rsi_6 << 3)) = rbp_5
    rcx_23 = arg1[9]

int64_t r8_4 = *(rcx_23 + 0x228)

if (r8_4 != 0)
    int64_t rax_41 = arg1[7]
    int64_t rcx_28 = arg1[0x10]
    int64_t r10_2 = arg1[0x13]
    int64_t rdx_18 = rax_41 + 0x28
    
    if (rax_41 == 0)
        rdx_18 = 0
    
    int64_t rax_42 = rcx_28 + 0x28
    int64_t r9_5 = r10_2 + 0x28
    var_118.d = 0
    var_120.d = 0xff7fffff
    
    if (rcx_28 == 0)
        rax_42 = 0
    
    var_128.q = rax_42
    
    if (r10_2 == 0)
        r9_5 = 0
    
    (*(*arg1 + 0x2c8))(arg1, r15, r8_4, r9_5, var_128, var_120, var_118, rdx_18)
    int64_t rsi_7 = sx.q(arg1[0xc].d)
    int64_t rbp_6 = *(arg1[9] + 0x228)
    int32_t rax_44 = (rsi_7 + 1).d
    arg1[0xc].d = rax_44
    
    if (rax_44 s> *(arg1 + 0x64))
        sub_1405a4d70(&arg1[0xb])
    
    result = arg1[0xb]
    *(result + (rsi_7 << 3)) = rbp_6
    rcx_23 = arg1[9]

int64_t r8_5 = *(rcx_23 + 0x230)

if (r8_5 != 0)
    int64_t rax_45 = arg1[7]
    int64_t rcx_31 = arg1[0x11]
    int64_t r11_2 = arg1[0x12]
    int64_t r10_3 = rax_45 + 0x28
    
    if (rax_45 == 0)
        r10_3 = 0
    
    int64_t rax_46 = rcx_31 + 0x28
    int64_t r9_6 = r11_2 + 0x28
    var_118.d = 0x7f7fffff
    
    if (rcx_31 == 0)
        rax_46 = 0
    
    var_120.d = 0xff7fffff
    var_128.q = rax_46
    
    if (r11_2 == 0)
        r9_6 = 0
    
    (*(*arg1 + 0x2c8))(arg1, r15, r8_5, r9_6, var_128, var_120, var_118, r10_3)
    int64_t rbx_9 = sx.q(arg1[0xc].d)
    int64_t rsi_8 = *(arg1[9] + 0x230)
    int32_t rax_48 = (rbx_9 + 1).d
    arg1[0xc].d = rax_48
    
    if (rax_48 s> *(arg1 + 0x64))
        sub_1405a4d70(&arg1[0xb])
    
    result = arg1[0xb]
    *(result + (rbx_9 << 3)) = rsi_8

__security_check_cookie(rax_1 ^ &var_148)
return result
