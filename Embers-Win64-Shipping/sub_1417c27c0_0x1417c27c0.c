// 函数: sub_1417c27c0
// 地址: 0x1417c27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)
int64_t i_5 = 0
int64_t* arg_18 = rax
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
    arg_18 = nullptr
else
    r14[1] = arg3
    *r14 = &data_142fc9ad8

int32_t rax_2 = (*r14)[1](r14)
int32_t var_90
sub_1405b3620(&arg2[2], &var_90)
int32_t rcx_2 = var_90
int32_t* var_88
*var_88 = rax_2
*(var_88 + 8) = r14
var_88[4] = 0xffffffff
int64_t* arg_10
sub_14104a220(&arg2[2], &arg_10, rax_2, var_88, rcx_2, nullptr)
int64_t* rax_3 = *(arg1 + 0x18)
int64_t* rcx_4 = *(arg1 + 0x20)
int64_t r12_1 = sx.q(arg3[1].d)
int64_t* r15_1 = *(arg1 + 0x28)
float zmm6[0x4] = *(arg1 + 0x10)
void* rax_4 = *arg2
arg_10 = rcx_4
int64_t r14_1 = sx.q(*(rax_4 + 8))
int64_t zmm1_1
float zmm2[0x4]

if (rcx_4 == 0)
    if (r15_1 != 0)
        (*(*r15_1 + 0x30))(r15_1, arg2, arg3)
else if (r15_1 == 0)
    (*(*rcx_4 + 0x30))(rcx_4, arg2, arg3)
else
    int32_t rax_5 = (r12_1 * 2).d
    var_90.q = 0
    int64_t var_88_1 = 0
    
    if (rax_5 s> 0)
        var_88_1.d = rax_5
        sub_140638a00(&var_90)
    else if (rax_5 s< 0 && rax_5 != 0)
        var_88_1.d = rax_5
        sub_140775970(&var_90)
    
    int64_t rcx_7 = var_90.q
    int64_t var_80 = rcx_7
    int32_t var_78_1 = r12_1.d
    int32_t var_68_1 = r12_1.d
    int64_t var_70 = rcx_7 + r12_1 * 0xc
    (*(*r15_1 + 0x30))(r15_1, arg2, &var_80)
    int64_t* rcx_9 = arg_10
    (*(*rcx_9 + 0x30))(rcx_9, arg2, &var_70)
    int32_t rcx_10 = *(arg1 + 0x30)
    float zmm0_1[0x4]
    
    if (rcx_10 == 0)
        int64_t i = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rcx_59 = var_80
                int64_t rdx_22 = sx.q(*(**arg2 + (i << 3) + 4)) * 3
                int64_t rax_71 = var_70
                zmm2 = *(rax_71 + (rdx_22 << 2))
                zmm2[0] = zmm2[0] f* *(rcx_59 + (rdx_22 << 2))
                zmm0_1 = *(rax_71 + (rdx_22 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_59 + (rdx_22 << 2) + 8)
                zmm1_1.d = (*(rax_71 + (rdx_22 << 2) + 4)).d f* *(rcx_59 + (rdx_22 << 2) + 4)
                int64_t rcx_60 = *arg3
                float var_98_16 = zmm0_1[0]
                *(rcx_60 + (rdx_22 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_60 + (rdx_22 << 2) + 8) = var_98_16
                int64_t rcx_62 = var_80
                int64_t rdx_23 = sx.q(*(**arg2 + (i << 3) + 0xc)) * 3
                int64_t rax_75 = var_70
                zmm2 = *(rax_75 + (rdx_23 << 2))
                zmm2[0] = zmm2[0] f* *(rcx_62 + (rdx_23 << 2))
                zmm0_1 = *(rax_75 + (rdx_23 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_62 + (rdx_23 << 2) + 8)
                zmm1_1.d = (*(rax_75 + (rdx_23 << 2) + 4)).d f* *(rcx_62 + (rdx_23 << 2) + 4)
                int64_t rcx_63 = *arg3
                float var_98_17 = zmm0_1[0]
                *(rcx_63 + (rdx_23 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_63 + (rdx_23 << 2) + 8) = var_98_17
                int64_t rcx_65 = var_80
                int64_t rdx_24 = sx.q(*(**arg2 + (i << 3) + 0x14)) * 3
                int64_t rax_79 = var_70
                zmm2 = *(rax_79 + (rdx_24 << 2))
                zmm0_1 = *(rax_79 + (rdx_24 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_65 + (rdx_24 << 2) + 8)
                zmm2[0] = zmm2[0] f* *(rcx_65 + (rdx_24 << 2))
                zmm1_1.d = (*(rax_79 + (rdx_24 << 2) + 4)).d f* *(rcx_65 + (rdx_24 << 2) + 4)
                int64_t rcx_66 = *arg3
                float var_98_18 = zmm0_1[0]
                *(rcx_66 + (rdx_24 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_66 + (rdx_24 << 2) + 8) = var_98_18
                int64_t rax_82 = sx.q(*(**arg2 + (i << 3) + 0x1c))
                i += 4
                int64_t rcx_68 = var_80
                int64_t rdx_25 = rax_82 * 3
                int64_t rax_83 = var_70
                zmm0_1 = *(rax_83 + (rdx_25 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f* *(rcx_68 + (rdx_25 << 2) + 8)
                zmm2 = *(rax_83 + (rdx_25 << 2))
                zmm2[0] = zmm2[0] f* *(rcx_68 + (rdx_25 << 2))
                zmm1_1.d = (*(rax_83 + (rdx_25 << 2) + 4)).d f* *(rcx_68 + (rdx_25 << 2) + 4)
                int64_t rcx_69 = *arg3
                float var_98_19 = zmm0_1[0]
                *(rcx_69 + (rdx_25 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_69 + (rdx_25 << 2) + 8) = var_98_19
            while (i s< r14_1 - 3)
        
        while (i s< r14_1)
            int64_t rdx_26 = *arg3
            int64_t rax_86 = sx.q(*(**arg2 + (i << 3) + 4))
            i += 1
            int64_t rcx_71 = var_80
            int64_t r8_4 = rax_86 * 3
            int64_t rax_87 = var_70
            zmm0_1 = *(rax_87 + (r8_4 << 2) + 8)
            zmm2 = *(rax_87 + (r8_4 << 2))
            zmm0_1[0] = zmm0_1[0] f* *(rcx_71 + (r8_4 << 2) + 8)
            zmm1_1 = *(rax_87 + (r8_4 << 2) + 4)
            zmm2[0] = zmm2[0] f* *(rcx_71 + (r8_4 << 2))
            zmm1_1.d = zmm1_1.d f* *(rcx_71 + (r8_4 << 2) + 4)
            float var_98_20 = zmm0_1[0]
            *(rdx_26 + (r8_4 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
            *(rdx_26 + (r8_4 << 2) + 8) = var_98_20
    else if (rcx_10 == 1)
        int64_t i_1 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rcx_44 = var_70
                int64_t rdx_17 = sx.q(*(**arg2 + (i_1 << 3) + 4)) * 3
                int64_t rax_51 = var_80
                zmm2 = *(rax_51 + (rdx_17 << 2))
                zmm2[0] = zmm2[0] f/ *(rcx_44 + (rdx_17 << 2))
                zmm0_1 = *(rax_51 + (rdx_17 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f/ *(rcx_44 + (rdx_17 << 2) + 8)
                zmm1_1.d = (*(rax_51 + (rdx_17 << 2) + 4)).d f/ *(rcx_44 + (rdx_17 << 2) + 4)
                int64_t rcx_45 = *arg3
                float var_98_11 = zmm0_1[0]
                *(rcx_45 + (rdx_17 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_45 + (rdx_17 << 2) + 8) = var_98_11
                int64_t rcx_47 = var_70
                int64_t rdx_18 = sx.q(*(**arg2 + (i_1 << 3) + 0xc)) * 3
                int64_t rax_55 = var_80
                zmm2 = *(rax_55 + (rdx_18 << 2))
                zmm2[0] = zmm2[0] f/ *(rcx_47 + (rdx_18 << 2))
                zmm0_1 = *(rax_55 + (rdx_18 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f/ *(rcx_47 + (rdx_18 << 2) + 8)
                zmm1_1.d = (*(rax_55 + (rdx_18 << 2) + 4)).d f/ *(rcx_47 + (rdx_18 << 2) + 4)
                int64_t rcx_48 = *arg3
                float var_98_12 = zmm0_1[0]
                *(rcx_48 + (rdx_18 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_48 + (rdx_18 << 2) + 8) = var_98_12
                int64_t rcx_50 = var_70
                int64_t rdx_19 = sx.q(*(**arg2 + (i_1 << 3) + 0x14)) * 3
                int64_t rax_59 = var_80
                zmm2 = *(rax_59 + (rdx_19 << 2))
                zmm0_1 = *(rax_59 + (rdx_19 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f/ *(rcx_50 + (rdx_19 << 2) + 8)
                zmm2[0] = zmm2[0] f/ *(rcx_50 + (rdx_19 << 2))
                zmm1_1.d = (*(rax_59 + (rdx_19 << 2) + 4)).d f/ *(rcx_50 + (rdx_19 << 2) + 4)
                int64_t rcx_51 = *arg3
                float var_98_13 = zmm0_1[0]
                *(rcx_51 + (rdx_19 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_51 + (rdx_19 << 2) + 8) = var_98_13
                int64_t rax_62 = sx.q(*(**arg2 + (i_1 << 3) + 0x1c))
                i_1 += 4
                int64_t rcx_53 = var_70
                int64_t rdx_20 = rax_62 * 3
                int64_t rax_63 = var_80
                zmm0_1 = *(rax_63 + (rdx_20 << 2) + 8)
                zmm2 = *(rax_63 + (rdx_20 << 2))
                zmm1_1 = *(rax_63 + (rdx_20 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f/ *(rcx_53 + (rdx_20 << 2) + 8)
                zmm2[0] = zmm2[0] f/ *(rcx_53 + (rdx_20 << 2))
                float var_98_14 = zmm0_1[0]
                zmm1_1.d = zmm1_1.d f/ *(rcx_53 + (rdx_20 << 2) + 4)
                int64_t rcx_54 = *arg3
                *(rcx_54 + (rdx_20 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_54 + (rdx_20 << 2) + 8) = var_98_14
            while (i_1 s< r14_1 - 3)
        
        while (i_1 s< r14_1)
            int64_t rax_66 = sx.q(*(**arg2 + (i_1 << 3) + 4))
            i_1 += 1
            int64_t rcx_56 = var_70
            int64_t rdx_21 = rax_66 * 3
            int64_t rax_67 = var_80
            zmm0_1 = *(rax_67 + (rdx_21 << 2) + 8)
            zmm2 = *(rax_67 + (rdx_21 << 2))
            zmm1_1 = *(rax_67 + (rdx_21 << 2) + 4)
            zmm0_1[0] = zmm0_1[0] f/ *(rcx_56 + (rdx_21 << 2) + 8)
            zmm2[0] = zmm2[0] f/ *(rcx_56 + (rdx_21 << 2))
            float var_98_15 = zmm0_1[0]
            zmm1_1.d = zmm1_1.d f/ *(rcx_56 + (rdx_21 << 2) + 4)
            int64_t rcx_57 = *arg3
            *(rcx_57 + (rdx_21 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
            *(rcx_57 + (rdx_21 << 2) + 8) = var_98_15
    else if (rcx_10 == 2)
        int64_t i_2 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rcx_29 = var_80
                int64_t rdx_12 = sx.q(*(**arg2 + (i_2 << 3) + 4)) * 3
                int64_t rax_31 = var_70
                zmm0_1 = *(rcx_29 + (rdx_12 << 2) + 8)
                zmm1_1 = *(rcx_29 + (rdx_12 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f+ *(rax_31 + (rdx_12 << 2) + 8)
                zmm1_1.d = zmm1_1.d f+ *(rax_31 + (rdx_12 << 2) + 4)
                zmm2 = *(rax_31 + (rdx_12 << 2))
                zmm2[0] = zmm2[0] f+ *(rcx_29 + (rdx_12 << 2))
                int64_t rcx_30 = *arg3
                float var_98_6 = zmm0_1[0]
                *(rcx_30 + (rdx_12 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_30 + (rdx_12 << 2) + 8) = var_98_6
                int64_t rcx_32 = var_80
                int64_t rdx_13 = sx.q(*(**arg2 + (i_2 << 3) + 0xc)) * 3
                int64_t rax_35 = var_70
                zmm0_1 = *(rcx_32 + (rdx_13 << 2) + 8)
                zmm1_1 = *(rcx_32 + (rdx_13 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f+ *(rax_35 + (rdx_13 << 2) + 8)
                zmm1_1.d = zmm1_1.d f+ *(rax_35 + (rdx_13 << 2) + 4)
                zmm2 = *(rax_35 + (rdx_13 << 2))
                zmm2[0] = zmm2[0] f+ *(rcx_32 + (rdx_13 << 2))
                int64_t rcx_33 = *arg3
                float var_98_7 = zmm0_1[0]
                *(rcx_33 + (rdx_13 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_33 + (rdx_13 << 2) + 8) = var_98_7
                int64_t rcx_35 = var_80
                int64_t rdx_14 = sx.q(*(**arg2 + (i_2 << 3) + 0x14)) * 3
                int64_t rax_39 = var_70
                zmm0_1 = *(rcx_35 + (rdx_14 << 2) + 8)
                zmm1_1 = *(rcx_35 + (rdx_14 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f+ *(rax_39 + (rdx_14 << 2) + 8)
                zmm2 = *(rax_39 + (rdx_14 << 2))
                zmm1_1.d = zmm1_1.d f+ *(rax_39 + (rdx_14 << 2) + 4)
                zmm2[0] = zmm2[0] f+ *(rcx_35 + (rdx_14 << 2))
                int64_t rcx_36 = *arg3
                float var_98_8 = zmm0_1[0]
                *(rcx_36 + (rdx_14 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_36 + (rdx_14 << 2) + 8) = var_98_8
                int64_t rax_42 = sx.q(*(**arg2 + (i_2 << 3) + 0x1c))
                i_2 += 4
                int64_t rcx_38 = var_80
                int64_t rdx_15 = rax_42 * 3
                int64_t rax_43 = var_70
                zmm0_1 = *(rcx_38 + (rdx_15 << 2) + 8)
                zmm1_1 = *(rcx_38 + (rdx_15 << 2) + 4)
                zmm2 = *(rax_43 + (rdx_15 << 2))
                zmm0_1[0] = zmm0_1[0] f+ *(rax_43 + (rdx_15 << 2) + 8)
                zmm2[0] = zmm2[0] f+ *(rcx_38 + (rdx_15 << 2))
                int64_t rcx_39 = *arg3
                zmm1_1.d = zmm1_1.d f+ *(rax_43 + (rdx_15 << 2) + 4)
                float var_98_9 = zmm0_1[0]
                *(rcx_39 + (rdx_15 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_39 + (rdx_15 << 2) + 8) = var_98_9
            while (i_2 s< r14_1 - 3)
        
        while (i_2 s< r14_1)
            int64_t rax_46 = sx.q(*(**arg2 + (i_2 << 3) + 4))
            i_2 += 1
            int64_t rcx_41 = var_80
            int64_t rdx_16 = rax_46 * 3
            int64_t rax_47 = var_70
            zmm0_1 = *(rcx_41 + (rdx_16 << 2) + 8)
            zmm1_1 = *(rcx_41 + (rdx_16 << 2) + 4)
            zmm2 = *(rax_47 + (rdx_16 << 2))
            zmm0_1[0] = zmm0_1[0] f+ *(rax_47 + (rdx_16 << 2) + 8)
            zmm2[0] = zmm2[0] f+ *(rcx_41 + (rdx_16 << 2))
            int64_t rcx_42 = *arg3
            zmm1_1.d = zmm1_1.d f+ *(rax_47 + (rdx_16 << 2) + 4)
            float var_98_10 = zmm0_1[0]
            *(rcx_42 + (rdx_16 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
            *(rcx_42 + (rdx_16 << 2) + 8) = var_98_10
    else if (rcx_10 == 3)
        int64_t i_3 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rcx_14 = var_70
                int64_t rdx_7 = sx.q(*(**arg2 + (i_3 << 3) + 4)) * 3
                int64_t rax_11 = var_80
                zmm2 = *(rax_11 + (rdx_7 << 2))
                zmm2[0] = zmm2[0] f- *(rcx_14 + (rdx_7 << 2))
                zmm0_1 = *(rax_11 + (rdx_7 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f- *(rcx_14 + (rdx_7 << 2) + 8)
                zmm1_1.d = (*(rax_11 + (rdx_7 << 2) + 4)).d f- *(rcx_14 + (rdx_7 << 2) + 4)
                int64_t rcx_15 = *arg3
                float var_98_1 = zmm0_1[0]
                *(rcx_15 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_15 + (rdx_7 << 2) + 8) = var_98_1
                int64_t rcx_17 = var_70
                int64_t rdx_8 = sx.q(*(**arg2 + (i_3 << 3) + 0xc)) * 3
                int64_t rax_15 = var_80
                zmm2 = *(rax_15 + (rdx_8 << 2))
                zmm2[0] = zmm2[0] f- *(rcx_17 + (rdx_8 << 2))
                zmm0_1 = *(rax_15 + (rdx_8 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f- *(rcx_17 + (rdx_8 << 2) + 8)
                zmm1_1.d = (*(rax_15 + (rdx_8 << 2) + 4)).d f- *(rcx_17 + (rdx_8 << 2) + 4)
                int64_t rcx_18 = *arg3
                float var_98_2 = zmm0_1[0]
                *(rcx_18 + (rdx_8 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_18 + (rdx_8 << 2) + 8) = var_98_2
                int64_t rcx_20 = var_70
                int64_t rdx_9 = sx.q(*(**arg2 + (i_3 << 3) + 0x14)) * 3
                int64_t rax_19 = var_80
                zmm2 = *(rax_19 + (rdx_9 << 2))
                zmm0_1 = *(rax_19 + (rdx_9 << 2) + 8)
                zmm0_1[0] = zmm0_1[0] f- *(rcx_20 + (rdx_9 << 2) + 8)
                zmm2[0] = zmm2[0] f- *(rcx_20 + (rdx_9 << 2))
                zmm1_1.d = (*(rax_19 + (rdx_9 << 2) + 4)).d f- *(rcx_20 + (rdx_9 << 2) + 4)
                int64_t rcx_21 = *arg3
                float var_98_3 = zmm0_1[0]
                *(rcx_21 + (rdx_9 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_21 + (rdx_9 << 2) + 8) = var_98_3
                int64_t rax_22 = sx.q(*(**arg2 + (i_3 << 3) + 0x1c))
                i_3 += 4
                int64_t rcx_23 = var_70
                int64_t rdx_10 = rax_22 * 3
                int64_t rax_23 = var_80
                zmm0_1 = *(rax_23 + (rdx_10 << 2) + 8)
                zmm2 = *(rax_23 + (rdx_10 << 2))
                zmm1_1 = *(rax_23 + (rdx_10 << 2) + 4)
                zmm0_1[0] = zmm0_1[0] f- *(rcx_23 + (rdx_10 << 2) + 8)
                zmm2[0] = zmm2[0] f- *(rcx_23 + (rdx_10 << 2))
                zmm1_1.d = zmm1_1.d f- *(rcx_23 + (rdx_10 << 2) + 4)
                int64_t rcx_24 = *arg3
                float var_98_4 = zmm0_1[0]
                *(rcx_24 + (rdx_10 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
                *(rcx_24 + (rdx_10 << 2) + 8) = var_98_4
            while (i_3 s< r14_1 - 3)
        
        while (i_3 s< r14_1)
            int64_t rax_26 = sx.q(*(**arg2 + (i_3 << 3) + 4))
            i_3 += 1
            int64_t rcx_26 = var_70
            int64_t rdx_11 = rax_26 * 3
            int64_t rax_27 = var_80
            zmm0_1 = *(rax_27 + (rdx_11 << 2) + 8)
            zmm2 = *(rax_27 + (rdx_11 << 2))
            zmm1_1 = *(rax_27 + (rdx_11 << 2) + 4)
            zmm0_1[0] = zmm0_1[0] f- *(rcx_26 + (rdx_11 << 2) + 8)
            zmm2[0] = zmm2[0] f- *(rcx_26 + (rdx_11 << 2))
            zmm1_1.d = zmm1_1.d f- *(rcx_26 + (rdx_11 << 2) + 4)
            int64_t rcx_27 = *arg3
            float var_98_5 = zmm0_1[0]
            *(rcx_27 + (rdx_11 << 2)) = (_mm_unpacklo_ps(zmm2, zmm1_1)).q
            *(rcx_27 + (rdx_11 << 2) + 8) = var_98_5
    int64_t rax_89 = var_90.q
    
    if (rax_89 != 0)
        sub_140a74f90(rax_89)

if (rax_3 != 0)
    var_90.q = 0
    int64_t r15_2 = 0
    int64_t var_88_2 = 0
    int32_t temp1_1 = r12_1.d
    
    if (temp1_1 s> 0)
        var_88_2.d = r12_1.d
        sub_1406105e0(&var_90)
        r15_2 = var_90.q
    else if (temp1_1 s< 0 && r12_1.d != 0)
        var_88_2.d = r12_1.d
        sub_1405dac90(&var_90)
        r15_2 = var_90.q
    
    int64_t rax_91 = *rax_3
    int64_t var_a0 = r15_2
    int32_t var_98_21 = r12_1.d
    (*(rax_91 + 0x30))(rax_3, arg2, &var_a0)
    int64_t i_4 = 0
    
    if (r14_1 s>= 4)
        do
            int64_t rax_93 = sx.q(*(**arg2 + (i_4 << 3) + 4))
            zmm2 = *(r15_2 + (rax_93 << 2))
            int64_t rcx_77 = rax_93 * 3
            int64_t rax_94 = *arg3
            zmm1_1 = zmm2[0].q
            zmm2[0] = zmm2[0] f* *(rax_94 + (rcx_77 << 2))
            *(rax_94 + (rcx_77 << 2)) = zmm2[0]
            zmm1_1.d = zmm1_1.d f* *(rax_94 + (rcx_77 << 2) + 4)
            *(rax_94 + (rcx_77 << 2) + 4) = zmm1_1.d
            zmm2[0] = zmm2[0] f* *(rax_94 + (rcx_77 << 2) + 8)
            *(rax_94 + (rcx_77 << 2) + 8) = zmm2[0]
            int64_t rax_96 = sx.q(*(**arg2 + (i_4 << 3) + 0xc))
            zmm2 = *(r15_2 + (rax_96 << 2))
            int64_t rcx_79 = rax_96 * 3
            int64_t rax_97 = *arg3
            zmm1_1 = zmm2[0].q
            zmm2[0] = zmm2[0] f* *(rax_97 + (rcx_79 << 2))
            *(rax_97 + (rcx_79 << 2)) = zmm2[0]
            zmm1_1.d = zmm1_1.d f* *(rax_97 + (rcx_79 << 2) + 4)
            *(rax_97 + (rcx_79 << 2) + 4) = zmm1_1.d
            zmm2[0] = zmm2[0] f* *(rax_97 + (rcx_79 << 2) + 8)
            *(rax_97 + (rcx_79 << 2) + 8) = zmm2[0]
            int64_t rax_99 = sx.q(*(**arg2 + (i_4 << 3) + 0x14))
            zmm2 = *(r15_2 + (rax_99 << 2))
            int64_t rcx_81 = rax_99 * 3
            int64_t rax_100 = *arg3
            zmm1_1 = zmm2[0].q
            zmm2[0] = zmm2[0] f* *(rax_100 + (rcx_81 << 2))
            *(rax_100 + (rcx_81 << 2)) = zmm2[0]
            zmm1_1.d = zmm1_1.d f* *(rax_100 + (rcx_81 << 2) + 4)
            *(rax_100 + (rcx_81 << 2) + 4) = zmm1_1.d
            zmm2[0] = zmm2[0] f* *(rax_100 + (rcx_81 << 2) + 8)
            *(rax_100 + (rcx_81 << 2) + 8) = zmm2[0]
            int64_t rax_102 = sx.q(*(**arg2 + (i_4 << 3) + 0x1c))
            i_4 += 4
            zmm2 = *(r15_2 + (rax_102 << 2))
            int64_t rcx_83 = rax_102 * 3
            int64_t rax_103 = *arg3
            zmm1_1 = zmm2[0].q
            zmm2[0] = zmm2[0] f* *(rax_103 + (rcx_83 << 2))
            *(rax_103 + (rcx_83 << 2)) = zmm2[0]
            zmm1_1.d = zmm1_1.d f* *(rax_103 + (rcx_83 << 2) + 4)
            *(rax_103 + (rcx_83 << 2) + 4) = zmm1_1.d
            zmm2[0] = zmm2[0] f* *(rax_103 + (rcx_83 << 2) + 8)
            *(rax_103 + (rcx_83 << 2) + 8) = zmm2[0]
        while (i_4 s< r14_1 - 3)
    
    while (i_4 s< r14_1)
        int64_t rax_105 = sx.q(*(**arg2 + (i_4 << 3) + 4))
        i_4 += 1
        zmm2 = *(r15_2 + (rax_105 << 2))
        int64_t rdx_31 = rax_105 * 3
        int64_t rax_106 = *arg3
        zmm1_1 = zmm2[0].q
        zmm2[0] = zmm2[0] f* *(rax_106 + (rdx_31 << 2))
        zmm1_1.d = zmm1_1.d f* *(rax_106 + (rdx_31 << 2) + 4)
        zmm2[0] = zmm2[0] f* *(rax_106 + (rdx_31 << 2) + 8)
        *(rax_106 + (rdx_31 << 2)) = zmm2[0]
        *(rax_106 + (rdx_31 << 2) + 4) = zmm1_1.d
        *(rax_106 + (rdx_31 << 2) + 8) = zmm2[0]
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)

if (not(zmm6[0] == 1f))
    if (r14_1 s>= 4)
        do
            zmm1_1 = zmm6[0].q
            int64_t rcx_87 = sx.q(*(**arg2 + (i_5 << 3) + 4)) * 3
            int64_t rax_109 = *arg3
            zmm6[0] = zmm6[0] f* *(rax_109 + (rcx_87 << 2))
            *(rax_109 + (rcx_87 << 2)) = zmm6[0]
            zmm1_1.d = zmm1_1.d f* *(rax_109 + (rcx_87 << 2) + 4)
            *(rax_109 + (rcx_87 << 2) + 4) = zmm1_1.d
            zmm1_1 = zmm6[0].q
            zmm6[0] = zmm6[0] f* *(rax_109 + (rcx_87 << 2) + 8)
            *(rax_109 + (rcx_87 << 2) + 8) = zmm6[0]
            int64_t rcx_89 = sx.q(*(**arg2 + (i_5 << 3) + 0xc)) * 3
            int64_t rax_112 = *arg3
            zmm6[0] = zmm6[0] f* *(rax_112 + (rcx_89 << 2))
            *(rax_112 + (rcx_89 << 2)) = zmm6[0]
            zmm1_1.d = zmm1_1.d f* *(rax_112 + (rcx_89 << 2) + 4)
            *(rax_112 + (rcx_89 << 2) + 4) = zmm1_1.d
            zmm1_1 = zmm6[0].q
            zmm6[0] = zmm6[0] f* *(rax_112 + (rcx_89 << 2) + 8)
            *(rax_112 + (rcx_89 << 2) + 8) = zmm6[0]
            int64_t rcx_91 = sx.q(*(**arg2 + (i_5 << 3) + 0x14)) * 3
            int64_t rax_115 = *arg3
            zmm6[0] = zmm6[0] f* *(rax_115 + (rcx_91 << 2))
            *(rax_115 + (rcx_91 << 2)) = zmm6[0]
            zmm1_1.d = zmm1_1.d f* *(rax_115 + (rcx_91 << 2) + 4)
            *(rax_115 + (rcx_91 << 2) + 4) = zmm1_1.d
            zmm1_1 = zmm6[0].q
            zmm6[0] = zmm6[0] f* *(rax_115 + (rcx_91 << 2) + 8)
            *(rax_115 + (rcx_91 << 2) + 8) = zmm6[0]
            int64_t rax_117 = sx.q(*(**arg2 + (i_5 << 3) + 0x1c))
            i_5 += 4
            int64_t rcx_93 = rax_117 * 3
            int64_t rax_118 = *arg3
            zmm6[0] = zmm6[0] f* *(rax_118 + (rcx_93 << 2))
            *(rax_118 + (rcx_93 << 2)) = zmm6[0]
            zmm1_1.d = zmm1_1.d f* *(rax_118 + (rcx_93 << 2) + 4)
            *(rax_118 + (rcx_93 << 2) + 4) = zmm1_1.d
            zmm6[0] = zmm6[0] f* *(rax_118 + (rcx_93 << 2) + 8)
            *(rax_118 + (rcx_93 << 2) + 8) = zmm6[0]
        while (i_5 s< r14_1 - 3)
    
    while (i_5 s< r14_1)
        zmm1_1 = zmm6[0].q
        int64_t rax_120 = sx.q(*(**arg2 + (i_5 << 3) + 4))
        i_5 += 1
        int64_t rdx_33 = rax_120 * 3
        int64_t rax_121 = *arg3
        zmm6[0] = zmm6[0] f* *(rax_121 + (rdx_33 << 2))
        zmm1_1.d = zmm1_1.d f* *(rax_121 + (rdx_33 << 2) + 4)
        *(rax_121 + (rdx_33 << 2)) = zmm6[0]
        zmm6[0] = zmm6[0] f* *(rax_121 + (rdx_33 << 2) + 8)
        *(rax_121 + (rdx_33 << 2) + 4) = zmm1_1.d
        *(rax_121 + (rdx_33 << 2) + 8) = zmm6[0]

sub_140bb5c10(&arg2[2], rax_2)
jump(**arg_18)
