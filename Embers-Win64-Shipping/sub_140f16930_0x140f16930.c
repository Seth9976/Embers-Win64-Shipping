// 函数: sub_140f16930
// 地址: 0x140f16930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* r12 = nullptr
void* r13 = arg3 + 0x130
int64_t* r14 = arg2
void* r15 = arg3
void* var_148 = r13
int64_t* var_140 = nullptr
int32_t i = 0
sub_140a21e00(r14, &var_140)
int64_t var_158 = 0
int64_t var_150 = 0

if (i s> 0)
    sub_1405a51b0(&var_158, i)

int32_t rcx_2 = *(r13 + 0x230)
int64_t var_190 = 0
int64_t* rsi = nullptr
int64_t var_188 = 0
void*** var_e8 = nullptr
rcx_2.b = sub_140b5b8a0(rcx_2, 0) == 0
void* rax_3

if ((*(r13 + 0x234) != 0 | rcx_2.b) == 0)
    rax_3 = *(r13 + 0x228)

int64_t rcx_3

if ((*(r13 + 0x234) != 0 | rcx_2.b) != 0 || rax_3 == 0)
    rcx_3 = *(r13 + 0x230)
else
    rcx_3 = *(rax_3 + 0x18)

void*** var_168
int64_t* var_160
uint128_t var_128
char var_118
uint128_t var_f8
uint128_t zmm0_1

if (rcx_3 != 0)
    zmm0_1 = *(r13 + 0x88)
    var_118 = *(r13 + 0x68)
    int64_t rax_5 = *(r13 + 0x70)
    var_f8 = zmm0_1
    int64_t var_110_1 = rax_5
    void* rax_6 = *(r13 + 0x78)
    void* var_108_1 = rax_6
    var_128 = *(r13 + 0x58)
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    void**** rax_7 = sub_140ef7bc0(&var_168, r13 + 0x1e0, r13 + 8, &var_128, *(r13 + 0x80), &var_f8)
    var_e8 = *rax_7
    int64_t* rcx_6 = rax_7[1]
    bool cond:1_1 = rcx_6 != 0
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
        cond:1_1 = rcx_6 != 0
    
    if (cond:1_1)
        rsi = rcx_6
    
    if (var_160 != 0)
        var_160[1].d -= 1
        
        if (var_160[1].d == 1)
            (**var_160)(var_160)
            int32_t temp3_1 = *(var_160 + 0xc)
            *(var_160 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_160 + 8))(var_160, 1)

void*** var_d0 = nullptr
int32_t rcx_9
rcx_9.b = sub_140b5b8a0(*(r13 + 0x1a8), 0) == 0
void* rax_11

if ((*(r13 + 0x1ac) != 0 | rcx_9.b) == 0)
    rax_11 = *(r13 + 0x1a0)

int64_t rax_12

if ((*(r13 + 0x1ac) != 0 | rcx_9.b) != 0 || rax_11 == 0)
    rax_12 = *(r13 + 0x1a8)
else
    rax_12 = *(rax_11 + 0x18)

if (rax_12 != 0)
    zmm0_1 = *(r13 + 0x88)
    var_118 = *(r13 + 0x68)
    int64_t rax_14 = *(r13 + 0x70)
    var_f8 = zmm0_1
    int64_t var_110_2 = rax_14
    void* rax_15 = *(r13 + 0x78)
    void* var_108_2 = rax_15
    var_128 = *(r13 + 0x58)
    
    if (rax_15 != 0)
        *(rax_15 + 8) += 1
    
    void**** rax_16 =
        sub_140ef7a50(&var_168, r13 + 0x158, r13 + 8, &var_128, *(r13 + 0x80), &var_f8)
    var_d0 = *rax_16
    int64_t* rcx_12 = rax_16[1]
    bool cond:2_1 = rcx_12 != 0
    
    if (rcx_12 != 0)
        rcx_12[1].d += 1
        cond:2_1 = rcx_12 != 0
    
    if (cond:2_1)
        r12 = rcx_12
    
    if (var_160 != 0)
        var_160[1].d -= 1
        
        if (var_160[1].d == 1)
            (**var_160)(var_160)
            int32_t temp9_1 = *(var_160 + 0xc)
            *(var_160 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_160 + 8))(var_160, 1)

char var_1a8 = 0
char var_1a8_1

if (*(arg1 + 0x11) == 0)
    var_1a8_1 = 0
else if (*(arg1 + 0x20) == 0)
    var_1a8_1 = *(arg1 + 0x10)
else
    int64_t* rcx_15 = *(arg1 + 0x18)
    
    if (rcx_15 == 0)
        var_1a8_1 = *(arg1 + 0x10)
    else if ((*(*rcx_15 + 0x28))(rcx_15) == 0)
        var_1a8_1 = *(arg1 + 0x10)
    else if (*(arg1 + 0x20) == 0)
        *(arg1 + 0x10) = (*(*nullptr + 0x48))(0)
        var_1a8_1 = *(arg1 + 0x10)
    else
        int64_t* rcx_16 = *(arg1 + 0x18)
        char rax_22 = (*(*rcx_16 + 0x48))(rcx_16)
        *(arg1 + 0x10) = rax_22
        var_1a8_1 = rax_22

int32_t var_1a4 = 0

if (i s> 0)
    int32_t r15_1 = 0
    int64_t rcx_17 = 0
    int64_t var_c0_1 = 0
    int32_t r14_5
    
    do
        void* rdi_1 = &var_140[rcx_17]
        int64_t* rax_27 = j_sub_140a82f30(0x10)
        int64_t* rbx_3 = rax_27
        
        if (rax_27 == 0)
            rbx_3 = nullptr
        else
            int64_t rax_28 = sx.q(*rdi_1)
            int32_t r8_2 = *(rdi_1 + 4)
            *rbx_3 = 0
            rbx_3[1] = 0
            
            if (r8_2 - rax_28.d s>= 0)
                int32_t r9_3 = r14[1].d
                int32_t rdi_2 = r9_3 - 1
                
                if (r9_3 == 0)
                    rdi_2 = 0
                
                int32_t rcx_18
                
                if (rax_28.d s>= 0)
                    rcx_18 = rdi_2
                    
                    if (rax_28.d s< rdi_2)
                        rcx_18 = rax_28.d
                else
                    rcx_18 = 0
                
                int64_t r10_1 = sx.q(rcx_18)
                int64_t rdx_5 = rax_28 + sx.q(r8_2 - rax_28.d)
                
                if (rdx_5 s< r10_1)
                    rdi_2 = rcx_18
                else if (rdx_5 s< sx.q(rdi_2))
                    rdi_2 = rdx_5.d
                
                int16_t* const rax_31
                
                if (r9_3 == 0)
                    rax_31 = &data_142d40450
                else
                    rax_31 = *r14
                
                int32_t rdi_3 = rdi_2 - rcx_18
                int64_t var_1a0 = 0
                int64_t var_198_1 = 0
                int16_t* rax_32 = &rax_31[r10_1]
                int64_t r14_1 = 0
                var_128.q = rax_32
                int32_t r13_1 = 0
                
                if (rax_32 != 0 && *rax_32 != 0 && rdi_3 s> 0)
                    if (rdi_3 + 1 s> 0)
                        sub_1405947f0(&var_1a0, rdi_3 + 1)
                        r13_1 = var_198_1:4.d
                        r15_1 = var_198_1.d
                        r14_1 = var_1a0
                    
                    r15_1 = r15_1 + 1 + rdi_3
                    var_198_1.d = r15_1
                    
                    if (r15_1 s> r13_1)
                        sub_140594770(&var_1a0)
                        r13_1 = var_198_1:4.d
                        r15_1 = var_198_1.d
                        r14_1 = var_1a0
                    
                    UnDecorator::getReferenceType(r14_1, var_128.q, rdi_3 * 2)
                    *(r14_1 + (sx.q(r15_1) << 1) - 2) = 0
                
                if (rbx_3 == &var_1a0)
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                    
                    r13 = var_148
                else
                    int64_t rcx_22 = *rbx_3
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    *rbx_3 = r14_1
                    rbx_3[1].d = r15_1
                    *(rbx_3 + 0xc) = r13_1
                    r13 = var_148
                    int64_t var_198_2 = 0
                    var_1a0 = 0
        
        void*** rax_34 = j_sub_140a82f30(0x18)
        
        if (rax_34 == 0)
            rax_34 = nullptr
        else
            rax_34[1].d = 1
            *rax_34 = &data_142ee2130
            *(rax_34 + 0xc) = 1
            rax_34[2] = rbx_3
        
        var_168 = rbx_3
        int64_t* var_160_1 = rax_34
        void** var_180 = nullptr
        int32_t var_174_1 = 0
        int32_t var_178_1
        void** r13_2
        int64_t var_a8
        void var_9c
        int64_t var_98
        
        if (var_1a8_1 == 0)
            void*** r14_3 = var_168
            
            if (var_160_1 != 0)
                var_160_1[1].d += 1
            
            var_a8 = 0
            int32_t var_a0_2 = 0
            memset(&var_9c, 0, 0x54)
            __builtin_memset(&var_98, 0, 0x2c)
            int32_t var_6c_2 = 0x80
            int32_t var_68_2 = 0xffffffff
            int32_t var_64_2 = 0
            int64_t var_58_2 = 0
            int32_t var_50_3 = 0
            void*** rax_51 = j_sub_140a82f30(0x2f8)
            void*** r15_4 = rax_51
            
            if (rax_51 == 0)
                r15_4 = nullptr
            else
                r15_4[1] = 0
                r15_4[2] = 0
                *r15_4 = &data_142ee0d20
                sub_140596d10(&r15_4[3], &var_a8)
                r15_4[5] = 0
                void* rdx_16 = &r15_4[7]
                r15_4[6] = 0
                *(rdx_16 + 0x10) = 0
                *(rdx_16 + 0x18) = 0
                *(rdx_16 + 0x1c) = 0x80
                void* rax_52 = *(rdx_16 + 0x10)
                
                if (rax_52 != 0)
                    rdx_16 = rax_52
                
                *rdx_16 = 0
                *(rdx_16 + 8) = 0
                r15_4[0xb].d = 0xffffffff
                *(r15_4 + 0x5c) = 0
                r15_4[0xd] = 0
                r15_4[0xe].d = 0
                sub_14094d9d0(&r15_4[5], &var_98)
                r15_4[0xf] = r14_3
                r15_4[0x10] = var_160_1
                
                if (var_160_1 != 0)
                    var_160_1[1].d += 1
                
                sub_140ddd070(&r15_4[0x11], r13)
                int32_t rcx_48 = r15_4[0xf][1].d
                r15_4[0x5e].d = 0
                int32_t rax_54 = rcx_48 - 1
                
                if (rcx_48 == 0)
                    rax_54 = 0
                
                *(r15_4 + 0x2f4) = rax_54
            
            int64_t* rax_55 = j_sub_140a82f30(0x18)
            int64_t* rbx_5 = rax_55
            
            if (rax_55 == 0)
                rbx_5 = nullptr
            else
                rax_55[1].d = 1
                *(rax_55 + 0xc) = 1
                *rbx_5 = &data_142d42ea8
                rbx_5[2] = r15_4
            
            void** r14_4 = &r15_4[1]
            
            if (r15_4 == 0)
                r14_4 = nullptr
            
            if (r14_4 == 0)
            label_140f172ea:
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
            else
                void* rax_56
                
                if (*r14_4 != 0)
                    rax_56 = r14_4[1]
                
                if (*r14_4 != 0 && rax_56 != 0 && *(rax_56 + 8) s> 0)
                    goto label_140f172ea
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                *r14_4 = r15_4
                int64_t* rcx_49 = r14_4[1]
                
                if (rbx_5 != rcx_49)
                    if (rbx_5 != 0)
                        *(rbx_5 + 0xc) += 1
                        rcx_49 = r14_4[1]
                    
                    if (rcx_49 != 0)
                        int32_t temp22_1 = *(rcx_49 + 0xc)
                        *(rcx_49 + 0xc) -= 1
                        
                        if (temp22_1 == 1)
                            (*(*rcx_49 + 8))(rcx_49, 1)
                    
                    r14_4[1] = rbx_5
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp21_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    goto label_140f172ea
            
            var_178_1 = 1
            sub_1405a4f90(&var_180)
            r13_2 = var_180
            *r13_2 = r15_4
            r13_2[1] = rbx_5
            
            if (rbx_5 != 0)
                int32_t rax_60 = rbx_5[1].d
                rbx_5[1].d = rax_60
                
                if (rax_60 == 0)
                    (**rbx_5)(rbx_5)
                    int32_t temp12_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
                
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp16_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            sub_1406b6290(&var_98)
            int64_t rcx_58 = var_a8
            
            if (rcx_58 != 0)
                sub_140a74f90(rcx_58)
            
            if (var_160_1 != 0)
                var_160_1[1].d -= 1
                
                if (var_160_1[1].d == 1)
                    (**var_160_1)(var_160_1)
                    int32_t temp20_1 = *(var_160_1 + 0xc)
                    *(var_160_1 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_160_1 + 8))(var_160_1, 1)
        else
            void*** rdi_4 = var_168
            
            if (var_160_1 != 0)
                var_160_1[1].d += 1
            
            var_a8 = 0
            int32_t var_a0_1 = 0
            memset(&var_9c, 0, 0x54)
            __builtin_memset(&var_98, 0, 0x2c)
            int32_t var_6c_1 = 0x80
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            void*** rax_35 = j_sub_140a82f30(0x2f8)
            void*** r15_3 = rax_35
            
            if (rax_35 == 0)
                r15_3 = nullptr
            else
                r15_3[1] = 0
                r15_3[2] = 0
                *r15_3 = &data_142ee0d20
                sub_140596d10(&r15_3[3], &var_a8)
                r15_3[5] = 0
                void* rdx_11 = &r15_3[7]
                r15_3[6] = 0
                *(rdx_11 + 0x10) = 0
                *(rdx_11 + 0x18) = 0
                *(rdx_11 + 0x1c) = 0x80
                void* rax_36 = *(rdx_11 + 0x10)
                
                if (rax_36 != 0)
                    rdx_11 = rax_36
                
                *rdx_11 = 0
                *(rdx_11 + 8) = 0
                r15_3[0xb].d = 0xffffffff
                *(r15_3 + 0x5c) = 0
                r15_3[0xd] = 0
                r15_3[0xe].d = 0
                sub_14094d9d0(&r15_3[5], &var_98)
                r15_3[0xf] = rdi_4
                r15_3[0x10] = var_160_1
                
                if (var_160_1 != 0)
                    var_160_1[1].d += 1
                
                sub_140ddd070(&r15_3[0x11], r13)
                int32_t rcx_28 = r15_3[0xf][1].d
                r15_3[0x5e].d = 0
                int32_t rax_38 = rcx_28 - 1
                
                if (rcx_28 == 0)
                    rax_38 = 0
                
                *(r15_3 + 0x2f4) = rax_38
                *r15_3 = &data_142ee0e48
            
            int64_t* rax_39 = j_sub_140a82f30(0x18)
            int64_t* rbx_4 = rax_39
            
            if (rax_39 == 0)
                rbx_4 = nullptr
            else
                rax_39[1].d = 1
                *(rax_39 + 0xc) = 1
                *rbx_4 = &data_142d42ea8
                rbx_4[2] = r15_3
            
            void** rdi_5 = &r15_3[1]
            
            if (r15_3 == 0)
                rdi_5 = nullptr
            
            if (rdi_5 == 0)
            label_140f16ff6:
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
            else
                void* rax_40
                
                if (*rdi_5 != 0)
                    rax_40 = rdi_5[1]
                
                if (*rdi_5 != 0 && rax_40 != 0 && *(rax_40 + 8) s> 0)
                    goto label_140f16ff6
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                *rdi_5 = r15_3
                int64_t* rcx_29 = rdi_5[1]
                
                if (rbx_4 != rcx_29)
                    if (rbx_4 != 0)
                        *(rbx_4 + 0xc) += 1
                        rcx_29 = rdi_5[1]
                    
                    if (rcx_29 != 0)
                        int32_t temp24_1 = *(rcx_29 + 0xc)
                        *(rcx_29 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            (*(*rcx_29 + 8))(rcx_29, 1)
                    
                    rdi_5[1] = rbx_4
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp23_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp23_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    goto label_140f16ff6
            
            var_178_1 = 1
            sub_1405a4f90(&var_180)
            r13_2 = var_180
            *r13_2 = r15_3
            r13_2[1] = rbx_4
            
            if (rbx_4 != 0)
                int32_t rax_44 = rbx_4[1].d
                rbx_4[1].d = rax_44
                
                if (rax_44 == 0)
                    (**rbx_4)(rbx_4)
                    int32_t temp14_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
                
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp18_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            sub_1405e1b50(&var_98, 0)
            int64_t var_78
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            int64_t rcx_40 = var_98
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            int64_t rcx_41 = var_a8
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            if (var_160_1 != 0)
                var_160_1[1].d -= 1
                
                if (var_160_1[1].d == 1)
                    (**var_160_1)(var_160_1)
                    int32_t temp26_1 = *(var_160_1 + 0xc)
                    *(var_160_1 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*var_160_1 + 8))(var_160_1, 1)
        void* rdi_7
        
        if (var_e8 == 0)
            rdi_7 = rdi_1
            r14_5 = var_1a4
        else
            if (rsi != 0)
                rsi[1].d += 2
            
            rdi_7 = rdi_1
            int32_t var_e0_1 = 0
            int32_t var_dc_1 = *(rdi_7 + 4) - *rdi_7
            
            if (rsi != 0)
                rsi[1].d += 1
            
            int64_t rbx_6 = sx.q(var_188.d)
            int32_t rax_69 = (rbx_6 + 1).d
            var_188.d = rax_69
            
            if (rax_69 s> var_188:4.d)
                sub_1405c4e40(&var_190)
            
            r14_5 = var_1a4
            int32_t* rcx_64 = (rbx_6 << 5) + var_190
            *rcx_64 = r14_5
            *(rcx_64 + 4) = var_e0_1.q
            rcx_64[3] = 1
            *(rcx_64 + 0x10) = var_e8
            *(rcx_64 + 0x18) = rsi
            
            if (rsi != 0)
                int32_t rax_71 = rsi[1].d
                rsi[1].d = rax_71
                
                if (rax_71 == 0)
                    (**rsi)(rsi)
                    int32_t temp29_1 = *(rsi + 0xc)
                    *(rsi + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*rsi + 8))(rsi, 1)
                
                rsi[1].d -= 1
                
                if (rsi[1].d == 1)
                    (**rsi)(rsi)
                    int32_t temp32_1 = *(rsi + 0xc)
                    *(rsi + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rsi + 8))(rsi, 1)
                
                rsi[1].d -= 1
                
                if (rsi[1].d == 1)
                    (**rsi)(rsi)
                    int32_t temp34_1 = *(rsi + 0xc)
                    *(rsi + 0xc) -= 1
                    
                    if (temp34_1 == 1)
                        (*(*rsi + 8))(rsi, 1)
        
        if (var_d0 != 0)
            if (r12 != 0)
                r12[1].d += 2
            
            var_128.d = r14_5
            int32_t var_c4_1 = *(rdi_7 + 4) - *rdi_7
            int64_t rbx_7 = 0.q
            var_128:4.q = rbx_7
            var_128:0xc.d = 1
            var_118.q = var_d0
            int64_t* var_110_3 = r12
            
            if (r12 != 0)
                r12[1].d += 1
            
            int64_t rdi_8 = sx.q(var_188.d)
            int32_t rax_80 = (rdi_8 + 1).d
            var_188.d = rax_80
            
            if (rax_80 s> var_188:4.d)
                sub_1405c4e40(&var_190)
            
            int32_t* rax_83 = (rdi_8 << 5) + var_190
            *rax_83 = r14_5
            *(rax_83 + 4) = rbx_7
            rax_83[3] = 1
            *(rax_83 + 0x10) = var_d0
            *(rax_83 + 0x18) = r12
            
            if (r12 != 0)
                r12[1].d += 1
            
            sub_140597060(&var_118)
            
            if (r12 != 0)
                r12[1].d -= 1
                
                if (r12[1].d == 1)
                    (**r12)(r12)
                    int32_t temp36_1 = *(r12 + 0xc)
                    *(r12 + 0xc) -= 1
                    
                    if (temp36_1 == 1)
                        (*(*r12 + 8))(r12, 1)
                
                r12[1].d -= 1
                
                if (r12[1].d == 1)
                    (**r12)(r12)
                    int32_t temp37_1 = *(r12 + 0xc)
                    *(r12 + 0xc) -= 1
                    
                    if (temp37_1 == 1)
                        (*(*r12 + 8))(r12, 1)
        
        int64_t rbx_8 = sx.q(var_150.d)
        int32_t rax_88 = (rbx_8 + 1).d
        var_150.d = rax_88
        
        if (rax_88 s> var_150:4.d)
            sub_1405c4e40(&var_158)
        
        r15_1 = 0
        uint128_t zmm0_2 = var_168.o
        var_f8:8.d = var_178_1
        int64_t* rcx_80 = (rbx_8 << 5) + var_158
        var_128 = zmm0_2
        zmm0_2 = _mm_bsrli_si128(zmm0_2, 8)
        var_f8:0xc.d = var_174_1
        void* rax_91 = zmm0_2.q
        var_f8.q = r13_2
        var_180 = nullptr
        var_178_1.q = 0
        
        if (rax_91 != 0)
            *(rax_91 + 8) += 1
        
        sub_140ee2090(rcx_80, &var_128, &var_f8)
        
        if (var_160_1 != 0)
            var_160_1[1].d -= 1
            
            if (var_160_1[1].d == 1)
                (**var_160_1)(var_160_1)
                int32_t temp30_1 = *(var_160_1 + 0xc)
                *(var_160_1 + 0xc) -= 1
                
                if (temp30_1 == 1)
                    (*(*var_160_1 + 8))(var_160_1, 1)
        
        r13 = var_148
        rcx_17 = var_c0_1 + 1
        var_1a4 = r14_5 + 1
        r14 = arg2
        var_c0_1 = rcx_17
    while (r14_5 + 1 s< i)
    r15 = arg3

sub_140ee7bb0(r15, &var_158)
sub_140f15fb0(r15, &var_190)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp7_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*r12 + 8))(r12, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp10_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rsi + 8))(rsi, 1)

sub_140d948f0(&var_190)
int64_t result = sub_140ee3a50(&var_158)
int64_t* rcx_92 = var_140

if (rcx_92 != 0)
    result = sub_140a74f90(rcx_92)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
