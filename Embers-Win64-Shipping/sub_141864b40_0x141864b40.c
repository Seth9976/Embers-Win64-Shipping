// 函数: sub_141864b40
// 地址: 0x141864b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
*arg1 = &data_142fe7cb8
sub_141865070(&arg1[1], arg2)
arg1[0x19] = sub_140b18f30()
arg1[0x1a] = 0
arg1[0x1b].d = 0
void*** rax_3 = sub_1405978f0(0x28, &arg1[0x1a])

if (rax_3 != 0)
    rax_3[1] = arg1
    *rax_3 = &data_142d3fe58
    rax_3[2] = sub_141888a10
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_142d3feb0

arg1[0x1c] = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x11)
*(arg1 + 0x104) = 1
arg1[0x21].d = 1
*(arg1 + 0x10c) = -1
int64_t var_c8
int64_t (** rax_5)(int64_t* arg1) = sub_14188c370(arg1, &var_c8)
int64_t (* var_148)(int64_t* arg1) = *rax_5
int128_t* rcx_3 = rax_5[2]
rax_5[2] = 0
int128_t var_128 = *(rax_5 + 0x20)
int128_t var_118 = *(rax_5 + 0x30)

if (var_148 != 0)
    *rax_5 = nullptr

void*** rax_6 = sub_14181d010(&var_148)
arg1[0x23] = &rax_6[2]
arg1[0x24] = rax_6

if (rax_6 != 0)
    rax_6[1].d += 1
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t rax_11 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*rax_6)[1](rax_6, 1)

arg1[0x25].b = 0

if (var_148 != 0)
    int128_t* rcx_7 = &var_128
    
    if (rcx_3 != 0)
        rcx_7 = rcx_3
    
    (*(*rcx_7 + 0x10))(rcx_7)

if (var_c8 != 0)
    void var_a8
    void* rcx_8 = &var_a8
    void* var_b8
    
    if (var_b8 != 0)
        rcx_8 = var_b8
    
    (*(*rcx_8 + 0x10))(rcx_8)

int64_t (* var_88)(int64_t* arg1)
int64_t (** rax_17)(int64_t* arg1) = sub_14188c370(arg1, &var_88)
int64_t (* var_108)(int64_t* arg1) = *rax_17
int128_t* rcx_11 = rax_17[2]
rax_17[2] = 0
int128_t var_e8 = *(rax_17 + 0x20)
int128_t var_d8 = *(rax_17 + 0x30)

if (var_108 != 0)
    *rax_17 = nullptr

void*** rax_18 = sub_14181d010(&var_108)
arg1[0x26] = &rax_18[2]
arg1[0x27] = rax_18

if (rax_18 != 0)
    rax_18[1].d += 1
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t rsi_1 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*rax_18)[1](rax_18, zx.q(rsi_1))

arg1[0x28].b = 0

if (var_108 != 0)
    int128_t* rcx_15 = &var_e8
    
    if (rcx_11 != 0)
        rcx_15 = rcx_11
    
    (*(*rcx_15 + 0x10))(rcx_15)

if (var_88 != 0)
    void var_68
    void* rcx_16 = &var_68
    void* var_78
    
    if (var_78 != 0)
        rcx_16 = var_78
    
    (*(*rcx_16 + 0x10))(rcx_16)

arg1[0x25].b = 1
arg1[0x29] = arg1[0x23]
void* rax_29 = arg1[0x24]
arg1[0x2a] = rax_29

if (rax_29 != 0)
    *(rax_29 + 8) += 1

arg1[0x28].b = 1
arg1[0x2b] = arg1[0x26]
void* rax_31 = arg1[0x27]
arg1[0x2c] = rax_31

if (rax_31 != 0)
    *(rax_31 + 8) += 1

__builtin_memset(&arg1[0x2d], 0, 0x29)
__builtin_memset(&arg1[0x33], 0, 0x20)
void*** rax_32 = j_sub_140a82f30(8)

if (rax_32 == 0)
    rax_32 = nullptr
else
    *rax_32 = &data_142fe39b0

arg1[0x37] = rax_32
arg1[0x38] = sub_141830f30()
arg1[0x39] = sub_141830ee0()
arg1[0x3a] = sub_1418a1240()
arg1[0x3b] = sub_1418a0e20()
arg1[0x3c] = sub_141830f70()
arg1[0x3d] = sub_141830e40()
void*** rax_39 = sub_1418a0cd0(0)
arg1[0x3e] = rax_39
void*** rax_40 = sub_1418a07c0(arg1[0x3c], arg1[0x3d], rax_39)
arg1[0x3f] = rax_40
int64_t rsi_2 = arg1[0x3e]
int64_t r14 = arg1[0x39]
int64_t r15 = arg1[0x38]
int64_t r12 = arg1[0x19]
void*** rax_41 = j_sub_140a82f30(0x340)
void*** rax_42

if (rax_41 == 0)
    rax_42 = nullptr
else
    int64_t var_1b0_1 = rsi_2
    rax_42 = sub_141863720(rax_41, r12, r15, r14, rax_40)

arg1[0x40] = rax_42
arg1[0x41] = 0
arg1[0x42] = sub_1418a0b40(arg1[0x19])
arg1[0x43] = 0
sub_141820340(&arg1[0x44])
__builtin_memset(&arg1[0x59], 0, 0x40)
int64_t* rcx_21 = arg1[0x3b]
void** const var_168 = &data_142da2668
int64_t var_178 = 0
void*** var_160 = arg1
void** (* var_188)(int64_t* arg1) = j_sub_141869ca0
int64_t r8_4 = *rcx_21
(*(r8_4 + 0x40))(rcx_21, &var_188, r8_4)
__security_check_cookie(rax_1 ^ &var_1d8)
return arg1
