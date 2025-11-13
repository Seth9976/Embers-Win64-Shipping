// 函数: sub_141081b10
// 地址: 0x141081b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)
arg3[8]
int64_t arg_8 = rbp
int64_t* arg_18 = &data_143ec4c60
int64_t var_68 = 0
int32_t var_70 = 0
sub_14137f470(arg1 + 0x11a, rbp, arg3, arg2)
sub_1410809a0(arg1, arg2, rbp, *(*arg3 + 0x10))
int32_t r8_2 = *(*arg3 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx_3 = &arg_10
    
    if (r8_2 s< 3)
        sub_14137b650(rcx_3)
    else
        sub_14137b9a0(rcx_3, arg2, 0xf, r8_2)
    
    sub_14077caf0(arg2, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

int64_t r8_4 = arg5[7]
int64_t rcx_6 = arg5[6]
int32_t rax_2 = arg5[8].d - r8_4.d
uint32_t r9_6 = (r8_4 u>> 0x20).d
int32_t rdx_5 = *(arg5 + 0x44) - r9_6
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rcx_6.d))
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 0.5f
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o((rcx_6 u>> 0x20).d))
uint128_t zmm0
zmm0.d = zmm3.d f/ zmm2.d
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(r8_4.d))
int32_t var_58 = zmm0.d
zmm1.d = zmm1.d f+ zmm3.d
zmm1.d = zmm1.d f/ zmm2.d
zmm0.d = _mm_cvtepi32_ps(zx.o(neg.d(rdx_5))).d f* 0.5f
zmm0.d = zmm0.d f/ zmm4.d
zmm2.d = _mm_cvtepi32_ps(zx.o(rdx_5)).d f* 0.5f
int32_t var_54 = zmm0.d
int32_t var_50 = zmm1.d
zmm2.d = zmm2.d f+ _mm_cvtepi32_ps(zx.o(r9_6)).d
zmm2.d = zmm2.d f/ zmm4.d
int32_t var_4c = zmm2.d
sub_14077c870(arg2, &arg_8, arg1 + 0x23a, &var_58, 0)
int32_t zmm0_1 = (zx.o(0)).d

if (arg4 != 0)
    zmm0_1 = 0x3f800000

int32_t var_48 = zmm0_1
int64_t var_44 = 0
int32_t var_3c = 0
sub_14077c870(arg2, &arg_8, arg1 + 0x240, &var_48, 0)
void* rax_5 = *arg5
void*** rcx_45
uint32_t r12_2
int64_t* r14_2

if (rax_5 == 0)
    r14_2 = data_14395fa10
    int64_t r12_3 = *(data_1439b70c0 + 0x10)
    
    if (*(arg1 + 0x214) u> 0)
        uint32_t r13_6 = zx.d(*(arg1 + 0x212))
        void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_37 = &rcx_51[5]
        
        if (rax_37 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_37 = &rcx_51[5]
        
        *(arg2 + 0x30) = rax_37
        void**** rax_38 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_38 = rcx_51
        *(arg2 + 8) = &rcx_51[1]
        rcx_51[3].d = r13_6
        rcx_51[1] = 0
        *rcx_51 = &data_142da77b8
        rcx_51[2] = rbp
        rcx_51[4] = r12_3
    
    if (*(arg1 + 0x218) u> 0)
        r12_2 = zx.d(*(arg1 + 0x216))
        
        if ((*(*r14_2 + 8))(r14_2) == 0)
            rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_42 = &rcx_45[5]
            
            if (rax_42 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_42 = &rcx_45[5]
            
            *(arg2 + 0x30) = rax_42
            void**** rax_43 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_43 = rcx_45
            *(arg2 + 8) = &rcx_45[1]
            rcx_45[1] = 0
        label_141082133:
            rcx_45[4] = r14_2
            rcx_45[3].d = r12_2
            rcx_45[2] = rbp
            *rcx_45 = &data_142da77c8
else
    int64_t r13_1 = *(rax_5 + 8)
    int64_t* r14 = data_1439b54d0
    
    if (*(arg1 + 0x214) u> 0)
        arg4.d = zx.d(*(arg1 + 0x212))
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_12[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_12[5]
        
        *(arg2 + 0x30) = rax_7
        int64_t* rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        rcx_12[3].d = arg4.d
        *rcx_12 = &data_142da77b8
        rcx_12[2] = rbp
        rcx_12[4] = r13_1
    
    if (*(arg1 + 0x218) u> 0)
        uint32_t r13_2 = zx.d(*(arg1 + 0x216))
        
        if ((*(*r14 + 8))(r14) == 0)
            void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_19[5]
            
            if (rax_13 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_19[5]
            
            *(arg2 + 0x30) = rax_13
            void**** rax_14 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_14 = rcx_19
            *(arg2 + 8) = &rcx_19[1]
            rcx_19[1] = 0
            *rcx_19 = &data_142da77c8
            rcx_19[2] = rbp
            rcx_19[3].d = r13_2
            rcx_19[4] = r14
    
    int64_t* r14_1 = data_14395fa10
    int64_t r13_3 = *(arg5[2] + 8)
    
    if (*(arg1 + 0x224) u> 0)
        arg4.d = zx.d(*(arg1 + 0x222))
        void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_25[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_25[5]
        
        *(arg2 + 0x30) = rax_18
        int64_t* rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_25
        *(arg2 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        rcx_25[3].d = arg4.d
        *rcx_25 = &data_142da77b8
        rcx_25[2] = rbp
        rcx_25[4] = r13_3
    
    if (*(arg1 + 0x228) u> 0)
        uint32_t r13_4 = zx.d(*(arg1 + 0x226))
        
        if ((*(*r14_1 + 8))(r14_1) == 0)
            void*** rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_24 = &rcx_32[5]
            
            if (rax_24 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_24 = &rcx_32[5]
            
            *(arg2 + 0x30) = rax_24
            void**** rax_25 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_25 = rcx_32
            *(arg2 + 8) = &rcx_32[1]
            rcx_32[1] = 0
            *rcx_32 = &data_142da77c8
            rcx_32[2] = rbp
            rcx_32[3].d = r13_4
            rcx_32[4] = r14_1
    
    r14_2 = data_14395fa10
    int64_t r12_1 = *(arg5[4] + 8)
    
    if (*(arg1 + 0x22c) u> 0)
        uint32_t r13_5 = zx.d(*(arg1 + 0x22a))
        void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_28 = &rcx_38[5]
        
        if (rax_28 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_28 = &rcx_38[5]
        
        *(arg2 + 0x30) = rax_28
        void**** rax_29 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_29 = rcx_38
        *(arg2 + 8) = &rcx_38[1]
        rcx_38[1] = 0
        *rcx_38 = &data_142da77b8
        rcx_38[2] = rbp
        rcx_38[3].d = r13_5
        rcx_38[4] = r12_1
    
    if (*(arg1 + 0x230) u> 0)
        r12_2 = zx.d(*(arg1 + 0x22e))
        
        if ((*(*r14_2 + 8))(r14_2) == 0)
            rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_33 = &rcx_45[5]
            
            if (rax_33 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_33 = &rcx_45[5]
            
            *(arg2 + 0x30) = rax_33
            void** rax_34 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_34 = rcx_45
            *(arg2 + 8) = &rcx_45[1]
            rcx_45[1] = 0
            goto label_141082133
int64_t* r14_3 = data_14395fa10
int64_t r12_4 = *(*arg6 + 0x10)

if (*(arg1 + 0x234) u> 0)
    uint32_t r13_7 = zx.d(*(arg1 + 0x232))
    void*** rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_46 = &rcx_64[5]
    
    if (rax_46 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_46 = &rcx_64[5]
    
    *(arg2 + 0x30) = rax_46
    void**** rax_47 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_47 = rcx_64
    *(arg2 + 8) = &rcx_64[1]
    rcx_64[1] = 0
    *rcx_64 = &data_142da77b8
    rcx_64[2] = rbp
    rcx_64[3].d = r13_7
    rcx_64[4] = r12_4

if (*(arg1 + 0x238) u> 0)
    uint32_t r12_5 = zx.d(*(arg1 + 0x236))
    
    if ((*(*r14_3 + 8))(r14_3) == 0)
        void*** rcx_71 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_51 = &rcx_71[5]
        
        if (rax_51 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_71 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_51 = &rcx_71[5]
        
        *(arg2 + 0x30) = rax_51
        void**** rax_52 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_52 = rcx_71
        *(arg2 + 8) = &rcx_71[1]
        rcx_71[1] = 0
        *rcx_71 = &data_142da77c8
        rcx_71[2] = rbp
        rcx_71[3].d = r12_5
        rcx_71[4] = r14_3

int64_t* r14_4 = data_1439b54b8
int64_t r12_6 = *(arg_18[0x1a] + 0x10)

if (*(arg1 + 0x21c) u> 0)
    uint32_t r13_8 = zx.d(*(arg1 + 0x21a))
    void*** rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_56 = &rcx_77[5]
    
    if (rax_56 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_56 = &rcx_77[5]
    
    *(arg2 + 0x30) = rax_56
    void**** rax_57 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_57 = rcx_77
    *(arg2 + 8) = &rcx_77[1]
    rcx_77[1] = 0
    *rcx_77 = &data_142da77b8
    rcx_77[2] = rbp
    rcx_77[3].d = r13_8
    rcx_77[4] = r12_6

if (*(arg1 + 0x220) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x21e))
    
    if ((*(*r14_4 + 8))(r14_4) == 0)
        void*** rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_61 = &rcx_84[5]
        
        if (rax_61 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_84 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_61 = &rcx_84[5]
        
        *(arg2 + 0x30) = rax_61
        void**** rax_62 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_62 = rcx_84
        *(arg2 + 8) = &rcx_84[1]
        rcx_84[1] = 0
        *rcx_84 = &data_142da77c8
        rcx_84[2] = rbp
        rcx_84[3].d = r15_1
        rcx_84[4] = r14_4

uint32_t r14_5 = zx.d(*(arg1 + 0x24e))
void*** rcx_90 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_64 = &rcx_90[5]

if (rax_64 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_90 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_64 = &rcx_90[5]

*(arg2 + 0x30) = rax_64
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_90
*(arg2 + 8) = &rcx_90[1]
rcx_90[1] = 0
rcx_90[4] = arg7
*rcx_90 = &data_142da77d8
rcx_90[2] = rbp
rcx_90[3].d = r14_5
uint32_t r14_6 = zx.d(*(arg1 + 0x252))
void*** rcx_96 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_68 = &rcx_96[5]

if (rax_68 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_96 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_68 = &rcx_96[5]

*(arg2 + 0x30) = rax_68
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_96
*(arg2 + 8) = &rcx_96[1]
rcx_96[1] = 0
rcx_96[4] = arg8
*rcx_96 = &data_142da77d8
rcx_96[2] = rbp
rcx_96[3].d = r14_6
uint32_t rsi_1 = zx.d(*(arg1 + 0x256))
void*** rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_72 = &rcx_102[5]

if (rax_72 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_72 = &rcx_102[5]

*(arg2 + 0x30) = rax_72
void**** rax_73 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_73 = rcx_102
*(arg2 + 8) = &rcx_102[1]
rcx_102[1] = 0
rcx_102[4] = arg9
*rcx_102 = &data_142da77d8
rcx_102[2] = rbp
rcx_102[3].d = rsi_1
return arg9
