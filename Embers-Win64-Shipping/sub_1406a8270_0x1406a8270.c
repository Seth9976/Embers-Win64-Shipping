// 函数: sub_1406a8270
// 地址: 0x1406a8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1 + 0x178
void* r15 = arg1
int32_t i_8 = r12[1].d
int64_t* rbx = *r12
int64_t* arg_10 = r12

if (i_8 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_8
        i_8 -= 1
    while (i != 1)

r12[1].d = 0

if (*(r12 + 0xc) != 0)
    sub_14061cd70(r12, 0)

sub_140de8fc0(*(r15 + 0x1e8))
int32_t i_9 = *(r15 + 0x190)
int64_t* rbx_1 = *(r15 + 0x188)

if (i_9 != 0)
    int32_t i_1
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_9
        i_9 -= 1
    while (i_1 != 1)

*(r15 + 0x190) = 0

if (*(r15 + 0x194) != 0)
    sub_14061cd70(r15 + 0x188, 0)

int64_t* rcx_6 = *(r15 + 0x1f8) + 0x2a8
int64_t var_e8

if ((**rcx_6)(rcx_6) s> 0)
    int32_t i_2
    
    do
        int64_t* rcx_7 = *(r15 + 0x1f8)
        int64_t* rax_3 = (*(*rcx_7 + 0x190))(rcx_7)
        int64_t r9_1 = *rax_3
        int64_t* rax_4 = (*(r9_1 + 0x10))(rax_3, &var_e8, 0, r9_1)
        sub_140e213d0(*(r15 + 0x1f8), rax_4)
        int64_t* var_e0
        
        if (var_e0 != 0)
            var_e0[1].d -= 1
            
            if (var_e0[1].d == 1)
                (**var_e0)(var_e0)
                int32_t temp4_1 = *(var_e0 + 0xc)
                *(var_e0 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_e0 + 8))(var_e0, 1)
        
        int64_t* rcx_13 = *(r15 + 0x1f8) + 0x2a8
        i_2 = (**rcx_13)(rcx_13)
    while (i_2 s> 0)

void* r14 = r15 + 0x108
void* arg_18 = r14
int64_t var_f8
int64_t var_d8
int64_t* rax_9 = sub_14069a5b0(&var_f8, sub_140596d10(&var_d8, r14))

if (r14 != rax_9)
    int64_t rcx_16 = *r14
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    *r14 = *rax_9
    *rax_9 = 0
    *(r14 + 8) = rax_9[1].d
    *(r14 + 0xc) = *(rax_9 + 0xc)
    rax_9[1] = 0

int64_t rcx_18 = var_f8

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t var_98
void var_88
sub_140a9fca0(&var_88, sub_140b18970(&var_98, r14))
sub_140f8d4f0(*(r15 + 0x228), &var_88)
int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t rax_15 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*var_80 + 8))(var_80, 1)

int64_t rcx_24 = var_98

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

void var_70
sub_140a9fca0(&var_70, r14)
sub_140f8d4f0(*(r15 + 0x248), &var_70)
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t rdi = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rdi == 1)
            (*(*var_68 + 8))(var_68, zx.q(rdi))

int16_t* const r13 = &data_142d40450
int16_t* const rcx_29

if (*(r14 + 8) == 0)
    rcx_29 = &data_142d40450
else
    rcx_29 = *r14

int32_t var_198
void* r13_1

if (sub_140a54510(rcx_29, &data_142d5a024) != 0)
    char rax_21 = sub_140b12f50(r14)
    
    if (rax_21 != 0 && *(r15 + 0x138) != 0)
        int64_t* var_178 = nullptr
        int32_t var_170_1 = 0
        
        if (sub_140a2ccb0(r15 + 0x2c8, &var_178, U",", 1) s< 1)
            int64_t rbx_7 = sx.q(var_170_1)
            int32_t rax_23 = (rbx_7 + 1).d
            var_170_1 = rax_23
            
            if (rax_23 s> 0)
                sub_1405a4f90(&var_178)
            
            int64_t* rax_26 = &var_178[rbx_7 * 2]
            *rax_26 = 0
            rax_26[1] = 0
        
        int64_t* r13_2 = var_178
        uint64_t rbx_8 = sx.q(var_170_1)
        void* rax_29 = &r13_2[rbx_8 * 2]
        
        if (r13_2 != rax_29)
            do
                int32_t rbx_9 = r13_2[1].d
                int64_t rdi_1 = *r13_2
                int64_t var_128 = 0
                int32_t var_120_1 = rbx_9
                
                if (rbx_9 != 0)
                    sub_1405a4c70(&var_128, rbx_9, 0)
                    memcpy(var_128, rdi_1, rbx_9 * 2)
                else
                    int32_t var_11c_1 = 0
                
                void* var_148 = nullptr
                int32_t i_13 = 0
                sub_140a464c0()
                int32_t rcx_37 = *(r15 + 0x2c0)
                int32_t rbx_10 = *(r14 + 8)
                int32_t rdi_2 = rcx_37 - 1
                
                if (rcx_37 == 0)
                    rdi_2 = 0
                
                int16_t* var_188
                int32_t var_180_1
                int32_t var_17c
                int32_t rax_31
                int64_t rsi_2
                
                if (rbx_10 != 0 || rdi_2 == 0xffffffff)
                    var_188 = nullptr
                    rax_31 = rdi_2 + 1
                    rsi_2 = *r14
                    var_180_1 = rbx_10
                    
                    if (rbx_10 != 0 || rax_31 != 0)
                        sub_1405a4c70(&var_188, rbx_10 + rax_31, 0)
                        memcpy(var_188, rsi_2, rbx_10 * 2)
                    else
                        var_17c = 0
                else
                    var_188 = nullptr
                    rax_31 = rdi_2 + 2
                    rsi_2 = *r14
                    var_180_1 = rbx_10
                    
                    if (rax_31 != 0)
                        sub_1405a4c70(&var_188, rbx_10 + rax_31, 0)
                        memcpy(var_188, rsi_2, rbx_10 * 2)
                    else
                        var_17c = 0
                int32_t rcx_41 = sub_140a2cf70(&var_188, *(r15 + 0x2b8), rdi_2)
                int32_t var_160_1 = var_180_1
                int16_t* var_168 = var_188
                int32_t rdx_20 = var_180_1 + sbb.d(rcx_41, rcx_41, var_180_1 != 0) + 2
                var_188 = nullptr
                var_180_1.q = 0
                
                if (rdx_20 s> var_17c)
                    sub_1405947f0(&var_168, rdx_20)
                
                sub_140a20ba0(&var_168, &data_142d6bbe8, 1)
                int16_t* rsi_3 = var_168
                int32_t r14_1 = var_160_1
                var_168 = nullptr
                var_160_1.q = 0
                int64_t* rax_35
                int64_t r9_4
                rax_35, r9_4 = sub_140a36020(&var_128, &var_d8)
                int32_t rax_36
                int16_t* rdi_3
                
                if (r14_1 s> 1)
                    int32_t rax_37 = rax_35[1].d
                    int16_t* var_158 = rsi_3
                    int32_t var_14c_1 = var_17c
                    int32_t rdi_4 = rax_37 - 1
                    
                    if (rax_37 == 0)
                        rdi_4 = 0
                    
                    rsi_3 = nullptr
                    int32_t rdx_22 = r14_1 + rdi_4
                    
                    if (rdx_22 s> var_17c)
                        sub_1405947f0(&var_158, rdx_22)
                    
                    sub_140a20ba0(&var_158, *rax_35, rdi_4)
                    rdi_3 = var_158
                    rax_36 = r14_1
                    var_158 = nullptr
                    int32_t var_150_1
                    var_150_1.q = 0
                else
                    rdi_3 = *rax_35
                    *rax_35 = 0
                    rax_36 = rax_35[1].d
                    rax_35[1] = 0
                
                var_198.b = 0
                int16_t* const r8_8 = &data_142d40450
                
                if (rax_36 != 0)
                    r8_8 = rdi_3
                
                r9_4.b = 1
                (*(data_14399ea08 + 0x78))(&data_14399ea08, &var_148, r8_8, r9_4, 0)
                
                if (rdi_3 != 0)
                    sub_140a74f90(rdi_3)
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
                
                int16_t* rcx_51 = var_188
                
                if (rcx_51 != 0)
                    sub_140a74f90(rcx_51)
                
                int64_t rcx_52 = var_d8
                
                if (rcx_52 != 0)
                    sub_140a74f90(rcx_52)
                
                int32_t i_11 = i_13
                
                if (i_11 == 0)
                    r12 = arg_10
                else
                    int32_t rax_39 = arg_10[1].d
                    int32_t rdx_25 = i_11 + rax_39
                    
                    if (rdx_25 s> *(arg_10 + 0xc))
                        sub_14061cd70(arg_10, rdx_25)
                        rax_39 = arg_10[1].d
                    
                    void* rsi_4 = var_148
                    int32_t i_12 = i_11
                    int64_t* rbx_14 = (sx.q(rax_39) << 4) + *arg_10
                    int32_t i_3
                    
                    do
                        *rbx_14 = 0
                        int32_t rdi_6 = *(rsi_4 + 8)
                        int64_t r12_1 = *rsi_4
                        rbx_14[1].d = rdi_6
                        
                        if (rdi_6 != 0)
                            sub_1405a4c70(rbx_14, rdi_6, 0)
                            memcpy(*rbx_14, r12_1, rdi_6 * 2)
                        else
                            *(rbx_14 + 0xc) = 0
                        
                        rbx_14 = &rbx_14[2]
                        rsi_4 += 0x10
                        i_3 = i_12
                        i_12 -= 1
                    while (i_3 != 1)
                    r12 = arg_10
                    r12[1].d += i_11
                    i_11 = i_13
                
                void* rbx_15 = var_148
                
                if (i_11 != 0)
                    int32_t i_4
                    
                    do
                        int64_t rcx_56 = *rbx_15
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        rbx_15 += 0x10
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
                    rbx_15 = var_148
                
                if (rbx_15 != 0)
                    sub_140a74f90(rbx_15)
                
                int64_t rcx_58 = var_128
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
                
                r15 = arg1
                r13_2 = &r13_2[2]
                r14 = r15 + 0x108
            while (r13_2 != rax_29)
            
            rbx_8 = zx.q(var_170_1)
            r13_2 = var_178
            r14 = arg_18
        
        if (rbx_8.d != 0)
            int32_t i_5
            
            do
                int64_t rcx_59 = *r13_2
                
                if (rcx_59 != 0)
                    sub_140a74f90(rcx_59)
                
                r13_2 = &r13_2[2]
                i_5 = rbx_8.d
                rbx_8 = zx.q(rbx_8.d - 1)
            while (i_5 != 1)
            r13_2 = var_178
        
        if (r13_2 != 0)
            sub_140a74f90(r13_2)
        
        r13 = &data_142d40450
    
    if (rax_21 == 0 || *(r15 + 0x139) == 0)
        r13_1 = r15 + 0x188
    else
        int32_t rdx_28 = sub_140a464c0()
        int32_t rbx_16 = *(r14 + 8)
        int64_t rdi_7 = *r14
        int16_t* var_138 = nullptr
        sub_1405a4c70(&var_138, sbb.d(rdx_28, rdx_28, rbx_16 != 0) + 3 + rbx_16, 0)
        memcpy(var_138, rdi_7, rbx_16 * 2)
        sub_140a2cf70(&var_138, &data_142d6bbe8, 1)
        
        if (rbx_16 != 0)
            r13 = var_138
        
        var_198.b = 1
        r13_1 = r15 + 0x188
        (*(data_14399ea08 + 0x78))(&data_14399ea08, r13_1, r13, 0, 1)
        int16_t* rcx_65 = var_138
        
        if (rcx_65 != 0)
            sub_140a74f90(rcx_65)
else
    r13_1 = r15 + 0x188
    
    if (r13_1 != r15 + 0x198)
        int32_t i_10 = *(r13_1 + 8)
        int64_t* rbx_6 = *r13_1
        
        if (i_10 != 0)
            int32_t i_6
            
            do
                int64_t rcx_30 = *rbx_6
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                rbx_6 = &rbx_6[2]
                i_6 = i_10
                i_10 -= 1
            while (i_6 != 1)
        
        var_198 = 0
        sub_1405967a0(r13_1, *(r15 + 0x198), *(r15 + 0x1a0), *(r13_1 + 0xc), 0)

sub_140688010(*r12, r12[1].d, arg1.b)
void* result = sub_140688010(*r13_1, *(r13_1 + 8), arg1.b)
int64_t* r14_2 = *r12
void* r12_4 = &r14_2[sx.q(r12[1].d) * 2]

if (r14_2 != r12_4)
    do
        int32_t rbx_17 = r14_2[1].d
        int64_t rdi_8 = *r14_2
        int64_t var_118 = 0
        int32_t var_110_1 = rbx_17
        
        if (rbx_17 != 0)
            sub_1405a4c70(&var_118, rbx_17, 0)
            memcpy(var_118, rdi_8, rbx_17 * 2)
        else
            int32_t var_10c_1 = 0
        
        int64_t* rsi_5 = *(r15 + 0x1e8)
        var_f8 = 0
        int64_t var_f0_1 = 0
        void*** rax_41 = j_sub_140a82f30(0x88)
        void*** rdi_9 = rax_41
        
        if (rax_41 == 0)
            rdi_9 = nullptr
        else
            sub_14068e490(rax_41)
            *rdi_9 = &data_142d8add0
        
        if (rsi_5[0x59].b == 0)
            int64_t r15_2 = sx.q(rsi_5[0x58].d)
            int32_t rax_42 = (r15_2 + 1).d
            rsi_5[0x58].d = rax_42
            
            if (rax_42 s> *(rsi_5 + 0x2c4))
                sub_140638870(&rsi_5[0x57])
            
            *(rsi_5[0x57] + (r15_2 << 3)) = rdi_9
            int64_t rax_44 = rsi_5[0x56]
            
            if (rax_44 != 0 && rdi_9[1] != rax_44)
                rdi_9[1] = rax_44
                sub_140de7bf0(rdi_9)
            
            r15 = arg1
        
        sub_140e19ef0(rsi_5, 1)
        char var_cc_1 = 1
        rdi_9[5].d = 0
        rdi_9[6].d = 0
        *(rdi_9 + 0x34) = 1
        void var_c8
        
        if (&var_c8 != &rdi_9[7] && rdi_9[8].d != 0)
            int64_t* rcx_74 = rdi_9[7]
            
            if (rcx_74 != 0)
                (*(*rcx_74 + 0x38))(rcx_74, 0)
                int64_t rcx_75 = rdi_9[7]
                
                if (rcx_75 != 0)
                    rdi_9[7] = sub_140a84c80(rcx_75, 0, 0)
                
                rdi_9[8].d = 0
        
        var_198.q = &var_f8
        void* var_b8
        int64_t* rax_47 = sub_14069a8f0(r15, &var_b8, &var_118, 0, var_198)
        result = sub_140693600(rdi_9, rax_47)
        int64_t* rbx_20 = rax_47[1]
        
        if (rbx_20 != 0)
            rbx_20[1].d -= 1
            
            if (rbx_20[1].d == 1)
                result = (**rbx_20)(rbx_20)
                int32_t temp10_1 = *(rbx_20 + 0xc)
                *(rbx_20 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*rbx_20 + 8))(rbx_20, 1)
        
        int64_t rcx_80 = var_f8
        
        if (rcx_80 != 0)
            result = sub_140a74f90(rcx_80)
        
        int64_t rcx_81 = var_118
        
        if (rcx_81 != 0)
            result = sub_140a74f90(rcx_81)
        
        r14_2 = &r14_2[2]
    while (r14_2 != r12_4)
    
    r13_1 = r15 + 0x188

if (*(r15 + 0x190) s> 0)
    int64_t* i_7 = *r13_1
    
    for (void* r12_7 = &i_7[sx.q(*(r13_1 + 8)) * 2]; i_7 != r12_7; i_7 = &i_7[2])
        int32_t rbx_21 = i_7[1].d
        int64_t rdi_10 = *i_7
        int64_t var_108 = 0
        int32_t var_100_1 = rbx_21
        
        if (rbx_21 != 0)
            sub_1405a4c70(&var_108, rbx_21, 0)
            memcpy(var_108, rdi_10, rbx_21 * 2)
        else
            int32_t var_fc_1 = 0
        
        int64_t* r14_3 = *(r15 + 0x1f8)
        var_e8 = 0
        int64_t var_e0_1 = 0
        void*** rax_50 = j_sub_140a82f30(0x88)
        void*** rdi_11 = rax_50
        
        if (rax_50 == 0)
            rdi_11 = nullptr
        else
            sub_14068e490(rax_50)
            *rdi_11 = &data_142d8add0
        
        if (r14_3[0x59].b == 0)
            int64_t r15_3 = sx.q(r14_3[0x58].d)
            int32_t rax_51 = (r15_3 + 1).d
            r14_3[0x58].d = rax_51
            
            if (rax_51 s> *(r14_3 + 0x2c4))
                sub_140638870(&r14_3[0x57])
            
            *(r14_3[0x57] + (r15_3 << 3)) = rdi_11
            int64_t rax_53 = r14_3[0x56]
            
            if (rax_53 != 0 && rdi_11[1] != rax_53)
                rdi_11[1] = rax_53
                sub_140de7bf0(rdi_11)
            
            r15 = arg1
        
        sub_140e19ef0(r14_3, 1)
        char var_ac_1 = 1
        rdi_11[5].d = 0
        rdi_11[6].d = 0
        *(rdi_11 + 0x34) = 1
        void var_a8
        
        if (&var_a8 != &rdi_11[7] && rdi_11[8].d != 0)
            int64_t* rcx_88 = rdi_11[7]
            
            if (rcx_88 != 0)
                (*(*rcx_88 + 0x38))(rcx_88, 0)
                int64_t rcx_89 = rdi_11[7]
                
                if (rcx_89 != 0)
                    rdi_11[7] = sub_140a84c80(rcx_89, 0, 0)
                
                rdi_11[8].d = 0
        
        var_198.q = &var_e8
        void* var_58
        void** rax_56 = sub_14069a8f0(r15, &var_58, &var_108, 1, var_198)
        result = sub_140693600(rdi_11, rax_56)
        int64_t* rbx_24 = rax_56[1]
        
        if (rbx_24 != 0)
            rbx_24[1].d -= 1
            
            if (rbx_24[1].d == 1)
                result = (**rbx_24)(rbx_24)
                int32_t temp12_1 = *(rbx_24 + 0xc)
                *(rbx_24 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    result = (*(*rbx_24 + 8))(rbx_24, 1)
        
        int64_t rcx_94 = var_e8
        
        if (rcx_94 != 0)
            result = sub_140a74f90(rcx_94)
        
        int64_t rcx_95 = var_108
        
        if (rcx_95 != 0)
            result = sub_140a74f90(rcx_95)

return result
