// 函数: sub_14113c3e0
// 地址: 0x14113c3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1b0)
int64_t arg_20 = r15
sub_1410809a0(arg1, arg2, r15, *(arg4 + 0x10))
void* r8_1 = data_143a2dd48
float var_68 = *(r8_1 + 0x60)
int32_t var_64 = *(r8_1 + 0x64)
int32_t var_60 = *(r8_1 + 0x68)
sub_1410e8980(arg1 + 0x118, arg2, r15, &data_143e585c0, r8_1, &var_68, 0)
int512_t zmm6
zmm6.o = 0x3f800000
var_68.q = r15

if (*(arg1 + 0x16e) u> 0 || *(arg1 + 0x174) u> 0)
    int64_t r12_1 = *(arg6 + 0x80)
    
    if (r12_1 == 0)
        r12_1 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_1 = data_14396ee58
    uint32_t arg_8
    
    if (*(arg1 + 0x14c) u> 0)
        int64_t rcx_2 = *(arg2 + 0x30) + 7
        arg_8 = zx.d(*(arg1 + 0x14a))
        void*** rcx_3 = rcx_2 & 0xfffffffffffffff8
        void* rax_5 = &rcx_3[5]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_3[5]
        
        *(arg2 + 0x30) = rax_5
        int64_t* rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rcx_3
        *(arg2 + 8) = &rcx_3[1]
        rcx_3[1] = 0
        *rcx_3 = &data_142da77b8
        rcx_3[3].d = arg_8
        rcx_3[2] = r15
        rcx_3[4] = r12_1
    
    if (*(arg1 + 0x15c) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0x15a))
        
        if ((*(*r13_1 + 8))(r13_1) == 0)
            void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_11 = &rcx_10[5]
            
            if (rax_11 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_11 = &rcx_10[5]
            
            *(arg2 + 0x30) = rax_11
            void**** rax_12 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_12 = rcx_10
            *(arg2 + 8) = &rcx_10[1]
            rcx_10[1] = 0
            *rcx_10 = &data_142da77c8
            rcx_10[2] = r15
            rcx_10[3].d = r12_2
            rcx_10[4] = r13_1
    
    int64_t r12_3 = *(arg6 + 0x88)
    
    if (r12_3 == 0)
        r12_3 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_2 = data_14396ee58
    
    if (*(arg1 + 0x150) u> 0)
        int64_t rcx_15 = *(arg2 + 0x30) + 7
        arg_8 = zx.d(*(arg1 + 0x14e))
        void*** rcx_16 = rcx_15 & 0xfffffffffffffff8
        void* rax_16 = &rcx_16[5]
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_16 = &rcx_16[5]
        
        *(arg2 + 0x30) = rax_16
        int64_t* rax_17 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_17 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        *rcx_16 = &data_142da77b8
        rcx_16[3].d = arg_8
        rcx_16[2] = r15
        rcx_16[4] = r12_3
    
    if (*(arg1 + 0x160) u> 0)
        uint32_t r12_4 = zx.d(*(arg1 + 0x15e))
        
        if ((*(*r13_2 + 8))(r13_2) == 0)
            void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_22 = &rcx_23[5]
            
            if (rax_22 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_22 = &rcx_23[5]
            
            *(arg2 + 0x30) = rax_22
            void**** rax_23 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_23 = rcx_23
            *(arg2 + 8) = &rcx_23[1]
            rcx_23[1] = 0
            *rcx_23 = &data_142da77c8
            rcx_23[2] = r15
            rcx_23[3].d = r12_4
            rcx_23[4] = r13_2
    
    int64_t r12_5 = *(arg6 + 0x90)
    
    if (r12_5 == 0)
        r12_5 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_3 = data_14396ee58
    
    if (*(arg1 + 0x154) u> 0)
        int64_t rcx_28 = *(arg2 + 0x30) + 7
        arg_8 = zx.d(*(arg1 + 0x152))
        void*** rcx_29 = rcx_28 & 0xfffffffffffffff8
        void* rax_27 = &rcx_29[5]
        
        if (rax_27 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_27 = &rcx_29[5]
        
        *(arg2 + 0x30) = rax_27
        void**** rax_28 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_28 = rcx_29
        *(arg2 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        *rcx_29 = &data_142da77b8
        rcx_29[3].d = arg_8
        rcx_29[2] = r15
        rcx_29[4] = r12_5
    
    if (*(arg1 + 0x164) u> 0)
        uint32_t r12_6 = zx.d(*(arg1 + 0x162))
        
        if ((*(*r13_3 + 8))(r13_3) == 0)
            void*** rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_33 = &rcx_36[5]
            
            if (rax_33 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_33 = &rcx_36[5]
            
            *(arg2 + 0x30) = rax_33
            void**** rax_34 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_34 = rcx_36
            *(arg2 + 8) = &rcx_36[1]
            rcx_36[1] = 0
            *rcx_36 = &data_142da77c8
            rcx_36[2] = r15
            rcx_36[3].d = r12_6
            rcx_36[4] = r13_3
    
    int64_t r12_7 = *(arg6 + 0x98)
    
    if (r12_7 == 0)
        r12_7 = *(data_143f111a8 + 0x10)
    
    int64_t* r13_4 = data_14396ee58
    
    if (*(arg1 + 0x158) u> 0)
        int64_t rcx_41 = *(arg2 + 0x30) + 7
        arg_8 = zx.d(*(arg1 + 0x156))
        void*** rcx_42 = rcx_41 & 0xfffffffffffffff8
        void* rax_38 = &rcx_42[5]
        
        if (rax_38 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_38 = &rcx_42[5]
        
        *(arg2 + 0x30) = rax_38
        void**** rax_39 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_39 = rcx_42
        *(arg2 + 8) = &rcx_42[1]
        rcx_42[1] = 0
        *rcx_42 = &data_142da77b8
        rcx_42[3].d = arg_8
        rcx_42[2] = r15
        rcx_42[4] = r12_7
    
    if (*(arg1 + 0x168) u> 0)
        uint32_t r12_8 = zx.d(*(arg1 + 0x166))
        
        if ((*(*r13_4 + 8))(r13_4) == 0)
            void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_44 = &rcx_49[5]
            
            if (rax_44 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_44 = &rcx_49[5]
            
            *(arg2 + 0x30) = rax_44
            void** rax_45 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_45 = rcx_49
            *(arg2 + 8) = &rcx_49[1]
            rcx_49[1] = 0
            *rcx_49 = &data_142da77c8
            rcx_49[2] = r15
            rcx_49[3].d = r12_8
            rcx_49[4] = r13_4
    
    int32_t* var_80
    var_80.d = 0
    sub_14077c9b0(arg2, &var_68, arg1 + 0x16a, arg6, 4, var_80.d)
    sub_14077c9b0(arg2, &var_68, arg1 + 0x170, arg6 + 0x40, 4, 0)
    arg_8 = sub_140741e30(arg2, &var_68, arg1 + 0x176, arg6 + 0xa0, 0) f/ *(arg6 + 0xa0)
    sub_140741e30(arg2, &var_68, arg1 + 0x17c, &arg_8, 0)
    sub_140741e30(arg2, &var_68, arg1 + 0x182, arg6 + 0xa4, 0)

void** rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* r13_5 = *(arg7 + 0xc0)
void* rcx_58 = &rdi_4[1]
void* rax_48 = *(r13_5 + 0x18)

if (rcx_58 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_58 = &rdi_4[1]

*(arg2 + 0x30) = rcx_58
*rdi_4 = rax_48
void*** rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_49 = &rcx_62[6]

if (rax_49 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_49 = &rcx_62[6]

*(arg2 + 0x30) = rax_49
void**** rax_50 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_50 = rcx_62
*(arg2 + 8) = &rcx_62[1]
rcx_62[1] = 0
*rcx_62 = &data_142da7798
rcx_62[2].d = 1
rcx_62[3] = rdi_4
rcx_62[4].d = 2
*(rcx_62 + 0x24) = 3
rcx_62[5] = 0
sub_141083370(arg1 + 0x188, arg2, &arg_20, *(r13_5 + 0x10), *(r13_5 + 0x18))
int64_t r12_9 = *(arg8 + 0x10)

if (*(arg1 + 0x192) u> 0)
    uint32_t rdi_7 = zx.d(*(arg1 + 0x190))
    void*** rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_54 = &rcx_69[5]
    
    if (rax_54 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_54 = &rcx_69[5]
    
    *(arg2 + 0x30) = rax_54
    void**** rax_55 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_55 = rcx_69
    *(arg2 + 8) = &rcx_69[1]
    rcx_69[1] = 0
    *rcx_69 = &data_142da77b8
    rcx_69[2] = r15
    rcx_69[3].d = rdi_7
    rcx_69[4] = r12_9

int64_t rdi_8 = data_1439b5f08

if (*(arg1 + 0x196) u> 0)
    uint32_t r12_10 = zx.d(*(arg1 + 0x194))
    void*** rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_57 = &rcx_75[5]
    
    if (rax_57 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_75 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_57 = &rcx_75[5]
    
    *(arg2 + 0x30) = rax_57
    void**** rax_58 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_58 = rcx_75
    *(arg2 + 8) = &rcx_75[1]
    rcx_75[1] = 0
    *rcx_75 = &data_142d99560
    rcx_75[2] = r15
    rcx_75[3].d = r12_10
    rcx_75[4] = rdi_8

int64_t rdi_9 = data_1439b5f28

if (*(arg1 + 0x19a) u> 0)
    uint32_t r12_11 = zx.d(*(arg1 + 0x198))
    void*** rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_60 = &rcx_81[5]
    
    if (rax_60 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_60 = &rcx_81[5]
    
    *(arg2 + 0x30) = rax_60
    void**** rax_61 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_61 = rcx_81
    *(arg2 + 8) = &rcx_81[1]
    rcx_81[1] = 0
    *rcx_81 = &data_142d99560
    rcx_81[2] = r15
    rcx_81[3].d = r12_11
    rcx_81[4] = rdi_9

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg9 + 0x1c) + 0xf)
int32_t var_58 = (temp1 + (temp0 & 0xf)) s>> 4
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg9 + 0x20) + 0xf)
int32_t var_54 = (temp3 + (temp2 & 0xf)) s>> 4
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(arg9 + 0x24) + 0xf)
int32_t var_50 = (temp5 + (temp4 & 0xf)) s>> 4
sub_14077c5f0(arg2, &arg_20, arg1 + 0x1a2, &var_58, 0)
float zmm1 = sub_14077c5f0(arg2, &arg_20, arg1 + 0x19c, arg9 + 0x1c, 0)
    f/ _mm_cvtepi32_ps(zx.o(data_1439b5bfc)).d
var_68 = zmm1
float var_64_1 = zmm1
float var_60_1 = zmm1
sub_14077c5f0(arg2, &arg_20, arg1 + 0x1a8, &var_68, 0)
sub_14077c5f0(arg2, &arg_20, arg1 + 0x1ae, arg9, 0)
void arg_48
float zmm6_3 = sub_140741e30(arg2, &arg_20, arg1 + 0x1b4, &arg_48, 0)
float arg_10 = arg5 / (tanf(data_1439b5b9c) + zmm6_3)
return sub_140741e30(arg2, &arg_20, arg1 + 0x1ba, &arg_10, 0)
