// 函数: sub_141291ad0
// 地址: 0x141291ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg4
uint128_t var_68 = arg5
uint128_t var_78 = arg6
void var_d58
int64_t rax_1 = __security_cookie ^ &var_d58
void* rdi = arg3
int64_t* var_c30 = &data_143ec4c60
void* rax_2 = *(rdi + 8)
int64_t* var_cc0
__builtin_memset(&var_cc0, 0, 0x20)
int64_t* rcx_1 = *sub_14139d440(&data_143ec4c60)
int64_t rdx = *rcx_1
int128_t* rax_4 = (*(rdx + 0x10))(rcx_1, rdx)
int128_t var_238 = *rax_4
int128_t var_228 = rax_4[1]
int128_t var_218 = rax_4[2]
int128_t zmm1 = rax_4[3]
int32_t var_208 = zmm1.d
var_218:0xc.d = 0xa
int128_t var_1f8 = rax_4[4]
int64_t* var_ca8
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_ca8, u"RadianceRT", 1, 1, 0)
var_218:0xc.d = 0x1c
int64_t* var_cb0
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_cb0, u"SampleCountRT", 1, 1, 0)
int64_t* var_cb8
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_cb8, u"PixelPositionRT", 1, 1, 0)
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_cc0, u"RayCountPerPixelRT", 1, 1, 0)
int128_t var_928 = data_142d3f660
int64_t var_c40 = 0
int32_t var_c38 = 0
int32_t var_c34 = 1
void*** rcx_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t rbx = var_ca8[3]
void* rax_8 = &rcx_4[6]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x40)
    rcx_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_8 = &rcx_4[6]

*(arg2 + 0x30) = rax_8
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7778
rcx_4[2] = rbx
*(rcx_4 + 0x20) = var_928
void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_1 = var_cb0[3]
void* rax_12 = &rcx_10[5]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_10[5]

*(arg2 + 0x30) = rax_12
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142f115d8
rcx_10[2] = rbx_1
*(rcx_10 + 0x18) = var_c40.o
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_2 = var_cb8[3]
void* rax_16 = &rcx_16[5]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_16[5]

*(arg2 + 0x30) = rax_16
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_16
*(arg2 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142f115d8
rcx_16[2] = rbx_2
*(rcx_16 + 0x18) = var_c40.o
void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_3 = var_cc0[3]
void* rax_20 = &rcx_22[5]

if (rax_20 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_22[5]

*(arg2 + 0x30) = rax_20
int64_t* rax_21 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_21 = rcx_22
*(arg2 + 8) = &rcx_22[1]
rcx_22[1] = 0
*rcx_22 = &data_142f115d8
rcx_22[2] = rbx_3
*(rcx_22 + 0x18) = var_c40.o
void* var_940
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_940, 
    &data_143e8f7b0, 0)
void* r12 = var_940
void* var_938
void* var_c18 = var_938
void* var_ca0 = r12
void var_778
memset(&var_778, 0, 0x480)
int32_t rdx_6 = *(arg1 + 0x3b0)
int128_t var_898
__builtin_memset(&var_898, 0, 0x120)
int64_t var_2f8 = 0
sub_1413aab70(&data_143ec4c60, rdx_6, 0xf, &var_898)
int64_t* rcx_29 = data_143f0f180
char var_d30_3
var_d30_3.d = 1
wchar16 const* const var_d38_3
var_d38_3.d = 0
void* var_be8
(*(*rcx_29 + 0xf8))(rcx_29, &var_be8, &var_898, &data_143ec50d0, var_d38_3, var_d30_3)
void* r15_1 = var_be8
void* var_c00 = r15_1
uint128_t zmm6 = sub_1405d1550(&var_be8)
uint128_t zmm1_1 = zx.o(*(rdi + 0xd6c))
uint128_t zmm0_2 = zx.o(*(rdi + 0xd68))
void* var_c10 = *(rdi + 0x51e8)
void* rax_28 = data_143e8f5a8
zmm1_1 = _mm_cvtepi32_ps(zmm1_1)
int32_t i_7 = *(rax_28 + 4)
int32_t i_2 = i_7
int64_t zmm0_3 = sub_140d7ade0(_mm_cvtepi32_ps(zmm0_2).d, zmm1_1.d, zmm6)
int128_t zmm10 = zx.o(0)
int32_t rbx_4 = *(data_143e8f5c0 + 4)

if (rbx_4 == 0)
    zmm1_1 = zx.o(0)
else
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(*(rdi + 0xd68))).d f/ zmm0_3.d

int32_t r8_5 = data_1439c7a34
int32_t rcx_31 = int.d(zmm1_1.d)
int32_t var_c98
int32_t var_c88
void* var_c20
int128_t zmm0_5
int512_t zmm3
char var_d28_3
char var_d20_3

if (r8_5 u<= 1 || i_7 s<= 1)
    int32_t rax_122 = 0
    int32_t var_974_1 = 0
    
    if (rbx_4 s> 0)
        rax_122 = rcx_31
    
    int64_t var_968 = *(rax_2 + 0xc48)
    int32_t var_978 = rax_122
    int32_t var_960_1 = *(rax_2 + 0xc50)
    void* rdx_72 = *(arg1 + 8)
    int64_t var_cd8_2 = var_cc0[3]
    var_d20_3.q = rdx_72 + 0xee8
    var_d28_3.q = r15_1
    var_d30_3.q = *(rdi + 0x10)
    zmm3, zmm10 = sub_141297a20(r12, rdx_72, rdi, &var_778, rdi + 0x51d8, var_d30_3, var_d28_3, 
        var_d20_3, data_143eaa020, data_143eaa024, &var_968, *(rax_2 + 0xc40), &var_978, 
        var_ca8[3], var_cb0[3], var_cb8[3])
    int32_t rax_134 = *(rdi + 0x15a0) - *(rdi + 0x1598)
    int32_t r15_14 = rax_134 - rcx_31
    int64_t rbx_18 = 0
    
    if (rbx_4 s<= 0)
        r15_14 = rax_134
    
    int32_t r12_12 = *(rdi + 0x15a4) - *(rdi + 0x159c)
    void* rax_135 = var_ca0
    
    if (rax_135 != 0)
        int64_t rdx_73 = sx.q(*(rax_135 + 0x10c))
        int64_t* rbx_19 = *(var_c18 + 0x10)
        int64_t rax_137 = rbx_19[3]
        
        if (*(rax_137 + (rdx_73 << 3)) == 0)
            sub_1419ccf30(rbx_19, rdx_73.d)
            rax_137 = rbx_19[3]
        
        rbx_18 = *(rax_137 + (rdx_73 << 3))
        rdi = arg3
    
    int64_t rdi_6 = *(rdi + 0x51f0)
    void*** rdx_76 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_138 = &rdx_76[0x96]
    
    if (rax_138 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4b8)
        rdx_76 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_138 = &rdx_76[0x96]
    
    *(arg2 + 0x30) = rax_138
    void* rcx_122 = &var_778
    void**** rax_139 = *(arg2 + 8)
    int64_t i_6 = 9
    *(arg2 + 0x14) += 1
    *rax_139 = rdx_76
    *(arg2 + 8) = &rdx_76[1]
    rdx_76[1] = 0
    *rdx_76 = &data_142f51dd0
    rdx_76[3] = var_c10
    void* rax_142 = &rdx_76[4]
    rdx_76[2] = rdi_6
    int64_t i
    
    do
        rax_142 += 0x80
        zmm0_5 = *rcx_122
        rcx_122 += 0x80
        *(rax_142 - 0x80) = zmm0_5
        *(rax_142 - 0x70) = *(rcx_122 - 0x70)
        *(rax_142 - 0x60) = *(rcx_122 - 0x60)
        *(rax_142 - 0x50) = *(rcx_122 - 0x50)
        *(rax_142 - 0x40) = *(rcx_122 - 0x40)
        *(rax_142 - 0x30) = *(rcx_122 - 0x30)
        *(rax_142 - 0x20) = *(rcx_122 - 0x20)
        *(rax_142 - 0x10) = *(rcx_122 - 0x10)
        i = i_6
        i_6 -= 1
    while (i != 1)
    rdx_76[0x94] = rbx_18
    rdx_76[0x95].d = r15_14
    *(rdx_76 + 0x4ac) = r12_12
else
    int32_t temp0_3 = divs.dp.d(sx.q(*(rdi + 0x15a0) - *(rdi + 0x1598) - 1 + i_7), i_7)
    int64_t rdx_9 = var_ca8[3]
    int64_t rdx_10 = var_cb0[3]
    int64_t rdx_11 = var_cb8[3]
    int64_t rdx_12 = var_cc0[3]
    int32_t i_8 = (1 << r8_5.b) - 1
    int32_t i_10 = i_8
    void var_9b4
    sub_140b58260(&var_9b4, u"PathTracingRayGen_Fence_Begin", 1)
    int64_t* rcx_38 = data_143f0f180
    int64_t var_bf0
    (*(*rcx_38 + 0x98))(rcx_38, &var_bf0, &var_9b4)
    int64_t rdi_1 = var_bf0
    int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_37 = &rbx_7[4]
    
    if (rax_37 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_37 = &rbx_7[4]
    
    *(arg2 + 0x30) = rax_37
    *rbx_7 = rdx_9
    rbx_7[1] = rdx_10
    rbx_7[2] = rdx_11
    rbx_7[3] = rdx_12
    void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_42 = &rcx_42[6]
    
    if (rax_42 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_42 = &rcx_42[6]
    
    *(arg2 + 0x30) = rax_42
    void**** rax_43 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_43 = rcx_42
    *(arg2 + 8) = &rcx_42[1]
    rcx_42[1] = 0
    *rcx_42 = &data_142da7798
    rcx_42[2].d = 4
    rcx_42[3] = rbx_7
    rcx_42[4].d = 2
    *(rcx_42 + 0x24) = 2
    rcx_42[5] = rdi_1
    
    if (i_8 != 0)
        uint64_t rflags_1
        int32_t temp0_4
        temp0_4, rflags_1 = _bit_scan_forward(i_8)
        int32_t rdi_2 = temp0_4
        int32_t var_944_1 = rdi_2
        int32_t i_1
        
        do
            if (rdi_2 != 0)
                int32_t rbx_10 = *(arg2 + 0x8c)
                int32_t rax_45 = 1 << rdi_2.b
                
                if (rbx_10 != rax_45)
                    bool cond:4_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_45
                    
                    if (cond:4_1)
                        void*** rdx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_46 = &rdx_16[3]
                        
                        if (rax_46 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_46 = &rdx_16[3]
                        
                        *(arg2 + 0x30) = rax_46
                        int64_t* rax_47 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_47 = rdx_16
                        int32_t rax_48 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_16[1]
                        *rdx_16 = &data_142f11588
                        rdx_16[2].d = rax_48
                        rdx_16[1] = 0
                    else
                        *(arg2 + 0x90) = rax_45
                
                int64_t r12_1 = var_bf0
                void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_49 = &rcx_51[3]
                
                if (rax_49 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_49 = &rcx_51[3]
                
                *(arg2 + 0x30) = rax_49
                int64_t* rax_50 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_50 = rcx_51
                *(arg2 + 8) = &rcx_51[1]
                rcx_51[1] = 0
                *rcx_51 = &data_142f11608
                rcx_51[2] = r12_1
                
                if (*(arg2 + 0x8c) != rbx_10)
                    bool cond:5_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_10
                    
                    if (cond:5_1)
                        void*** rdx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_52 = &rdx_21[3]
                        
                        if (rax_52 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_52 = &rdx_21[3]
                        
                        *(arg2 + 0x30) = rax_52
                        int64_t* rax_53 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_53 = rdx_21
                        int32_t rax_54 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_21[1]
                        *rdx_21 = &data_142f11588
                        rdx_21[2].d = rax_54
                        rdx_21[1] = 0
                    else
                        *(arg2 + 0x90) = rbx_10
            
            i_1 = not.d(1 << rdi_2.b) & i_8
            i_8 = i_1
            
            if (i_1 != 0)
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_forward(i_1)
                rdi_2 = temp0_5
                int32_t var_9b8_1 = rdi_2
            else
                rdi_2 = 0x20
        while (i_1 != 0)
        i_7 = i_2
        r12 = var_ca0
    
    sub_1405d1550(&var_bf0)
    var_c88 = 0
    
    if (i_7 s> 0)
        void* r13 = arg3
        int32_t rbx_11 = 1
        int32_t r15_3 = 0
        var_c98 = 0
        void* r9_5 = r13 + 0x51d8
        var_c20 = r9_5
        int32_t r12_4
        
        do
            int32_t rdi_3 = *(arg2 + 0x8c)
            
            if (rdi_3 != rbx_11)
                bool cond:3_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_11
                
                if (cond:3_1)
                    void*** rdx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_57 = &rdx_26[3]
                    
                    if (rax_57 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        r9_5 = var_c20
                        rdx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_57 = &rdx_26[3]
                    
                    *(arg2 + 0x30) = rax_57
                    int64_t* rax_58 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_58 = rdx_26
                    int32_t rax_59 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_26[1]
                    rdx_26[1] = 0
                    *rdx_26 = &data_142f11588
                    rdx_26[2].d = rax_59
                else
                    *(arg2 + 0x90) = rbx_11
            
            int32_t var_994_1 = 0
            int32_t var_998 = r15_3
            int32_t var_980_1 = *(rax_2 + 0xc50)
            uint64_t var_988 = *(rax_2 + 0xc48)
            void* rdx_29 = *(arg1 + 8)
            int64_t var_cd8_1 = var_cc0[3]
            var_d20_3.q = rdx_29 + 0xee8
            var_d28_3.q = var_c00
            var_d30_3.q = *(r13 + 0x10)
            int128_t zmm2_1
            zmm2_1, zmm3, zmm10 = sub_141297a20(r12, rdx_29, r13, &var_778, r9_5, var_d30_3, 
                var_d28_3, var_d20_3, data_143eaa020, data_143eaa024, &var_988, *(rax_2 + 0xc40), 
                &var_998, var_ca8[3], var_cb0[3], var_cb8[3])
            void* rcx_66 = arg3
            int32_t r13_3 = *(rcx_66 + 0x15a0) - *(rcx_66 + 0x1598) - r15_3
            
            if (temp0_3 s<= r13_3)
                r13_3 = temp0_3
            
            int32_t rax_72 = *(rcx_66 + 0x15a4) - *(rcx_66 + 0x159c)
            int64_t r12_2 = 0
            void* rax_73 = var_ca0
            
            if (rax_73 != 0)
                int64_t rdx_30 = sx.q(*(rax_73 + 0x10c))
                int64_t* r15_4 = *(var_c18 + 0x10)
                int64_t rax_75 = r15_4[3]
                
                if (*(rax_75 + (rdx_30 << 3)) == 0)
                    sub_1419ccf30(r15_4, rdx_30.d)
                    rax_75 = r15_4[3]
                    rcx_66 = arg3
                
                r12_2 = *(rax_75 + (rdx_30 << 3))
            
            int64_t r15_5 = *(rcx_66 + 0x51f0)
            void*** rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_76 = &rdx_33[0x96]
            
            if (rax_76 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x4b8)
                rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_76 = &rdx_33[0x96]
            
            *(arg2 + 0x30) = rax_76
            void* rcx_69 = &var_778
            void**** rax_77 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_77 = rdx_33
            *(arg2 + 8) = &rdx_33[1]
            rdx_33[1] = 0
            int64_t j_1 = 9
            rdx_33[2] = r15_5
            *rdx_33 = &data_142f51dd0
            rdx_33[3] = var_c10
            void* rax_80 = &rdx_33[4]
            int64_t j
            
            do
                rax_80 += 0x80
                uint128_t zmm0_4 = *rcx_69
                rcx_69 += 0x80
                *(rax_80 - 0x80) = zmm0_4
                *(rax_80 - 0x70) = *(rcx_69 - 0x70)
                *(rax_80 - 0x60) = *(rcx_69 - 0x60)
                *(rax_80 - 0x50) = *(rcx_69 - 0x50)
                *(rax_80 - 0x40) = *(rcx_69 - 0x40)
                *(rax_80 - 0x30) = *(rcx_69 - 0x30)
                *(rax_80 - 0x20) = *(rcx_69 - 0x20)
                *(rax_80 - 0x10) = *(rcx_69 - 0x10)
                j = j_1
                j_1 -= 1
            while (j != 1)
            int32_t r15_6 = var_c98
            rdx_33[0x95].d = r13_3
            rdx_33[0x94] = r12_2
            r12_4 = var_c88
            int32_t var_bd0_1 = r15_6 + r13_3
            *(rdx_33 + 0x4ac) = rax_72
            int32_t var_bd4_1 = 0
            int32_t var_bcc_1 = rax_72
            
            if (r12_4 s> 0)
                int64_t* rcx_71 = var_ca8[1]
                int64_t rax_85 = (*(*rcx_71 + 8))(rcx_71)
                int32_t r15_7 = data_143f029c8
                sub_140b34200("FlushRHIThreadTotal", r15_7)
                
                if (*(arg2 + 0x14) u> 0)
                    zmm2_1, zmm3 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3.o)
                
                sub_14198b230()
                
                if (data_143f01c92 != 0)
                    sub_14198b3f0()
                
                int64_t rdx_38
                rdx_38.b = 1
                sub_14198b7d0()
                sub_140b38680("FlushRHIThreadTotal", r15_7)
                int64_t* rcx_75 = data_143f0f180
                char var_d30_4 = 1
                int128_t var_8f8 = r15_6.o
                void* var_d38_4
                var_d38_4.d = 0
                (*(*rcx_75 + 0x228))(rcx_75, rax_85, &var_8f8, 1, var_d38_4, var_d30_4)
                int64_t* rcx_76 = var_cb0[1]
                int64_t rax_89 = (*(*rcx_76 + 8))(rcx_76)
                int32_t r15_8 = data_143f029c8
                sub_140b34200("FlushRHIThreadTotal", r15_8)
                
                if (*(arg2 + 0x14) u> 0)
                    zmm2_1, zmm3 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3.o)
                
                sub_14198b230()
                
                if (data_143f01c92 != 0)
                    sub_14198b3f0()
                
                int64_t rdx_43
                rdx_43.b = 1
                int128_t zmm6_2 = sub_14198b7d0()
                sub_140b38680("FlushRHIThreadTotal", r15_8)
                int64_t* rcx_80 = data_143f0f180
                char var_d30_5 = 1
                int128_t var_8e8 = zmm6_2
                var_d38_4.d = 0
                (*(*rcx_80 + 0x228))(rcx_80, rax_89, &var_8e8, 1, var_d38_4, var_d30_5)
                int64_t* rcx_81 = var_cb8[1]
                int64_t rax_93 = (*(*rcx_81 + 8))(rcx_81)
                int32_t r15_9 = data_143f029c8
                sub_140b34200("FlushRHIThreadTotal", r15_9)
                
                if (*(arg2 + 0x14) u> 0)
                    zmm2_1, zmm3 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3.o)
                
                sub_14198b230()
                
                if (data_143f01c92 != 0)
                    sub_14198b3f0()
                
                int64_t rdx_48
                rdx_48.b = 1
                int128_t zmm6_3 = sub_14198b7d0()
                sub_140b38680("FlushRHIThreadTotal", r15_9)
                int64_t* rcx_85 = data_143f0f180
                char var_d30_6 = 1
                int128_t var_8d8 = zmm6_3
                var_d38_4.d = 0
                (*(*rcx_85 + 0x228))(rcx_85, rax_93, &var_8d8, 1, var_d38_4, var_d30_6)
                int64_t* rcx_86 = var_cc0[1]
                int64_t rax_97 = (*(*rcx_86 + 8))(rcx_86)
                int32_t r15_10 = data_143f029c8
                sub_140b34200("FlushRHIThreadTotal", r15_10)
                
                if (*(arg2 + 0x14) u> 0)
                    j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3.o)
                
                sub_14198b230()
                
                if (data_143f01c92 != 0)
                    sub_14198b3f0()
                
                int64_t rdx_53
                rdx_53.b = 1
                int128_t zmm6_4 = sub_14198b7d0()
                sub_140b38680("FlushRHIThreadTotal", r15_10)
                int64_t* rcx_90 = data_143f0f180
                var_d30_3 = 1
                int128_t var_8c8 = zmm6_4
                var_d38_4.d = 0
                (*(*rcx_90 + 0x228))(rcx_90, rax_97, &var_8c8, 1, var_d38_4, var_d30_3)
                r15_6 = var_c98
                r12_4 = var_c88
            
            if (*(arg2 + 0x8c) != rdi_3)
                *(arg2 + 0x8c) = rdi_3
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_99 = &rdx_58[3]
                    
                    if (rax_99 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_99 = &rdx_58[3]
                    
                    *(arg2 + 0x30) = rax_99
                    int64_t* rax_100 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_100 = rdx_58
                    int32_t rax_101 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_58[1]
                    rdx_58[1] = 0
                    *rdx_58 = &data_142f11588
                    rdx_58[2].d = rax_101
                else
                    *(arg2 + 0x90) = rdi_3
            
            r15_3 = r15_6 + temp0_3
            r9_5 = var_c20
            r13 = arg3
            rbx_11 = rol.d(rbx_11, 1)
            var_c88 = r12_4 + 1
            r12 = var_ca0
            var_c98 = r15_3
        while (r12_4 + 1 s< i_2)
    
    int32_t i_5 = (1 << (data_1439c7a34).b) - 1
    int32_t i_9 = i_5
    void var_9ac
    sub_140b58260(&var_9ac, u"PathTracingRayGen_Fence_End", 1)
    int64_t* rcx_95 = data_143f0f180
    (*(*rcx_95 + 0x98))(rcx_95, &var_ca0, &var_9ac)
    void* r15_11 = var_ca0
    int64_t* rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_103 = &rbx_14[4]
    
    if (rax_103 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_103 = &rbx_14[4]
    
    *(arg2 + 0x30) = rax_103
    *rbx_14 = rdx_9
    rbx_14[1] = rdx_10
    rbx_14[2] = rdx_11
    rbx_14[3] = rdx_12
    void*** rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_108 = &rcx_99[6]
    
    if (rax_108 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_108 = &rcx_99[6]
    
    *(arg2 + 0x30) = rax_108
    void**** rax_109 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_109 = rcx_99
    *(arg2 + 8) = &rcx_99[1]
    rcx_99[1] = 0
    *rcx_99 = &data_142da7798
    rcx_99[2].d = 4
    rcx_99[3] = rbx_14
    rcx_99[4].d = 2
    *(rcx_99 + 0x24) = 2
    rcx_99[5] = r15_11
    
    if (i_5 != 0)
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_forward(i_5)
        int32_t r15_12 = temp0_6
        int32_t var_c8c = r15_12
        int32_t i_3
        
        do
            if (r15_12 != 0)
                int32_t rbx_17 = *(arg2 + 0x8c)
                
                if (rbx_17 != 1)
                    *(arg2 + 0x8c) = 1
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_111 = &rdx_64[3]
                        
                        if (rax_111 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_111 = &rdx_64[3]
                        
                        *(arg2 + 0x30) = rax_111
                        int64_t* rax_112 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_112 = rdx_64
                        int32_t rax_113 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_64[1]
                        rdx_64[1] = 0
                        *rdx_64 = &data_142f11588
                        rdx_64[2].d = rax_113
                    else
                        *(arg2 + 0x90) = 1
                
                void* r12_10 = var_ca0
                void*** rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_114 = &rcx_107[3]
                
                if (rax_114 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_114 = &rcx_107[3]
                
                *(arg2 + 0x30) = rax_114
                void**** rax_115 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_115 = rcx_107
                *(arg2 + 8) = &rcx_107[1]
                rcx_107[1] = 0
                *rcx_107 = &data_142f11608
                rcx_107[2] = r12_10
                
                if (*(arg2 + 0x8c) != rbx_17)
                    *(arg2 + 0x8c) = rbx_17
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_117 = &rdx_69[3]
                        
                        if (rax_117 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_117 = &rdx_69[3]
                        
                        *(arg2 + 0x30) = rax_117
                        int64_t* rax_118 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_118 = rdx_69
                        int32_t rax_119 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_69[1]
                        rdx_69[1] = 0
                        *rdx_69 = &data_142f11588
                        rdx_69[2].d = rax_119
                    else
                        *(arg2 + 0x90) = rbx_17
            
            i_3 = not.d(1 << r15_12.b) & i_5
            i_5 = i_3
            
            if (i_3 != 0)
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_forward(i_3)
                r15_12 = temp0_7
                int32_t var_c90_2 = r15_12
            else
                r15_12 = 0x20
        while (i_3 != 0)
    
    sub_1405d1550(&var_ca0)
int64_t* rax_143 = var_ca8
int128_t var_b98 = data_142d57d10
void*** rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_5 = data_142d57920
int128_t var_b88 = data_142d3f800
int64_t r15_15 = rax_143[2]
int64_t* rdi_7 = rax_143[1]
void* rax_144 = &rbx_22[0xa]

if (rax_144 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_144 = &rbx_22[0xa]

*(arg2 + 0x30) = rax_144
int64_t* rax_145 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_145 = rbx_22
*(arg2 + 8) = &rbx_22[1]
rbx_22[1] = 0
*rbx_22 = &data_142d56628
rbx_22[2].d = var_b98.d
__builtin_memset(rbx_22 + 0x14, 0xff, 0x20)
*(rbx_22 + 0x34) = zmm0_5:4.d
rbx_22[7].d = zmm0_5:8.d
*(rbx_22 + 0x3c) = zmm0_5:0xc.d
rbx_22[8] = rdi_7
rbx_22[9] = r15_15

if ((*(*rdi_7 + 8))(rdi_7) == 0)
    int64_t* rcx_125 = rbx_22[8]
    
    if ((*(*rcx_125 + 0x18))(rcx_125) == 0)
        int64_t* rcx_126 = rbx_22[8]
        
        if ((*(*rcx_126 + 0x20))(rcx_126) == 0)
            int64_t* rcx_127 = rbx_22[8]
            (*(*rcx_127 + 0x10))(rcx_127)

int64_t* rcx_128 = rbx_22[9]

if ((*(*rcx_128 + 8))(rcx_128) == 0)
    int64_t* rcx_129 = rbx_22[9]
    
    if ((*(*rcx_129 + 0x18))(rcx_129) == 0)
        int64_t* rcx_130 = rbx_22[9]
        
        if ((*(*rcx_130 + 0x20))(rcx_130) == 0)
            int64_t* rcx_131 = rbx_22[9]
            (*(*rcx_131 + 0x10))(rcx_131)

int64_t* rax_165 = var_cb0
int128_t var_b68 = data_142d57d10
void*** rbx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_5 = data_142d57920
int128_t var_b58 = data_142d3f800
int64_t r15_16 = rax_165[2]
int64_t* rdi_8 = rax_165[1]
void* rax_166 = &rbx_27[0xa]

if (rax_166 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_166 = &rbx_27[0xa]

*(arg2 + 0x30) = rax_166
int64_t* rax_167 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_167 = rbx_27
*(arg2 + 8) = &rbx_27[1]
rbx_27[1] = 0
*rbx_27 = &data_142d56628
rbx_27[2].d = var_b68.d
__builtin_memset(rbx_27 + 0x14, 0xff, 0x20)
*(rbx_27 + 0x34) = zmm0_5:4.d
rbx_27[7].d = zmm0_5:8.d
*(rbx_27 + 0x3c) = zmm0_5:0xc.d
rbx_27[8] = rdi_8
rbx_27[9] = r15_16

if ((*(*rdi_8 + 8))(rdi_8) == 0)
    int64_t* rcx_134 = rbx_27[8]
    
    if ((*(*rcx_134 + 0x18))(rcx_134) == 0)
        int64_t* rcx_135 = rbx_27[8]
        
        if ((*(*rcx_135 + 0x20))(rcx_135) == 0)
            int64_t* rcx_136 = rbx_27[8]
            (*(*rcx_136 + 0x10))(rcx_136)

int64_t* rcx_137 = rbx_27[9]

if ((*(*rcx_137 + 8))(rcx_137) == 0)
    int64_t* rcx_138 = rbx_27[9]
    
    if ((*(*rcx_138 + 0x18))(rcx_138) == 0)
        int64_t* rcx_139 = rbx_27[9]
        
        if ((*(*rcx_139 + 0x20))(rcx_139) == 0)
            int64_t* rcx_140 = rbx_27[9]
            (*(*rcx_140 + 0x10))(rcx_140)

int64_t* rax_187 = var_cb8
int128_t var_b38 = data_142d57d10
void*** rbx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_5 = data_142d57920
int128_t var_b28 = data_142d3f800
int64_t r15_17 = rax_187[2]
int64_t* rdi_9 = rax_187[1]
void* rax_188 = &rbx_32[0xa]

if (rax_188 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_188 = &rbx_32[0xa]

*(arg2 + 0x30) = rax_188
int64_t* rax_189 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_189 = rbx_32
*(arg2 + 8) = &rbx_32[1]
rbx_32[1] = 0
*rbx_32 = &data_142d56628
rbx_32[2].d = var_b38.d
__builtin_memset(rbx_32 + 0x14, 0xff, 0x20)
*(rbx_32 + 0x34) = zmm0_5:4.d
rbx_32[7].d = zmm0_5:8.d
*(rbx_32 + 0x3c) = zmm0_5:0xc.d
rbx_32[8] = rdi_9
rbx_32[9] = r15_17

if ((*(*rdi_9 + 8))(rdi_9) == 0)
    int64_t* rcx_143 = rbx_32[8]
    
    if ((*(*rcx_143 + 0x18))(rcx_143) == 0)
        int64_t* rcx_144 = rbx_32[8]
        
        if ((*(*rcx_144 + 0x20))(rcx_144) == 0)
            int64_t* rcx_145 = rbx_32[8]
            (*(*rcx_145 + 0x10))(rcx_145)

int64_t* rcx_146 = rbx_32[9]

if ((*(*rcx_146 + 8))(rcx_146) == 0)
    int64_t* rcx_147 = rbx_32[9]
    
    if ((*(*rcx_147 + 0x18))(rcx_147) == 0)
        int64_t* rcx_148 = rbx_32[9]
        
        if ((*(*rcx_148 + 0x20))(rcx_148) == 0)
            int64_t* rcx_149 = rbx_32[9]
            (*(*rcx_149 + 0x10))(rcx_149)

int64_t* rax_209 = var_cc0
int128_t var_b08 = data_142d57d10
void*** rbx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_5 = data_142d57920
int128_t var_af8 = data_142d3f800
int64_t r15_18 = rax_209[2]
int64_t* rdi_10 = rax_209[1]
void* rax_210 = &rbx_37[0xa]

if (rax_210 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_210 = &rbx_37[0xa]

*(arg2 + 0x30) = rax_210
int64_t* rax_211 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_211 = rbx_37
*(arg2 + 8) = &rbx_37[1]
rbx_37[1] = 0
*rbx_37 = &data_142d56628
rbx_37[2].d = var_b08.d
__builtin_memset(rbx_37 + 0x14, 0xff, 0x20)
*(rbx_37 + 0x34) = zmm0_5:4.d
rbx_37[7].d = zmm0_5:8.d
*(rbx_37 + 0x3c) = zmm0_5:0xc.d
rbx_37[8] = rdi_10
rbx_37[9] = r15_18

if ((*(*rdi_10 + 8))(rdi_10) == 0)
    int64_t* rcx_152 = rbx_37[8]
    
    if ((*(*rcx_152 + 0x18))(rcx_152) == 0)
        int64_t* rcx_153 = rbx_37[8]
        
        if ((*(*rcx_153 + 0x20))(rcx_153) == 0)
            int64_t* rcx_154 = rbx_37[8]
            (*(*rcx_154 + 0x10))(rcx_154)

int64_t* rcx_155 = rbx_37[9]

if ((*(*rcx_155 + 8))(rcx_155) == 0)
    int64_t* rcx_156 = rbx_37[9]
    
    if ((*(*rcx_156 + 0x18))(rcx_156) == 0)
        int64_t* rcx_157 = rbx_37[9]
        
        if ((*(*rcx_157 + 0x20))(rcx_157) == 0)
            int64_t* rcx_158 = rbx_37[9]
            (*(*rcx_158 + 0x10))(rcx_158)

int32_t rbx_40 = *(arg2 + 0x8c)

if (rbx_40 != 1)
    bool cond:8_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = 1
    
    if (cond:8_1)
        void*** rdx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_231 = &rdx_81[3]
        
        if (rax_231 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_231 = &rdx_81[3]
        
        *(arg2 + 0x30) = rax_231
        int64_t* rax_232 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_232 = rdx_81
        int32_t rax_233 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_81[1]
        rdx_81[1] = 0
        *rdx_81 = &data_142f11588
        rdx_81[2].d = rax_233
    else
        *(arg2 + 0x90) = 1

void* rcx_161 = data_143e8f590
*(rcx_161 + 4)

if (mods.dp.d(sx.q(data_143eaa020), *(rcx_161 + 4)) == 0)
    sub_1412620c0(arg1, arg2, arg3, var_cc0[2])

var_218:0xc.d = 0x1c
char var_d20_4 = 0
char var_d28_4 = 1
char var_d30_7 = 1
wchar16 const* const var_d38_6 = u"RadianceSortedRedRT"
int64_t* var_c58
__builtin_memset(&var_c58, 0, 0x18)
int64_t* var_c68 = nullptr
int64_t* var_c70 = nullptr
int64_t* var_c50
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c50, var_d38_6, var_d30_7, var_d28_4, var_d20_4)
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c58, u"RadianceSortedGreenRT", 1, 1, 0)
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c68, u"RadianceSortedBlueRT", 1, 1, 0)
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c70, u"RadianceSortedAlphaRT", 1, 1, 0)
int64_t* var_c48
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c48, u"SampleCountSortedRT", 1, 1, 0)
void*** rcx_165 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_11 = var_c50[3]
void* rax_238 = &rcx_165[5]

if (rax_238 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_165 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_238 = &rcx_165[5]

*(arg2 + 0x30) = rax_238
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_165
*(arg2 + 8) = &rcx_165[1]
rcx_165[1] = 0
*rcx_165 = &data_142f115d8
rcx_165[2] = rdi_11
*(rcx_165 + 0x18) = var_c40.o
void*** rcx_171 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_12 = var_c58[3]
void* rax_242 = &rcx_171[5]

if (rax_242 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_171 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_242 = &rcx_171[5]

*(arg2 + 0x30) = rax_242
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_171
*(arg2 + 8) = &rcx_171[1]
rcx_171[1] = 0
*rcx_171 = &data_142f115d8
rcx_171[2] = rdi_12
*(rcx_171 + 0x18) = var_c40.o
void*** rcx_177 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_13 = var_c68[3]
void* rax_246 = &rcx_177[5]

if (rax_246 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_177 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_246 = &rcx_177[5]

*(arg2 + 0x30) = rax_246
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_177
*(arg2 + 8) = &rcx_177[1]
rcx_177[1] = 0
*rcx_177 = &data_142f115d8
rcx_177[2] = rdi_13
*(rcx_177 + 0x18) = var_c40.o
void*** rcx_183 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_14 = var_c70[3]
void* rax_250 = &rcx_183[5]

if (rax_250 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_183 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_250 = &rcx_183[5]

*(arg2 + 0x30) = rax_250
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_183
*(arg2 + 8) = &rcx_183[1]
rcx_183[1] = 0
*rcx_183 = &data_142f115d8
rcx_183[2] = rdi_14
*(rcx_183 + 0x18) = var_c40.o
void*** rcx_189 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_15 = var_c48[3]
void* rax_254 = &rcx_189[5]

if (rax_254 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_189 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_254 = &rcx_189[5]

*(arg2 + 0x30) = rax_254
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_189
*(arg2 + 8) = &rcx_189[1]
rcx_189[1] = 0
*rcx_189 = &data_142f115d8
rcx_189[2] = rdi_15
*(rcx_189 + 0x18) = var_c40.o
int32_t var_d10
var_d10.q = var_c70[3]
int32_t var_d18
var_d18.q = var_c68[3]
char var_d20_8
var_d20_8.q = var_c58[3]
char var_d28_8
var_d28_8.q = var_c50[3]
char var_d30_11
var_d30_11.q = var_cb8[2]
sub_141261e60(arg1, arg2, arg3, var_ca8[2], var_cb0[2], var_d30_11, var_d28_8, var_d20_8, var_d18, 
    var_d10, var_c48[3])
int64_t* rax_264 = var_c50
int128_t var_ad8 = data_142d57d10
void*** rdi_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t zmm0_7 = data_142d57920
int128_t var_ac8 = data_142d3f800
int64_t r12_13 = rax_264[2]
int64_t* r15_20 = rax_264[1]
void* rax_265 = &rdi_18[0xa]

if (rax_265 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_265 = &rdi_18[0xa]

*(arg2 + 0x30) = rax_265
int64_t* rax_266 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_266 = rdi_18
*(arg2 + 8) = &rdi_18[1]
rdi_18[1] = 0
*rdi_18 = &data_142d56628
rdi_18[2].d = var_ad8.d
__builtin_memset(rdi_18 + 0x14, 0xff, 0x20)
*(rdi_18 + 0x34) = zmm0_7:4.d
rdi_18[7].d = zmm0_7:8.d
*(rdi_18 + 0x3c) = zmm0_7:0xc.d
rdi_18[8] = r15_20
rdi_18[9] = r12_13

if ((*(*r15_20 + 8))(r15_20) == 0)
    int64_t* rcx_203 = rdi_18[8]
    
    if ((*(*rcx_203 + 0x18))(rcx_203) == 0)
        int64_t* rcx_204 = rdi_18[8]
        
        if ((*(*rcx_204 + 0x20))(rcx_204) == 0)
            int64_t* rcx_205 = rdi_18[8]
            (*(*rcx_205 + 0x10))(rcx_205)

int64_t* rcx_206 = rdi_18[9]

if ((*(*rcx_206 + 8))(rcx_206) == 0)
    int64_t* rcx_207 = rdi_18[9]
    
    if ((*(*rcx_207 + 0x18))(rcx_207) == 0)
        int64_t* rcx_208 = rdi_18[9]
        
        if ((*(*rcx_208 + 0x20))(rcx_208) == 0)
            int64_t* rcx_209 = rdi_18[9]
            (*(*rcx_209 + 0x10))(rcx_209)

int64_t* rax_286 = var_c58
int128_t var_aa8 = data_142d57d10
void*** rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_7 = data_142d57920
int128_t var_a98 = data_142d3f800
int64_t r12_14 = rax_286[2]
int64_t* r15_21 = rax_286[1]
void* rax_287 = &rdi_23[0xa]

if (rax_287 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_287 = &rdi_23[0xa]

*(arg2 + 0x30) = rax_287
int64_t* rax_288 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_288 = rdi_23
*(arg2 + 8) = &rdi_23[1]
rdi_23[1] = 0
*rdi_23 = &data_142d56628
rdi_23[2].d = var_aa8.d
__builtin_memset(rdi_23 + 0x14, 0xff, 0x20)
*(rdi_23 + 0x34) = zmm0_7:4.d
rdi_23[7].d = zmm0_7:8.d
*(rdi_23 + 0x3c) = zmm0_7:0xc.d
rdi_23[8] = r15_21
rdi_23[9] = r12_14

if ((*(*r15_21 + 8))(r15_21) == 0)
    int64_t* rcx_212 = rdi_23[8]
    
    if ((*(*rcx_212 + 0x18))(rcx_212) == 0)
        int64_t* rcx_213 = rdi_23[8]
        
        if ((*(*rcx_213 + 0x20))(rcx_213) == 0)
            int64_t* rcx_214 = rdi_23[8]
            (*(*rcx_214 + 0x10))(rcx_214)

int64_t* rcx_215 = rdi_23[9]

if ((*(*rcx_215 + 8))(rcx_215) == 0)
    int64_t* rcx_216 = rdi_23[9]
    
    if ((*(*rcx_216 + 0x18))(rcx_216) == 0)
        int64_t* rcx_217 = rdi_23[9]
        
        if ((*(*rcx_217 + 0x20))(rcx_217) == 0)
            int64_t* rcx_218 = rdi_23[9]
            (*(*rcx_218 + 0x10))(rcx_218)

int64_t* rax_308 = var_c68
int128_t var_a78 = data_142d57d10
void*** rdi_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_7 = data_142d57920
int128_t var_a68 = data_142d3f800
int64_t r12_15 = rax_308[2]
int64_t* r15_22 = rax_308[1]
void* rax_309 = &rdi_28[0xa]

if (rax_309 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_309 = &rdi_28[0xa]

*(arg2 + 0x30) = rax_309
int64_t* rax_310 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_310 = rdi_28
*(arg2 + 8) = &rdi_28[1]
rdi_28[1] = 0
*rdi_28 = &data_142d56628
rdi_28[2].d = var_a78.d
__builtin_memset(rdi_28 + 0x14, 0xff, 0x20)
*(rdi_28 + 0x34) = zmm0_7:4.d
rdi_28[7].d = zmm0_7:8.d
*(rdi_28 + 0x3c) = zmm0_7:0xc.d
rdi_28[8] = r15_22
rdi_28[9] = r12_15

if ((*(*r15_22 + 8))(r15_22) == 0)
    int64_t* rcx_221 = rdi_28[8]
    
    if ((*(*rcx_221 + 0x18))(rcx_221) == 0)
        int64_t* rcx_222 = rdi_28[8]
        
        if ((*(*rcx_222 + 0x20))(rcx_222) == 0)
            int64_t* rcx_223 = rdi_28[8]
            (*(*rcx_223 + 0x10))(rcx_223)

int64_t* rcx_224 = rdi_28[9]

if ((*(*rcx_224 + 8))(rcx_224) == 0)
    int64_t* rcx_225 = rdi_28[9]
    
    if ((*(*rcx_225 + 0x18))(rcx_225) == 0)
        int64_t* rcx_226 = rdi_28[9]
        
        if ((*(*rcx_226 + 0x20))(rcx_226) == 0)
            int64_t* rcx_227 = rdi_28[9]
            (*(*rcx_227 + 0x10))(rcx_227)

int64_t* rax_330 = var_c70
int128_t var_bc8 = data_142d57d10
void*** rdi_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_7 = data_142d57920
int128_t var_bb8 = data_142d3f800
int64_t r12_16 = rax_330[2]
int64_t* r15_23 = rax_330[1]
void* rax_331 = &rdi_33[0xa]

if (rax_331 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_331 = &rdi_33[0xa]

*(arg2 + 0x30) = rax_331
int64_t* rax_332 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_332 = rdi_33
*(arg2 + 8) = &rdi_33[1]
rdi_33[1] = 0
*rdi_33 = &data_142d56628
rdi_33[2].d = var_bc8.d
__builtin_memset(rdi_33 + 0x14, 0xff, 0x20)
*(rdi_33 + 0x34) = zmm0_7:4.d
rdi_33[7].d = zmm0_7:8.d
*(rdi_33 + 0x3c) = zmm0_7:0xc.d
rdi_33[8] = r15_23
rdi_33[9] = r12_16

if ((*(*r15_23 + 8))(r15_23) == 0)
    int64_t* rcx_230 = rdi_33[8]
    
    if ((*(*rcx_230 + 0x18))(rcx_230) == 0)
        int64_t* rcx_231 = rdi_33[8]
        
        if ((*(*rcx_231 + 0x20))(rcx_231) == 0)
            int64_t* rcx_232 = rdi_33[8]
            (*(*rcx_232 + 0x10))(rcx_232)

int64_t* rcx_233 = rdi_33[9]

if ((*(*rcx_233 + 8))(rcx_233) == 0)
    int64_t* rcx_234 = rdi_33[9]
    
    if ((*(*rcx_234 + 0x18))(rcx_234) == 0)
        int64_t* rcx_235 = rdi_33[9]
        
        if ((*(*rcx_235 + 0x20))(rcx_235) == 0)
            int64_t* rcx_236 = rdi_33[9]
            (*(*rcx_236 + 0x10))(rcx_236)

int64_t* rax_352 = var_c48
int128_t var_a48 = data_142d57d10
void*** rdi_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_7 = data_142d57920
int128_t var_a38 = data_142d3f800
int64_t r12_17 = rax_352[2]
int64_t* r15_24 = rax_352[1]
void* rax_353 = &rdi_38[0xa]

if (rax_353 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_353 = &rdi_38[0xa]

*(arg2 + 0x30) = rax_353
int64_t* rax_354 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_354 = rdi_38
*(arg2 + 8) = &rdi_38[1]
rdi_38[1] = 0
*rdi_38 = &data_142d56628
rdi_38[2].d = var_a48.d
__builtin_memset(rdi_38 + 0x14, 0xff, 0x20)
*(rdi_38 + 0x34) = zmm0_7:4.d
rdi_38[7].d = zmm0_7:8.d
*(rdi_38 + 0x3c) = zmm0_7:0xc.d
rdi_38[8] = r15_24
rdi_38[9] = r12_17

if ((*(*r15_24 + 8))(r15_24) == 0)
    int64_t* rcx_239 = rdi_38[8]
    
    if ((*(*rcx_239 + 0x18))(rcx_239) == 0)
        int64_t* rcx_240 = rdi_38[8]
        
        if ((*(*rcx_240 + 0x20))(rcx_240) == 0)
            int64_t* rcx_241 = rdi_38[8]
            (*(*rcx_241 + 0x10))(rcx_241)

int64_t* rcx_242 = rdi_38[9]

if ((*(*rcx_242 + 8))(rcx_242) == 0)
    int64_t* rcx_243 = rdi_38[9]
    
    if ((*(*rcx_243 + 0x18))(rcx_243) == 0)
        int64_t* rcx_244 = rdi_38[9]
        
        if ((*(*rcx_244 + 0x20))(rcx_244) == 0)
            int64_t* rcx_245 = rdi_38[9]
            (*(*rcx_245 + 0x10))(rcx_245)

var_208 = zmm1.d & 0x7fefffff
var_218:0xc.d = 1
char var_d20_9 = 0
char var_d28_9 = 1
char var_d30_12 = 1
wchar16 const* const var_d38_12 = u"OutputRadianceRT"
int64_t* var_c78 = nullptr
int64_t* var_c60 = nullptr
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c78, var_d38_12, var_d30_12, var_d28_9, 
    var_d20_9)
var_218:0xc.d = 0x20
sub_1419a0ce0(&data_1439c9260, arg2, &var_238, &var_c60, u"OutputSampleCountRT", 1, 1, 0)
void*** rcx_248 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t rdi_41 = var_c78[3]
void* rax_375 = &rcx_248[6]

if (rax_375 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x40)
    rcx_248 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_375 = &rcx_248[6]

*(arg2 + 0x30) = rax_375
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_248
*(arg2 + 8) = &rcx_248[1]
rcx_248[1] = 0
*rcx_248 = &data_142da7778
rcx_248[2] = rdi_41
*(rcx_248 + 0x20) = var_928
void*** rcx_254 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdi_42 = var_c60[3]
void* rax_379 = &rcx_254[5]

if (rax_379 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_254 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_379 = &rcx_254[5]

*(arg2 + 0x30) = rax_379
int64_t* rax_380 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_380 = rcx_254
*(arg2 + 8) = &rcx_254[1]
rcx_254[1] = 0
*rcx_254 = &data_142f115d8
rcx_254[2] = rdi_42
*(rcx_254 + 0x18) = var_c40.o
int64_t* rax_384 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
uint128_t var_8b8
sub_1419a2ec0(rax_384, &var_8b8, &data_143ed5e80, 0)
uint128_t var_908 = var_8b8
void* var_918
sub_1419a2ec0(rax_384, &var_918, &data_143e8f8b0, 0)
void* r13_5 = var_918
int64_t var_a8 = *(*sub_14139d440(var_c30) + 8)
int64_t var_a0 = var_c78[1]
int64_t var_98 = var_c60[1]
void var_1e8
sub_14108c030(&var_1e8, 3, &var_a8, 5)
int64_t rdi_46 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_389 = rdi_46 + 0x18

if (rax_389 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x1a)
    rdi_46 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_389 = rdi_46 + 0x18

wchar16 const* const rcx_267 = u"PathTracing"
*(arg2 + 0x30) = rax_389
wchar16 const i_4

do
    i_4 = *rcx_267
    *(rcx_267 + rdi_46 - u"PathTracing") = i_4
    rcx_267 = &rcx_267[1]
while (i_4 != 0)
void*** rcx_270 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_390 = &rcx_270[0x27]

if (rax_390 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_270 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_390 = &rcx_270[0x27]

*(arg2 + 0x30) = rax_390
void**** rax_391 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_391 = rcx_270
*(arg2 + 8) = &rcx_270[1]
sub_1405d11b0(rcx_270, &var_1e8, rdi_46)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1e8)
char var_d1
*(arg2 + 0x178) = var_d1
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int128_t var_2e8
__builtin_memset(&var_2e8, 0, 0x30)
int64_t var_28c
__builtin_memset(&var_28c, 0, 0x43)
int128_t var_2a0 = zx.o(0)
int16_t var_248 = 0
sub_140fdc870(arg2, &var_2e8)
int64_t var_2b8 = data_14395da00
int64_t var_2b0 = data_14395da18
int64_t var_2a8 = data_14395d9e8
var_2e8.q = data_1439c9210
var_2e8:8.q = sub_140790e00(&var_908)
int64_t rax_399 = 0
void* var_910

if (r13_5 != 0)
    rax_399 = sub_1410970c0(*(var_910 + 0x10), *(r13_5 + 0x10c))
int128_t var_2c8
var_2c8.q = rax_399
int32_t var_290 = 0
sub_1419870b0(arg2, &var_2e8, 2)
void*** rcx_281 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
arg4 = zx.o(*(arg3 + 0x15a0))
arg5 = zx.o(*(arg3 + 0x159c))
arg6 = zx.o(*(arg3 + 0x1598))
void* rax_400 = &rcx_281[5]
uint128_t zmm6_5 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
arg4 = _mm_cvtepi32_ps(arg4)
arg5 = _mm_cvtepi32_ps(arg5)
arg6 = _mm_cvtepi32_ps(arg6)

if (rax_400 u> *(arg2 + 0x38))
    zmm6_5 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_281 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_400 = &rcx_281[5]

*(arg2 + 0x30) = rax_400
void**** rax_401 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_401 = rcx_281
*(arg2 + 8) = &rcx_281[1]
rcx_281[1] = 0
*rcx_281 = &data_142d54998
rcx_281[2].d = arg6.d
*(rcx_281 + 0x14) = arg5.d
*(rcx_281 + 0x1c) = arg4.d
rcx_281[4].d = zmm6_5.d
rcx_281[3].d = 0
*(rcx_281 + 0x24) = 0x3f800000
void* rcx_285 = var_c50[2]
var_c00 = rcx_285

if (rcx_285 != 0)
    *(rcx_285 + 8) += 1

void* rcx_286 = var_c58[2]
void* var_be0 = rcx_286

if (rcx_286 != 0)
    *(rcx_286 + 8) += 1

void* rcx_287 = var_c68[2]
var_c20 = rcx_287

if (rcx_287 != 0)
    *(rcx_287 + 8) += 1

void* rcx_288 = var_c70[2]
var_c18 = rcx_288

if (rcx_288 != 0)
    *(rcx_288 + 8) += 1

void* rcx_289 = var_c48[2]
var_c10 = rcx_289

if (rcx_289 != 0)
    *(rcx_289 + 8) += 1

void* rcx_290 = data_143f10e68
void* rax_408 = *(rcx_290 + 0x10)
var_c88.q = rax_408

if (rax_408 != 0)
    *(rax_408 + 8) += 1
    rcx_290 = data_143f10e68

void* rax_409 = *(rcx_290 + 0x10)
var_c98.q = rax_409

if (rax_409 != 0)
    *(rax_409 + 8) += 1

int32_t rcx_291 = *(data_143e8f018 + 4)

if (rcx_291 s<= 0xffffffff)
    rcx_291 = *(arg3 + 0x12fc)

void* rdx_104 = *(rax_2 + 0xc20)
int32_t rax_412

if (rdx_104 == 0 || data_143eaa020 s>= rcx_291)
    rax_412 = 0
else
    sub_1408c8cf0(&var_c88, *(rdx_104 + 0x10))
    sub_1408c8cf0(&var_c98, *(*(rax_2 + 0xc28) + 0x10))
    rax_412 = data_143eaa020 + 1

void* r9_21 = var_c00
data_143eaa024 += 1
data_143eaa020 = rax_412
var_d10.q = var_c98.q
var_d18.q = var_c88.q
char var_d20_10
var_d20_10.q = var_c10
char var_d28_10
var_d28_10.q = var_c18
char var_d30_13
var_d30_13.q = var_c20
void* r9_22 = sub_1412575e0(r13_5, arg2, arg3, r9_21, var_be0, var_d30_13, var_d28_10, var_d20_10, 
    var_d18, var_d10)
int512_t zmm2_2
zmm2_2.o = zmm10
int32_t rdx_109 = *(arg3 + 0x159c)
int32_t rcx_296 = *(arg3 + 0x15a4) - rdx_109
int32_t r8_29 = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
int64_t rax_420 = *(var_c30 + 0x37c)
int64_t var_cf0
var_cf0.d = 1
var_c30:4.d = rcx_296
int32_t* var_cf8
var_cf8.d = 0
uint128_t var_8a8
int128_t* var_d00_3 = &var_8a8
var_8a8 = var_908
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_296))
var_c30.d = r8_29
var_d10.q = var_c30
zmm3.o = zx.o(r8_29)
int32_t var_d18_1 = zmm4.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
var_d20_10.d = zmm3.d
var_d28_10.d = _mm_cvtepi32_ps(zx.o(rdx_109)).d
uint128_t zmm1_5 = _mm_cvtepi32_ps(zx.o(rcx_31))
var_d30_13.d = zmm1_5.d
void* var_d38_14
var_d38_14.d = zmm4.d
sub_1413993b0(arg2, zmm1_5, zmm2_2, r9_22, zmm3, var_d38_14.d, var_d30_13, var_d28_10, var_d20_10, 
    var_d18_1, var_d10, rax_420, var_d00_3, var_cf8.d, var_cf0.d)
sub_1405d1550(&var_c98)
sub_1405d1550(&var_c88)
sub_1405d1550(&var_c10)
sub_1405d1550(&var_c18)
sub_1405d1550(&var_c20)
sub_1405d1550(&var_be0)
sub_1405d1550(&var_c00)
sub_141096650(arg2)
int64_t* rax_422 = var_c78
uint128_t var_a18 = data_142d57d10
uint128_t zmm0_11 = data_142d57920
int128_t var_a08 = data_142d3f800
int64_t r13_6 = rax_422[2]
int64_t* r15_27 = rax_422[1]
void*** rdi_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_423 = &rdi_52[0xa]

if (rax_423 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_423 = &rdi_52[0xa]

*(arg2 + 0x30) = rax_423
int64_t* rax_424 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_424 = rdi_52
*(arg2 + 8) = &rdi_52[1]
rdi_52[1] = 0
*rdi_52 = &data_142d56628
rdi_52[2].d = var_a18.d
__builtin_memset(rdi_52 + 0x14, 0xff, 0x20)
*(rdi_52 + 0x34) = zmm0_11:4.d
rdi_52[7].d = zmm0_11:8.d
*(rdi_52 + 0x3c) = zmm0_11:0xc.d
rdi_52[8] = r15_27
rdi_52[9] = r13_6

if ((*(*r15_27 + 8))(r15_27) == 0)
    int64_t* rcx_308 = rdi_52[8]
    
    if ((*(*rcx_308 + 0x18))(rcx_308) == 0)
        int64_t* rcx_309 = rdi_52[8]
        
        if ((*(*rcx_309 + 0x20))(rcx_309) == 0)
            int64_t* rcx_310 = rdi_52[8]
            (*(*rcx_310 + 0x10))(rcx_310)

int64_t* rcx_311 = rdi_52[9]

if ((*(*rcx_311 + 8))(rcx_311) == 0)
    int64_t* rcx_312 = rdi_52[9]
    
    if ((*(*rcx_312 + 0x18))(rcx_312) == 0)
        int64_t* rcx_313 = rdi_52[9]
        
        if ((*(*rcx_313 + 0x20))(rcx_313) == 0)
            int64_t* rcx_314 = rdi_52[9]
            (*(*rcx_314 + 0x10))(rcx_314)

int64_t* rax_444 = var_c60
uint128_t var_9e8 = data_142d57d10
void*** rdi_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
zmm0_11 = data_142d57920
int128_t var_9d8 = data_142d3f800
int64_t r13_7 = rax_444[2]
int64_t* r15_28 = rax_444[1]
void* rax_445 = &rdi_57[0xa]

if (rax_445 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rdi_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_445 = &rdi_57[0xa]

*(arg2 + 0x30) = rax_445
int64_t* rax_446 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_446 = rdi_57
*(arg2 + 8) = &rdi_57[1]
rdi_57[1] = 0
*rdi_57 = &data_142d56628
rdi_57[2].d = var_9e8.d
__builtin_memset(rdi_57 + 0x14, 0xff, 0x20)
*(rdi_57 + 0x34) = zmm0_11:4.d
rdi_57[7].d = zmm0_11:8.d
*(rdi_57 + 0x3c) = zmm0_11:0xc.d
rdi_57[8] = r15_28
rdi_57[9] = r13_7

if ((*(*r15_28 + 8))(r15_28) == 0)
    int64_t* rcx_317 = rdi_57[8]
    
    if ((*(*rcx_317 + 0x18))(rcx_317) == 0)
        int64_t* rcx_318 = rdi_57[8]
        
        if ((*(*rcx_318 + 0x20))(rcx_318) == 0)
            int64_t* rcx_319 = rdi_57[8]
            (*(*rcx_319 + 0x10))(rcx_319)

int64_t* rcx_320 = rdi_57[9]

if ((*(*rcx_320 + 8))(rcx_320) == 0)
    int64_t* rcx_321 = rdi_57[9]
    
    if ((*(*rcx_321 + 0x18))(rcx_321) == 0)
        int64_t* rcx_322 = rdi_57[9]
        
        if ((*(*rcx_322 + 0x20))(rcx_322) == 0)
            int64_t* rcx_323 = rdi_57[9]
            (*(*rcx_323 + 0x10))(rcx_323)

sub_1410ebe80(rax_2 + 0xc20, var_c78)
sub_1410ebe80(rax_2 + 0xc28, var_c60)
void* rcx_326 = data_143e8f578
*(rcx_326 + 4)
void* r13_8

if (mods.dp.d(sx.q(data_143eaa020), *(rcx_326 + 4)) != 0)
    r13_8 = arg3
else
    void* rcx_327 = var_c78[2]
    void* var_9a0 = rcx_327
    
    if (rcx_327 != 0)
        *(rcx_327 + 8) += 1
    
    r13_8 = arg3
    var_d30_13.q = rax_2 + 0xc48
    sub_1412607c0(arg1, arg2, r13_8, &var_9a0, *(rax_2 + 0xc40), var_d30_13)

void** r9_24 = *(rax_2 + 0xc40)
int32_t var_950 = *(rax_2 + 0xc50)
uint64_t var_958
int64_t* var_d38_16 = &var_958
var_958 = *(rax_2 + 0xc48)
int512_t zmm7
int512_t zmm8
int512_t zmm9
zmm7, zmm8, zmm9 = sub_1412e8e50(arg1, arg2, r13_8, r9_24, var_d38_16)
sub_141427c70(arg1, arg2)
void var_e0
sub_1405d1550(&var_e0)
int64_t* rcx_332 = var_c60

if (rcx_332 != 0)
    (*(*rcx_332 + 0x38))(rcx_332)

int64_t* rcx_333 = var_c78

if (rcx_333 != 0)
    (*(*rcx_333 + 0x38))(rcx_333)

int64_t* rcx_334 = var_c48

if (rcx_334 != 0)
    (*(*rcx_334 + 0x38))(rcx_334)

int64_t* rcx_335 = var_c70

if (rcx_335 != 0)
    (*(*rcx_335 + 0x38))(rcx_335)

int64_t* rcx_336 = var_c68

if (rcx_336 != 0)
    (*(*rcx_336 + 0x38))(rcx_336)

int64_t* rcx_337 = var_c58

if (rcx_337 != 0)
    (*(*rcx_337 + 0x38))(rcx_337)

int64_t* rcx_338 = var_c50

if (rcx_338 != 0)
    (*(*rcx_338 + 0x38))(rcx_338)

if (*(arg2 + 0x8c) != rbx_40)
    bool cond:9_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rbx_40
    
    if (cond:9_1)
        void*** rdx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_480 = &rdx_119[3]
        
        if (rax_480 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_480 = &rdx_119[3]
        
        *(arg2 + 0x30) = rax_480
        int64_t* rax_481 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_481 = rdx_119
        int32_t rax_482 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_119[1]
        rdx_119[1] = 0
        *rdx_119 = &data_142f11588
        rdx_119[2].d = rax_482
    else
        *(arg2 + 0x90) = rbx_40

int64_t result = sub_1405d1550(&var_2f8)
int64_t* rcx_342 = var_cc0

if (rcx_342 != 0)
    result = (*(*rcx_342 + 0x38))(rcx_342)

int64_t* rcx_343 = var_cb8

if (rcx_343 != 0)
    result = (*(*rcx_343 + 0x38))(rcx_343)

int64_t* rcx_344 = var_cb0

if (rcx_344 != 0)
    result = (*(*rcx_344 + 0x38))(rcx_344)

int64_t* rcx_345 = var_ca8

if (rcx_345 != 0)
    result = (*(*rcx_345 + 0x38))(rcx_345)

__security_check_cookie(rax_1 ^ &var_d58)
zmm7.o = var_58
zmm8.o = var_68
zmm9.o = var_78
return result
