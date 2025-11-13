// 函数: sub_141143c50
// 地址: 0x141143c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg2 + 0x1b0)
void* arg_20 = r15
sub_1410809a0(arg1, arg2, r15, *(arg4 + 0x10))
bool cond:0 = *(arg1 + 0x13c) u> 0
void* arg_30
void* r12 = arg_30
int512_t zmm6
zmm6.o = 0x3f800000
void* var_58 = r15

if (cond:0 || *(arg1 + 0x142) u> 0)
    int64_t r12_1 = *(r12 + 0xb0)
    
    if (r12_1 == 0)
        r12_1 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_1 = data_14396ee58
    uint32_t arg_10
    
    if (*(arg1 + 0x11a) u> 0)
        int64_t rcx_1 = *(arg2 + 0x30) + 7
        arg_10 = zx.d(*(arg1 + 0x118))
        void*** rcx_2 = rcx_1 & 0xfffffffffffffff8
        void* rax_3 = &rcx_2[5]
        
        if (rax_3 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_2[5]
        
        *(arg2 + 0x30) = rax_3
        int64_t* rax_4 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_4 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142da77b8
        rcx_2[3].d = arg_10
        rcx_2[2] = r15
        rcx_2[4] = r12_1
    
    if (*(arg1 + 0x12a) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0x128))
        
        if ((*(*r13_1 + 8))(r13_1) == 0)
            void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_9 = &rcx_9[5]
            
            if (rax_9 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_9 = &rcx_9[5]
            
            *(arg2 + 0x30) = rax_9
            void**** rax_10 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_10 = rcx_9
            *(arg2 + 8) = &rcx_9[1]
            rcx_9[1] = 0
            *rcx_9 = &data_142da77c8
            rcx_9[2] = r15
            rcx_9[3].d = r12_2
            rcx_9[4] = r13_1
    
    int64_t r12_3 = *(r12 + 0xb8)
    
    if (r12_3 == 0)
        r12_3 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_2 = data_14396ee58
    
    if (*(arg1 + 0x11e) u> 0)
        int64_t rcx_14 = *(arg2 + 0x30) + 7
        arg_10 = zx.d(*(arg1 + 0x11c))
        void*** rcx_15 = rcx_14 & 0xfffffffffffffff8
        void* rax_14 = &rcx_15[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_15[5]
        
        *(arg2 + 0x30) = rax_14
        int64_t* rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_15
        *(arg2 + 8) = &rcx_15[1]
        rcx_15[1] = 0
        *rcx_15 = &data_142da77b8
        rcx_15[3].d = arg_10
        rcx_15[2] = r15
        rcx_15[4] = r12_3
    
    if (*(arg1 + 0x12e) u> 0)
        uint32_t r12_4 = zx.d(*(arg1 + 0x12c))
        
        if ((*(*r13_2 + 8))(r13_2) == 0)
            void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_20 = &rcx_22[5]
            
            if (rax_20 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_20 = &rcx_22[5]
            
            *(arg2 + 0x30) = rax_20
            void**** rax_21 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_21 = rcx_22
            *(arg2 + 8) = &rcx_22[1]
            rcx_22[1] = 0
            *rcx_22 = &data_142da77c8
            rcx_22[2] = r15
            rcx_22[3].d = r12_4
            rcx_22[4] = r13_2
    
    int64_t r12_5 = *(r12 + 0xc0)
    
    if (r12_5 == 0)
        r12_5 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_3 = data_14396ee58
    
    if (*(arg1 + 0x122) u> 0)
        int64_t rcx_27 = *(arg2 + 0x30) + 7
        arg_10 = zx.d(*(arg1 + 0x120))
        void*** rcx_28 = rcx_27 & 0xfffffffffffffff8
        void* rax_25 = &rcx_28[5]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_28[5]
        
        *(arg2 + 0x30) = rax_25
        void**** rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        *rcx_28 = &data_142da77b8
        rcx_28[3].d = arg_10
        rcx_28[2] = r15
        rcx_28[4] = r12_5
    
    if (*(arg1 + 0x132) u> 0)
        uint32_t r12_6 = zx.d(*(arg1 + 0x130))
        
        if ((*(*r13_3 + 8))(r13_3) == 0)
            void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_31 = &rcx_35[5]
            
            if (rax_31 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_31 = &rcx_35[5]
            
            *(arg2 + 0x30) = rax_31
            void**** rax_32 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_32 = rcx_35
            *(arg2 + 8) = &rcx_35[1]
            rcx_35[1] = 0
            *rcx_35 = &data_142da77c8
            rcx_35[2] = r15
            rcx_35[3].d = r12_6
            rcx_35[4] = r13_3
    
    int64_t r12_7 = *(r12 + 0xc8)
    
    if (r12_7 == 0)
        r12_7 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_4 = data_14396ee58
    
    if (*(arg1 + 0x126) u> 0)
        int64_t rcx_40 = *(arg2 + 0x30) + 7
        arg_10 = zx.d(*(arg1 + 0x124))
        void*** rcx_41 = rcx_40 & 0xfffffffffffffff8
        void* rax_36 = &rcx_41[5]
        
        if (rax_36 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_36 = &rcx_41[5]
        
        *(arg2 + 0x30) = rax_36
        void**** rax_37 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_37 = rcx_41
        *(arg2 + 8) = &rcx_41[1]
        rcx_41[1] = 0
        *rcx_41 = &data_142da77b8
        rcx_41[3].d = arg_10
        rcx_41[2] = r15
        rcx_41[4] = r12_7
    
    if (*(arg1 + 0x136) u> 0)
        uint32_t r12_8 = zx.d(*(arg1 + 0x134))
        
        if ((*(*r13_4 + 8))(r13_4) == 0)
            void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_42 = &rcx_48[5]
            
            if (rax_42 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_42 = &rcx_48[5]
            
            *(arg2 + 0x30) = rax_42
            void** rax_43 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_43 = rcx_48
            *(arg2 + 8) = &rcx_48[1]
            rcx_48[1] = 0
            *rcx_48 = &data_142da77c8
            rcx_48[2] = r15
            rcx_48[3].d = r12_8
            rcx_48[4] = r13_4
    
    sub_14077c9b0(arg2, &var_58, arg1 + 0x138, r12 + 0x30, 4, 0)
    sub_14077c9b0(arg2, &var_58, arg1 + 0x13e, r12 + 0x70, 4, 0)
    arg_10 = sub_140741e30(arg2, &var_58, arg1 + 0x144, r12 + 0xd0, 0) f/ *(r12 + 0xd0)
    sub_140741e30(arg2, &var_58, arg1 + 0x14a, &arg_10, 0)
    sub_140741e30(arg2, &var_58, arg1 + 0x150, r12 + 0xd4, 0)
    r12 = arg_30

void** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* r13_5 = *(arg5 + 0xc0)
void* rcx_57 = &rbx_2[1]
void* rax_46 = *(r13_5 + 0x18)
arg_30 = rax_46

if (rcx_57 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_46 = arg_30
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_57 = &rbx_2[1]

*(arg2 + 0x30) = rcx_57
*rbx_2 = rax_46
void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_47 = &rcx_61[6]

if (rax_47 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_47 = &rcx_61[6]

*(arg2 + 0x30) = rax_47
void**** rax_48 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_48 = rcx_61
*(arg2 + 8) = &rcx_61[1]
rcx_61[1] = 0
rcx_61[5] = 0
*rcx_61 = &data_142da7798
rcx_61[2].d = 1
rcx_61[3] = rbx_2
rcx_61[4] = 1
sub_141083370(arg1 + 0x156, arg2, &arg_20, *(r13_5 + 0x10), *(r13_5 + 0x18))
int32_t arg_40
int64_t rax_51 = sx.q(arg_40)
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(data_1439b5bfc))
float zmm1 = *(r12 + rax_51 * 0x10 + 0x3c)
float arg_8 = (zmm1 + zmm1) f/ zmm0_2.d
float zmm6_2 = sub_14077c5f0(arg2, &arg_20, arg1 + 0x15e, &arg6[7], 0)
    f/ _mm_cvtepi32_ps(zx.o(data_1439b5bfc)).d
var_58.d = zmm6_2
var_58:4.d = zmm6_2
float var_50 = zmm6_2
sub_14077c5f0(arg2, &arg_20, arg1 + 0x164, &var_58, 0)
float zmm2 = arg_8 * 0.5f
var_58.d = zmm2 + *arg6
var_58:4.d = zmm2 + arg6[1]
float var_50_1 = zmm2 + arg6[2]
sub_14077c5f0(arg2, &arg_20, arg1 + 0x16a, &var_58, 0)
sub_140741e30(arg2, &arg_20, arg1 + 0x170, &arg_8, 0)
sub_140741e30(arg2, &arg_20, arg1 + 0x176, &arg_40, 0)
void arg_28
sub_140741e30(arg2, &arg_20, arg1 + 0x17c, &arg_28, 0)
arg_30.d = data_1439b5c08 * arg_8
sub_140741e30(arg2, &arg_20, arg1 + 0x1a4, &arg_30, 0)
int32_t arg_60 = arg_60
int64_t rax_54 = sub_1411e11c0()
arg_30 = r15

if (*(arg1 + 0x184) u> 0)
    uint32_t rbx_6 = zx.d(*(arg1 + 0x182))
    void*** rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_13 = &rcx_75[5]
    
    if (rdx_13 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_13 = &rcx_75[5]
    
    *(arg2 + 0x30) = rdx_13
    void**** rax_55 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_55 = rcx_75
    *(arg2 + 8) = &rcx_75[1]
    rcx_75[1] = 0
    *rcx_75 = &data_142d99560
    rcx_75[2] = r15
    rcx_75[3].d = rbx_6
    rcx_75[4] = rax_54

sub_140741e30(arg2, &arg_30, arg1 + 0x186, &arg_60, 0)
return sub_141117ba0(arg1 + 0x18c, arg2, r15, arg7, nullptr, arg8)
