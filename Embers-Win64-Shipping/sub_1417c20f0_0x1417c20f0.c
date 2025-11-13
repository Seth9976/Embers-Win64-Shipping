// 函数: sub_1417c20f0
// 地址: 0x1417c20f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
int64_t i_5 = 0
void*** arg_20 = rax
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
    arg_20 = nullptr
else
    r14[1] = arg3
    *r14 = &data_142fc9ad8

int32_t rax_2 = (*r14)[1](r14)
int32_t var_a0
sub_1405b3620(&arg2[2], &var_a0)
int32_t rcx_2 = var_a0
int32_t* var_98
*var_98 = rax_2
*(var_98 + 8) = r14
var_98[4] = 0xffffffff
int64_t arg_18
sub_14104a220(&arg2[2], &arg_18, rax_2, var_98, rcx_2, nullptr)
int64_t* r12_1 = *(arg1 + 0x20)
int64_t rcx_4 = *(arg1 + 0x18)
int64_t r13_1 = sx.q(arg3[1].d)
int64_t r14_1 = sx.q(*(*arg2 + 8))
int128_t zmm6 = *(arg1 + 0x10)
arg_18 = rcx_4
int128_t zmm0_1

if (r12_1 == 0)
label_1417c269f:
    int64_t* rcx_40 = *(arg1 + 0x18)
    
    if (rcx_40 != 0 && (*(*rcx_40 + 8))(rcx_40) == 3)
        int64_t* rcx_39 = *(arg1 + 0x18)
        (*(*rcx_39 + 0x30))(rcx_39, arg2, arg3)
else if (rcx_4 == 0)
    if ((*(*r12_1 + 8))(r12_1) != 3)
        goto label_1417c269f
    
    (*(*r12_1 + 0x30))(r12_1, arg2, arg3)
else
    int32_t rax_4 = (r13_1 << 1).d
    int64_t var_b0 = 0
    int64_t var_a8_1 = 0
    
    if (rax_4 s> 0)
        var_a8_1.d = rax_4
        sub_1406105e0(&var_b0)
    else if (rax_4 s< 0 && rax_4 != 0)
        var_a8_1.d = rax_4
        sub_1405dac90(&var_b0)
    
    int64_t rcx_7 = var_b0
    int64_t rax_5 = arg_18
    int64_t var_80 = rcx_7
    int32_t var_78_1 = r13_1.d
    int64_t rcx_8 = rcx_7 + (r13_1 << 2)
    int32_t var_68_1 = r13_1.d
    int64_t i_6 = 2
    int64_t var_88_1 = rax_5
    var_a0.q = 0
    var_98.d = 2
    sub_1405c4a00(&var_a0, 2, 0)
    int128_t* r15_1 = var_a0.q
    int64_t* r12_2 = &var_80
    *r15_1 = r12_1.o
    int64_t i
    
    do
        int64_t* rcx_10 = *r15_1
        
        if ((*(*rcx_10 + 8))(rcx_10) == 3)
            int64_t* rcx_11 = *r15_1
            (*(*rcx_11 + 0x30))(rcx_11, arg2, r12_2)
        
        r12_2 = &r12_2[2]
        r15_1 += 8
        i = i_6
        i_6 -= 1
    while (i != 1)
    int32_t rcx_13 = *(arg1 + 0x28)
    
    if (rcx_13 == 0)
        int64_t i_1 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rdx_20 = sx.q(*(**arg2 + (i_1 << 3) + 4))
                zmm0_1.d = (*(rcx_8 + (rdx_20 << 2))).d f* *(var_80 + (rdx_20 << 2))
                *(*arg3 + (rdx_20 << 2)) = zmm0_1.d
                int64_t rdx_21 = sx.q(*(**arg2 + (i_1 << 3) + 0xc))
                zmm0_1.d = (*(rcx_8 + (rdx_21 << 2))).d f* *(var_80 + (rdx_21 << 2))
                *(*arg3 + (rdx_21 << 2)) = zmm0_1.d
                int64_t rdx_22 = sx.q(*(**arg2 + (i_1 << 3) + 0x14))
                zmm0_1.d = (*(rcx_8 + (rdx_22 << 2))).d f* *(var_80 + (rdx_22 << 2))
                *(*arg3 + (rdx_22 << 2)) = zmm0_1.d
                int64_t rdx_23 = sx.q(*(**arg2 + (i_1 << 3) + 0x1c))
                i_1 += 4
                zmm0_1.d = (*(rcx_8 + (rdx_23 << 2))).d f* *(var_80 + (rdx_23 << 2))
                *(*arg3 + (rdx_23 << 2)) = zmm0_1.d
            while (i_1 s< r14_1 - 3)
        
        while (i_1 s< r14_1)
            int64_t rdx_24 = sx.q(*(**arg2 + (i_1 << 3) + 4))
            i_1 += 1
            zmm0_1.d = (*(rcx_8 + (rdx_24 << 2))).d f* *(var_80 + (rdx_24 << 2))
            *(*arg3 + (rdx_24 << 2)) = zmm0_1.d
    else if (rcx_13 == 1)
        int64_t i_2 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rdx_15 = sx.q(*(**arg2 + (i_2 << 3) + 4))
                zmm0_1.d = (*(var_80 + (rdx_15 << 2))).d f/ *(rcx_8 + (rdx_15 << 2))
                *(*arg3 + (rdx_15 << 2)) = zmm0_1.d
                int64_t rdx_16 = sx.q(*(**arg2 + (i_2 << 3) + 0xc))
                zmm0_1.d = (*(var_80 + (rdx_16 << 2))).d f/ *(rcx_8 + (rdx_16 << 2))
                *(*arg3 + (rdx_16 << 2)) = zmm0_1.d
                int64_t rdx_17 = sx.q(*(**arg2 + (i_2 << 3) + 0x14))
                zmm0_1.d = (*(var_80 + (rdx_17 << 2))).d f/ *(rcx_8 + (rdx_17 << 2))
                *(*arg3 + (rdx_17 << 2)) = zmm0_1.d
                int64_t rdx_18 = sx.q(*(**arg2 + (i_2 << 3) + 0x1c))
                i_2 += 4
                zmm0_1.d = (*(var_80 + (rdx_18 << 2))).d f/ *(rcx_8 + (rdx_18 << 2))
                *(*arg3 + (rdx_18 << 2)) = zmm0_1.d
            while (i_2 s< r14_1 - 3)
        
        while (i_2 s< r14_1)
            int64_t rdx_19 = sx.q(*(**arg2 + (i_2 << 3) + 4))
            i_2 += 1
            zmm0_1.d = (*(var_80 + (rdx_19 << 2))).d f/ *(rcx_8 + (rdx_19 << 2))
            *(*arg3 + (rdx_19 << 2)) = zmm0_1.d
    else if (rcx_13 == 2)
        int64_t i_3 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rdx_10 = sx.q(*(**arg2 + (i_3 << 3) + 4))
                zmm0_1.d = (*(rcx_8 + (rdx_10 << 2))).d f+ *(var_80 + (rdx_10 << 2))
                *(*arg3 + (rdx_10 << 2)) = zmm0_1.d
                int64_t rdx_11 = sx.q(*(**arg2 + (i_3 << 3) + 0xc))
                zmm0_1.d = (*(rcx_8 + (rdx_11 << 2))).d f+ *(var_80 + (rdx_11 << 2))
                *(*arg3 + (rdx_11 << 2)) = zmm0_1.d
                int64_t rdx_12 = sx.q(*(**arg2 + (i_3 << 3) + 0x14))
                zmm0_1.d = (*(rcx_8 + (rdx_12 << 2))).d f+ *(var_80 + (rdx_12 << 2))
                *(*arg3 + (rdx_12 << 2)) = zmm0_1.d
                int64_t rdx_13 = sx.q(*(**arg2 + (i_3 << 3) + 0x1c))
                i_3 += 4
                zmm0_1.d = (*(rcx_8 + (rdx_13 << 2))).d f+ *(var_80 + (rdx_13 << 2))
                *(*arg3 + (rdx_13 << 2)) = zmm0_1.d
            while (i_3 s< r14_1 - 3)
        
        while (i_3 s< r14_1)
            int64_t rdx_14 = sx.q(*(**arg2 + (i_3 << 3) + 4))
            i_3 += 1
            zmm0_1.d = (*(rcx_8 + (rdx_14 << 2))).d f+ *(var_80 + (rdx_14 << 2))
            *(*arg3 + (rdx_14 << 2)) = zmm0_1.d
    else if (rcx_13 == 3)
        int64_t i_4 = 0
        
        if (r14_1 s>= 4)
            do
                int64_t rdx_5 = sx.q(*(**arg2 + (i_4 << 3) + 4))
                zmm0_1.d = (*(var_80 + (rdx_5 << 2))).d f- *(rcx_8 + (rdx_5 << 2))
                *(*arg3 + (rdx_5 << 2)) = zmm0_1.d
                int64_t rdx_6 = sx.q(*(**arg2 + (i_4 << 3) + 0xc))
                zmm0_1.d = (*(var_80 + (rdx_6 << 2))).d f- *(rcx_8 + (rdx_6 << 2))
                *(*arg3 + (rdx_6 << 2)) = zmm0_1.d
                int64_t rdx_7 = sx.q(*(**arg2 + (i_4 << 3) + 0x14))
                zmm0_1.d = (*(var_80 + (rdx_7 << 2))).d f- *(rcx_8 + (rdx_7 << 2))
                *(*arg3 + (rdx_7 << 2)) = zmm0_1.d
                int64_t rdx_8 = sx.q(*(**arg2 + (i_4 << 3) + 0x1c))
                i_4 += 4
                zmm0_1.d = (*(var_80 + (rdx_8 << 2))).d f- *(rcx_8 + (rdx_8 << 2))
                *(*arg3 + (rdx_8 << 2)) = zmm0_1.d
            while (i_4 s< r14_1 - 3)
        
        while (i_4 s< r14_1)
            int64_t rdx_9 = sx.q(*(**arg2 + (i_4 << 3) + 4))
            i_4 += 1
            zmm0_1.d = (*(var_80 + (rdx_9 << 2))).d f- *(rcx_8 + (rdx_9 << 2))
            *(*arg3 + (rdx_9 << 2)) = zmm0_1.d
    
    int64_t rax_89 = var_a0.q
    
    if (rax_89 != 0)
        sub_140a74f90(rax_89)
    
    int64_t rax_90 = var_b0
    
    if (rax_90 != 0)
        sub_140a74f90(rax_90)

if (not(zmm6.d f== 1f))
    if (r14_1 s>= 4)
        do
            int64_t rax_97 = *arg3
            int64_t rdx_26 = sx.q(*(**arg2 + (i_5 << 3) + 4))
            zmm0_1.d = zmm6.d f* *(rax_97 + (rdx_26 << 2))
            *(rax_97 + (rdx_26 << 2)) = zmm0_1.d
            int64_t rax_99 = *arg3
            int64_t rdx_27 = sx.q(*(**arg2 + (i_5 << 3) + 0xc))
            zmm0_1.d = zmm6.d f* *(rax_99 + (rdx_27 << 2))
            *(rax_99 + (rdx_27 << 2)) = zmm0_1.d
            int64_t rax_101 = *arg3
            int64_t rdx_28 = sx.q(*(**arg2 + (i_5 << 3) + 0x14))
            zmm0_1.d = zmm6.d f* *(rax_101 + (rdx_28 << 2))
            *(rax_101 + (rdx_28 << 2)) = zmm0_1.d
            int64_t rax_103 = *arg3
            int64_t rdx_29 = sx.q(*(**arg2 + (i_5 << 3) + 0x1c))
            i_5 += 4
            zmm0_1.d = zmm6.d f* *(rax_103 + (rdx_29 << 2))
            *(rax_103 + (rdx_29 << 2)) = zmm0_1.d
        while (i_5 s< r14_1 - 3)
    
    while (i_5 s< r14_1)
        int64_t rax_105 = *arg3
        int64_t rdx_30 = sx.q(*(**arg2 + (i_5 << 3) + 4))
        i_5 += 1
        zmm0_1.d = zmm6.d f* *(rax_105 + (rdx_30 << 2))
        *(rax_105 + (rdx_30 << 2)) = zmm0_1.d

sub_140bb5c10(&arg2[2], rax_2)
jump(**arg_20)
